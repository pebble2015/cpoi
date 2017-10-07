// Generated from /POI/java/org/apache/poi/ddf/EscherChildAnchorRecord.java
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherChildAnchorRecord::EscherChildAnchorRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherChildAnchorRecord::EscherChildAnchorRecord()
    : EscherChildAnchorRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_DESCRIPTION_;

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    switch (bytesRemaining) {
    case int32_t(16):
        field_1_dx1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
        size += 4;
        field_2_dy1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
        size += 4;
        field_3_dx2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
        size += 4;
        field_4_dy2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
        size += 4;
        break;
    case int32_t(8):
        field_1_dx1 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        field_2_dy1 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        field_3_dx2 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        field_4_dy2 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        break;
    default:
        throw new ::java::lang::RuntimeException(u"Invalid EscherChildAnchorRecord - neither 8 nor 16 bytes."_j);
    }

    return int32_t(8) + size;
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    auto pos = offset;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getOptions());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getRecordId());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, getRecordSize() - int32_t(8));
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_1_dx1);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_2_dy1);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_dx2);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_4_dy2);
    pos += 4;
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::getRecordSize()
{
    return int32_t(8) + int32_t(4) * int32_t(4);
}

int16_t org::apache::poi::ddf::EscherChildAnchorRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherChildAnchorRecord::getRecordName()
{
    return u"ChildAnchor"_j;
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::getDx1()
{
    return field_1_dx1;
}

void org::apache::poi::ddf::EscherChildAnchorRecord::setDx1(int32_t field_1_dx1)
{
    this->field_1_dx1 = field_1_dx1;
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::getDy1()
{
    return field_2_dy1;
}

void org::apache::poi::ddf::EscherChildAnchorRecord::setDy1(int32_t field_2_dy1)
{
    this->field_2_dy1 = field_2_dy1;
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::getDx2()
{
    return field_3_dx2;
}

void org::apache::poi::ddf::EscherChildAnchorRecord::setDx2(int32_t field_3_dx2)
{
    this->field_3_dx2 = field_3_dx2;
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::getDy2()
{
    return field_4_dy2;
}

void org::apache::poi::ddf::EscherChildAnchorRecord::setDy2(int32_t field_4_dy2)
{
    this->field_4_dy2 = field_4_dy2;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherChildAnchorRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"X1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_1_dx1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Y1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_2_dy1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"X2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_3_dx2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Y2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_4_dy2))
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherChildAnchorRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherChildAnchorRecord", 42);
    return c;
}

void org::apache::poi::ddf::EscherChildAnchorRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtChildAnchor"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherChildAnchorRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherChildAnchorRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherChildAnchorRecord::getClass0()
{
    return class_();
}

