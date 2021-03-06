// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: student.proto

#include "student.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_student_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_student_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Student_PhoneNumber;
}  // namespace protobuf_student_2eproto
namespace tutorial {
class Student_PhoneNumberDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Student_PhoneNumber>
      _instance;
} _Student_PhoneNumber_default_instance_;
class StudentDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Student>
      _instance;
} _Student_default_instance_;
}  // namespace tutorial
namespace protobuf_student_2eproto {
static void InitDefaultsStudent_PhoneNumber() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tutorial::_Student_PhoneNumber_default_instance_;
    new (ptr) ::tutorial::Student_PhoneNumber();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tutorial::Student_PhoneNumber::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Student_PhoneNumber =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsStudent_PhoneNumber}, {}};

static void InitDefaultsStudent() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tutorial::_Student_default_instance_;
    new (ptr) ::tutorial::Student();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tutorial::Student::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Student =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsStudent}, {
      &protobuf_student_2eproto::scc_info_Student_PhoneNumber.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Student_PhoneNumber.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Student.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student_PhoneNumber, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student_PhoneNumber, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student_PhoneNumber, number_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student_PhoneNumber, type_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student, email_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tutorial::Student, phone_),
  2,
  0,
  1,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::tutorial::Student_PhoneNumber)},
  { 9, 18, sizeof(::tutorial::Student)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tutorial::_Student_PhoneNumber_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tutorial::_Student_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "student.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rstudent.proto\022\010tutorial\"\323\001\n\007Student\022\n\n"
      "\002id\030\001 \002(\004\022\014\n\004name\030\002 \002(\t\022\r\n\005email\030\003 \001(\t\022,"
      "\n\005phone\030\004 \003(\0132\035.tutorial.Student.PhoneNu"
      "mber\032N\n\013PhoneNumber\022\016\n\006number\030\001 \002(\t\022/\n\004t"
      "ype\030\002 \001(\0162\033.tutorial.Student.PhoneType:\004"
      "HOME\"!\n\tPhoneType\022\n\n\006MOBILE\020\000\022\010\n\004HOME\020\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 239);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "student.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_student_2eproto
namespace tutorial {
const ::google::protobuf::EnumDescriptor* Student_PhoneType_descriptor() {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_student_2eproto::file_level_enum_descriptors[0];
}
bool Student_PhoneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Student_PhoneType Student::MOBILE;
const Student_PhoneType Student::HOME;
const Student_PhoneType Student::PhoneType_MIN;
const Student_PhoneType Student::PhoneType_MAX;
const int Student::PhoneType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Student_PhoneNumber::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Student_PhoneNumber::kNumberFieldNumber;
const int Student_PhoneNumber::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Student_PhoneNumber::Student_PhoneNumber()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_student_2eproto::scc_info_Student_PhoneNumber.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.Student.PhoneNumber)
}
Student_PhoneNumber::Student_PhoneNumber(const Student_PhoneNumber& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_number()) {
    number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.number_);
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:tutorial.Student.PhoneNumber)
}

void Student_PhoneNumber::SharedCtor() {
  number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 1;
}

Student_PhoneNumber::~Student_PhoneNumber() {
  // @@protoc_insertion_point(destructor:tutorial.Student.PhoneNumber)
  SharedDtor();
}

void Student_PhoneNumber::SharedDtor() {
  number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Student_PhoneNumber::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Student_PhoneNumber::descriptor() {
  ::protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Student_PhoneNumber& Student_PhoneNumber::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_student_2eproto::scc_info_Student_PhoneNumber.base);
  return *internal_default_instance();
}


void Student_PhoneNumber::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.Student.PhoneNumber)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      number_.ClearNonDefaultToEmptyNoArena();
    }
    type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Student_PhoneNumber::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.Student.PhoneNumber)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_number()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->number().data(), static_cast<int>(this->number().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tutorial.Student.PhoneNumber.number");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .tutorial.Student.PhoneType type = 2 [default = HOME];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::tutorial::Student_PhoneType_IsValid(value)) {
            set_type(static_cast< ::tutorial::Student_PhoneType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.Student.PhoneNumber)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.Student.PhoneNumber)
  return false;
#undef DO_
}

void Student_PhoneNumber::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.Student.PhoneNumber)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string number = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->number().data(), static_cast<int>(this->number().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Student.PhoneNumber.number");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->number(), output);
  }

  // optional .tutorial.Student.PhoneType type = 2 [default = HOME];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.Student.PhoneNumber)
}

::google::protobuf::uint8* Student_PhoneNumber::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.Student.PhoneNumber)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string number = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->number().data(), static_cast<int>(this->number().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Student.PhoneNumber.number");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->number(), target);
  }

  // optional .tutorial.Student.PhoneType type = 2 [default = HOME];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.Student.PhoneNumber)
  return target;
}

size_t Student_PhoneNumber::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.Student.PhoneNumber)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string number = 1;
  if (has_number()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->number());
  }
  // optional .tutorial.Student.PhoneType type = 2 [default = HOME];
  if (has_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Student_PhoneNumber::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.Student.PhoneNumber)
  GOOGLE_DCHECK_NE(&from, this);
  const Student_PhoneNumber* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Student_PhoneNumber>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.Student.PhoneNumber)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.Student.PhoneNumber)
    MergeFrom(*source);
  }
}

void Student_PhoneNumber::MergeFrom(const Student_PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.Student.PhoneNumber)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_number();
      number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.number_);
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Student_PhoneNumber::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.Student.PhoneNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Student_PhoneNumber::CopyFrom(const Student_PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.Student.PhoneNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student_PhoneNumber::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void Student_PhoneNumber::Swap(Student_PhoneNumber* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Student_PhoneNumber::InternalSwap(Student_PhoneNumber* other) {
  using std::swap;
  number_.Swap(&other->number_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(type_, other->type_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Student_PhoneNumber::GetMetadata() const {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Student::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Student::kIdFieldNumber;
const int Student::kNameFieldNumber;
const int Student::kEmailFieldNumber;
const int Student::kPhoneFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Student::Student()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_student_2eproto::scc_info_Student.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.Student)
}
Student::Student(const Student& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      phone_(from.phone_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_email()) {
    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:tutorial.Student)
}

void Student::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = GOOGLE_ULONGLONG(0);
}

Student::~Student() {
  // @@protoc_insertion_point(destructor:tutorial.Student)
  SharedDtor();
}

void Student::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Student::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Student::descriptor() {
  ::protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Student& Student::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_student_2eproto::scc_info_Student.base);
  return *internal_default_instance();
}


void Student::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.Student)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  phone_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      email_.ClearNonDefaultToEmptyNoArena();
    }
  }
  id_ = GOOGLE_ULONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Student::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.Student)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tutorial.Student.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string email = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->email().data(), static_cast<int>(this->email().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tutorial.Student.email");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tutorial.Student.PhoneNumber phone = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_phone()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.Student)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.Student)
  return false;
#undef DO_
}

void Student::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.Student)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint64 id = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->id(), output);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Student.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional string email = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Student.email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->email(), output);
  }

  // repeated .tutorial.Student.PhoneNumber phone = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->phone_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->phone(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.Student)
}

::google::protobuf::uint8* Student::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.Student)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint64 id = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->id(), target);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Student.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional string email = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Student.email");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }

  // repeated .tutorial.Student.PhoneNumber phone = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->phone_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->phone(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.Student)
  return target;
}

size_t Student::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:tutorial.Student)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_id()) {
    // required uint64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->id());
  }

  return total_size;
}
size_t Student::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.Student)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required uint64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated .tutorial.Student.PhoneNumber phone = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->phone_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->phone(static_cast<int>(i)));
    }
  }

  // optional string email = 3;
  if (has_email()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Student::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.Student)
  GOOGLE_DCHECK_NE(&from, this);
  const Student* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Student>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.Student)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.Student)
    MergeFrom(*source);
  }
}

void Student::MergeFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.Student)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  phone_.MergeFrom(from.phone_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_email();
      email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Student::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Student::CopyFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->phone())) return false;
  return true;
}

void Student::Swap(Student* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Student::InternalSwap(Student* other) {
  using std::swap;
  CastToBase(&phone_)->InternalSwap(CastToBase(&other->phone_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  email_.Swap(&other->email_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Student::GetMetadata() const {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tutorial
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tutorial::Student_PhoneNumber* Arena::CreateMaybeMessage< ::tutorial::Student_PhoneNumber >(Arena* arena) {
  return Arena::CreateInternal< ::tutorial::Student_PhoneNumber >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tutorial::Student* Arena::CreateMaybeMessage< ::tutorial::Student >(Arena* arena) {
  return Arena::CreateInternal< ::tutorial::Student >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
