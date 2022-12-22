// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address_book.proto

#include "address_book.pb.h"

#include <algorithm>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/wire_format_lite_inl.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_address_5fbook_2eproto
{
extern PROTOBUF_INTERNAL_EXPORT_protobuf_address_5fbook_2eproto ::google::protobuf::internal::SCCInfo<0>
    scc_info_Person;
} // namespace protobuf_address_5fbook_2eproto
namespace ADDRESS_BOOK
{
class PersonDefaultTypeInternal
{
  public:
    ::google::protobuf::internal::ExplicitlyConstructed<Person> _instance;
} _Person_default_instance_;
class AddressBookDefaultTypeInternal
{
  public:
    ::google::protobuf::internal::ExplicitlyConstructed<AddressBook> _instance;
} _AddressBook_default_instance_;
} // namespace ADDRESS_BOOK
namespace protobuf_address_5fbook_2eproto
{
static void InitDefaultsPerson()
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    {
        void *ptr = &::ADDRESS_BOOK::_Person_default_instance_;
        new (ptr)::ADDRESS_BOOK::Person();
        ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
    }
    ::ADDRESS_BOOK::Person::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Person = {
    {ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPerson}, {}};

static void InitDefaultsAddressBook()
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    {
        void *ptr = &::ADDRESS_BOOK::_AddressBook_default_instance_;
        new (ptr)::ADDRESS_BOOK::AddressBook();
        ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
    }
    ::ADDRESS_BOOK::AddressBook::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AddressBook = {
    {ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAddressBook},
    {
        &protobuf_address_5fbook_2eproto::scc_info_Person.base,
    }};

void InitDefaults()
{
    ::google::protobuf::internal::InitSCC(&scc_info_Person.base);
    ::google::protobuf::internal::InitSCC(&scc_info_AddressBook.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::Person, _has_bits_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::Person, _internal_metadata_),
    ~0u, // no _extensions_
    ~0u, // no _oneof_case_
    ~0u, // no _weak_field_map_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::Person, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::Person, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::Person, email_),
    0,
    2,
    1,
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::AddressBook, _has_bits_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::AddressBook, _internal_metadata_),
    ~0u, // no _extensions_
    ~0u, // no _oneof_case_
    ~0u, // no _weak_field_map_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ADDRESS_BOOK::AddressBook, people_),
    ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    {0, 8, sizeof(::ADDRESS_BOOK::Person)},
    {11, 17, sizeof(::ADDRESS_BOOK::AddressBook)},
};

static ::google::protobuf::Message const *const file_default_instances[] = {
    reinterpret_cast<const ::google::protobuf::Message *>(&::ADDRESS_BOOK::_Person_default_instance_),
    reinterpret_cast<const ::google::protobuf::Message *>(&::ADDRESS_BOOK::_AddressBook_default_instance_),
};

void protobuf_AssignDescriptors()
{
    AddDescriptors();
    AssignDescriptors("address_book.proto", schemas, file_default_instances, TableStruct::offsets, file_level_metadata,
                      NULL, NULL);
}

void protobuf_AssignDescriptorsOnce()
{
    static ::google::protobuf::internal::once_flag once;
    ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string &) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string &)
{
    protobuf_AssignDescriptorsOnce();
    ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl()
{
    InitDefaults();
    static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        "\n\022address_book.proto\022\014ADDRESS_BOOK\"1\n\006Pe"
        "rson\022\014\n\004name\030\001 \001(\t\022\n\n\002id\030\002 \001(\005\022\r\n\005email\030"
        "\003 \001(\t\"3\n\013AddressBook\022$\n\006people\030\001 \003(\0132\024.A"
        "DDRESS_BOOK.Person"};
    ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(descriptor, 138);
    ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile("address_book.proto", &protobuf_RegisterTypes);
}

void AddDescriptors()
{
    static ::google::protobuf::internal::once_flag once;
    ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer
{
    StaticDescriptorInitializer()
    {
        AddDescriptors();
    }
} static_descriptor_initializer;
} // namespace protobuf_address_5fbook_2eproto
namespace ADDRESS_BOOK
{

// ===================================================================

void Person::InitAsDefaultInstance()
{
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Person::kNameFieldNumber;
const int Person::kIdFieldNumber;
const int Person::kEmailFieldNumber;
#endif // !defined(_MSC_VER) || _MSC_VER >= 1900

Person::Person() : ::google::protobuf::Message(), _internal_metadata_(NULL)
{
    ::google::protobuf::internal::InitSCC(&protobuf_address_5fbook_2eproto::scc_info_Person.base);
    SharedCtor();
    // @@protoc_insertion_point(constructor:ADDRESS_BOOK.Person)
}
Person::Person(const Person &from)
    : ::google::protobuf::Message(), _internal_metadata_(NULL), _has_bits_(from._has_bits_)
{
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    if (from.has_name())
    {
        name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    if (from.has_email())
    {
        email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
    }
    id_ = from.id_;
    // @@protoc_insertion_point(copy_constructor:ADDRESS_BOOK.Person)
}

void Person::SharedCtor()
{
    name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    id_ = 0;
}

Person::~Person()
{
    // @@protoc_insertion_point(destructor:ADDRESS_BOOK.Person)
    SharedDtor();
}

void Person::SharedDtor()
{
    name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Person::SetCachedSize(int size) const
{
    _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor *Person::descriptor()
{
    ::protobuf_address_5fbook_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_address_5fbook_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Person &Person::default_instance()
{
    ::google::protobuf::internal::InitSCC(&protobuf_address_5fbook_2eproto::scc_info_Person.base);
    return *internal_default_instance();
}

void Person::Clear()
{
    // @@protoc_insertion_point(message_clear_start:ADDRESS_BOOK.Person)
    ::google::protobuf::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    cached_has_bits = _has_bits_[0];
    if (cached_has_bits & 3u)
    {
        if (cached_has_bits & 0x00000001u)
        {
            name_.ClearNonDefaultToEmptyNoArena();
        }
        if (cached_has_bits & 0x00000002u)
        {
            email_.ClearNonDefaultToEmptyNoArena();
        }
    }
    id_ = 0;
    _has_bits_.Clear();
    _internal_metadata_.Clear();
}

bool Person::MergePartialFromCodedStream(::google::protobuf::io::CodedInputStream *input)
{
#define DO_(EXPRESSION)                                                                                                \
    if (!GOOGLE_PREDICT_TRUE(EXPRESSION))                                                                              \
    goto failure
    ::google::protobuf::uint32 tag;
    // @@protoc_insertion_point(parse_start:ADDRESS_BOOK.Person)
    for (;;)
    {
        ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
        tag = p.first;
        if (!p.second)
            goto handle_unusual;
        switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag))
        {
        // optional string name = 1;
        case 1: {
            if (static_cast<::google::protobuf::uint8>(tag) ==
                static_cast<::google::protobuf::uint8>(10u /* 10 & 0xFF */))
            {
                DO_(::google::protobuf::internal::WireFormatLite::ReadString(input, this->mutable_name()));
                ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
                    this->name().data(), static_cast<int>(this->name().length()),
                    ::google::protobuf::internal::WireFormat::PARSE, "ADDRESS_BOOK.Person.name");
            }
            else
            {
                goto handle_unusual;
            }
            break;
        }

        // optional int32 id = 2;
        case 2: {
            if (static_cast<::google::protobuf::uint8>(tag) ==
                static_cast<::google::protobuf::uint8>(16u /* 16 & 0xFF */))
            {
                set_has_id();
                DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                     ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(input,
                                                                                                          &id_)));
            }
            else
            {
                goto handle_unusual;
            }
            break;
        }

        // optional string email = 3;
        case 3: {
            if (static_cast<::google::protobuf::uint8>(tag) ==
                static_cast<::google::protobuf::uint8>(26u /* 26 & 0xFF */))
            {
                DO_(::google::protobuf::internal::WireFormatLite::ReadString(input, this->mutable_email()));
                ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
                    this->email().data(), static_cast<int>(this->email().length()),
                    ::google::protobuf::internal::WireFormat::PARSE, "ADDRESS_BOOK.Person.email");
            }
            else
            {
                goto handle_unusual;
            }
            break;
        }

        default: {
        handle_unusual:
            if (tag == 0)
            {
                goto success;
            }
            DO_(::google::protobuf::internal::WireFormat::SkipField(input, tag,
                                                                    _internal_metadata_.mutable_unknown_fields()));
            break;
        }
        }
    }
success:
    // @@protoc_insertion_point(parse_success:ADDRESS_BOOK.Person)
    return true;
failure:
    // @@protoc_insertion_point(parse_failure:ADDRESS_BOOK.Person)
    return false;
#undef DO_
}

void Person::SerializeWithCachedSizes(::google::protobuf::io::CodedOutputStream *output) const
{
    // @@protoc_insertion_point(serialize_start:ADDRESS_BOOK.Person)
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = _has_bits_[0];
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u)
    {
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::SERIALIZE, "ADDRESS_BOOK.Person.name");
        ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1, this->name(), output);
    }

    // optional int32 id = 2;
    if (cached_has_bits & 0x00000004u)
    {
        ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
    }

    // optional string email = 3;
    if (cached_has_bits & 0x00000002u)
    {
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->email().data(), static_cast<int>(this->email().length()),
            ::google::protobuf::internal::WireFormat::SERIALIZE, "ADDRESS_BOOK.Person.email");
        ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3, this->email(), output);
    }

    if (_internal_metadata_.have_unknown_fields())
    {
        ::google::protobuf::internal::WireFormat::SerializeUnknownFields(_internal_metadata_.unknown_fields(), output);
    }
    // @@protoc_insertion_point(serialize_end:ADDRESS_BOOK.Person)
}

::google::protobuf::uint8 *Person::InternalSerializeWithCachedSizesToArray(bool deterministic,
                                                                           ::google::protobuf::uint8 *target) const
{
    (void)deterministic; // Unused
    // @@protoc_insertion_point(serialize_to_array_start:ADDRESS_BOOK.Person)
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = _has_bits_[0];
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u)
    {
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::SERIALIZE, "ADDRESS_BOOK.Person.name");
        target = ::google::protobuf::internal::WireFormatLite::WriteStringToArray(1, this->name(), target);
    }

    // optional int32 id = 2;
    if (cached_has_bits & 0x00000004u)
    {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
    }

    // optional string email = 3;
    if (cached_has_bits & 0x00000002u)
    {
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->email().data(), static_cast<int>(this->email().length()),
            ::google::protobuf::internal::WireFormat::SERIALIZE, "ADDRESS_BOOK.Person.email");
        target = ::google::protobuf::internal::WireFormatLite::WriteStringToArray(3, this->email(), target);
    }

    if (_internal_metadata_.have_unknown_fields())
    {
        target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields(), target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:ADDRESS_BOOK.Person)
    return target;
}

size_t Person::ByteSizeLong() const
{
    // @@protoc_insertion_point(message_byte_size_start:ADDRESS_BOOK.Person)
    size_t total_size = 0;

    if (_internal_metadata_.have_unknown_fields())
    {
        total_size +=
            ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(_internal_metadata_.unknown_fields());
    }
    if (_has_bits_[0 / 32] & 7u)
    {
        // optional string name = 1;
        if (has_name())
        {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(this->name());
        }

        // optional string email = 3;
        if (has_email())
        {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(this->email());
        }

        // optional int32 id = 2;
        if (has_id())
        {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::Int32Size(this->id());
        }
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
}

void Person::MergeFrom(const ::google::protobuf::Message &from)
{
    // @@protoc_insertion_point(generalized_merge_from_start:ADDRESS_BOOK.Person)
    GOOGLE_DCHECK_NE(&from, this);
    const Person *source = ::google::protobuf::internal::DynamicCastToGenerated<const Person>(&from);
    if (source == NULL)
    {
        // @@protoc_insertion_point(generalized_merge_from_cast_fail:ADDRESS_BOOK.Person)
        ::google::protobuf::internal::ReflectionOps::Merge(from, this);
    }
    else
    {
        // @@protoc_insertion_point(generalized_merge_from_cast_success:ADDRESS_BOOK.Person)
        MergeFrom(*source);
    }
}

void Person::MergeFrom(const Person &from)
{
    // @@protoc_insertion_point(class_specific_merge_from_start:ADDRESS_BOOK.Person)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = from._has_bits_[0];
    if (cached_has_bits & 7u)
    {
        if (cached_has_bits & 0x00000001u)
        {
            set_has_name();
            name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
        }
        if (cached_has_bits & 0x00000002u)
        {
            set_has_email();
            email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
        }
        if (cached_has_bits & 0x00000004u)
        {
            id_ = from.id_;
        }
        _has_bits_[0] |= cached_has_bits;
    }
}

void Person::CopyFrom(const ::google::protobuf::Message &from)
{
    // @@protoc_insertion_point(generalized_copy_from_start:ADDRESS_BOOK.Person)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void Person::CopyFrom(const Person &from)
{
    // @@protoc_insertion_point(class_specific_copy_from_start:ADDRESS_BOOK.Person)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

bool Person::IsInitialized() const
{
    return true;
}

void Person::Swap(Person *other)
{
    if (other == this)
        return;
    InternalSwap(other);
}
void Person::InternalSwap(Person *other)
{
    using std::swap;
    name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
    email_.Swap(&other->email_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
    swap(id_, other->id_);
    swap(_has_bits_[0], other->_has_bits_[0]);
    _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Person::GetMetadata() const
{
    protobuf_address_5fbook_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_address_5fbook_2eproto::file_level_metadata[kIndexInFileMessages];
}

// ===================================================================

void AddressBook::InitAsDefaultInstance()
{
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddressBook::kPeopleFieldNumber;
#endif // !defined(_MSC_VER) || _MSC_VER >= 1900

AddressBook::AddressBook() : ::google::protobuf::Message(), _internal_metadata_(NULL)
{
    ::google::protobuf::internal::InitSCC(&protobuf_address_5fbook_2eproto::scc_info_AddressBook.base);
    SharedCtor();
    // @@protoc_insertion_point(constructor:ADDRESS_BOOK.AddressBook)
}
AddressBook::AddressBook(const AddressBook &from)
    : ::google::protobuf::Message(), _internal_metadata_(NULL), _has_bits_(from._has_bits_), people_(from.people_)
{
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    // @@protoc_insertion_point(copy_constructor:ADDRESS_BOOK.AddressBook)
}

void AddressBook::SharedCtor()
{
}

AddressBook::~AddressBook()
{
    // @@protoc_insertion_point(destructor:ADDRESS_BOOK.AddressBook)
    SharedDtor();
}

void AddressBook::SharedDtor()
{
}

void AddressBook::SetCachedSize(int size) const
{
    _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor *AddressBook::descriptor()
{
    ::protobuf_address_5fbook_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_address_5fbook_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AddressBook &AddressBook::default_instance()
{
    ::google::protobuf::internal::InitSCC(&protobuf_address_5fbook_2eproto::scc_info_AddressBook.base);
    return *internal_default_instance();
}

void AddressBook::Clear()
{
    // @@protoc_insertion_point(message_clear_start:ADDRESS_BOOK.AddressBook)
    ::google::protobuf::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    people_.Clear();
    _has_bits_.Clear();
    _internal_metadata_.Clear();
}

bool AddressBook::MergePartialFromCodedStream(::google::protobuf::io::CodedInputStream *input)
{
#define DO_(EXPRESSION)                                                                                                \
    if (!GOOGLE_PREDICT_TRUE(EXPRESSION))                                                                              \
    goto failure
    ::google::protobuf::uint32 tag;
    // @@protoc_insertion_point(parse_start:ADDRESS_BOOK.AddressBook)
    for (;;)
    {
        ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
        tag = p.first;
        if (!p.second)
            goto handle_unusual;
        switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag))
        {
        // repeated .ADDRESS_BOOK.Person people = 1;
        case 1: {
            if (static_cast<::google::protobuf::uint8>(tag) ==
                static_cast<::google::protobuf::uint8>(10u /* 10 & 0xFF */))
            {
                DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_people()));
            }
            else
            {
                goto handle_unusual;
            }
            break;
        }

        default: {
        handle_unusual:
            if (tag == 0)
            {
                goto success;
            }
            DO_(::google::protobuf::internal::WireFormat::SkipField(input, tag,
                                                                    _internal_metadata_.mutable_unknown_fields()));
            break;
        }
        }
    }
success:
    // @@protoc_insertion_point(parse_success:ADDRESS_BOOK.AddressBook)
    return true;
failure:
    // @@protoc_insertion_point(parse_failure:ADDRESS_BOOK.AddressBook)
    return false;
#undef DO_
}

void AddressBook::SerializeWithCachedSizes(::google::protobuf::io::CodedOutputStream *output) const
{
    // @@protoc_insertion_point(serialize_start:ADDRESS_BOOK.AddressBook)
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated .ADDRESS_BOOK.Person people = 1;
    for (unsigned int i = 0, n = static_cast<unsigned int>(this->people_size()); i < n; i++)
    {
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(1, this->people(static_cast<int>(i)),
                                                                               output);
    }

    if (_internal_metadata_.have_unknown_fields())
    {
        ::google::protobuf::internal::WireFormat::SerializeUnknownFields(_internal_metadata_.unknown_fields(), output);
    }
    // @@protoc_insertion_point(serialize_end:ADDRESS_BOOK.AddressBook)
}

::google::protobuf::uint8 *AddressBook::InternalSerializeWithCachedSizesToArray(bool deterministic,
                                                                                ::google::protobuf::uint8 *target) const
{
    (void)deterministic; // Unused
    // @@protoc_insertion_point(serialize_to_array_start:ADDRESS_BOOK.AddressBook)
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated .ADDRESS_BOOK.Person people = 1;
    for (unsigned int i = 0, n = static_cast<unsigned int>(this->people_size()); i < n; i++)
    {
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessageToArray(
            1, this->people(static_cast<int>(i)), deterministic, target);
    }

    if (_internal_metadata_.have_unknown_fields())
    {
        target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields(), target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:ADDRESS_BOOK.AddressBook)
    return target;
}

size_t AddressBook::ByteSizeLong() const
{
    // @@protoc_insertion_point(message_byte_size_start:ADDRESS_BOOK.AddressBook)
    size_t total_size = 0;

    if (_internal_metadata_.have_unknown_fields())
    {
        total_size +=
            ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(_internal_metadata_.unknown_fields());
    }
    // repeated .ADDRESS_BOOK.Person people = 1;
    {
        unsigned int count = static_cast<unsigned int>(this->people_size());
        total_size += 1UL * count;
        for (unsigned int i = 0; i < count; i++)
        {
            total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(this->people(static_cast<int>(i)));
        }
    }

    int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
}

void AddressBook::MergeFrom(const ::google::protobuf::Message &from)
{
    // @@protoc_insertion_point(generalized_merge_from_start:ADDRESS_BOOK.AddressBook)
    GOOGLE_DCHECK_NE(&from, this);
    const AddressBook *source = ::google::protobuf::internal::DynamicCastToGenerated<const AddressBook>(&from);
    if (source == NULL)
    {
        // @@protoc_insertion_point(generalized_merge_from_cast_fail:ADDRESS_BOOK.AddressBook)
        ::google::protobuf::internal::ReflectionOps::Merge(from, this);
    }
    else
    {
        // @@protoc_insertion_point(generalized_merge_from_cast_success:ADDRESS_BOOK.AddressBook)
        MergeFrom(*source);
    }
}

void AddressBook::MergeFrom(const AddressBook &from)
{
    // @@protoc_insertion_point(class_specific_merge_from_start:ADDRESS_BOOK.AddressBook)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    people_.MergeFrom(from.people_);
}

void AddressBook::CopyFrom(const ::google::protobuf::Message &from)
{
    // @@protoc_insertion_point(generalized_copy_from_start:ADDRESS_BOOK.AddressBook)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void AddressBook::CopyFrom(const AddressBook &from)
{
    // @@protoc_insertion_point(class_specific_copy_from_start:ADDRESS_BOOK.AddressBook)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

bool AddressBook::IsInitialized() const
{
    return true;
}

void AddressBook::Swap(AddressBook *other)
{
    if (other == this)
        return;
    InternalSwap(other);
}
void AddressBook::InternalSwap(AddressBook *other)
{
    using std::swap;
    CastToBase(&people_)->InternalSwap(CastToBase(&other->people_));
    swap(_has_bits_[0], other->_has_bits_[0]);
    _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AddressBook::GetMetadata() const
{
    protobuf_address_5fbook_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_address_5fbook_2eproto::file_level_metadata[kIndexInFileMessages];
}

// @@protoc_insertion_point(namespace_scope)
} // namespace ADDRESS_BOOK
namespace google
{
namespace protobuf
{
template <>
GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ADDRESS_BOOK::Person *Arena::CreateMaybeMessage<::ADDRESS_BOOK::Person>(
    Arena *arena)
{
    return Arena::CreateInternal<::ADDRESS_BOOK::Person>(arena);
}
template <>
GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ADDRESS_BOOK::AddressBook *Arena::CreateMaybeMessage<::ADDRESS_BOOK::AddressBook>(
    Arena *arena)
{
    return Arena::CreateInternal<::ADDRESS_BOOK::AddressBook>(arena);
}
} // namespace protobuf
} // namespace google

// @@protoc_insertion_point(global_scope)
