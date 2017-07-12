// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file_transfer_session.proto

#ifndef PROTOBUF_file_5ftransfer_5fsession_2eproto__INCLUDED
#define PROTOBUF_file_5ftransfer_5fsession_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "file_transfer_session_message.pb.h"
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class CreateDirectoryRequest;
class CreateDirectoryRequestDefaultTypeInternal;
extern CreateDirectoryRequestDefaultTypeInternal _CreateDirectoryRequest_default_instance_;
class DirectorySize;
class DirectorySizeDefaultTypeInternal;
extern DirectorySizeDefaultTypeInternal _DirectorySize_default_instance_;
class DirectorySizeRequest;
class DirectorySizeRequestDefaultTypeInternal;
extern DirectorySizeRequestDefaultTypeInternal _DirectorySizeRequest_default_instance_;
class DriveList;
class DriveListDefaultTypeInternal;
extern DriveListDefaultTypeInternal _DriveList_default_instance_;
class DriveList_Item;
class DriveList_ItemDefaultTypeInternal;
extern DriveList_ItemDefaultTypeInternal _DriveList_Item_default_instance_;
class FileDownloadRequest;
class FileDownloadRequestDefaultTypeInternal;
extern FileDownloadRequestDefaultTypeInternal _FileDownloadRequest_default_instance_;
class FileList;
class FileListDefaultTypeInternal;
extern FileListDefaultTypeInternal _FileList_default_instance_;
class FileListRequest;
class FileListRequestDefaultTypeInternal;
extern FileListRequestDefaultTypeInternal _FileListRequest_default_instance_;
class FileList_Item;
class FileList_ItemDefaultTypeInternal;
extern FileList_ItemDefaultTypeInternal _FileList_Item_default_instance_;
class FilePacket;
class FilePacketDefaultTypeInternal;
extern FilePacketDefaultTypeInternal _FilePacket_default_instance_;
class FileUploadRequest;
class FileUploadRequestDefaultTypeInternal;
extern FileUploadRequestDefaultTypeInternal _FileUploadRequest_default_instance_;
class RemoveRequest;
class RemoveRequestDefaultTypeInternal;
extern RemoveRequestDefaultTypeInternal _RemoveRequest_default_instance_;
class RenameRequest;
class RenameRequestDefaultTypeInternal;
extern RenameRequestDefaultTypeInternal _RenameRequest_default_instance_;
namespace file_transfer {
class ClientToHost;
class ClientToHostDefaultTypeInternal;
extern ClientToHostDefaultTypeInternal _ClientToHost_default_instance_;
class HostToClient;
class HostToClientDefaultTypeInternal;
extern HostToClientDefaultTypeInternal _HostToClient_default_instance_;
}  // namespace file_transfer
}  // namespace proto
}  // namespace aspia

namespace aspia {
namespace proto {
namespace file_transfer {

namespace protobuf_file_5ftransfer_5fsession_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_file_5ftransfer_5fsession_2eproto

// ===================================================================

class HostToClient : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.file_transfer.HostToClient) */ {
 public:
  HostToClient();
  virtual ~HostToClient();

  HostToClient(const HostToClient& from);

  inline HostToClient& operator=(const HostToClient& from) {
    CopyFrom(from);
    return *this;
  }

  static const HostToClient& default_instance();

  static inline const HostToClient* internal_default_instance() {
    return reinterpret_cast<const HostToClient*>(
               &_HostToClient_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HostToClient* other);

  // implements Message ----------------------------------------------

  inline HostToClient* New() const PROTOBUF_FINAL { return New(NULL); }

  HostToClient* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const HostToClient& from);
  void MergeFrom(const HostToClient& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HostToClient* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .aspia.proto.DriveList drive_list = 3;
  bool has_drive_list() const;
  void clear_drive_list();
  static const int kDriveListFieldNumber = 3;
  const ::aspia::proto::DriveList& drive_list() const;
  ::aspia::proto::DriveList* mutable_drive_list();
  ::aspia::proto::DriveList* release_drive_list();
  void set_allocated_drive_list(::aspia::proto::DriveList* drive_list);

  // .aspia.proto.FileList file_list = 4;
  bool has_file_list() const;
  void clear_file_list();
  static const int kFileListFieldNumber = 4;
  const ::aspia::proto::FileList& file_list() const;
  ::aspia::proto::FileList* mutable_file_list();
  ::aspia::proto::FileList* release_file_list();
  void set_allocated_file_list(::aspia::proto::FileList* file_list);

  // .aspia.proto.DirectorySize directory_size = 5;
  bool has_directory_size() const;
  void clear_directory_size();
  static const int kDirectorySizeFieldNumber = 5;
  const ::aspia::proto::DirectorySize& directory_size() const;
  ::aspia::proto::DirectorySize* mutable_directory_size();
  ::aspia::proto::DirectorySize* release_directory_size();
  void set_allocated_directory_size(::aspia::proto::DirectorySize* directory_size);

  // .aspia.proto.FilePacket file_packet = 6;
  bool has_file_packet() const;
  void clear_file_packet();
  static const int kFilePacketFieldNumber = 6;
  const ::aspia::proto::FilePacket& file_packet() const;
  ::aspia::proto::FilePacket* mutable_file_packet();
  ::aspia::proto::FilePacket* release_file_packet();
  void set_allocated_file_packet(::aspia::proto::FilePacket* file_packet);

  // .aspia.proto.RequestType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::aspia::proto::RequestType type() const;
  void set_type(::aspia::proto::RequestType value);

  // .aspia.proto.RequestStatus status = 2;
  void clear_status();
  static const int kStatusFieldNumber = 2;
  ::aspia::proto::RequestStatus status() const;
  void set_status(::aspia::proto::RequestStatus value);

  // @@protoc_insertion_point(class_scope:aspia.proto.file_transfer.HostToClient)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::aspia::proto::DriveList* drive_list_;
  ::aspia::proto::FileList* file_list_;
  ::aspia::proto::DirectorySize* directory_size_;
  ::aspia::proto::FilePacket* file_packet_;
  int type_;
  int status_;
  mutable int _cached_size_;
  friend struct protobuf_file_5ftransfer_5fsession_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClientToHost : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.file_transfer.ClientToHost) */ {
 public:
  ClientToHost();
  virtual ~ClientToHost();

  ClientToHost(const ClientToHost& from);

  inline ClientToHost& operator=(const ClientToHost& from) {
    CopyFrom(from);
    return *this;
  }

  static const ClientToHost& default_instance();

  static inline const ClientToHost* internal_default_instance() {
    return reinterpret_cast<const ClientToHost*>(
               &_ClientToHost_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ClientToHost* other);

  // implements Message ----------------------------------------------

  inline ClientToHost* New() const PROTOBUF_FINAL { return New(NULL); }

  ClientToHost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClientToHost& from);
  void MergeFrom(const ClientToHost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientToHost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .aspia.proto.FileListRequest file_list_request = 2;
  bool has_file_list_request() const;
  void clear_file_list_request();
  static const int kFileListRequestFieldNumber = 2;
  const ::aspia::proto::FileListRequest& file_list_request() const;
  ::aspia::proto::FileListRequest* mutable_file_list_request();
  ::aspia::proto::FileListRequest* release_file_list_request();
  void set_allocated_file_list_request(::aspia::proto::FileListRequest* file_list_request);

  // .aspia.proto.DirectorySizeRequest directory_size_request = 3;
  bool has_directory_size_request() const;
  void clear_directory_size_request();
  static const int kDirectorySizeRequestFieldNumber = 3;
  const ::aspia::proto::DirectorySizeRequest& directory_size_request() const;
  ::aspia::proto::DirectorySizeRequest* mutable_directory_size_request();
  ::aspia::proto::DirectorySizeRequest* release_directory_size_request();
  void set_allocated_directory_size_request(::aspia::proto::DirectorySizeRequest* directory_size_request);

  // .aspia.proto.CreateDirectoryRequest create_directory_request = 4;
  bool has_create_directory_request() const;
  void clear_create_directory_request();
  static const int kCreateDirectoryRequestFieldNumber = 4;
  const ::aspia::proto::CreateDirectoryRequest& create_directory_request() const;
  ::aspia::proto::CreateDirectoryRequest* mutable_create_directory_request();
  ::aspia::proto::CreateDirectoryRequest* release_create_directory_request();
  void set_allocated_create_directory_request(::aspia::proto::CreateDirectoryRequest* create_directory_request);

  // .aspia.proto.RenameRequest rename_request = 5;
  bool has_rename_request() const;
  void clear_rename_request();
  static const int kRenameRequestFieldNumber = 5;
  const ::aspia::proto::RenameRequest& rename_request() const;
  ::aspia::proto::RenameRequest* mutable_rename_request();
  ::aspia::proto::RenameRequest* release_rename_request();
  void set_allocated_rename_request(::aspia::proto::RenameRequest* rename_request);

  // .aspia.proto.RemoveRequest remove_request = 6;
  bool has_remove_request() const;
  void clear_remove_request();
  static const int kRemoveRequestFieldNumber = 6;
  const ::aspia::proto::RemoveRequest& remove_request() const;
  ::aspia::proto::RemoveRequest* mutable_remove_request();
  ::aspia::proto::RemoveRequest* release_remove_request();
  void set_allocated_remove_request(::aspia::proto::RemoveRequest* remove_request);

  // .aspia.proto.FileDownloadRequest file_download_request = 7;
  bool has_file_download_request() const;
  void clear_file_download_request();
  static const int kFileDownloadRequestFieldNumber = 7;
  const ::aspia::proto::FileDownloadRequest& file_download_request() const;
  ::aspia::proto::FileDownloadRequest* mutable_file_download_request();
  ::aspia::proto::FileDownloadRequest* release_file_download_request();
  void set_allocated_file_download_request(::aspia::proto::FileDownloadRequest* file_download_request);

  // .aspia.proto.FileUploadRequest file_upload_request = 8;
  bool has_file_upload_request() const;
  void clear_file_upload_request();
  static const int kFileUploadRequestFieldNumber = 8;
  const ::aspia::proto::FileUploadRequest& file_upload_request() const;
  ::aspia::proto::FileUploadRequest* mutable_file_upload_request();
  ::aspia::proto::FileUploadRequest* release_file_upload_request();
  void set_allocated_file_upload_request(::aspia::proto::FileUploadRequest* file_upload_request);

  // .aspia.proto.FilePacket file_packet = 9;
  bool has_file_packet() const;
  void clear_file_packet();
  static const int kFilePacketFieldNumber = 9;
  const ::aspia::proto::FilePacket& file_packet() const;
  ::aspia::proto::FilePacket* mutable_file_packet();
  ::aspia::proto::FilePacket* release_file_packet();
  void set_allocated_file_packet(::aspia::proto::FilePacket* file_packet);

  // .aspia.proto.RequestType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::aspia::proto::RequestType type() const;
  void set_type(::aspia::proto::RequestType value);

  // @@protoc_insertion_point(class_scope:aspia.proto.file_transfer.ClientToHost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::aspia::proto::FileListRequest* file_list_request_;
  ::aspia::proto::DirectorySizeRequest* directory_size_request_;
  ::aspia::proto::CreateDirectoryRequest* create_directory_request_;
  ::aspia::proto::RenameRequest* rename_request_;
  ::aspia::proto::RemoveRequest* remove_request_;
  ::aspia::proto::FileDownloadRequest* file_download_request_;
  ::aspia::proto::FileUploadRequest* file_upload_request_;
  ::aspia::proto::FilePacket* file_packet_;
  int type_;
  mutable int _cached_size_;
  friend struct protobuf_file_5ftransfer_5fsession_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HostToClient

// .aspia.proto.RequestType type = 1;
inline void HostToClient::clear_type() {
  type_ = 0;
}
inline ::aspia::proto::RequestType HostToClient::type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.type)
  return static_cast< ::aspia::proto::RequestType >(type_);
}
inline void HostToClient::set_type(::aspia::proto::RequestType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.file_transfer.HostToClient.type)
}

// .aspia.proto.RequestStatus status = 2;
inline void HostToClient::clear_status() {
  status_ = 0;
}
inline ::aspia::proto::RequestStatus HostToClient::status() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.status)
  return static_cast< ::aspia::proto::RequestStatus >(status_);
}
inline void HostToClient::set_status(::aspia::proto::RequestStatus value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.file_transfer.HostToClient.status)
}

// .aspia.proto.DriveList drive_list = 3;
inline bool HostToClient::has_drive_list() const {
  return this != internal_default_instance() && drive_list_ != NULL;
}
inline void HostToClient::clear_drive_list() {
  if (GetArenaNoVirtual() == NULL && drive_list_ != NULL) delete drive_list_;
  drive_list_ = NULL;
}
inline const ::aspia::proto::DriveList& HostToClient::drive_list() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.drive_list)
  return drive_list_ != NULL ? *drive_list_
                         : *::aspia::proto::DriveList::internal_default_instance();
}
inline ::aspia::proto::DriveList* HostToClient::mutable_drive_list() {
  
  if (drive_list_ == NULL) {
    drive_list_ = new ::aspia::proto::DriveList;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.drive_list)
  return drive_list_;
}
inline ::aspia::proto::DriveList* HostToClient::release_drive_list() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.drive_list)
  
  ::aspia::proto::DriveList* temp = drive_list_;
  drive_list_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_drive_list(::aspia::proto::DriveList* drive_list) {
  delete drive_list_;
  drive_list_ = drive_list;
  if (drive_list) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.drive_list)
}

// .aspia.proto.FileList file_list = 4;
inline bool HostToClient::has_file_list() const {
  return this != internal_default_instance() && file_list_ != NULL;
}
inline void HostToClient::clear_file_list() {
  if (GetArenaNoVirtual() == NULL && file_list_ != NULL) delete file_list_;
  file_list_ = NULL;
}
inline const ::aspia::proto::FileList& HostToClient::file_list() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.file_list)
  return file_list_ != NULL ? *file_list_
                         : *::aspia::proto::FileList::internal_default_instance();
}
inline ::aspia::proto::FileList* HostToClient::mutable_file_list() {
  
  if (file_list_ == NULL) {
    file_list_ = new ::aspia::proto::FileList;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.file_list)
  return file_list_;
}
inline ::aspia::proto::FileList* HostToClient::release_file_list() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.file_list)
  
  ::aspia::proto::FileList* temp = file_list_;
  file_list_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_file_list(::aspia::proto::FileList* file_list) {
  delete file_list_;
  file_list_ = file_list;
  if (file_list) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.file_list)
}

// .aspia.proto.DirectorySize directory_size = 5;
inline bool HostToClient::has_directory_size() const {
  return this != internal_default_instance() && directory_size_ != NULL;
}
inline void HostToClient::clear_directory_size() {
  if (GetArenaNoVirtual() == NULL && directory_size_ != NULL) delete directory_size_;
  directory_size_ = NULL;
}
inline const ::aspia::proto::DirectorySize& HostToClient::directory_size() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.directory_size)
  return directory_size_ != NULL ? *directory_size_
                         : *::aspia::proto::DirectorySize::internal_default_instance();
}
inline ::aspia::proto::DirectorySize* HostToClient::mutable_directory_size() {
  
  if (directory_size_ == NULL) {
    directory_size_ = new ::aspia::proto::DirectorySize;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.directory_size)
  return directory_size_;
}
inline ::aspia::proto::DirectorySize* HostToClient::release_directory_size() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.directory_size)
  
  ::aspia::proto::DirectorySize* temp = directory_size_;
  directory_size_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_directory_size(::aspia::proto::DirectorySize* directory_size) {
  delete directory_size_;
  directory_size_ = directory_size;
  if (directory_size) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.directory_size)
}

// .aspia.proto.FilePacket file_packet = 6;
inline bool HostToClient::has_file_packet() const {
  return this != internal_default_instance() && file_packet_ != NULL;
}
inline void HostToClient::clear_file_packet() {
  if (GetArenaNoVirtual() == NULL && file_packet_ != NULL) delete file_packet_;
  file_packet_ = NULL;
}
inline const ::aspia::proto::FilePacket& HostToClient::file_packet() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.file_packet)
  return file_packet_ != NULL ? *file_packet_
                         : *::aspia::proto::FilePacket::internal_default_instance();
}
inline ::aspia::proto::FilePacket* HostToClient::mutable_file_packet() {
  
  if (file_packet_ == NULL) {
    file_packet_ = new ::aspia::proto::FilePacket;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.file_packet)
  return file_packet_;
}
inline ::aspia::proto::FilePacket* HostToClient::release_file_packet() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.file_packet)
  
  ::aspia::proto::FilePacket* temp = file_packet_;
  file_packet_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_file_packet(::aspia::proto::FilePacket* file_packet) {
  delete file_packet_;
  file_packet_ = file_packet;
  if (file_packet) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.file_packet)
}

// -------------------------------------------------------------------

// ClientToHost

// .aspia.proto.RequestType type = 1;
inline void ClientToHost::clear_type() {
  type_ = 0;
}
inline ::aspia::proto::RequestType ClientToHost::type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.type)
  return static_cast< ::aspia::proto::RequestType >(type_);
}
inline void ClientToHost::set_type(::aspia::proto::RequestType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.file_transfer.ClientToHost.type)
}

// .aspia.proto.FileListRequest file_list_request = 2;
inline bool ClientToHost::has_file_list_request() const {
  return this != internal_default_instance() && file_list_request_ != NULL;
}
inline void ClientToHost::clear_file_list_request() {
  if (GetArenaNoVirtual() == NULL && file_list_request_ != NULL) delete file_list_request_;
  file_list_request_ = NULL;
}
inline const ::aspia::proto::FileListRequest& ClientToHost::file_list_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.file_list_request)
  return file_list_request_ != NULL ? *file_list_request_
                         : *::aspia::proto::FileListRequest::internal_default_instance();
}
inline ::aspia::proto::FileListRequest* ClientToHost::mutable_file_list_request() {
  
  if (file_list_request_ == NULL) {
    file_list_request_ = new ::aspia::proto::FileListRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.file_list_request)
  return file_list_request_;
}
inline ::aspia::proto::FileListRequest* ClientToHost::release_file_list_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.file_list_request)
  
  ::aspia::proto::FileListRequest* temp = file_list_request_;
  file_list_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_file_list_request(::aspia::proto::FileListRequest* file_list_request) {
  delete file_list_request_;
  file_list_request_ = file_list_request;
  if (file_list_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.file_list_request)
}

// .aspia.proto.DirectorySizeRequest directory_size_request = 3;
inline bool ClientToHost::has_directory_size_request() const {
  return this != internal_default_instance() && directory_size_request_ != NULL;
}
inline void ClientToHost::clear_directory_size_request() {
  if (GetArenaNoVirtual() == NULL && directory_size_request_ != NULL) delete directory_size_request_;
  directory_size_request_ = NULL;
}
inline const ::aspia::proto::DirectorySizeRequest& ClientToHost::directory_size_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.directory_size_request)
  return directory_size_request_ != NULL ? *directory_size_request_
                         : *::aspia::proto::DirectorySizeRequest::internal_default_instance();
}
inline ::aspia::proto::DirectorySizeRequest* ClientToHost::mutable_directory_size_request() {
  
  if (directory_size_request_ == NULL) {
    directory_size_request_ = new ::aspia::proto::DirectorySizeRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.directory_size_request)
  return directory_size_request_;
}
inline ::aspia::proto::DirectorySizeRequest* ClientToHost::release_directory_size_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.directory_size_request)
  
  ::aspia::proto::DirectorySizeRequest* temp = directory_size_request_;
  directory_size_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_directory_size_request(::aspia::proto::DirectorySizeRequest* directory_size_request) {
  delete directory_size_request_;
  directory_size_request_ = directory_size_request;
  if (directory_size_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.directory_size_request)
}

// .aspia.proto.CreateDirectoryRequest create_directory_request = 4;
inline bool ClientToHost::has_create_directory_request() const {
  return this != internal_default_instance() && create_directory_request_ != NULL;
}
inline void ClientToHost::clear_create_directory_request() {
  if (GetArenaNoVirtual() == NULL && create_directory_request_ != NULL) delete create_directory_request_;
  create_directory_request_ = NULL;
}
inline const ::aspia::proto::CreateDirectoryRequest& ClientToHost::create_directory_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.create_directory_request)
  return create_directory_request_ != NULL ? *create_directory_request_
                         : *::aspia::proto::CreateDirectoryRequest::internal_default_instance();
}
inline ::aspia::proto::CreateDirectoryRequest* ClientToHost::mutable_create_directory_request() {
  
  if (create_directory_request_ == NULL) {
    create_directory_request_ = new ::aspia::proto::CreateDirectoryRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.create_directory_request)
  return create_directory_request_;
}
inline ::aspia::proto::CreateDirectoryRequest* ClientToHost::release_create_directory_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.create_directory_request)
  
  ::aspia::proto::CreateDirectoryRequest* temp = create_directory_request_;
  create_directory_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_create_directory_request(::aspia::proto::CreateDirectoryRequest* create_directory_request) {
  delete create_directory_request_;
  create_directory_request_ = create_directory_request;
  if (create_directory_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.create_directory_request)
}

// .aspia.proto.RenameRequest rename_request = 5;
inline bool ClientToHost::has_rename_request() const {
  return this != internal_default_instance() && rename_request_ != NULL;
}
inline void ClientToHost::clear_rename_request() {
  if (GetArenaNoVirtual() == NULL && rename_request_ != NULL) delete rename_request_;
  rename_request_ = NULL;
}
inline const ::aspia::proto::RenameRequest& ClientToHost::rename_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.rename_request)
  return rename_request_ != NULL ? *rename_request_
                         : *::aspia::proto::RenameRequest::internal_default_instance();
}
inline ::aspia::proto::RenameRequest* ClientToHost::mutable_rename_request() {
  
  if (rename_request_ == NULL) {
    rename_request_ = new ::aspia::proto::RenameRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.rename_request)
  return rename_request_;
}
inline ::aspia::proto::RenameRequest* ClientToHost::release_rename_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.rename_request)
  
  ::aspia::proto::RenameRequest* temp = rename_request_;
  rename_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_rename_request(::aspia::proto::RenameRequest* rename_request) {
  delete rename_request_;
  rename_request_ = rename_request;
  if (rename_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.rename_request)
}

// .aspia.proto.RemoveRequest remove_request = 6;
inline bool ClientToHost::has_remove_request() const {
  return this != internal_default_instance() && remove_request_ != NULL;
}
inline void ClientToHost::clear_remove_request() {
  if (GetArenaNoVirtual() == NULL && remove_request_ != NULL) delete remove_request_;
  remove_request_ = NULL;
}
inline const ::aspia::proto::RemoveRequest& ClientToHost::remove_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.remove_request)
  return remove_request_ != NULL ? *remove_request_
                         : *::aspia::proto::RemoveRequest::internal_default_instance();
}
inline ::aspia::proto::RemoveRequest* ClientToHost::mutable_remove_request() {
  
  if (remove_request_ == NULL) {
    remove_request_ = new ::aspia::proto::RemoveRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.remove_request)
  return remove_request_;
}
inline ::aspia::proto::RemoveRequest* ClientToHost::release_remove_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.remove_request)
  
  ::aspia::proto::RemoveRequest* temp = remove_request_;
  remove_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_remove_request(::aspia::proto::RemoveRequest* remove_request) {
  delete remove_request_;
  remove_request_ = remove_request;
  if (remove_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.remove_request)
}

// .aspia.proto.FileDownloadRequest file_download_request = 7;
inline bool ClientToHost::has_file_download_request() const {
  return this != internal_default_instance() && file_download_request_ != NULL;
}
inline void ClientToHost::clear_file_download_request() {
  if (GetArenaNoVirtual() == NULL && file_download_request_ != NULL) delete file_download_request_;
  file_download_request_ = NULL;
}
inline const ::aspia::proto::FileDownloadRequest& ClientToHost::file_download_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.file_download_request)
  return file_download_request_ != NULL ? *file_download_request_
                         : *::aspia::proto::FileDownloadRequest::internal_default_instance();
}
inline ::aspia::proto::FileDownloadRequest* ClientToHost::mutable_file_download_request() {
  
  if (file_download_request_ == NULL) {
    file_download_request_ = new ::aspia::proto::FileDownloadRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.file_download_request)
  return file_download_request_;
}
inline ::aspia::proto::FileDownloadRequest* ClientToHost::release_file_download_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.file_download_request)
  
  ::aspia::proto::FileDownloadRequest* temp = file_download_request_;
  file_download_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_file_download_request(::aspia::proto::FileDownloadRequest* file_download_request) {
  delete file_download_request_;
  file_download_request_ = file_download_request;
  if (file_download_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.file_download_request)
}

// .aspia.proto.FileUploadRequest file_upload_request = 8;
inline bool ClientToHost::has_file_upload_request() const {
  return this != internal_default_instance() && file_upload_request_ != NULL;
}
inline void ClientToHost::clear_file_upload_request() {
  if (GetArenaNoVirtual() == NULL && file_upload_request_ != NULL) delete file_upload_request_;
  file_upload_request_ = NULL;
}
inline const ::aspia::proto::FileUploadRequest& ClientToHost::file_upload_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.file_upload_request)
  return file_upload_request_ != NULL ? *file_upload_request_
                         : *::aspia::proto::FileUploadRequest::internal_default_instance();
}
inline ::aspia::proto::FileUploadRequest* ClientToHost::mutable_file_upload_request() {
  
  if (file_upload_request_ == NULL) {
    file_upload_request_ = new ::aspia::proto::FileUploadRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.file_upload_request)
  return file_upload_request_;
}
inline ::aspia::proto::FileUploadRequest* ClientToHost::release_file_upload_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.file_upload_request)
  
  ::aspia::proto::FileUploadRequest* temp = file_upload_request_;
  file_upload_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_file_upload_request(::aspia::proto::FileUploadRequest* file_upload_request) {
  delete file_upload_request_;
  file_upload_request_ = file_upload_request;
  if (file_upload_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.file_upload_request)
}

// .aspia.proto.FilePacket file_packet = 9;
inline bool ClientToHost::has_file_packet() const {
  return this != internal_default_instance() && file_packet_ != NULL;
}
inline void ClientToHost::clear_file_packet() {
  if (GetArenaNoVirtual() == NULL && file_packet_ != NULL) delete file_packet_;
  file_packet_ = NULL;
}
inline const ::aspia::proto::FilePacket& ClientToHost::file_packet() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.file_packet)
  return file_packet_ != NULL ? *file_packet_
                         : *::aspia::proto::FilePacket::internal_default_instance();
}
inline ::aspia::proto::FilePacket* ClientToHost::mutable_file_packet() {
  
  if (file_packet_ == NULL) {
    file_packet_ = new ::aspia::proto::FilePacket;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.file_packet)
  return file_packet_;
}
inline ::aspia::proto::FilePacket* ClientToHost::release_file_packet() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.file_packet)
  
  ::aspia::proto::FilePacket* temp = file_packet_;
  file_packet_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_file_packet(::aspia::proto::FilePacket* file_packet) {
  delete file_packet_;
  file_packet_ = file_packet;
  if (file_packet) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.file_packet)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace file_transfer
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_file_5ftransfer_5fsession_2eproto__INCLUDED
