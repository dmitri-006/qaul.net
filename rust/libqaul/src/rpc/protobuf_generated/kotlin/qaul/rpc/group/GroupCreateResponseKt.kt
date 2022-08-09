//Generated by the protocol buffer compiler. DO NOT EDIT!
// source: services/group/group_rpc.proto

package qaul.rpc.group;

@kotlin.jvm.JvmName("-initializegroupCreateResponse")
inline fun groupCreateResponse(block: qaul.rpc.group.GroupCreateResponseKt.Dsl.() -> kotlin.Unit): qaul.rpc.group.GroupRpc.GroupCreateResponse =
  qaul.rpc.group.GroupCreateResponseKt.Dsl._create(qaul.rpc.group.GroupRpc.GroupCreateResponse.newBuilder()).apply { block() }._build()
object GroupCreateResponseKt {
  @kotlin.OptIn(com.google.protobuf.kotlin.OnlyForUseByGeneratedProtoCode::class)
  @com.google.protobuf.kotlin.ProtoDslMarker
  class Dsl private constructor(
    private val _builder: qaul.rpc.group.GroupRpc.GroupCreateResponse.Builder
  ) {
    companion object {
      @kotlin.jvm.JvmSynthetic
      @kotlin.PublishedApi
      internal fun _create(builder: qaul.rpc.group.GroupRpc.GroupCreateResponse.Builder): Dsl = Dsl(builder)
    }

    @kotlin.jvm.JvmSynthetic
    @kotlin.PublishedApi
    internal fun _build(): qaul.rpc.group.GroupRpc.GroupCreateResponse = _builder.build()

    /**
     * <pre>
     * group name
     * </pre>
     *
     * <code>string group_name = 1;</code>
     */
    var groupName: kotlin.String
      @JvmName("getGroupName")
      get() = _builder.getGroupName()
      @JvmName("setGroupName")
      set(value) {
        _builder.setGroupName(value)
      }
    /**
     * <pre>
     * group name
     * </pre>
     *
     * <code>string group_name = 1;</code>
     */
    fun clearGroupName() {
      _builder.clearGroupName()
    }

    /**
     * <pre>
     * group id
     * </pre>
     *
     * <code>bytes group_id = 2;</code>
     */
    var groupId: com.google.protobuf.ByteString
      @JvmName("getGroupId")
      get() = _builder.getGroupId()
      @JvmName("setGroupId")
      set(value) {
        _builder.setGroupId(value)
      }
    /**
     * <pre>
     * group id
     * </pre>
     *
     * <code>bytes group_id = 2;</code>
     */
    fun clearGroupId() {
      _builder.clearGroupId()
    }
  }
}
@kotlin.jvm.JvmSynthetic
inline fun qaul.rpc.group.GroupRpc.GroupCreateResponse.copy(block: qaul.rpc.group.GroupCreateResponseKt.Dsl.() -> kotlin.Unit): qaul.rpc.group.GroupRpc.GroupCreateResponse =
  qaul.rpc.group.GroupCreateResponseKt.Dsl._create(this.toBuilder()).apply { block() }._build()
