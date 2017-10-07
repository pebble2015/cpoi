// Generated from /POI/java/org/apache/poi/ddf/EscherBlipRecord.java
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
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

org::apache::poi::ddf::EscherBlipRecord::EscherBlipRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherBlipRecord::EscherBlipRecord() 
    : EscherBlipRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherBlipRecord::RECORD_ID_START;

constexpr int16_t org::apache::poi::ddf::EscherBlipRecord::RECORD_ID_END;

java::lang::String*& org::apache::poi::ddf::EscherBlipRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherBlipRecord::RECORD_DESCRIPTION_;

constexpr int32_t org::apache::poi::ddf::EscherBlipRecord::HEADER_SIZE;

void org::apache::poi::ddf::EscherBlipRecord::ctor()
{
    super::ctor();
}

int32_t org::apache::poi::ddf::EscherBlipRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesAfterHeader = readHeader(data, offset);
    auto pos = offset + HEADER_SIZE;
    field_pictureData = new ::int8_tArray(bytesAfterHeader);
    ::java::lang::System::arraycopy(data, pos, field_pictureData, 0, bytesAfterHeader);
    return bytesAfterHeader + int32_t(8);
}

int32_t org::apache::poi::ddf::EscherBlipRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    ::java::lang::System::arraycopy(field_pictureData, 0, data, offset + int32_t(4), npc(field_pictureData)->length);
    npc(listener)->afterRecordSerialize(offset + int32_t(4) + npc(field_pictureData)->length, getRecordId(), npc(field_pictureData)->length + int32_t(4), this);
    return npc(field_pictureData)->length + int32_t(4);
}

int32_t org::apache::poi::ddf::EscherBlipRecord::getRecordSize()
{
    return npc(field_pictureData)->length + HEADER_SIZE;
}

java::lang::String* org::apache::poi::ddf::EscherBlipRecord::getRecordName()
{
    return u"Blip"_j;
}

int8_tArray* org::apache::poi::ddf::EscherBlipRecord::getPicturedata()
{
    return field_pictureData;
}

void org::apache::poi::ddf::EscherBlipRecord::setPictureData(::int8_tArray* pictureData)
{
    setPictureData(pictureData, 0, (pictureData == nullptr ? int32_t(0) : npc(pictureData)->length));
}

void org::apache::poi::ddf::EscherBlipRecord::setPictureData(::int8_tArray* pictureData, int32_t offset, int32_t length)
{
    if(pictureData == nullptr || offset < 0 || length < 0 || npc(pictureData)->length < offset + length) {
        throw new ::java::lang::IllegalArgumentException(u"picture data can't be null"_j);
    }
    field_pictureData = new ::int8_tArray(length);
    ::java::lang::System::arraycopy(pictureData, offset, field_pictureData, 0, length);
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherBlipRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({(new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(getPicturedata())
    }))});
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherBlipRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherBlipRecord", 35);
    return c;
}

void org::apache::poi::ddf::EscherBlipRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"msofbtBlip"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherBlipRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherBlipRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherBlipRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherBlipRecord::getClass0()
{
    return class_();
}

