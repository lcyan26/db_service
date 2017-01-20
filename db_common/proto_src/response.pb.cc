// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "response.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace db {

namespace {

const ::google::protobuf::Descriptor* response_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  response_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_response_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_response_2eproto() {
  protobuf_AddDesc_response_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "response.proto");
  GOOGLE_CHECK(file != NULL);
  response_descriptor_ = file->message_type(0);
  static const int response_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, session_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, err_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, content_),
  };
  response_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      response_descriptor_,
      response::internal_default_instance(),
      response_offsets_,
      -1,
      -1,
      -1,
      sizeof(response),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_response_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      response_descriptor_, response::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_response_2eproto() {
  response_default_instance_.Shutdown();
  delete response_reflection_;
}

void protobuf_InitDefaults_response_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  response_default_instance_.DefaultConstruct();
  response_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_response_2eproto_once_);
void protobuf_InitDefaults_response_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_response_2eproto_once_,
                 &protobuf_InitDefaults_response_2eproto_impl);
}
void protobuf_AddDesc_response_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_response_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016response.proto\022\010proto.db\032\031google/proto"
    "buf/any.proto\"O\n\010response\022\022\n\nsession_id\030"
    "\001 \001(\004\022\020\n\010err_code\030\002 \001(\r\022\014\n\004name\030\003 \001(\t\022\017\n"
    "\007content\030\004 \001(\tb\006proto3", 142);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "response.proto", &protobuf_RegisterTypes);
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_response_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_response_2eproto_once_);
void protobuf_AddDesc_response_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_response_2eproto_once_,
                 &protobuf_AddDesc_response_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_response_2eproto {
  StaticDescriptorInitializer_response_2eproto() {
    protobuf_AddDesc_response_2eproto();
  }
} static_descriptor_initializer_response_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int response::kSessionIdFieldNumber;
const int response::kErrCodeFieldNumber;
const int response::kNameFieldNumber;
const int response::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

response::response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_response_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.db.response)
}

void response::InitAsDefaultInstance() {
}

response::response(const response& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.db.response)
}

void response::SharedCtor() {
  dirty_ = false;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&session_id_, 0, reinterpret_cast<char*>(&err_code_) -
    reinterpret_cast<char*>(&session_id_) + sizeof(err_code_));
  _cached_size_ = 0;
}

response::~response() {
  // @@protoc_insertion_point(destructor:proto.db.response)
  SharedDtor();
}

void response::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* response::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return response_descriptor_;
}

const response& response::default_instance() {
  protobuf_InitDefaults_response_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<response> response_default_instance_;

response* response::New(::google::protobuf::Arena* arena) const {
  response* n = new response;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void response::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.db.response)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(response, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<response*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(session_id_, err_code_);
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.db.response)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 session_id = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &session_id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_err_code;
        break;
      }

      // optional uint32 err_code = 2;
      case 2: {
        if (tag == 16) {
         parse_err_code:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &err_code_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // optional string name = 3;
      case 3: {
        if (tag == 26) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.db.response.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_content;
        break;
      }

      // optional string content = 4;
      case 4: {
        if (tag == 34) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->content().data(), this->content().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.db.response.content"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.db.response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.db.response)
  return false;
#undef DO_
}

void response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.db.response)
  // optional uint64 session_id = 1;
  if (this->session_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->session_id(), output);
  }

  // optional uint32 err_code = 2;
  if (this->err_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->err_code(), output);
  }

  // optional string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.response.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // optional string content = 4;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.response.content");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->content(), output);
  }

  // @@protoc_insertion_point(serialize_end:proto.db.response)
}

::google::protobuf::uint8* response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.db.response)
  // optional uint64 session_id = 1;
  if (this->session_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->session_id(), target);
  }

  // optional uint32 err_code = 2;
  if (this->err_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->err_code(), target);
  }

  // optional string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.response.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // optional string content = 4;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.response.content");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->content(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:proto.db.response)
  return target;
}

size_t response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.db.response)
  size_t total_size = 0;

  // optional uint64 session_id = 1;
  if (this->session_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->session_id());
  }

  // optional uint32 err_code = 2;
  if (this->err_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->err_code());
  }

  // optional string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string content = 4;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->content());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.db.response)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.db.response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.db.response)
    UnsafeMergeFrom(*source);
  }
}

void response::MergeFrom(const response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.db.response)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void response::UnsafeMergeFrom(const response& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.session_id() != 0) {
    set_session_id(from.session_id());
  }
  if (from.err_code() != 0) {
    set_err_code(from.err_code());
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.content().size() > 0) {

    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
}

void response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.db.response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void response::CopyFrom(const response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.db.response)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool response::IsInitialized() const {

  return true;
}

void response::Swap(response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void response::InternalSwap(response* other) {
  std::swap(session_id_, other->session_id_);
  std::swap(err_code_, other->err_code_);
  name_.Swap(&other->name_);
  content_.Swap(&other->content_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata response::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = response_descriptor_;
  metadata.reflection = response_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// response

// optional uint64 session_id = 1;
void response::clear_session_id() {
  session_id_ = GOOGLE_ULONGLONG(0);
dirty_ = true;
}
::google::protobuf::uint64 response::session_id() const {
  // @@protoc_insertion_point(field_get:proto.db.response.session_id)
  return session_id_;
}
void response::set_session_id(::google::protobuf::uint64 value) {
  
  session_id_ = value;
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.session_id)
}

// optional uint32 err_code = 2;
void response::clear_err_code() {
  err_code_ = 0u;
dirty_ = true;
}
::google::protobuf::uint32 response::err_code() const {
  // @@protoc_insertion_point(field_get:proto.db.response.err_code)
  return err_code_;
}
void response::set_err_code(::google::protobuf::uint32 value) {
  
  err_code_ = value;
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.err_code)
}

// optional string name = 3;
void response::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
dirty_ = true;
}
const ::std::string& response::name() const {
  // @@protoc_insertion_point(field_get:proto.db.response.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void response::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.name)
}
void response::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_char:proto.db.response.name)
}
void response::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_pointer:proto.db.response.name)
}
::std::string* response::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:proto.db.response.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* response::release_name() {
  // @@protoc_insertion_point(field_release:proto.db.response.name)
  
  dirty_ = true;
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void response::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  dirty_ = true;
  // @@protoc_insertion_point(field_set_allocated:proto.db.response.name)
}

// optional string content = 4;
void response::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
dirty_ = true;
}
const ::std::string& response::content() const {
  // @@protoc_insertion_point(field_get:proto.db.response.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void response::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.content)
}
void response::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_char:proto.db.response.content)
}
void response::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_pointer:proto.db.response.content)
}
::std::string* response::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:proto.db.response.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* response::release_content() {
  // @@protoc_insertion_point(field_release:proto.db.response.content)
  
  dirty_ = true;
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void response::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  dirty_ = true;
  // @@protoc_insertion_point(field_set_allocated:proto.db.response.content)
}

inline const response* response::internal_default_instance() {
  return &response_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace db
}  // namespace proto

// @@protoc_insertion_point(global_scope)
