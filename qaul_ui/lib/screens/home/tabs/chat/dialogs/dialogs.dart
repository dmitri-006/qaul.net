// ignore_for_file: use_build_context_synchronously
part of '../../tab.dart';

class _CreateNewRoomDialog extends StatelessWidget {
  const _CreateNewRoomDialog({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return SearchUserDecorator(
      title: AppLocalizations.of(context)!.newChatTooltip,
      builder: (_, users) {
        return ListView.separated(
          padding: const EdgeInsets.all(8),
          itemCount: users.length + 1,
          separatorBuilder: (_, __) => const Divider(height: 12.0),
          itemBuilder: (context, i) {
            if (i == 0) {
              return ListTile(
                leading: Stack(
                  alignment: AlignmentDirectional.topStart,
                  children: const [
                    CircleAvatar(
                        backgroundColor: Colors.lightBlue,
                        child: Icon(Icons.people, color: Colors.white)),
                    Icon(Icons.add, size: 12),
                  ],
                ),
                title: const Text('Create new group'),
                onTap: () => Navigator.pushReplacement(
                  context,
                  MaterialPageRoute(
                    builder: (_) => _CreateNewGroupDialog(),
                  ),
                ),
              );
            }
            final usr = users[i - 1];
            return QaulListTile.user(
              usr,
              onTap: () => Navigator.pop(context, usr),
            );
          },
        );
      },
    );
  }
}

class _CreateNewGroupDialog extends HookConsumerWidget {
  _CreateNewGroupDialog({Key? key}) : super(key: key);

  final _nameKey = GlobalKey<FormFieldState>();

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final worker = ref.read(qaulWorkerProvider);

    final loading = useState(false);
    final nameCtrl = useTextEditingController();

    final isMounted = useIsMounted();

    const groupIcon = 'assets/icons/group.svg';
    final l10n = AppLocalizations.of(context)!;

    return Scaffold(
      appBar: AppBar(
        title: const Text('Create new group'),
        centerTitle: false,
        leading: IconButtonFactory.close(),
      ),
      body: Stack(
        children: [
          Column(
            children: [
              const SizedBox(height: 140, width: double.maxFinite),
              SvgPicture.asset(groupIcon),
              const SizedBox(height: 20),
              LayoutBuilder(builder: (context, constraints) {
                return SizedBox(
                  width: constraints.constrainWidth(400),
                  child: TextFormField(
                    key: _nameKey,
                    controller: nameCtrl,
                    validator: (val) {
                      if (val == null || val.isEmpty) {
                        return l10n.fieldRequiredErrorMessage;
                      }
                      return null;
                    },
                    decoration: InputDecoration(
                      hintText: l10n.createGroupHint,
                    ),
                  ),
                );
              }),
              const SizedBox(height: 20),
              QaulButton(
                label: 'Create',
                onPressed: () async {
                  if (!_nameKey.currentState!.validate()) return;
                  loading.value = true;

                  var name = nameCtrl.text;
                  worker.createGroup(name);
                  for (var i = 0; i < 60; i++) {
                    final groups = ref.read(chatRoomsProvider);
                    if (groups.where((g) => g.name == name).isNotEmpty) break;

                    worker.getAllChatRooms();
                    await Future.delayed(const Duration(milliseconds: 1000));
                  }

                  final group = ref
                      .read(chatRoomsProvider)
                      .firstWhereOrNull((g) => g.name == name);
                  if (group == null) {
                    if (!isMounted()) return;
                    ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                      content: Text('An error occurred. Please try again.'),
                    ));
                    Navigator.pop(context);
                    return;
                  }

                  if (!isMounted()) return;
                  await Navigator.push(
                    context,
                    MaterialPageRoute(
                      builder: (_) => InviteUsersToGroupDialog(room: group),
                    ),
                  );

                  if (!isMounted()) return;
                  Navigator.pop(
                    context,
                    ref
                        .read(chatRoomsProvider)
                        .firstWhereOrNull((g) => g.name == name),
                  );
                },
              ),
            ],
          ),
          if (loading.value)
            Positioned.fill(
              child: Container(
                color: Colors.black38,
                child: const LoadingIndicator(),
              ),
            ),
        ],
      ),
    );
  }
}

class InviteUsersToGroupDialog extends StatefulHookConsumerWidget {
  const InviteUsersToGroupDialog({
    Key? key,
    required this.room,
  }) : super(key: key);

  final ChatRoom room;

  @override
  ConsumerState<InviteUsersToGroupDialog> createState() =>
      _InviteUsersToGroupDialogState();
}

class _InviteUsersToGroupDialogState
    extends ConsumerState<InviteUsersToGroupDialog> {
  final selected = <User>{};

  @override
  Widget build(BuildContext context) {
    return SearchUserDecorator(
      title: AppLocalizations.of(context)!.newChatTooltip,
      builder: (_, users) {
        return Stack(
          children: [
            ListView.separated(
              padding: const EdgeInsets.all(8),
              itemCount: users.length,
              separatorBuilder: (_, __) => const Divider(height: 12.0),
              itemBuilder: (context, i) {
                final usr = users[i];
                return QaulListTile.user(
                  usr,
                  trailingIcon: Checkbox(
                    value: selected.contains(usr),
                    onChanged: (ok) {
                      if (ok ?? false) {
                        selected.add(usr);
                        return;
                      }
                      selected.remove(usr);
                    },
                  ),
                );
              },
            ),
            Positioned.directional(
              textDirection: Directionality.of(context),
              end: 80,
              bottom: 20,
              child: ElevatedButton(
                onPressed: () async {
                  final worker = ref.read(qaulWorkerProvider);
                  for (final user in selected) {
                    worker.inviteUserToGroup(user, widget.room);
                  }
                  Navigator.pop(context);
                },
                child: const Text('Invite', style: TextStyle(fontSize: 20)),
              ),
            ),
          ],
        );
      },
    );
  }
}

class _InviteDetailsDialog extends HookConsumerWidget {
  const _InviteDetailsDialog(this.invite, {Key? key}) : super(key: key);

  final GroupInvite invite;

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    final users = ref.watch(usersProvider);

    final replyInvite = useCallback(({required bool accepted}) {
      final worker = ref.read(qaulWorkerProvider);
      worker.replyToGroupInvite(
        invite.groupDetails.conversationId,
        accepted: accepted,
      );

      Navigator.pop(context);
    }, []);

    final sender = users.firstWhereOrNull((s) => s.id.equals(invite.senderId));

    return AlertDialog(
      title: Row(
        mainAxisAlignment: MainAxisAlignment.spaceBetween,
        children: [
          const Text('Group Invite'),
          IconButtonFactory.close(),
        ],
      ),
      content: Column(
        mainAxisSize: MainAxisSize.min,
        children: [
          Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              Text('Group name: ${invite.groupDetails.name}'),
              Text('Created at: ${invite.groupDetails.createdAt}'),
              Text('Number of members: ${invite.groupDetails.members.length}'),
              if (sender != null) ...[Text('Invited by: ${sender.name}')],
            ],
          ),
          const SizedBox(height: 20),
          QaulButton(
            label: 'Accept',
            onPressed: () => replyInvite(accepted: true),
          ),
          const SizedBox(height: 12),
          QaulButton(
            label: 'Decline',
            onPressed: () => replyInvite(accepted: false),
          ),
        ],
      ),
    );
  }
}
