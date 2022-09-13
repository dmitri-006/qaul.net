// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: router/users.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
fileprivate struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
  struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
  typealias Version = _2
}

/// how is the user connected
enum Qaul_Rpc_Users_Connectivity: SwiftProtobuf.Enum {
  typealias RawValue = Int

  /// The user is actively connected to the node
  /// and reachable for synchronous communication.
  case online // = 0

  /// The node which hosts the user account is online
  /// but the user is not actively connected to it.
  /// Messages can sent and will reach the node.
  case reachable // = 1

  /// The user is currently not reachable.
  case offline // = 2
  case UNRECOGNIZED(Int)

  init() {
    self = .online
  }

  init?(rawValue: Int) {
    switch rawValue {
    case 0: self = .online
    case 1: self = .reachable
    case 2: self = .offline
    default: self = .UNRECOGNIZED(rawValue)
    }
  }

  var rawValue: Int {
    switch self {
    case .online: return 0
    case .reachable: return 1
    case .offline: return 2
    case .UNRECOGNIZED(let i): return i
    }
  }

}

#if swift(>=4.2)

extension Qaul_Rpc_Users_Connectivity: CaseIterable {
  // The compiler won't synthesize support with the UNRECOGNIZED case.
  static var allCases: [Qaul_Rpc_Users_Connectivity] = [
    .online,
    .reachable,
    .offline,
  ]
}

#endif  // swift(>=4.2)

/// users rpc message container
struct Qaul_Rpc_Users_Users {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var message: Qaul_Rpc_Users_Users.OneOf_Message? = nil

  var userRequest: Qaul_Rpc_Users_UserRequest {
    get {
      if case .userRequest(let v)? = message {return v}
      return Qaul_Rpc_Users_UserRequest()
    }
    set {message = .userRequest(newValue)}
  }

  var userOnlineRequest: Qaul_Rpc_Users_UserOnlineRequest {
    get {
      if case .userOnlineRequest(let v)? = message {return v}
      return Qaul_Rpc_Users_UserOnlineRequest()
    }
    set {message = .userOnlineRequest(newValue)}
  }

  var userList: Qaul_Rpc_Users_UserList {
    get {
      if case .userList(let v)? = message {return v}
      return Qaul_Rpc_Users_UserList()
    }
    set {message = .userList(newValue)}
  }

  var userUpdate: Qaul_Rpc_Users_UserEntry {
    get {
      if case .userUpdate(let v)? = message {return v}
      return Qaul_Rpc_Users_UserEntry()
    }
    set {message = .userUpdate(newValue)}
  }

  var securityNumberRequest: Qaul_Rpc_Users_SecurityNumberRequest {
    get {
      if case .securityNumberRequest(let v)? = message {return v}
      return Qaul_Rpc_Users_SecurityNumberRequest()
    }
    set {message = .securityNumberRequest(newValue)}
  }

  var securityNumberResponse: Qaul_Rpc_Users_SecurityNumberResponse {
    get {
      if case .securityNumberResponse(let v)? = message {return v}
      return Qaul_Rpc_Users_SecurityNumberResponse()
    }
    set {message = .securityNumberResponse(newValue)}
  }

  var unknownFields = SwiftProtobuf.UnknownStorage()

  enum OneOf_Message: Equatable {
    case userRequest(Qaul_Rpc_Users_UserRequest)
    case userOnlineRequest(Qaul_Rpc_Users_UserOnlineRequest)
    case userList(Qaul_Rpc_Users_UserList)
    case userUpdate(Qaul_Rpc_Users_UserEntry)
    case securityNumberRequest(Qaul_Rpc_Users_SecurityNumberRequest)
    case securityNumberResponse(Qaul_Rpc_Users_SecurityNumberResponse)

  #if !swift(>=4.1)
    static func ==(lhs: Qaul_Rpc_Users_Users.OneOf_Message, rhs: Qaul_Rpc_Users_Users.OneOf_Message) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.userRequest, .userRequest): return {
        guard case .userRequest(let l) = lhs, case .userRequest(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.userOnlineRequest, .userOnlineRequest): return {
        guard case .userOnlineRequest(let l) = lhs, case .userOnlineRequest(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.userList, .userList): return {
        guard case .userList(let l) = lhs, case .userList(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.userUpdate, .userUpdate): return {
        guard case .userUpdate(let l) = lhs, case .userUpdate(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.securityNumberRequest, .securityNumberRequest): return {
        guard case .securityNumberRequest(let l) = lhs, case .securityNumberRequest(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.securityNumberResponse, .securityNumberResponse): return {
        guard case .securityNumberResponse(let l) = lhs, case .securityNumberResponse(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      default: return false
      }
    }
  #endif
  }

  init() {}
}

/// UI request for some users
struct Qaul_Rpc_Users_UserRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

/// UI request for some online users
struct Qaul_Rpc_Users_UserOnlineRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

/// user list
struct Qaul_Rpc_Users_UserList {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var user: [Qaul_Rpc_Users_UserEntry] = []

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

/// user entry
struct Qaul_Rpc_Users_UserEntry {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  /// user name
  var name: String = String()

  /// user ID (38 Byte PeerID)
  var id: Data = Data()

  /// direct chat group id
  ///
  /// this is a predictable 16 bytes UUID
  var groupID: Data = Data()

  /// base58 string of public key
  var keyBase58: String = String()

  /// reachability of the user: online | reachable | offline
  var connectivity: Qaul_Rpc_Users_Connectivity = .online

  /// user has been verified
  var verified: Bool = false

  /// user is blocked
  var blocked: Bool = false

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

/// security number request
struct Qaul_Rpc_Users_SecurityNumberRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  /// user id
  var userID: Data = Data()

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

/// security number response
struct Qaul_Rpc_Users_SecurityNumberResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  /// the user id of the remote user
  var userID: Data = Data()

  /// deliver the full bytes of the hash
  var securityHash: Data = Data()

  /// fill in 8 numbers of 16bits
  /// uint16 data type does not exist in protobuf, just fill them in the u16 as u32.
  var securityNumberBlocks: [UInt32] = []

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "qaul.rpc.users"

extension Qaul_Rpc_Users_Connectivity: SwiftProtobuf._ProtoNameProviding {
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    0: .same(proto: "Online"),
    1: .same(proto: "Reachable"),
    2: .same(proto: "Offline"),
  ]
}

extension Qaul_Rpc_Users_Users: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Users"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "user_request"),
    2: .standard(proto: "user_online_request"),
    3: .standard(proto: "user_list"),
    4: .standard(proto: "user_update"),
    5: .standard(proto: "security_number_request"),
    6: .standard(proto: "security_number_response"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try {
        var v: Qaul_Rpc_Users_UserRequest?
        var hadOneofValue = false
        if let current = self.message {
          hadOneofValue = true
          if case .userRequest(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.message = .userRequest(v)
        }
      }()
      case 2: try {
        var v: Qaul_Rpc_Users_UserOnlineRequest?
        var hadOneofValue = false
        if let current = self.message {
          hadOneofValue = true
          if case .userOnlineRequest(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.message = .userOnlineRequest(v)
        }
      }()
      case 3: try {
        var v: Qaul_Rpc_Users_UserList?
        var hadOneofValue = false
        if let current = self.message {
          hadOneofValue = true
          if case .userList(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.message = .userList(v)
        }
      }()
      case 4: try {
        var v: Qaul_Rpc_Users_UserEntry?
        var hadOneofValue = false
        if let current = self.message {
          hadOneofValue = true
          if case .userUpdate(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.message = .userUpdate(v)
        }
      }()
      case 5: try {
        var v: Qaul_Rpc_Users_SecurityNumberRequest?
        var hadOneofValue = false
        if let current = self.message {
          hadOneofValue = true
          if case .securityNumberRequest(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.message = .securityNumberRequest(v)
        }
      }()
      case 6: try {
        var v: Qaul_Rpc_Users_SecurityNumberResponse?
        var hadOneofValue = false
        if let current = self.message {
          hadOneofValue = true
          if case .securityNumberResponse(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.message = .securityNumberResponse(v)
        }
      }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    switch self.message {
    case .userRequest?: try {
      guard case .userRequest(let v)? = self.message else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    }()
    case .userOnlineRequest?: try {
      guard case .userOnlineRequest(let v)? = self.message else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    }()
    case .userList?: try {
      guard case .userList(let v)? = self.message else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 3)
    }()
    case .userUpdate?: try {
      guard case .userUpdate(let v)? = self.message else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 4)
    }()
    case .securityNumberRequest?: try {
      guard case .securityNumberRequest(let v)? = self.message else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 5)
    }()
    case .securityNumberResponse?: try {
      guard case .securityNumberResponse(let v)? = self.message else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 6)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_Users, rhs: Qaul_Rpc_Users_Users) -> Bool {
    if lhs.message != rhs.message {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Qaul_Rpc_Users_UserRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".UserRequest"
  static let _protobuf_nameMap = SwiftProtobuf._NameMap()

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let _ = try decoder.nextFieldNumber() {
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_UserRequest, rhs: Qaul_Rpc_Users_UserRequest) -> Bool {
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Qaul_Rpc_Users_UserOnlineRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".UserOnlineRequest"
  static let _protobuf_nameMap = SwiftProtobuf._NameMap()

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let _ = try decoder.nextFieldNumber() {
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_UserOnlineRequest, rhs: Qaul_Rpc_Users_UserOnlineRequest) -> Bool {
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Qaul_Rpc_Users_UserList: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".UserList"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "user"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeRepeatedMessageField(value: &self.user) }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.user.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.user, fieldNumber: 1)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_UserList, rhs: Qaul_Rpc_Users_UserList) -> Bool {
    if lhs.user != rhs.user {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Qaul_Rpc_Users_UserEntry: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".UserEntry"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "name"),
    2: .same(proto: "id"),
    3: .standard(proto: "group_id"),
    7: .standard(proto: "key_base58"),
    8: .same(proto: "connectivity"),
    9: .same(proto: "verified"),
    10: .same(proto: "blocked"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.name) }()
      case 2: try { try decoder.decodeSingularBytesField(value: &self.id) }()
      case 3: try { try decoder.decodeSingularBytesField(value: &self.groupID) }()
      case 7: try { try decoder.decodeSingularStringField(value: &self.keyBase58) }()
      case 8: try { try decoder.decodeSingularEnumField(value: &self.connectivity) }()
      case 9: try { try decoder.decodeSingularBoolField(value: &self.verified) }()
      case 10: try { try decoder.decodeSingularBoolField(value: &self.blocked) }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.name.isEmpty {
      try visitor.visitSingularStringField(value: self.name, fieldNumber: 1)
    }
    if !self.id.isEmpty {
      try visitor.visitSingularBytesField(value: self.id, fieldNumber: 2)
    }
    if !self.groupID.isEmpty {
      try visitor.visitSingularBytesField(value: self.groupID, fieldNumber: 3)
    }
    if !self.keyBase58.isEmpty {
      try visitor.visitSingularStringField(value: self.keyBase58, fieldNumber: 7)
    }
    if self.connectivity != .online {
      try visitor.visitSingularEnumField(value: self.connectivity, fieldNumber: 8)
    }
    if self.verified != false {
      try visitor.visitSingularBoolField(value: self.verified, fieldNumber: 9)
    }
    if self.blocked != false {
      try visitor.visitSingularBoolField(value: self.blocked, fieldNumber: 10)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_UserEntry, rhs: Qaul_Rpc_Users_UserEntry) -> Bool {
    if lhs.name != rhs.name {return false}
    if lhs.id != rhs.id {return false}
    if lhs.groupID != rhs.groupID {return false}
    if lhs.keyBase58 != rhs.keyBase58 {return false}
    if lhs.connectivity != rhs.connectivity {return false}
    if lhs.verified != rhs.verified {return false}
    if lhs.blocked != rhs.blocked {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Qaul_Rpc_Users_SecurityNumberRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".SecurityNumberRequest"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "user_id"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularBytesField(value: &self.userID) }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.userID.isEmpty {
      try visitor.visitSingularBytesField(value: self.userID, fieldNumber: 1)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_SecurityNumberRequest, rhs: Qaul_Rpc_Users_SecurityNumberRequest) -> Bool {
    if lhs.userID != rhs.userID {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Qaul_Rpc_Users_SecurityNumberResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".SecurityNumberResponse"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "user_id"),
    2: .standard(proto: "security_hash"),
    3: .standard(proto: "security_number_blocks"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularBytesField(value: &self.userID) }()
      case 2: try { try decoder.decodeSingularBytesField(value: &self.securityHash) }()
      case 3: try { try decoder.decodeRepeatedUInt32Field(value: &self.securityNumberBlocks) }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.userID.isEmpty {
      try visitor.visitSingularBytesField(value: self.userID, fieldNumber: 1)
    }
    if !self.securityHash.isEmpty {
      try visitor.visitSingularBytesField(value: self.securityHash, fieldNumber: 2)
    }
    if !self.securityNumberBlocks.isEmpty {
      try visitor.visitPackedUInt32Field(value: self.securityNumberBlocks, fieldNumber: 3)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Qaul_Rpc_Users_SecurityNumberResponse, rhs: Qaul_Rpc_Users_SecurityNumberResponse) -> Bool {
    if lhs.userID != rhs.userID {return false}
    if lhs.securityHash != rhs.securityHash {return false}
    if lhs.securityNumberBlocks != rhs.securityNumberBlocks {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
