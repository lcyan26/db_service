// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response.proto

#ifndef PROTOBUF_response_2eproto__INCLUDED
#define PROTOBUF_response_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace db {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_response_2eproto();
void protobuf_InitDefaults_response_2eproto();
void protobuf_AssignDesc_response_2eproto();
void protobuf_ShutdownFile_response_2eproto();

class response;

// ===================================================================

class response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.db.response) */ {
 public:
  response();
  virtual ~response();

  response(const response& from);

  inline response& operator=(const response& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const response& default_instance();

  static const response* internal_default_instance();

  void Swap(response* other);

  // implements Message ----------------------------------------------

  inline response* New() const { return New(NULL); }

  response* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const response& from);
  void MergeFrom(const response& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(response* other);
  void UnsafeMergeFrom(const response& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  bool is_dirty() const { return dirty_; }
  void clear_dirty() { dirty_ = false; }
  // optional uint64 session_id = 1;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 1;
  ::google::protobuf::uint64 session_id() const;
  void set_session_id(::google::protobuf::uint64 value);

  // optional uint32 err_code = 2;
  void clear_err_code();
  static const int kErrCodeFieldNumber = 2;
  ::google::protobuf::uint32 err_code() const;
  void set_err_code(::google::protobuf::uint32 value);

  // optional string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string content = 4;
  void clear_content();
  static const int kContentFieldNumber = 4;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:proto.db.response)
 private:
  bool dirty_;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint64 session_id_;
  ::google::protobuf::uint32 err_code_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_response_2eproto_impl();
  friend void  protobuf_AddDesc_response_2eproto_impl();
  friend void protobuf_AssignDesc_response_2eproto();
  friend void protobuf_ShutdownFile_response_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<response> response_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// response

// optional uint64 session_id = 1;
inline void response::clear_session_id() {
  session_id_ = GOOGLE_ULONGLONG(0);
dirty_ = true;
}
inline ::google::protobuf::uint64 response::session_id() const {
  // @@protoc_insertion_point(field_get:proto.db.response.session_id)
  return session_id_;
}
inline void response::set_session_id(::google::protobuf::uint64 value) {
  
  session_id_ = value;
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.session_id)
}

// optional uint32 err_code = 2;
inline void response::clear_err_code() {
  err_code_ = 0u;
dirty_ = true;
}
inline ::google::protobuf::uint32 response::err_code() const {
  // @@protoc_insertion_point(field_get:proto.db.response.err_code)
  return err_code_;
}
inline void response::set_err_code(::google::protobuf::uint32 value) {
  
  err_code_ = value;
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.err_code)
}

// optional string name = 3;
inline void response::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
dirty_ = true;
}
inline const ::std::string& response::name() const {
  // @@protoc_insertion_point(field_get:proto.db.response.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void response::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.name)
}
inline void response::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_char:proto.db.response.name)
}
inline void response::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_pointer:proto.db.response.name)
}
inline ::std::string* response::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:proto.db.response.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* response::release_name() {
  // @@protoc_insertion_point(field_release:proto.db.response.name)
  
  dirty_ = true;
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void response::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  dirty_ = true;
  // @@protoc_insertion_point(field_set_allocated:proto.db.response.name)
}

// optional string content = 4;
inline void response::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
dirty_ = true;
}
inline const ::std::string& response::content() const {
  // @@protoc_insertion_point(field_get:proto.db.response.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void response::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  dirty_ = true;
  // @@protoc_insertion_point(field_set:proto.db.response.content)
}
inline void response::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_char:proto.db.response.content)
}
inline void response::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  dirty_ = true;
  // @@protoc_insertion_point(field_set_pointer:proto.db.response.content)
}
inline ::std::string* response::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:proto.db.response.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* response::release_content() {
  // @@protoc_insertion_point(field_release:proto.db.response.content)
  
  dirty_ = true;
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void response::set_allocated_content(::std::string* content) {
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
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace db
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_response_2eproto__INCLUDED