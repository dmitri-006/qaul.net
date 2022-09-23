import 'package:equatable/equatable.dart';

class InternetNode extends Equatable {
  const InternetNode(this.address, {required this.isActive});

  final String address;
  final bool isActive;

  @override
  List<Object?> get props => [address];

}
