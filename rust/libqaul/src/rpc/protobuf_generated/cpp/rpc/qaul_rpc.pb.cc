// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc/qaul_rpc.proto

#include "rpc/qaul_rpc.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace qaul {
namespace rpc {
constexpr QaulRpc::QaulRpc(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : request_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , user_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , module_(0)
{}
struct QaulRpcDefaultTypeInternal {
  constexpr QaulRpcDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~QaulRpcDefaultTypeInternal() {}
  union {
    QaulRpc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT QaulRpcDefaultTypeInternal _QaulRpc_default_instance_;
}  // namespace rpc
}  // namespace qaul
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_rpc_2fqaul_5frpc_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_rpc_2fqaul_5frpc_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_rpc_2fqaul_5frpc_2eproto = nullptr;

const uint32_t TableStruct_rpc_2fqaul_5frpc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::qaul::rpc::QaulRpc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::qaul::rpc::QaulRpc, module_),
  PROTOBUF_FIELD_OFFSET(::qaul::rpc::QaulRpc, request_id_),
  PROTOBUF_FIELD_OFFSET(::qaul::rpc::QaulRpc, user_id_),
  PROTOBUF_FIELD_OFFSET(::qaul::rpc::QaulRpc, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::qaul::rpc::QaulRpc)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::qaul::rpc::_QaulRpc_default_instance_),
};

const char descriptor_table_protodef_rpc_2fqaul_5frpc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022rpc/qaul_rpc.proto\022\010qaul.rpc\"_\n\007QaulRp"
  "c\022!\n\006module\030\001 \001(\0162\021.qaul.rpc.Modules\022\022\n\n"
  "request_id\030\002 \001(\t\022\017\n\007user_id\030\003 \001(\014\022\014\n\004dat"
  "a\030\004 \001(\014*t\n\007Modules\022\010\n\004NONE\020\000\022\007\n\003RPC\020\001\022\010\n"
  "\004NODE\020\002\022\020\n\014USERACCOUNTS\020\003\022\t\n\005USERS\020\004\022\n\n\006"
  "ROUTER\020\005\022\010\n\004FEED\020\006\022\017\n\013CONNECTIONS\020\007\022\010\n\004C"
  "HAT\020\010b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_rpc_2fqaul_5frpc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rpc_2fqaul_5frpc_2eproto = {
  false, false, 253, descriptor_table_protodef_rpc_2fqaul_5frpc_2eproto, "rpc/qaul_rpc.proto", 
  &descriptor_table_rpc_2fqaul_5frpc_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_rpc_2fqaul_5frpc_2eproto::offsets,
  file_level_metadata_rpc_2fqaul_5frpc_2eproto, file_level_enum_descriptors_rpc_2fqaul_5frpc_2eproto, file_level_service_descriptors_rpc_2fqaul_5frpc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_rpc_2fqaul_5frpc_2eproto_getter() {
  return &descriptor_table_rpc_2fqaul_5frpc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_rpc_2fqaul_5frpc_2eproto(&descriptor_table_rpc_2fqaul_5frpc_2eproto);
namespace qaul {
namespace rpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Modules_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_rpc_2fqaul_5frpc_2eproto);
  return file_level_enum_descriptors_rpc_2fqaul_5frpc_2eproto[0];
}
bool Modules_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class QaulRpc::_Internal {
 public:
};

QaulRpc::QaulRpc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:qaul.rpc.QaulRpc)
}
QaulRpc::QaulRpc(const QaulRpc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  request_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    request_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request_id().empty()) {
    request_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_request_id(), 
      GetArenaForAllocation());
  }
  user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_user_id().empty()) {
    user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_user_id(), 
      GetArenaForAllocation());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  module_ = from.module_;
  // @@protoc_insertion_point(copy_constructor:qaul.rpc.QaulRpc)
}

inline void QaulRpc::SharedCtor() {
request_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  request_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
module_ = 0;
}

QaulRpc::~QaulRpc() {
  // @@protoc_insertion_point(destructor:qaul.rpc.QaulRpc)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void QaulRpc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  request_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void QaulRpc::ArenaDtor(void* object) {
  QaulRpc* _this = reinterpret_cast< QaulRpc* >(object);
  (void)_this;
}
void QaulRpc::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void QaulRpc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void QaulRpc::Clear() {
// @@protoc_insertion_point(message_clear_start:qaul.rpc.QaulRpc)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  request_id_.ClearToEmpty();
  user_id_.ClearToEmpty();
  data_.ClearToEmpty();
  module_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QaulRpc::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .qaul.rpc.Modules module = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_module(static_cast<::qaul::rpc::Modules>(val));
        } else
          goto handle_unusual;
        continue;
      // string request_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_request_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "qaul.rpc.QaulRpc.request_id"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes user_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_user_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes data = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* QaulRpc::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:qaul.rpc.QaulRpc)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .qaul.rpc.Modules module = 1;
  if (this->_internal_module() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_module(), target);
  }

  // string request_id = 2;
  if (!this->_internal_request_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request_id().data(), static_cast<int>(this->_internal_request_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "qaul.rpc.QaulRpc.request_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_request_id(), target);
  }

  // bytes user_id = 3;
  if (!this->_internal_user_id().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_user_id(), target);
  }

  // bytes data = 4;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:qaul.rpc.QaulRpc)
  return target;
}

size_t QaulRpc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:qaul.rpc.QaulRpc)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request_id = 2;
  if (!this->_internal_request_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request_id());
  }

  // bytes user_id = 3;
  if (!this->_internal_user_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_user_id());
  }

  // bytes data = 4;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // .qaul.rpc.Modules module = 1;
  if (this->_internal_module() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_module());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QaulRpc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    QaulRpc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QaulRpc::GetClassData() const { return &_class_data_; }

void QaulRpc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<QaulRpc *>(to)->MergeFrom(
      static_cast<const QaulRpc &>(from));
}


void QaulRpc::MergeFrom(const QaulRpc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:qaul.rpc.QaulRpc)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_request_id().empty()) {
    _internal_set_request_id(from._internal_request_id());
  }
  if (!from._internal_user_id().empty()) {
    _internal_set_user_id(from._internal_user_id());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_module() != 0) {
    _internal_set_module(from._internal_module());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QaulRpc::CopyFrom(const QaulRpc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:qaul.rpc.QaulRpc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QaulRpc::IsInitialized() const {
  return true;
}

void QaulRpc::InternalSwap(QaulRpc* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &request_id_, lhs_arena,
      &other->request_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &user_id_, lhs_arena,
      &other->user_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, lhs_arena,
      &other->data_, rhs_arena
  );
  swap(module_, other->module_);
}

::PROTOBUF_NAMESPACE_ID::Metadata QaulRpc::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_rpc_2fqaul_5frpc_2eproto_getter, &descriptor_table_rpc_2fqaul_5frpc_2eproto_once,
      file_level_metadata_rpc_2fqaul_5frpc_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace qaul
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::qaul::rpc::QaulRpc* Arena::CreateMaybeMessage< ::qaul::rpc::QaulRpc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::qaul::rpc::QaulRpc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
