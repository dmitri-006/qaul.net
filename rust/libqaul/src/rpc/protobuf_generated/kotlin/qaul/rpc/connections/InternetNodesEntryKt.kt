//Generated by the protocol buffer compiler. DO NOT EDIT!
// source: connections/connections.proto

package qaul.rpc.connections;

@kotlin.jvm.JvmSynthetic
public inline fun internetNodesEntry(block: qaul.rpc.connections.InternetNodesEntryKt.Dsl.() -> kotlin.Unit): qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry =
  qaul.rpc.connections.InternetNodesEntryKt.Dsl._create(qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.newBuilder()).apply { block() }._build()
public object InternetNodesEntryKt {
  @kotlin.OptIn(com.google.protobuf.kotlin.OnlyForUseByGeneratedProtoCode::class)
  @com.google.protobuf.kotlin.ProtoDslMarker
  public class Dsl private constructor(
    private val _builder: qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.Builder
  ) {
    public companion object {
      @kotlin.jvm.JvmSynthetic
      @kotlin.PublishedApi
      internal fun _create(builder: qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.Builder): Dsl = Dsl(builder)
    }

    @kotlin.jvm.JvmSynthetic
    @kotlin.PublishedApi
    internal fun _build(): qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry = _builder.build()

    /**
     * <code>string address = 1;</code>
     */
    public var address: kotlin.String
      @JvmName("getAddress")
      get() = _builder.getAddress()
      @JvmName("setAddress")
      set(value) {
        _builder.setAddress(value)
      }
    /**
     * <code>string address = 1;</code>
     */
    public fun clearAddress() {
      _builder.clearAddress()
    }
  }
}
@kotlin.jvm.JvmSynthetic
public inline fun qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.copy(block: qaul.rpc.connections.InternetNodesEntryKt.Dsl.() -> kotlin.Unit): qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry =
  qaul.rpc.connections.InternetNodesEntryKt.Dsl._create(this.toBuilder()).apply { block() }._build()
