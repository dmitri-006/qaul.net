//Generated by the protocol buffer compiler. DO NOT EDIT!
// source: router/router_net_info.proto

package qaul.net.router_net_info;

@kotlin.jvm.JvmSynthetic
public inline fun routing(block: qaul.net.router_net_info.RoutingKt.Dsl.() -> kotlin.Unit): qaul.net.router_net_info.RouterNetInfo.Routing =
  qaul.net.router_net_info.RoutingKt.Dsl._create(qaul.net.router_net_info.RouterNetInfo.Routing.newBuilder()).apply { block() }._build()
public object RoutingKt {
  @kotlin.OptIn(com.google.protobuf.kotlin.OnlyForUseByGeneratedProtoCode::class)
  @com.google.protobuf.kotlin.ProtoDslMarker
  public class Dsl private constructor(
    private val _builder: qaul.net.router_net_info.RouterNetInfo.Routing.Builder
  ) {
    public companion object {
      @kotlin.jvm.JvmSynthetic
      @kotlin.PublishedApi
      internal fun _create(builder: qaul.net.router_net_info.RouterNetInfo.Routing.Builder): Dsl = Dsl(builder)
    }

    @kotlin.jvm.JvmSynthetic
    @kotlin.PublishedApi
    internal fun _build(): qaul.net.router_net_info.RouterNetInfo.Routing = _builder.build()

    /**
     * <code>.qaul.net.router_net_info.UserInfoTable user_info_table = 1;</code>
     */
    public var userInfoTable: qaul.net.router_net_info.RouterNetInfo.UserInfoTable
      @JvmName("getUserInfoTable")
      get() = _builder.getUserInfoTable()
      @JvmName("setUserInfoTable")
      set(value) {
        _builder.setUserInfoTable(value)
      }
    /**
     * <code>.qaul.net.router_net_info.UserInfoTable user_info_table = 1;</code>
     */
    public fun clearUserInfoTable() {
      _builder.clearUserInfoTable()
    }
    /**
     * <code>.qaul.net.router_net_info.UserInfoTable user_info_table = 1;</code>
     * @return Whether the userInfoTable field is set.
     */
    public fun hasUserInfoTable(): kotlin.Boolean {
      return _builder.hasUserInfoTable()
    }

    /**
     * <code>.qaul.net.router_net_info.UserInfo user_info = 2;</code>
     */
    public var userInfo: qaul.net.router_net_info.RouterNetInfo.UserInfo
      @JvmName("getUserInfo")
      get() = _builder.getUserInfo()
      @JvmName("setUserInfo")
      set(value) {
        _builder.setUserInfo(value)
      }
    /**
     * <code>.qaul.net.router_net_info.UserInfo user_info = 2;</code>
     */
    public fun clearUserInfo() {
      _builder.clearUserInfo()
    }
    /**
     * <code>.qaul.net.router_net_info.UserInfo user_info = 2;</code>
     * @return Whether the userInfo field is set.
     */
    public fun hasUserInfo(): kotlin.Boolean {
      return _builder.hasUserInfo()
    }

    /**
     * <code>.qaul.net.router_net_info.RoutingInfoTable routing_info_table = 3;</code>
     */
    public var routingInfoTable: qaul.net.router_net_info.RouterNetInfo.RoutingInfoTable
      @JvmName("getRoutingInfoTable")
      get() = _builder.getRoutingInfoTable()
      @JvmName("setRoutingInfoTable")
      set(value) {
        _builder.setRoutingInfoTable(value)
      }
    /**
     * <code>.qaul.net.router_net_info.RoutingInfoTable routing_info_table = 3;</code>
     */
    public fun clearRoutingInfoTable() {
      _builder.clearRoutingInfoTable()
    }
    /**
     * <code>.qaul.net.router_net_info.RoutingInfoTable routing_info_table = 3;</code>
     * @return Whether the routingInfoTable field is set.
     */
    public fun hasRoutingInfoTable(): kotlin.Boolean {
      return _builder.hasRoutingInfoTable()
    }

    /**
     * <code>.qaul.net.router_net_info.RoutingInfoEntry routing_info_entry = 4;</code>
     */
    public var routingInfoEntry: qaul.net.router_net_info.RouterNetInfo.RoutingInfoEntry
      @JvmName("getRoutingInfoEntry")
      get() = _builder.getRoutingInfoEntry()
      @JvmName("setRoutingInfoEntry")
      set(value) {
        _builder.setRoutingInfoEntry(value)
      }
    /**
     * <code>.qaul.net.router_net_info.RoutingInfoEntry routing_info_entry = 4;</code>
     */
    public fun clearRoutingInfoEntry() {
      _builder.clearRoutingInfoEntry()
    }
    /**
     * <code>.qaul.net.router_net_info.RoutingInfoEntry routing_info_entry = 4;</code>
     * @return Whether the routingInfoEntry field is set.
     */
    public fun hasRoutingInfoEntry(): kotlin.Boolean {
      return _builder.hasRoutingInfoEntry()
    }
    public val messageCase: qaul.net.router_net_info.RouterNetInfo.Routing.MessageCase
      @JvmName("getMessageCase")
      get() = _builder.getMessageCase()

    public fun clearMessage() {
      _builder.clearMessage()
    }
  }
}
@kotlin.jvm.JvmSynthetic
public inline fun qaul.net.router_net_info.RouterNetInfo.Routing.copy(block: qaul.net.router_net_info.RoutingKt.Dsl.() -> kotlin.Unit): qaul.net.router_net_info.RouterNetInfo.Routing =
  qaul.net.router_net_info.RoutingKt.Dsl._create(this.toBuilder()).apply { block() }._build()