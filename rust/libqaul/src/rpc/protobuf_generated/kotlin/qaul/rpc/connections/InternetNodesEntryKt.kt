//Generated by the protocol buffer compiler. DO NOT EDIT!
// source: connections/connections.proto

package qaul.rpc.connections;

@kotlin.jvm.JvmName("-initializeinternetNodesEntry")
inline fun internetNodesEntry(block: qaul.rpc.connections.InternetNodesEntryKt.Dsl.() -> kotlin.Unit): qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry =
  qaul.rpc.connections.InternetNodesEntryKt.Dsl._create(qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.newBuilder()).apply { block() }._build()
object InternetNodesEntryKt {
  @kotlin.OptIn(com.google.protobuf.kotlin.OnlyForUseByGeneratedProtoCode::class)
  @com.google.protobuf.kotlin.ProtoDslMarker
  class Dsl private constructor(
    private val _builder: qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.Builder
  ) {
    companion object {
      @kotlin.jvm.JvmSynthetic
      @kotlin.PublishedApi
      internal fun _create(builder: qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.Builder): Dsl = Dsl(builder)
    }

    @kotlin.jvm.JvmSynthetic
    @kotlin.PublishedApi
    internal fun _build(): qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry = _builder.build()

    /**
     * <pre>
     * address
     * </pre>
     *
     * <code>string address = 1;</code>
     */
    var address: kotlin.String
      @JvmName("getAddress")
      get() = _builder.getAddress()
      @JvmName("setAddress")
      set(value) {
        _builder.setAddress(value)
      }
    /**
     * <pre>
     * address
     * </pre>
     *
     * <code>string address = 1;</code>
     */
    fun clearAddress() {
      _builder.clearAddress()
    }

    /**
     * <pre>
     * enabled
     * </pre>
     *
     * <code>bool enabled = 2;</code>
     */
    var enabled: kotlin.Boolean
      @JvmName("getEnabled")
      get() = _builder.getEnabled()
      @JvmName("setEnabled")
      set(value) {
        _builder.setEnabled(value)
      }
    /**
     * <pre>
     * enabled
     * </pre>
     *
     * <code>bool enabled = 2;</code>
     */
    fun clearEnabled() {
      _builder.clearEnabled()
    }

    /**
     * <pre>
     * name
     * </pre>
     *
     * <code>string name = 3;</code>
     */
    var name: kotlin.String
      @JvmName("getName")
      get() = _builder.getName()
      @JvmName("setName")
      set(value) {
        _builder.setName(value)
      }
    /**
     * <pre>
     * name
     * </pre>
     *
     * <code>string name = 3;</code>
     */
    fun clearName() {
      _builder.clearName()
    }
  }
}
@kotlin.jvm.JvmSynthetic
inline fun qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry.copy(block: qaul.rpc.connections.InternetNodesEntryKt.Dsl.() -> kotlin.Unit): qaul.rpc.connections.ConnectionsOuterClass.InternetNodesEntry =
  qaul.rpc.connections.InternetNodesEntryKt.Dsl._create(this.toBuilder()).apply { block() }._build()

