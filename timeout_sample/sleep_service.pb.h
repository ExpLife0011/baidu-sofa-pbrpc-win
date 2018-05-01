// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sleep_service.proto

#ifndef PROTOBUF_sleep_5fservice_2eproto__INCLUDED
#define PROTOBUF_sleep_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/service.h>
#include "sofa/pbrpc/rpc_option.pb.h"
// @@protoc_insertion_point(includes)

namespace sofa {
namespace pbrpc {
namespace test {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sleep_5fservice_2eproto();
void protobuf_AssignDesc_sleep_5fservice_2eproto();
void protobuf_ShutdownFile_sleep_5fservice_2eproto();

class SleepRequest;
class SleepResponse;

// ===================================================================

class SleepRequest : public ::google::protobuf::Message {
 public:
  SleepRequest();
  virtual ~SleepRequest();
  
  SleepRequest(const SleepRequest& from);
  
  inline SleepRequest& operator=(const SleepRequest& from) {
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
  static const SleepRequest& default_instance();
  
  void Swap(SleepRequest* other);
  
  // implements Message ----------------------------------------------
  
  SleepRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SleepRequest& from);
  void MergeFrom(const SleepRequest& from);
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
  
  // required int32 sleep_time = 1;
  inline bool has_sleep_time() const;
  inline void clear_sleep_time();
  static const int kSleepTimeFieldNumber = 1;
  inline ::google::protobuf::int32 sleep_time() const;
  inline void set_sleep_time(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:sofa.pbrpc.test.SleepRequest)
 private:
  inline void set_has_sleep_time();
  inline void clear_has_sleep_time();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 sleep_time_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_sleep_5fservice_2eproto();
  friend void protobuf_AssignDesc_sleep_5fservice_2eproto();
  friend void protobuf_ShutdownFile_sleep_5fservice_2eproto();
  
  void InitAsDefaultInstance();
  static SleepRequest* default_instance_;
};
// -------------------------------------------------------------------

class SleepResponse : public ::google::protobuf::Message {
 public:
  SleepResponse();
  virtual ~SleepResponse();
  
  SleepResponse(const SleepResponse& from);
  
  inline SleepResponse& operator=(const SleepResponse& from) {
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
  static const SleepResponse& default_instance();
  
  void Swap(SleepResponse* other);
  
  // implements Message ----------------------------------------------
  
  SleepResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SleepResponse& from);
  void MergeFrom(const SleepResponse& from);
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
  
  // required string message = 1;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 1;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  
  // @@protoc_insertion_point(class_scope:sofa.pbrpc.test.SleepResponse)
 private:
  inline void set_has_message();
  inline void clear_has_message();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* message_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_sleep_5fservice_2eproto();
  friend void protobuf_AssignDesc_sleep_5fservice_2eproto();
  friend void protobuf_ShutdownFile_sleep_5fservice_2eproto();
  
  void InitAsDefaultInstance();
  static SleepResponse* default_instance_;
};
// ===================================================================

class SleepServer_Stub;

class SleepServer : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline SleepServer() {};
 public:
  virtual ~SleepServer();
  
  typedef SleepServer_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual void SleepWithServiceTimeout(::google::protobuf::RpcController* controller,
                       const ::sofa::pbrpc::test::SleepRequest* request,
                       ::sofa::pbrpc::test::SleepResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void SleepWithMethodTimeout(::google::protobuf::RpcController* controller,
                       const ::sofa::pbrpc::test::SleepRequest* request,
                       ::sofa::pbrpc::test::SleepResponse* response,
                       ::google::protobuf::Closure* done);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SleepServer);
};

class SleepServer_Stub : public SleepServer {
 public:
  SleepServer_Stub(::google::protobuf::RpcChannel* channel);
  SleepServer_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~SleepServer_Stub();
  
  inline ::google::protobuf::RpcChannel* channel() { return channel_; }
  
  // implements SleepServer ------------------------------------------
  
  void SleepWithServiceTimeout(::google::protobuf::RpcController* controller,
                       const ::sofa::pbrpc::test::SleepRequest* request,
                       ::sofa::pbrpc::test::SleepResponse* response,
                       ::google::protobuf::Closure* done);
  void SleepWithMethodTimeout(::google::protobuf::RpcController* controller,
                       const ::sofa::pbrpc::test::SleepRequest* request,
                       ::sofa::pbrpc::test::SleepResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SleepServer_Stub);
};


// ===================================================================


// ===================================================================

// SleepRequest

// required int32 sleep_time = 1;
inline bool SleepRequest::has_sleep_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SleepRequest::set_has_sleep_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SleepRequest::clear_has_sleep_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SleepRequest::clear_sleep_time() {
  sleep_time_ = 0;
  clear_has_sleep_time();
}
inline ::google::protobuf::int32 SleepRequest::sleep_time() const {
  return sleep_time_;
}
inline void SleepRequest::set_sleep_time(::google::protobuf::int32 value) {
  set_has_sleep_time();
  sleep_time_ = value;
}

// -------------------------------------------------------------------

// SleepResponse

// required string message = 1;
inline bool SleepResponse::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SleepResponse::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SleepResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SleepResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& SleepResponse::message() const {
  return *message_;
}
inline void SleepResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void SleepResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void SleepResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SleepResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* SleepResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace test
}  // namespace pbrpc
}  // namespace sofa

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sleep_5fservice_2eproto__INCLUDED