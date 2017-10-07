// Generated from /POI/java/org/apache/poi/ddf/EscherBitmapBlip.java
#include <org/apache/poi/ddf/EscherBitmapBlip.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
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

org::apache::poi::ddf::EscherBitmapBlip::EscherBitmapBlip(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherBitmapBlip::EscherBitmapBlip()
    : EscherBitmapBlip(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherBitmapBlip::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ddf::EscherBitmapBlip::init()
{
    field_1_UID = new ::int8_tArray(int32_t(16));
    field_2_marker = static_cast< int8_t >(int32_t(255));
}

constexpr int16_t org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_JPEG;

constexpr int16_t org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_PNG;

constexpr int16_t org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_DIB;

constexpr int32_t org::apache::poi::ddf::EscherBitmapBlip::HEADER_SIZE;

int32_t org::apache::poi::ddf::EscherBitmapBlip::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesAfterHeader = readHeader(data, offset);
    auto pos = offset + HEADER_SIZE;
    ::java::lang::System::arraycopy(data, pos, field_1_UID, 0, 16);
    pos += 16;
    field_2_marker = (*data)[pos];
    pos++;
    setPictureData(data, pos, bytesAfterHeader - int32_t(17));
    return bytesAfterHeader + HEADER_SIZE;
}

int32_t org::apache::poi::ddf::EscherBitmapBlip::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), getRecordSize() - HEADER_SIZE);
    auto pos = offset + HEADER_SIZE;
    ::java::lang::System::arraycopy(field_1_UID, 0, data, pos, 16);
    (*data)[pos + int32_t(16)] = field_2_marker;
    auto pd = getPicturedata();
    ::java::lang::System::arraycopy(pd, 0, data, pos + int32_t(17), npc(pd)->length);
    npc(listener)->afterRecordSerialize(offset + getRecordSize(), getRecordId(), getRecordSize(), this);
    return HEADER_SIZE + int32_t(16) + int32_t(1)+ npc(pd)->length;
}

int32_t org::apache::poi::ddf::EscherBitmapBlip::getRecordSize()
{
    return int32_t(8) + int32_t(16) + int32_t(1)+ npc(getPicturedata())->length;
}

int8_tArray* org::apache::poi::ddf::EscherBitmapBlip::getUID()
{
    return field_1_UID;
}

void org::apache::poi::ddf::EscherBitmapBlip::setUID(::int8_tArray* field_1_UID)
{
    if(field_1_UID == nullptr || npc(field_1_UID)->length != 16) {
        throw new ::java::lang::IllegalArgumentException(u"field_1_UID must be byte[16]"_j);
    }
    ::java::lang::System::arraycopy(field_1_UID, 0, this->field_1_UID, 0, 16);
}

int8_t org::apache::poi::ddf::EscherBitmapBlip::getMarker()
{
    return field_2_marker;
}

void org::apache::poi::ddf::EscherBitmapBlip::setMarker(int8_t field_2_marker)
{
    this->field_2_marker = field_2_marker;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherBitmapBlip::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Marker"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_2_marker))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(getPicturedata())
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherBitmapBlip::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherBitmapBlip", 35);
    return c;
}

int32_t org::apache::poi::ddf::EscherBitmapBlip::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherBitmapBlip::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherBitmapBlip::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherBitmapBlip::getClass0()
{
    return class_();
}

