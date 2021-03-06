// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class Message;

// ===================================================================

class Message : public ::google::protobuf::Message {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  Message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // optional string from = 2;
  inline bool has_from() const;
  inline void clear_from();
  static const int kFromFieldNumber = 2;
  inline const ::std::string& from() const;
  inline void set_from(const ::std::string& value);
  inline void set_from(const char* value);
  inline void set_from(const char* value, size_t size);
  inline ::std::string* mutable_from();
  inline ::std::string* release_from();
  inline void set_allocated_from(::std::string* from);

  // optional string to = 3;
  inline bool has_to() const;
  inline void clear_to();
  static const int kToFieldNumber = 3;
  inline const ::std::string& to() const;
  inline void set_to(const ::std::string& value);
  inline void set_to(const char* value);
  inline void set_to(const char* value, size_t size);
  inline ::std::string* mutable_to();
  inline ::std::string* release_to();
  inline void set_allocated_to(::std::string* to);

  // required int32 type = 4;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 4;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // repeated .Header header = 5;
  inline int header_size() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 5;
  inline const ::Header& header(int index) const;
  inline ::Header* mutable_header(int index);
  inline ::Header* add_header();
  inline const ::google::protobuf::RepeatedPtrField< ::Header >&
      header() const;
  inline ::google::protobuf::RepeatedPtrField< ::Header >*
      mutable_header();

  // optional string body = 6;
  inline bool has_body() const;
  inline void clear_body();
  static const int kBodyFieldNumber = 6;
  inline const ::std::string& body() const;
  inline void set_body(const ::std::string& value);
  inline void set_body(const char* value);
  inline void set_body(const char* value, size_t size);
  inline ::std::string* mutable_body();
  inline ::std::string* release_body();
  inline void set_allocated_body(::std::string* body);

  // @@protoc_insertion_point(class_scope:Message)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_from();
  inline void clear_has_from();
  inline void set_has_to();
  inline void clear_has_to();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_body();
  inline void clear_has_body();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* id_;
  ::std::string* from_;
  ::std::string* to_;
  ::google::protobuf::RepeatedPtrField< ::Header > header_;
  ::std::string* body_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// ===================================================================


// ===================================================================

// Message

// optional string id = 1;
inline bool Message::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& Message::id() const {
  return *id_;
}
inline void Message::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Message::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Message::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* Message::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string from = 2;
inline bool Message::has_from() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::set_has_from() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message::clear_has_from() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message::clear_from() {
  if (from_ != &::google::protobuf::internal::kEmptyString) {
    from_->clear();
  }
  clear_has_from();
}
inline const ::std::string& Message::from() const {
  return *from_;
}
inline void Message::set_from(const ::std::string& value) {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  from_->assign(value);
}
inline void Message::set_from(const char* value) {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  from_->assign(value);
}
inline void Message::set_from(const char* value, size_t size) {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  from_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_from() {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  return from_;
}
inline ::std::string* Message::release_from() {
  clear_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = from_;
    from_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_from(::std::string* from) {
  if (from_ != &::google::protobuf::internal::kEmptyString) {
    delete from_;
  }
  if (from) {
    set_has_from();
    from_ = from;
  } else {
    clear_has_from();
    from_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string to = 3;
inline bool Message::has_to() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Message::set_has_to() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Message::clear_has_to() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Message::clear_to() {
  if (to_ != &::google::protobuf::internal::kEmptyString) {
    to_->clear();
  }
  clear_has_to();
}
inline const ::std::string& Message::to() const {
  return *to_;
}
inline void Message::set_to(const ::std::string& value) {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  to_->assign(value);
}
inline void Message::set_to(const char* value) {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  to_->assign(value);
}
inline void Message::set_to(const char* value, size_t size) {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  to_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_to() {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  return to_;
}
inline ::std::string* Message::release_to() {
  clear_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = to_;
    to_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_to(::std::string* to) {
  if (to_ != &::google::protobuf::internal::kEmptyString) {
    delete to_;
  }
  if (to) {
    set_has_to();
    to_ = to;
  } else {
    clear_has_to();
    to_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 type = 4;
inline bool Message::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Message::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Message::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Message::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 Message::type() const {
  return type_;
}
inline void Message::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// repeated .Header header = 5;
inline int Message::header_size() const {
  return header_.size();
}
inline void Message::clear_header() {
  header_.Clear();
}
inline const ::Header& Message::header(int index) const {
  return header_.Get(index);
}
inline ::Header* Message::mutable_header(int index) {
  return header_.Mutable(index);
}
inline ::Header* Message::add_header() {
  return header_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Header >&
Message::header() const {
  return header_;
}
inline ::google::protobuf::RepeatedPtrField< ::Header >*
Message::mutable_header() {
  return &header_;
}

// optional string body = 6;
inline bool Message::has_body() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Message::set_has_body() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Message::clear_has_body() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Message::clear_body() {
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    body_->clear();
  }
  clear_has_body();
}
inline const ::std::string& Message::body() const {
  return *body_;
}
inline void Message::set_body(const ::std::string& value) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(value);
}
inline void Message::set_body(const char* value) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(value);
}
inline void Message::set_body(const char* value, size_t size) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_body() {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  return body_;
}
inline ::std::string* Message::release_body() {
  clear_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = body_;
    body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_body(::std::string* body) {
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    delete body_;
  }
  if (body) {
    set_has_body();
    body_ = body;
  } else {
    clear_has_body();
    body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
