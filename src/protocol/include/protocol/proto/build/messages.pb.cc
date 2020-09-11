// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#include "messages.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_request_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_Request_request_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_response_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_Response_response_2eproto;
namespace Serialize {
class HeaderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Header> _instance;
} _Header_default_instance_;
class WrappedMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<WrappedMessage> _instance;
} _WrappedMessage_default_instance_;
}  // namespace Serialize
static void InitDefaultsscc_info_Header_messages_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Serialize::_Header_default_instance_;
    new (ptr) ::Serialize::Header();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Header_messages_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Header_messages_2eproto}, {}};

static void InitDefaultsscc_info_WrappedMessage_messages_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Serialize::_WrappedMessage_default_instance_;
    new (ptr) ::Serialize::WrappedMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_WrappedMessage_messages_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_WrappedMessage_messages_2eproto}, {
      &scc_info_Request_request_2eproto.base,
      &scc_info_Response_response_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_messages_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_messages_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_messages_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Serialize::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Serialize::Header, version_),
  PROTOBUF_FIELD_OFFSET(::Serialize::Header, command_),
  PROTOBUF_FIELD_OFFSET(::Serialize::Header, length_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Serialize::WrappedMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::Serialize::WrappedMessage, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::Serialize::WrappedMessage, msg_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Serialize::Header)},
  { 8, -1, sizeof(::Serialize::WrappedMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Serialize::_Header_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Serialize::_WrappedMessage_default_instance_),
};

const char descriptor_table_protodef_messages_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016messages.proto\022\tSerialize\032\rrequest.pro"
  "to\032\016response.proto\":\n\006Header\022\017\n\007version\030"
  "\001 \001(\007\022\017\n\007command\030\002 \001(\007\022\016\n\006length\030\003 \001(\006\"g"
  "\n\016WrappedMessage\022%\n\007request\030\001 \001(\0132\022.Seri"
  "alize.RequestH\000\022\'\n\010response\030\002 \001(\0132\023.Seri"
  "alize.ResponseH\000B\005\n\003msgP\000P\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_messages_2eproto_deps[2] = {
  &::descriptor_table_request_2eproto,
  &::descriptor_table_response_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_messages_2eproto_sccs[2] = {
  &scc_info_Header_messages_2eproto.base,
  &scc_info_WrappedMessage_messages_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2eproto = {
  false, false, descriptor_table_protodef_messages_2eproto, "messages.proto", 235,
  &descriptor_table_messages_2eproto_once, descriptor_table_messages_2eproto_sccs, descriptor_table_messages_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_messages_2eproto::offsets,
  file_level_metadata_messages_2eproto, 2, file_level_enum_descriptors_messages_2eproto, file_level_service_descriptors_messages_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_messages_2eproto)), true);
namespace Serialize {

// ===================================================================

class Header::_Internal {
 public:
};

Header::Header(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Serialize.Header)
}
Header::Header(const Header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&length_) -
    reinterpret_cast<char*>(&version_)) + sizeof(length_));
  // @@protoc_insertion_point(copy_constructor:Serialize.Header)
}

void Header::SharedCtor() {
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&length_) -
      reinterpret_cast<char*>(&version_)) + sizeof(length_));
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:Serialize.Header)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Header::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Header::ArenaDtor(void* object) {
  Header* _this = reinterpret_cast< Header* >(object);
  (void)_this;
}
void Header::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Header& Header::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Header_messages_2eproto.base);
  return *internal_default_instance();
}


void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:Serialize.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&length_) -
      reinterpret_cast<char*>(&version_)) + sizeof(length_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Header::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // fixed32 version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // fixed32 command = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          command_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // fixed64 length = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          length_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint64>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint64);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Header::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Serialize.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // fixed32 version = 1;
  if (this->version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(1, this->_internal_version(), target);
  }

  // fixed32 command = 2;
  if (this->command() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(2, this->_internal_command(), target);
  }

  // fixed64 length = 3;
  if (this->length() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed64ToArray(3, this->_internal_length(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Serialize.Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Serialize.Header)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // fixed32 version = 1;
  if (this->version() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 command = 2;
  if (this->command() != 0) {
    total_size += 1 + 4;
  }

  // fixed64 length = 3;
  if (this->length() != 0) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Serialize.Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Header* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Header>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Serialize.Header)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Serialize.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Serialize.Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.version() != 0) {
    _internal_set_version(from._internal_version());
  }
  if (from.command() != 0) {
    _internal_set_command(from._internal_command());
  }
  if (from.length() != 0) {
    _internal_set_length(from._internal_length());
  }
}

void Header::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Serialize.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Serialize.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::InternalSwap(Header* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Header, length_)
      + sizeof(Header::length_)
      - PROTOBUF_FIELD_OFFSET(Header, version_)>(
          reinterpret_cast<char*>(&version_),
          reinterpret_cast<char*>(&other->version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Header::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class WrappedMessage::_Internal {
 public:
  static const ::Serialize::Request& request(const WrappedMessage* msg);
  static const ::Serialize::Response& response(const WrappedMessage* msg);
};

const ::Serialize::Request&
WrappedMessage::_Internal::request(const WrappedMessage* msg) {
  return *msg->msg_.request_;
}
const ::Serialize::Response&
WrappedMessage::_Internal::response(const WrappedMessage* msg) {
  return *msg->msg_.response_;
}
void WrappedMessage::set_allocated_request(::Serialize::Request* request) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_msg();
  if (request) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(request)->GetArena();
    if (message_arena != submessage_arena) {
      request = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, request, submessage_arena);
    }
    set_has_request();
    msg_.request_ = request;
  }
  // @@protoc_insertion_point(field_set_allocated:Serialize.WrappedMessage.request)
}
void WrappedMessage::clear_request() {
  if (_internal_has_request()) {
    if (GetArena() == nullptr) {
      delete msg_.request_;
    }
    clear_has_msg();
  }
}
void WrappedMessage::set_allocated_response(::Serialize::Response* response) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_msg();
  if (response) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(response)->GetArena();
    if (message_arena != submessage_arena) {
      response = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, response, submessage_arena);
    }
    set_has_response();
    msg_.response_ = response;
  }
  // @@protoc_insertion_point(field_set_allocated:Serialize.WrappedMessage.response)
}
void WrappedMessage::clear_response() {
  if (_internal_has_response()) {
    if (GetArena() == nullptr) {
      delete msg_.response_;
    }
    clear_has_msg();
  }
}
WrappedMessage::WrappedMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Serialize.WrappedMessage)
}
WrappedMessage::WrappedMessage(const WrappedMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_msg();
  switch (from.msg_case()) {
    case kRequest: {
      _internal_mutable_request()->::Serialize::Request::MergeFrom(from._internal_request());
      break;
    }
    case kResponse: {
      _internal_mutable_response()->::Serialize::Response::MergeFrom(from._internal_response());
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:Serialize.WrappedMessage)
}

void WrappedMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_WrappedMessage_messages_2eproto.base);
  clear_has_msg();
}

WrappedMessage::~WrappedMessage() {
  // @@protoc_insertion_point(destructor:Serialize.WrappedMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void WrappedMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (has_msg()) {
    clear_msg();
  }
}

void WrappedMessage::ArenaDtor(void* object) {
  WrappedMessage* _this = reinterpret_cast< WrappedMessage* >(object);
  (void)_this;
}
void WrappedMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void WrappedMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const WrappedMessage& WrappedMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_WrappedMessage_messages_2eproto.base);
  return *internal_default_instance();
}


void WrappedMessage::clear_msg() {
// @@protoc_insertion_point(one_of_clear_start:Serialize.WrappedMessage)
  switch (msg_case()) {
    case kRequest: {
      if (GetArena() == nullptr) {
        delete msg_.request_;
      }
      break;
    }
    case kResponse: {
      if (GetArena() == nullptr) {
        delete msg_.response_;
      }
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = MSG_NOT_SET;
}


void WrappedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:Serialize.WrappedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_msg();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* WrappedMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .Serialize.Request request = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_request(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Serialize.Response response = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_response(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* WrappedMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Serialize.WrappedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Serialize.Request request = 1;
  if (_internal_has_request()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::request(this), target, stream);
  }

  // .Serialize.Response response = 2;
  if (_internal_has_response()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::response(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Serialize.WrappedMessage)
  return target;
}

size_t WrappedMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Serialize.WrappedMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (msg_case()) {
    // .Serialize.Request request = 1;
    case kRequest: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *msg_.request_);
      break;
    }
    // .Serialize.Response response = 2;
    case kResponse: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *msg_.response_);
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WrappedMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Serialize.WrappedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const WrappedMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<WrappedMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Serialize.WrappedMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Serialize.WrappedMessage)
    MergeFrom(*source);
  }
}

void WrappedMessage::MergeFrom(const WrappedMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Serialize.WrappedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.msg_case()) {
    case kRequest: {
      _internal_mutable_request()->::Serialize::Request::MergeFrom(from._internal_request());
      break;
    }
    case kResponse: {
      _internal_mutable_response()->::Serialize::Response::MergeFrom(from._internal_response());
      break;
    }
    case MSG_NOT_SET: {
      break;
    }
  }
}

void WrappedMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Serialize.WrappedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WrappedMessage::CopyFrom(const WrappedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Serialize.WrappedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WrappedMessage::IsInitialized() const {
  return true;
}

void WrappedMessage::InternalSwap(WrappedMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(msg_, other->msg_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata WrappedMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Serialize
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Serialize::Header* Arena::CreateMaybeMessage< ::Serialize::Header >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Serialize::Header >(arena);
}
template<> PROTOBUF_NOINLINE ::Serialize::WrappedMessage* Arena::CreateMaybeMessage< ::Serialize::WrappedMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Serialize::WrappedMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>