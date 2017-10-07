// Generated from /POI/java/org/apache/poi/ddf/EscherSpgrRecord.java
#include <org/apache/poi/ddf/EscherSpgrRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherSpgrRecord::EscherSpgrRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherSpgrRecord::EscherSpgrRecord()
    : EscherSpgrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherSpgrRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherSpgrRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherSpgrRecord::RECORD_DESCRIPTION_;

int32_t org::apache::poi::ddf::EscherSpgrRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    field_1_rectX1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_2_rectY1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_3_rectX2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_4_rectY2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    bytesRemaining -= size;
    if(bytesRemaining != 0) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expected no remaining bytes but got "_j)->append(bytesRemaining)->toString());
    }
    return int32_t(8) + size + bytesRemaining;
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto remainingBytes = int32_t(16);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(8), field_1_rectX1);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(12), field_2_rectY1);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(16), field_3_rectX2);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(20), field_4_rectY2);
    npc(listener)->afterRecordSerialize(offset + getRecordSize(), getRecordId(), offset + getRecordSize(), this);
    return int32_t(8) + int32_t(16);
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::getRecordSize()
{
    return int32_t(8) + int32_t(16);
}

int16_t org::apache::poi::ddf::EscherSpgrRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherSpgrRecord::getRecordName()
{
    return u"Spgr"_j;
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::getRectX1()
{
    return field_1_rectX1;
}

void org::apache::poi::ddf::EscherSpgrRecord::setRectX1(int32_t x1)
{
    this->field_1_rectX1 = x1;
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::getRectY1()
{
    return field_2_rectY1;
}

void org::apache::poi::ddf::EscherSpgrRecord::setRectY1(int32_t y1)
{
    this->field_2_rectY1 = y1;
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::getRectX2()
{
    return field_3_rectX2;
}

void org::apache::poi::ddf::EscherSpgrRecord::setRectX2(int32_t x2)
{
    this->field_3_rectX2 = x2;
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::getRectY2()
{
    return field_4_rectY2;
}

void org::apache::poi::ddf::EscherSpgrRecord::setRectY2(int32_t rectY2)
{
    this->field_4_rectY2 = rectY2;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherSpgrRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"RectX"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_1_rectX1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"RectY"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_2_rectY1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"RectWidth"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_3_rectX2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"RectHeight"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_4_rectY2))
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherSpgrRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherSpgrRecord", 35);
    return c;
}

void org::apache::poi::ddf::EscherSpgrRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtSpgr"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherSpgrRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherSpgrRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherSpgrRecord::getClass0()
{
    return class_();
}

