// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: call_command.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "call_command.pb.h"

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

const ::google::protobuf::Descriptor* call_command_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  call_command_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_call_5fcommand_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_call_5fcommand_2eproto() {
  protobuf_AddDesc_call_5fcommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "call_command.proto");
  GOOGLE_CHECK(file != NULL);
  call_command_descriptor_ = file->message_type(0);
  static const int call_command_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(call_command, sql_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(call_command, args_),
  };
  call_command_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      call_command_descriptor_,
      call_command::internal_default_instance(),
      call_command_offsets_,
      -1,
      -1,
      -1,
      sizeof(call_command),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(call_command, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_call_5fcommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      call_command_descriptor_, call_command::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_call_5fcommand_2eproto() {
  call_command_default_instance_.Shutdown();
  delete call_command_reflection_;
}

void protobuf_InitDefaults_call_5fcommand_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  call_command_default_instance_.DefaultConstruct();
  call_command_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_call_5fcommand_2eproto_once_);
void protobuf_InitDefaults_call_5fcommand_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_call_5fcommand_2eproto_once_,
                 &protobuf_InitDefaults_call_5fcommand_2eproto_impl);
}
void protobuf_AddDesc_call_5fcommand_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_call_5fcommand_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022call_command.proto\022\010proto.db\")\n\014call_c"
    "ommand\022\013\n\003sql\030\001 \001(\t\022\014\n\004args\030\002 \003(\tb\006proto"
    "3", 81);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "call_command.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_call_5fcommand_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_call_5fcommand_2eproto_once_);
void protobuf_AddDesc_call_5fcommand_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_call_5fcommand_2eproto_once_,
                 &protobuf_AddDesc_call_5fcommand_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_call_5fcommand_2eproto {
  StaticDescriptorInitializer_call_5fcommand_2eproto() {
    protobuf_AddDesc_call_5fcommand_2eproto();
  }
} static_descriptor_initializer_call_5fcommand_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int call_command::kSqlFieldNumber;
const int call_command::kArgsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

call_command::call_command()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_call_5fcommand_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.db.call_command)
}

void call_command::InitAsDefaultInstance() {
}

call_command::call_command(const call_command& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.db.call_command)
}

void call_command::SharedCtor() {
  dirty_ = false;
  sql_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

call_command::~call_command() {
  // @@protoc_insertion_point(destructor:proto.db.call_command)
  SharedDtor();
}

void call_command::SharedDtor() {
  sql_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void call_command::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* call_command::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return call_command_descriptor_;
}

const call_command& call_command::default_instance() {
  protobuf_InitDefaults_call_5fcommand_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<call_command> call_command_default_instance_;

call_command* call_command::New(::google::protobuf::Arena* arena) const {
  call_command* n = new call_command;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void call_command::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.db.call_command)
  sql_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  args_.Clear();
}

bool call_command::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.db.call_command)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string sql = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sql()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sql().data(), this->sql().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.db.call_command.sql"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_args;
        break;
      }

      // repeated string args = 2;
      case 2: {
        if (tag == 18) {
         parse_args:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_args()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->args(this->args_size() - 1).data(),
            this->args(this->args_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.db.call_command.args"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_args;
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
  // @@protoc_insertion_point(parse_success:proto.db.call_command)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.db.call_command)
  return false;
#undef DO_
}

void call_command::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.db.call_command)
  // optional string sql = 1;
  if (this->sql().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sql().data(), this->sql().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.call_command.sql");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->sql(), output);
  }

  // repeated string args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->args(i).data(), this->args(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.call_command.args");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->args(i), output);
  }

  // @@protoc_insertion_point(serialize_end:proto.db.call_command)
}

::google::protobuf::uint8* call_command::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.db.call_command)
  // optional string sql = 1;
  if (this->sql().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sql().data(), this->sql().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.call_command.sql");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->sql(), target);
  }

  // repeated string args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->args(i).data(), this->args(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.db.call_command.args");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->args(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:proto.db.call_command)
  return target;
}

size_t call_command::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.db.call_command)
  size_t total_size = 0;

  // optional string sql = 1;
  if (this->sql().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sql());
  }

  // repeated string args = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->args_size());
  for (int i = 0; i < this->args_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->args(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void call_command::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.db.call_command)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const call_command* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const call_command>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.db.call_command)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.db.call_command)
    UnsafeMergeFrom(*source);
  }
}

void call_command::MergeFrom(const call_command& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.db.call_command)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void call_command::UnsafeMergeFrom(const call_command& from) {
  GOOGLE_DCHECK(&from != this);
  args_.UnsafeMergeFrom(from.args_);
  if (from.sql().size() > 0) {

    sql_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sql_);
  }
}

void call_command::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.db.call_command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void call_command::CopyFrom(const call_command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.db.call_command)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool call_command::IsInitialized() const {

  return true;
}

void call_command::Swap(call_command* other) {
  if (other == this) return;
  InternalSwap(other);
}
void call_command::InternalSwap(call_command* other) {
  sql_.Swap(&other->sql_);
  args_.UnsafeArenaSwap(&other->args_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata call_command::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = call_command_descriptor_;
  metadata.reflection = call_command_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// call_command

// optional string sql = 1;
void call_command::clear_sql() {
  sql_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
dirty_ = true;
}
const ::std::string& call_command::sql() const {
  // @@protoc_insertion_point(field_get:proto.db.call_command.sql)
  return sql_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void call_command::set_sql(const ::std::string& value) {
  
  sql_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.call_command.sql)
}
void call_command::set_sql(const char* value) {
  
  sql_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_char:proto.db.call_command.sql)
}
void call_command::set_sql(const char* value, size_t size) {
  
  sql_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_pointer:proto.db.call_command.sql)
}
::std::string* call_command::mutable_sql() {
  
  // @@protoc_insertion_point(field_mutable:proto.db.call_command.sql)
  return sql_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* call_command::release_sql() {
  // @@protoc_insertion_point(field_release:proto.db.call_command.sql)
  
  dirty_ = true;
  return sql_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void call_command::set_allocated_sql(::std::string* sql) {
  if (sql != NULL) {
    
  } else {
    
  }
  sql_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sql);
  dirty_ = true;
  // @@protoc_insertion_point(field_set_allocated:proto.db.call_command.sql)
}

// repeated string args = 2;
int call_command::args_size() const {
  return args_.size();
}
void call_command::clear_args() {
  args_.Clear();
dirty_ = true;
}
const ::std::string& call_command::args(int index) const {
  // @@protoc_insertion_point(field_get:proto.db.call_command.args)
  return args_.Get(index);
}
::std::string* call_command::mutable_args(int index) {
  // @@protoc_insertion_point(field_mutable:proto.db.call_command.args)
  return args_.Mutable(index);
}
void call_command::set_args(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:proto.db.call_command.args)
  dirty_ = true;
  args_.Mutable(index)->assign(value);
}
void call_command::set_args(int index, const char* value) {
  args_.Mutable(index)->assign(value);
  dirty_ = true;
  // @@protoc_insertion_point(field_set_char:proto.db.call_command.args)
}
void call_command::set_args(int index, const char* value, size_t size) {
  args_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  dirty_ = true;
  // @@protoc_insertion_point(field_set_pointer:proto.db.call_command.args)
}
::std::string* call_command::add_args() {
  // @@protoc_insertion_point(field_add_mutable:proto.db.call_command.args)
  dirty_ = true;
  return args_.Add();
}
void call_command::add_args(const ::std::string& value) {
  args_.Add()->assign(value);
  dirty_ = true;
  // @@protoc_insertion_point(field_add:proto.db.call_command.args)
}
void call_command::add_args(const char* value) {
  args_.Add()->assign(value);
  dirty_ = true;
  // @@protoc_insertion_point(field_add_char:proto.db.call_command.args)
}
void call_command::add_args(const char* value, size_t size) {
  args_.Add()->assign(reinterpret_cast<const char*>(value), size);
  dirty_ = true;
  // @@protoc_insertion_point(field_add_pointer:proto.db.call_command.args)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
call_command::args() const {
  // @@protoc_insertion_point(field_list:proto.db.call_command.args)
  return args_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
call_command::mutable_args() {
  // @@protoc_insertion_point(field_mutable_list:proto.db.call_command.args)
  return &args_;
}

inline const call_command* call_command::internal_default_instance() {
  return &call_command_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace db
}  // namespace proto

// @@protoc_insertion_point(global_scope)