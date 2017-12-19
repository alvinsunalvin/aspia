// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_dmi_memory_device.proto

#include "category_dmi_memory_device.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class DmiMemoryDevice_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DmiMemoryDevice_Item>
      _instance;
} _DmiMemoryDevice_Item_default_instance_;
class DmiMemoryDeviceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DmiMemoryDevice>
      _instance;
} _DmiMemoryDevice_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_category_5fdmi_5fmemory_5fdevice_2eproto {
void InitDefaultsDmiMemoryDevice_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_DmiMemoryDevice_Item_default_instance_;
    new (ptr) ::aspia::proto::DmiMemoryDevice_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::DmiMemoryDevice_Item::InitAsDefaultInstance();
}

void InitDefaultsDmiMemoryDevice_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsDmiMemoryDevice_ItemImpl);
}

void InitDefaultsDmiMemoryDeviceImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_category_5fdmi_5fmemory_5fdevice_2eproto::InitDefaultsDmiMemoryDevice_Item();
  {
    void* ptr = &::aspia::proto::_DmiMemoryDevice_default_instance_;
    new (ptr) ::aspia::proto::DmiMemoryDevice();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::DmiMemoryDevice::InitAsDefaultInstance();
}

void InitDefaultsDmiMemoryDevice() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsDmiMemoryDeviceImpl);
}

}  // namespace protobuf_category_5fdmi_5fmemory_5fdevice_2eproto
namespace aspia {
namespace proto {
bool DmiMemoryDevice_Type_IsValid(int value) {
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
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_UNKNOWN;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_OTHER;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_DRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_EDRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_VRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_SRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_RAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_ROM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_FLASH;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_EEPROM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_FEPROM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_EPROM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_CDRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_3DRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_SDRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_SGRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_RDRAM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_DDR;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_DDR2;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_DDR2_FB_DIMM;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_DDR3;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_FBD2;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_DDR4;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_LPDDR;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_LPDDR2;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_LPDDR3;
const DmiMemoryDevice_Type DmiMemoryDevice::TYPE_LPDDR4;
const DmiMemoryDevice_Type DmiMemoryDevice::Type_MIN;
const DmiMemoryDevice_Type DmiMemoryDevice::Type_MAX;
const int DmiMemoryDevice::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
bool DmiMemoryDevice_FormFactor_IsValid(int value) {
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
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_UNKNOWN;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_OTHER;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_SIMM;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_SIP;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_CHIP;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_DIP;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_ZIP;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_PROPRIETARY_CARD;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_DIMM;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_TSOP;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_ROW_OF_CHIPS;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_RIMM;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_SODIMM;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_SRIMM;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FORM_FACTOR_FB_DIMM;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FormFactor_MIN;
const DmiMemoryDevice_FormFactor DmiMemoryDevice::FormFactor_MAX;
const int DmiMemoryDevice::FormFactor_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void DmiMemoryDevice_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DmiMemoryDevice_Item::kDeviceLocatorFieldNumber;
const int DmiMemoryDevice_Item::kSizeFieldNumber;
const int DmiMemoryDevice_Item::kTypeFieldNumber;
const int DmiMemoryDevice_Item::kSpeedFieldNumber;
const int DmiMemoryDevice_Item::kFormFactorFieldNumber;
const int DmiMemoryDevice_Item::kSerialNumberFieldNumber;
const int DmiMemoryDevice_Item::kPartNumberFieldNumber;
const int DmiMemoryDevice_Item::kManufactorerFieldNumber;
const int DmiMemoryDevice_Item::kBankFieldNumber;
const int DmiMemoryDevice_Item::kTotalWidthFieldNumber;
const int DmiMemoryDevice_Item::kDataWidthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DmiMemoryDevice_Item::DmiMemoryDevice_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fdmi_5fmemory_5fdevice_2eproto::InitDefaultsDmiMemoryDevice_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.DmiMemoryDevice.Item)
}
DmiMemoryDevice_Item::DmiMemoryDevice_Item(const DmiMemoryDevice_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  device_locator_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.device_locator().size() > 0) {
    device_locator_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_locator_);
  }
  serial_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.serial_number().size() > 0) {
    serial_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serial_number_);
  }
  part_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.part_number().size() > 0) {
    part_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.part_number_);
  }
  manufactorer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.manufactorer().size() > 0) {
    manufactorer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.manufactorer_);
  }
  bank_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.bank().size() > 0) {
    bank_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bank_);
  }
  ::memcpy(&size_, &from.size_,
    static_cast<size_t>(reinterpret_cast<char*>(&data_width_) -
    reinterpret_cast<char*>(&size_)) + sizeof(data_width_));
  // @@protoc_insertion_point(copy_constructor:aspia.proto.DmiMemoryDevice.Item)
}

void DmiMemoryDevice_Item::SharedCtor() {
  device_locator_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serial_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  part_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  manufactorer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bank_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_width_) -
      reinterpret_cast<char*>(&size_)) + sizeof(data_width_));
  _cached_size_ = 0;
}

DmiMemoryDevice_Item::~DmiMemoryDevice_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.DmiMemoryDevice.Item)
  SharedDtor();
}

void DmiMemoryDevice_Item::SharedDtor() {
  device_locator_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serial_number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  part_number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  manufactorer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bank_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void DmiMemoryDevice_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DmiMemoryDevice_Item& DmiMemoryDevice_Item::default_instance() {
  ::protobuf_category_5fdmi_5fmemory_5fdevice_2eproto::InitDefaultsDmiMemoryDevice_Item();
  return *internal_default_instance();
}

DmiMemoryDevice_Item* DmiMemoryDevice_Item::New(::google::protobuf::Arena* arena) const {
  DmiMemoryDevice_Item* n = new DmiMemoryDevice_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DmiMemoryDevice_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.DmiMemoryDevice.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  device_locator_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serial_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  part_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  manufactorer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bank_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_width_) -
      reinterpret_cast<char*>(&size_)) + sizeof(data_width_));
  _internal_metadata_.Clear();
}

bool DmiMemoryDevice_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.DmiMemoryDevice.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string device_locator = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device_locator()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device_locator().data(), static_cast<int>(this->device_locator().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.DmiMemoryDevice.Item.device_locator"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 size = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.DmiMemoryDevice.Type type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::aspia::proto::DmiMemoryDevice_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 speed = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.DmiMemoryDevice.FormFactor form_factor = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_form_factor(static_cast< ::aspia::proto::DmiMemoryDevice_FormFactor >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string serial_number = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serial_number()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->serial_number().data(), static_cast<int>(this->serial_number().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.DmiMemoryDevice.Item.serial_number"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string part_number = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_part_number()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->part_number().data(), static_cast<int>(this->part_number().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.DmiMemoryDevice.Item.part_number"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string manufactorer = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_manufactorer()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->manufactorer().data(), static_cast<int>(this->manufactorer().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.DmiMemoryDevice.Item.manufactorer"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string bank = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_bank()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->bank().data(), static_cast<int>(this->bank().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.DmiMemoryDevice.Item.bank"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 total_width = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &total_width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 data_width = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &data_width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.DmiMemoryDevice.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.DmiMemoryDevice.Item)
  return false;
#undef DO_
}

void DmiMemoryDevice_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.DmiMemoryDevice.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string device_locator = 1;
  if (this->device_locator().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_locator().data(), static_cast<int>(this->device_locator().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.DmiMemoryDevice.Item.device_locator");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->device_locator(), output);
  }

  // uint64 size = 2;
  if (this->size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->size(), output);
  }

  // .aspia.proto.DmiMemoryDevice.Type type = 3;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // int32 speed = 4;
  if (this->speed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->speed(), output);
  }

  // .aspia.proto.DmiMemoryDevice.FormFactor form_factor = 5;
  if (this->form_factor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->form_factor(), output);
  }

  // string serial_number = 6;
  if (this->serial_number().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serial_number().data(), static_cast<int>(this->serial_number().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.DmiMemoryDevice.Item.serial_number");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->serial_number(), output);
  }

  // string part_number = 7;
  if (this->part_number().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->part_number().data(), static_cast<int>(this->part_number().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.DmiMemoryDevice.Item.part_number");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->part_number(), output);
  }

  // string manufactorer = 8;
  if (this->manufactorer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->manufactorer().data(), static_cast<int>(this->manufactorer().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.DmiMemoryDevice.Item.manufactorer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->manufactorer(), output);
  }

  // string bank = 9;
  if (this->bank().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->bank().data(), static_cast<int>(this->bank().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.DmiMemoryDevice.Item.bank");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->bank(), output);
  }

  // int32 total_width = 10;
  if (this->total_width() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->total_width(), output);
  }

  // int32 data_width = 11;
  if (this->data_width() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->data_width(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.DmiMemoryDevice.Item)
}

size_t DmiMemoryDevice_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.DmiMemoryDevice.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string device_locator = 1;
  if (this->device_locator().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device_locator());
  }

  // string serial_number = 6;
  if (this->serial_number().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->serial_number());
  }

  // string part_number = 7;
  if (this->part_number().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->part_number());
  }

  // string manufactorer = 8;
  if (this->manufactorer().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->manufactorer());
  }

  // string bank = 9;
  if (this->bank().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->bank());
  }

  // uint64 size = 2;
  if (this->size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->size());
  }

  // .aspia.proto.DmiMemoryDevice.Type type = 3;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // int32 speed = 4;
  if (this->speed() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->speed());
  }

  // .aspia.proto.DmiMemoryDevice.FormFactor form_factor = 5;
  if (this->form_factor() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->form_factor());
  }

  // int32 total_width = 10;
  if (this->total_width() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->total_width());
  }

  // int32 data_width = 11;
  if (this->data_width() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->data_width());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DmiMemoryDevice_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DmiMemoryDevice_Item*>(&from));
}

void DmiMemoryDevice_Item::MergeFrom(const DmiMemoryDevice_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.DmiMemoryDevice.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.device_locator().size() > 0) {

    device_locator_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_locator_);
  }
  if (from.serial_number().size() > 0) {

    serial_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serial_number_);
  }
  if (from.part_number().size() > 0) {

    part_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.part_number_);
  }
  if (from.manufactorer().size() > 0) {

    manufactorer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.manufactorer_);
  }
  if (from.bank().size() > 0) {

    bank_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bank_);
  }
  if (from.size() != 0) {
    set_size(from.size());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.speed() != 0) {
    set_speed(from.speed());
  }
  if (from.form_factor() != 0) {
    set_form_factor(from.form_factor());
  }
  if (from.total_width() != 0) {
    set_total_width(from.total_width());
  }
  if (from.data_width() != 0) {
    set_data_width(from.data_width());
  }
}

void DmiMemoryDevice_Item::CopyFrom(const DmiMemoryDevice_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.DmiMemoryDevice.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DmiMemoryDevice_Item::IsInitialized() const {
  return true;
}

void DmiMemoryDevice_Item::Swap(DmiMemoryDevice_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DmiMemoryDevice_Item::InternalSwap(DmiMemoryDevice_Item* other) {
  using std::swap;
  device_locator_.Swap(&other->device_locator_);
  serial_number_.Swap(&other->serial_number_);
  part_number_.Swap(&other->part_number_);
  manufactorer_.Swap(&other->manufactorer_);
  bank_.Swap(&other->bank_);
  swap(size_, other->size_);
  swap(type_, other->type_);
  swap(speed_, other->speed_);
  swap(form_factor_, other->form_factor_);
  swap(total_width_, other->total_width_);
  swap(data_width_, other->data_width_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string DmiMemoryDevice_Item::GetTypeName() const {
  return "aspia.proto.DmiMemoryDevice.Item";
}


// ===================================================================

void DmiMemoryDevice::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DmiMemoryDevice::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DmiMemoryDevice::DmiMemoryDevice()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fdmi_5fmemory_5fdevice_2eproto::InitDefaultsDmiMemoryDevice();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.DmiMemoryDevice)
}
DmiMemoryDevice::DmiMemoryDevice(const DmiMemoryDevice& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.DmiMemoryDevice)
}

void DmiMemoryDevice::SharedCtor() {
  _cached_size_ = 0;
}

DmiMemoryDevice::~DmiMemoryDevice() {
  // @@protoc_insertion_point(destructor:aspia.proto.DmiMemoryDevice)
  SharedDtor();
}

void DmiMemoryDevice::SharedDtor() {
}

void DmiMemoryDevice::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DmiMemoryDevice& DmiMemoryDevice::default_instance() {
  ::protobuf_category_5fdmi_5fmemory_5fdevice_2eproto::InitDefaultsDmiMemoryDevice();
  return *internal_default_instance();
}

DmiMemoryDevice* DmiMemoryDevice::New(::google::protobuf::Arena* arena) const {
  DmiMemoryDevice* n = new DmiMemoryDevice;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DmiMemoryDevice::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.DmiMemoryDevice)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool DmiMemoryDevice::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.DmiMemoryDevice)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.DmiMemoryDevice.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.DmiMemoryDevice)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.DmiMemoryDevice)
  return false;
#undef DO_
}

void DmiMemoryDevice::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.DmiMemoryDevice)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.DmiMemoryDevice.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.DmiMemoryDevice)
}

size_t DmiMemoryDevice::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.DmiMemoryDevice)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.DmiMemoryDevice.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DmiMemoryDevice::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DmiMemoryDevice*>(&from));
}

void DmiMemoryDevice::MergeFrom(const DmiMemoryDevice& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.DmiMemoryDevice)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void DmiMemoryDevice::CopyFrom(const DmiMemoryDevice& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.DmiMemoryDevice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DmiMemoryDevice::IsInitialized() const {
  return true;
}

void DmiMemoryDevice::Swap(DmiMemoryDevice* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DmiMemoryDevice::InternalSwap(DmiMemoryDevice* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string DmiMemoryDevice::GetTypeName() const {
  return "aspia.proto.DmiMemoryDevice";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)