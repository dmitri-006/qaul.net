// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: node/node.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_node_2fnode_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_node_2fnode_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_node_2fnode_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_node_2fnode_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_node_2fnode_2eproto;
namespace qaul {
namespace rpc {
namespace node {
class Node;
struct NodeDefaultTypeInternal;
extern NodeDefaultTypeInternal _Node_default_instance_;
class NodeInformation;
struct NodeInformationDefaultTypeInternal;
extern NodeInformationDefaultTypeInternal _NodeInformation_default_instance_;
}  // namespace node
}  // namespace rpc
}  // namespace qaul
PROTOBUF_NAMESPACE_OPEN
template<> ::qaul::rpc::node::Node* Arena::CreateMaybeMessage<::qaul::rpc::node::Node>(Arena*);
template<> ::qaul::rpc::node::NodeInformation* Arena::CreateMaybeMessage<::qaul::rpc::node::NodeInformation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace qaul {
namespace rpc {
namespace node {

// ===================================================================

class Node final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:qaul.rpc.node.Node) */ {
 public:
  inline Node() : Node(nullptr) {}
  ~Node() override;
  explicit PROTOBUF_CONSTEXPR Node(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Node(const Node& from);
  Node(Node&& from) noexcept
    : Node() {
    *this = ::std::move(from);
  }

  inline Node& operator=(const Node& from) {
    CopyFrom(from);
    return *this;
  }
  inline Node& operator=(Node&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Node& default_instance() {
    return *internal_default_instance();
  }
  enum MessageCase {
    kGetNodeInfo = 1,
    kInfo = 2,
    MESSAGE_NOT_SET = 0,
  };

  static inline const Node* internal_default_instance() {
    return reinterpret_cast<const Node*>(
               &_Node_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Node& a, Node& b) {
    a.Swap(&b);
  }
  inline void Swap(Node* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Node* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Node* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Node>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Node& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Node& from) {
    Node::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Node* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "qaul.rpc.node.Node";
  }
  protected:
  explicit Node(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGetNodeInfoFieldNumber = 1,
    kInfoFieldNumber = 2,
  };
  // bool get_node_info = 1;
  bool has_get_node_info() const;
  private:
  bool _internal_has_get_node_info() const;
  public:
  void clear_get_node_info();
  bool get_node_info() const;
  void set_get_node_info(bool value);
  private:
  bool _internal_get_node_info() const;
  void _internal_set_get_node_info(bool value);
  public:

  // .qaul.rpc.node.NodeInformation info = 2;
  bool has_info() const;
  private:
  bool _internal_has_info() const;
  public:
  void clear_info();
  const ::qaul::rpc::node::NodeInformation& info() const;
  PROTOBUF_NODISCARD ::qaul::rpc::node::NodeInformation* release_info();
  ::qaul::rpc::node::NodeInformation* mutable_info();
  void set_allocated_info(::qaul::rpc::node::NodeInformation* info);
  private:
  const ::qaul::rpc::node::NodeInformation& _internal_info() const;
  ::qaul::rpc::node::NodeInformation* _internal_mutable_info();
  public:
  void unsafe_arena_set_allocated_info(
      ::qaul::rpc::node::NodeInformation* info);
  ::qaul::rpc::node::NodeInformation* unsafe_arena_release_info();

  void clear_message();
  MessageCase message_case() const;
  // @@protoc_insertion_point(class_scope:qaul.rpc.node.Node)
 private:
  class _Internal;
  void set_has_get_node_info();
  void set_has_info();

  inline bool has_message() const;
  inline void clear_has_message();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union MessageUnion {
      constexpr MessageUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      bool get_node_info_;
      ::qaul::rpc::node::NodeInformation* info_;
    } message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_node_2fnode_2eproto;
};
// -------------------------------------------------------------------

class NodeInformation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:qaul.rpc.node.NodeInformation) */ {
 public:
  inline NodeInformation() : NodeInformation(nullptr) {}
  ~NodeInformation() override;
  explicit PROTOBUF_CONSTEXPR NodeInformation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NodeInformation(const NodeInformation& from);
  NodeInformation(NodeInformation&& from) noexcept
    : NodeInformation() {
    *this = ::std::move(from);
  }

  inline NodeInformation& operator=(const NodeInformation& from) {
    CopyFrom(from);
    return *this;
  }
  inline NodeInformation& operator=(NodeInformation&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NodeInformation& default_instance() {
    return *internal_default_instance();
  }
  static inline const NodeInformation* internal_default_instance() {
    return reinterpret_cast<const NodeInformation*>(
               &_NodeInformation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NodeInformation& a, NodeInformation& b) {
    a.Swap(&b);
  }
  inline void Swap(NodeInformation* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NodeInformation* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NodeInformation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NodeInformation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NodeInformation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NodeInformation& from) {
    NodeInformation::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NodeInformation* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "qaul.rpc.node.NodeInformation";
  }
  protected:
  explicit NodeInformation(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddressesFieldNumber = 2,
    kIdBase58FieldNumber = 1,
  };
  // repeated string addresses = 2;
  int addresses_size() const;
  private:
  int _internal_addresses_size() const;
  public:
  void clear_addresses();
  const std::string& addresses(int index) const;
  std::string* mutable_addresses(int index);
  void set_addresses(int index, const std::string& value);
  void set_addresses(int index, std::string&& value);
  void set_addresses(int index, const char* value);
  void set_addresses(int index, const char* value, size_t size);
  std::string* add_addresses();
  void add_addresses(const std::string& value);
  void add_addresses(std::string&& value);
  void add_addresses(const char* value);
  void add_addresses(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& addresses() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_addresses();
  private:
  const std::string& _internal_addresses(int index) const;
  std::string* _internal_add_addresses();
  public:

  // string id_base58 = 1;
  void clear_id_base58();
  const std::string& id_base58() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id_base58(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id_base58();
  PROTOBUF_NODISCARD std::string* release_id_base58();
  void set_allocated_id_base58(std::string* id_base58);
  private:
  const std::string& _internal_id_base58() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id_base58(const std::string& value);
  std::string* _internal_mutable_id_base58();
  public:

  // @@protoc_insertion_point(class_scope:qaul.rpc.node.NodeInformation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> addresses_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_base58_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_node_2fnode_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Node

// bool get_node_info = 1;
inline bool Node::_internal_has_get_node_info() const {
  return message_case() == kGetNodeInfo;
}
inline bool Node::has_get_node_info() const {
  return _internal_has_get_node_info();
}
inline void Node::set_has_get_node_info() {
  _impl_._oneof_case_[0] = kGetNodeInfo;
}
inline void Node::clear_get_node_info() {
  if (_internal_has_get_node_info()) {
    _impl_.message_.get_node_info_ = false;
    clear_has_message();
  }
}
inline bool Node::_internal_get_node_info() const {
  if (_internal_has_get_node_info()) {
    return _impl_.message_.get_node_info_;
  }
  return false;
}
inline void Node::_internal_set_get_node_info(bool value) {
  if (!_internal_has_get_node_info()) {
    clear_message();
    set_has_get_node_info();
  }
  _impl_.message_.get_node_info_ = value;
}
inline bool Node::get_node_info() const {
  // @@protoc_insertion_point(field_get:qaul.rpc.node.Node.get_node_info)
  return _internal_get_node_info();
}
inline void Node::set_get_node_info(bool value) {
  _internal_set_get_node_info(value);
  // @@protoc_insertion_point(field_set:qaul.rpc.node.Node.get_node_info)
}

// .qaul.rpc.node.NodeInformation info = 2;
inline bool Node::_internal_has_info() const {
  return message_case() == kInfo;
}
inline bool Node::has_info() const {
  return _internal_has_info();
}
inline void Node::set_has_info() {
  _impl_._oneof_case_[0] = kInfo;
}
inline void Node::clear_info() {
  if (_internal_has_info()) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.message_.info_;
    }
    clear_has_message();
  }
}
inline ::qaul::rpc::node::NodeInformation* Node::release_info() {
  // @@protoc_insertion_point(field_release:qaul.rpc.node.Node.info)
  if (_internal_has_info()) {
    clear_has_message();
    ::qaul::rpc::node::NodeInformation* temp = _impl_.message_.info_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.message_.info_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::qaul::rpc::node::NodeInformation& Node::_internal_info() const {
  return _internal_has_info()
      ? *_impl_.message_.info_
      : reinterpret_cast< ::qaul::rpc::node::NodeInformation&>(::qaul::rpc::node::_NodeInformation_default_instance_);
}
inline const ::qaul::rpc::node::NodeInformation& Node::info() const {
  // @@protoc_insertion_point(field_get:qaul.rpc.node.Node.info)
  return _internal_info();
}
inline ::qaul::rpc::node::NodeInformation* Node::unsafe_arena_release_info() {
  // @@protoc_insertion_point(field_unsafe_arena_release:qaul.rpc.node.Node.info)
  if (_internal_has_info()) {
    clear_has_message();
    ::qaul::rpc::node::NodeInformation* temp = _impl_.message_.info_;
    _impl_.message_.info_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Node::unsafe_arena_set_allocated_info(::qaul::rpc::node::NodeInformation* info) {
  clear_message();
  if (info) {
    set_has_info();
    _impl_.message_.info_ = info;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:qaul.rpc.node.Node.info)
}
inline ::qaul::rpc::node::NodeInformation* Node::_internal_mutable_info() {
  if (!_internal_has_info()) {
    clear_message();
    set_has_info();
    _impl_.message_.info_ = CreateMaybeMessage< ::qaul::rpc::node::NodeInformation >(GetArenaForAllocation());
  }
  return _impl_.message_.info_;
}
inline ::qaul::rpc::node::NodeInformation* Node::mutable_info() {
  ::qaul::rpc::node::NodeInformation* _msg = _internal_mutable_info();
  // @@protoc_insertion_point(field_mutable:qaul.rpc.node.Node.info)
  return _msg;
}

inline bool Node::has_message() const {
  return message_case() != MESSAGE_NOT_SET;
}
inline void Node::clear_has_message() {
  _impl_._oneof_case_[0] = MESSAGE_NOT_SET;
}
inline Node::MessageCase Node::message_case() const {
  return Node::MessageCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// NodeInformation

// string id_base58 = 1;
inline void NodeInformation::clear_id_base58() {
  _impl_.id_base58_.ClearToEmpty();
}
inline const std::string& NodeInformation::id_base58() const {
  // @@protoc_insertion_point(field_get:qaul.rpc.node.NodeInformation.id_base58)
  return _internal_id_base58();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NodeInformation::set_id_base58(ArgT0&& arg0, ArgT... args) {
 
 _impl_.id_base58_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:qaul.rpc.node.NodeInformation.id_base58)
}
inline std::string* NodeInformation::mutable_id_base58() {
  std::string* _s = _internal_mutable_id_base58();
  // @@protoc_insertion_point(field_mutable:qaul.rpc.node.NodeInformation.id_base58)
  return _s;
}
inline const std::string& NodeInformation::_internal_id_base58() const {
  return _impl_.id_base58_.Get();
}
inline void NodeInformation::_internal_set_id_base58(const std::string& value) {
  
  _impl_.id_base58_.Set(value, GetArenaForAllocation());
}
inline std::string* NodeInformation::_internal_mutable_id_base58() {
  
  return _impl_.id_base58_.Mutable(GetArenaForAllocation());
}
inline std::string* NodeInformation::release_id_base58() {
  // @@protoc_insertion_point(field_release:qaul.rpc.node.NodeInformation.id_base58)
  return _impl_.id_base58_.Release();
}
inline void NodeInformation::set_allocated_id_base58(std::string* id_base58) {
  if (id_base58 != nullptr) {
    
  } else {
    
  }
  _impl_.id_base58_.SetAllocated(id_base58, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.id_base58_.IsDefault()) {
    _impl_.id_base58_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:qaul.rpc.node.NodeInformation.id_base58)
}

// repeated string addresses = 2;
inline int NodeInformation::_internal_addresses_size() const {
  return _impl_.addresses_.size();
}
inline int NodeInformation::addresses_size() const {
  return _internal_addresses_size();
}
inline void NodeInformation::clear_addresses() {
  _impl_.addresses_.Clear();
}
inline std::string* NodeInformation::add_addresses() {
  std::string* _s = _internal_add_addresses();
  // @@protoc_insertion_point(field_add_mutable:qaul.rpc.node.NodeInformation.addresses)
  return _s;
}
inline const std::string& NodeInformation::_internal_addresses(int index) const {
  return _impl_.addresses_.Get(index);
}
inline const std::string& NodeInformation::addresses(int index) const {
  // @@protoc_insertion_point(field_get:qaul.rpc.node.NodeInformation.addresses)
  return _internal_addresses(index);
}
inline std::string* NodeInformation::mutable_addresses(int index) {
  // @@protoc_insertion_point(field_mutable:qaul.rpc.node.NodeInformation.addresses)
  return _impl_.addresses_.Mutable(index);
}
inline void NodeInformation::set_addresses(int index, const std::string& value) {
  _impl_.addresses_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:qaul.rpc.node.NodeInformation.addresses)
}
inline void NodeInformation::set_addresses(int index, std::string&& value) {
  _impl_.addresses_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:qaul.rpc.node.NodeInformation.addresses)
}
inline void NodeInformation::set_addresses(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.addresses_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:qaul.rpc.node.NodeInformation.addresses)
}
inline void NodeInformation::set_addresses(int index, const char* value, size_t size) {
  _impl_.addresses_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:qaul.rpc.node.NodeInformation.addresses)
}
inline std::string* NodeInformation::_internal_add_addresses() {
  return _impl_.addresses_.Add();
}
inline void NodeInformation::add_addresses(const std::string& value) {
  _impl_.addresses_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:qaul.rpc.node.NodeInformation.addresses)
}
inline void NodeInformation::add_addresses(std::string&& value) {
  _impl_.addresses_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:qaul.rpc.node.NodeInformation.addresses)
}
inline void NodeInformation::add_addresses(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.addresses_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:qaul.rpc.node.NodeInformation.addresses)
}
inline void NodeInformation::add_addresses(const char* value, size_t size) {
  _impl_.addresses_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:qaul.rpc.node.NodeInformation.addresses)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
NodeInformation::addresses() const {
  // @@protoc_insertion_point(field_list:qaul.rpc.node.NodeInformation.addresses)
  return _impl_.addresses_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
NodeInformation::mutable_addresses() {
  // @@protoc_insertion_point(field_mutable_list:qaul.rpc.node.NodeInformation.addresses)
  return &_impl_.addresses_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace node
}  // namespace rpc
}  // namespace qaul

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_node_2fnode_2eproto
