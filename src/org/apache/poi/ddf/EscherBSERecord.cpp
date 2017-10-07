// Generated from /POI/java/org/apache/poi/ddf/EscherBSERecord.java
#include <org/apache/poi/ddf/EscherBSERecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/ddf/NullEscherSerializationListener.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherBSERecord::EscherBSERecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherBSERecord::EscherBSERecord() 
    : EscherBSERecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherBSERecord::init()
{
    field_3_uid = new ::int8_tArray(int32_t(16));
    _remainingData = new ::int8_tArray(int32_t(0));
}

constexpr int16_t org::apache::poi::ddf::EscherBSERecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherBSERecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherBSERecord::RECORD_DESCRIPTION_;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_ERROR;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_UNKNOWN;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_EMF;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_WMF;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_PICT;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_JPEG;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_PNG;

constexpr int8_t org::apache::poi::ddf::EscherBSERecord::BT_DIB;

void org::apache::poi::ddf::EscherBSERecord::ctor()
{
    super::ctor();
    init();
    setRecordId(RECORD_ID);
}

int32_t org::apache::poi::ddf::EscherBSERecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    field_1_blipTypeWin32 = (*data)[pos];
    field_2_blipTypeMacOS = (*data)[pos + int32_t(1)];
    ::java::lang::System::arraycopy(data, pos + int32_t(2), field_3_uid, 0, 16);
    field_4_tag = ::org::apache::poi::util::LittleEndian::getShort(data, pos + int32_t(18));
    field_5_size = ::org::apache::poi::util::LittleEndian::getInt(data, pos + int32_t(20));
    field_6_ref = ::org::apache::poi::util::LittleEndian::getInt(data, pos + int32_t(24));
    field_7_offset = ::org::apache::poi::util::LittleEndian::getInt(data, pos + int32_t(28));
    field_8_usage = (*data)[pos + int32_t(32)];
    field_9_name = (*data)[pos + int32_t(33)];
    field_10_unused2 = (*data)[pos + int32_t(34)];
    field_11_unused3 = (*data)[pos + int32_t(35)];
    bytesRemaining -= 36;
    auto bytesRead = int32_t(0);
    if(bytesRemaining > 0) {
        field_12_blipRecord = java_cast< EscherBlipRecord* >(npc(recordFactory)->createRecord(data, pos + int32_t(36)));
        bytesRead = npc(field_12_blipRecord)->fillFields(data, pos + int32_t(36), recordFactory);
    }
    pos += int32_t(36) + bytesRead;
    bytesRemaining -= bytesRead;
    _remainingData = new ::int8_tArray(bytesRemaining);
    ::java::lang::System::arraycopy(data, pos, _remainingData, 0, bytesRemaining);
    return bytesRemaining + int32_t(8) + int32_t(36)+ (field_12_blipRecord == nullptr ? int32_t(0) : npc(field_12_blipRecord)->getRecordSize());
}

int32_t org::apache::poi::ddf::EscherBSERecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    if(_remainingData == nullptr) {
        _remainingData = new ::int8_tArray(int32_t(0));
    }
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto blipSize = field_12_blipRecord == nullptr ? int32_t(0) : npc(field_12_blipRecord)->getRecordSize();
    auto remainingBytes = npc(_remainingData)->length + int32_t(36) + blipSize;
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    (*data)[offset + int32_t(8)] = field_1_blipTypeWin32;
    (*data)[offset + int32_t(9)] = field_2_blipTypeMacOS;
    ::java::lang::System::arraycopy(field_3_uid, 0, data, offset + int32_t(10), 16);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(26), field_4_tag);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(28), field_5_size);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(32), field_6_ref);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(36), field_7_offset);
    (*data)[offset + int32_t(40)] = field_8_usage;
    (*data)[offset + int32_t(41)] = field_9_name;
    (*data)[offset + int32_t(42)] = field_10_unused2;
    (*data)[offset + int32_t(43)] = field_11_unused3;
    auto bytesWritten = int32_t(0);
    if(field_12_blipRecord != nullptr) {
        bytesWritten = npc(field_12_blipRecord)->serialize(offset + int32_t(44), data, static_cast< EscherSerializationListener* >(new NullEscherSerializationListener()));
    }
    ::java::lang::System::arraycopy(_remainingData, 0, data, offset + int32_t(44) + bytesWritten, npc(_remainingData)->length);
    auto pos = offset + int32_t(8) + int32_t(36)+ npc(_remainingData)->length+ bytesWritten;
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

int32_t org::apache::poi::ddf::EscherBSERecord::getRecordSize()
{
    auto field_12_size = int32_t(0);
    if(field_12_blipRecord != nullptr) {
        field_12_size = npc(field_12_blipRecord)->getRecordSize();
    }
    auto remaining_size = int32_t(0);
    if(_remainingData != nullptr) {
        remaining_size = npc(_remainingData)->length;
    }
    return int32_t(8) + int32_t(1) + int32_t(1)+ int32_t(16)+ int32_t(2)+ int32_t(4)+ int32_t(4)+ int32_t(4)+ int32_t(1)+ int32_t(1)+ int32_t(1)+ int32_t(1)+ field_12_size+ remaining_size;
}

java::lang::String* org::apache::poi::ddf::EscherBSERecord::getRecordName()
{
    return u"BSE"_j;
}

int8_t org::apache::poi::ddf::EscherBSERecord::getBlipTypeWin32()
{
    return field_1_blipTypeWin32;
}

void org::apache::poi::ddf::EscherBSERecord::setBlipTypeWin32(int8_t blipTypeWin32)
{
    field_1_blipTypeWin32 = blipTypeWin32;
}

int8_t org::apache::poi::ddf::EscherBSERecord::getBlipTypeMacOS()
{
    return field_2_blipTypeMacOS;
}

void org::apache::poi::ddf::EscherBSERecord::setBlipTypeMacOS(int8_t blipTypeMacOS)
{
    field_2_blipTypeMacOS = blipTypeMacOS;
}

int8_tArray* org::apache::poi::ddf::EscherBSERecord::getUid()
{
    return field_3_uid;
}

void org::apache::poi::ddf::EscherBSERecord::setUid(::int8_tArray* uid)
{
    if(uid == nullptr || npc(uid)->length != 16) {
        throw new ::java::lang::IllegalArgumentException(u"uid must be byte[16]"_j);
    }
    ::java::lang::System::arraycopy(uid, 0, field_3_uid, 0, npc(field_3_uid)->length);
}

int16_t org::apache::poi::ddf::EscherBSERecord::getTag()
{
    return field_4_tag;
}

void org::apache::poi::ddf::EscherBSERecord::setTag(int16_t tag)
{
    field_4_tag = tag;
}

int32_t org::apache::poi::ddf::EscherBSERecord::getSize()
{
    return field_5_size;
}

void org::apache::poi::ddf::EscherBSERecord::setSize(int32_t size)
{
    field_5_size = size;
}

int32_t org::apache::poi::ddf::EscherBSERecord::getRef()
{
    return field_6_ref;
}

void org::apache::poi::ddf::EscherBSERecord::setRef(int32_t ref)
{
    field_6_ref = ref;
}

int32_t org::apache::poi::ddf::EscherBSERecord::getOffset()
{
    return field_7_offset;
}

void org::apache::poi::ddf::EscherBSERecord::setOffset(int32_t offset)
{
    field_7_offset = offset;
}

int8_t org::apache::poi::ddf::EscherBSERecord::getUsage()
{
    return field_8_usage;
}

void org::apache::poi::ddf::EscherBSERecord::setUsage(int8_t usage)
{
    field_8_usage = usage;
}

int8_t org::apache::poi::ddf::EscherBSERecord::getName()
{
    return field_9_name;
}

void org::apache::poi::ddf::EscherBSERecord::setName(int8_t name)
{
    field_9_name = name;
}

int8_t org::apache::poi::ddf::EscherBSERecord::getUnused2()
{
    return field_10_unused2;
}

void org::apache::poi::ddf::EscherBSERecord::setUnused2(int8_t unused2)
{
    field_10_unused2 = unused2;
}

int8_t org::apache::poi::ddf::EscherBSERecord::getUnused3()
{
    return field_11_unused3;
}

void org::apache::poi::ddf::EscherBSERecord::setUnused3(int8_t unused3)
{
    field_11_unused3 = unused3;
}

org::apache::poi::ddf::EscherBlipRecord* org::apache::poi::ddf::EscherBSERecord::getBlipRecord()
{
    return field_12_blipRecord;
}

void org::apache::poi::ddf::EscherBSERecord::setBlipRecord(EscherBlipRecord* blipRecord)
{
    field_12_blipRecord = blipRecord;
}

int8_tArray* org::apache::poi::ddf::EscherBSERecord::getRemainingData()
{
    return _remainingData;
}

void org::apache::poi::ddf::EscherBSERecord::setRemainingData(::int8_tArray* remainingData)
{
    _remainingData = (remainingData == nullptr) ? new ::int8_tArray(int32_t(0)) : npc(remainingData)->clone();
}

java::lang::String* org::apache::poi::ddf::EscherBSERecord::getBlipType(int8_t b)
{
    clinit();
    switch (b) {
    case BT_ERROR:
        return u" ERROR"_j;
    case BT_UNKNOWN:
        return u" UNKNOWN"_j;
    case BT_EMF:
        return u" EMF"_j;
    case BT_WMF:
        return u" WMF"_j;
    case BT_PICT:
        return u" PICT"_j;
    case BT_JPEG:
        return u" JPEG"_j;
    case BT_PNG:
        return u" PNG"_j;
    case BT_DIB:
        return u" DIB"_j;
    }

    if(b < 32) {
        return u" NotKnown"_j;
    }
    return u" Client"_j;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherBSERecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"BlipTypeWin32"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_1_blipTypeWin32))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"BlipTypeMacOS"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_2_blipTypeMacOS))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"SUID"_j)
        , static_cast< ::java::lang::Object* >(field_3_uid)
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Tag"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_4_tag))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Size"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_5_size))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Ref"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_6_ref))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Offset"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_7_offset))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Usage"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_8_usage))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Name"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_9_name))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Unused2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_10_unused2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Unused3"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_11_unused3))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Blip Record"_j)
        , static_cast< ::java::lang::Object* >(field_12_blipRecord)
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(_remainingData)
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherBSERecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherBSERecord", 34);
    return c;
}

void org::apache::poi::ddf::EscherBSERecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtBSE"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherBSERecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherBSERecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherBSERecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherBSERecord::getClass0()
{
    return class_();
}

