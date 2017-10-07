// Generated from /POI/java/org/apache/poi/ddf/EscherSpRecord.java
#include <org/apache/poi/ddf/EscherSpRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/HexDump.hpp>
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

org::apache::poi::ddf::EscherSpRecord::EscherSpRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherSpRecord::EscherSpRecord()
    : EscherSpRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherSpRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherSpRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherSpRecord::RECORD_DESCRIPTION_;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_GROUP;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_CHILD;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_PATRIARCH;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_DELETED;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_OLESHAPE;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_HAVEMASTER;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPVERT;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_CONNECTOR;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_BACKGROUND;

constexpr int32_t org::apache::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE;

int32_t org::apache::poi::ddf::EscherSpRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    field_1_shapeId = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_2_flags = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    return getRecordSize();
}

int32_t org::apache::poi::ddf::EscherSpRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto remainingBytes = int32_t(8);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(8), field_1_shapeId);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(12), field_2_flags);
    npc(listener)->afterRecordSerialize(offset + getRecordSize(), getRecordId(), getRecordSize(), this);
    return int32_t(8) + int32_t(8);
}

int32_t org::apache::poi::ddf::EscherSpRecord::getRecordSize()
{
    return int32_t(8) + int32_t(8);
}

int16_t org::apache::poi::ddf::EscherSpRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherSpRecord::getRecordName()
{
    return u"Sp"_j;
}

java::lang::String* org::apache::poi::ddf::EscherSpRecord::decodeFlags(int32_t flags)
{
    auto result = new ::java::lang::StringBuffer();
    npc(result)->append((flags & FLAG_GROUP) != 0 ? u"|GROUP"_j : u""_j);
    npc(result)->append((flags & FLAG_CHILD) != 0 ? u"|CHILD"_j : u""_j);
    npc(result)->append((flags & FLAG_PATRIARCH) != 0 ? u"|PATRIARCH"_j : u""_j);
    npc(result)->append((flags & FLAG_DELETED) != 0 ? u"|DELETED"_j : u""_j);
    npc(result)->append((flags & FLAG_OLESHAPE) != 0 ? u"|OLESHAPE"_j : u""_j);
    npc(result)->append((flags & FLAG_HAVEMASTER) != 0 ? u"|HAVEMASTER"_j : u""_j);
    npc(result)->append((flags & FLAG_FLIPHORIZ) != 0 ? u"|FLIPHORIZ"_j : u""_j);
    npc(result)->append((flags & FLAG_FLIPVERT) != 0 ? u"|FLIPVERT"_j : u""_j);
    npc(result)->append((flags & FLAG_CONNECTOR) != 0 ? u"|CONNECTOR"_j : u""_j);
    npc(result)->append((flags & FLAG_HAVEANCHOR) != 0 ? u"|HAVEANCHOR"_j : u""_j);
    npc(result)->append((flags & FLAG_BACKGROUND) != 0 ? u"|BACKGROUND"_j : u""_j);
    npc(result)->append((flags & FLAG_HASSHAPETYPE) != 0 ? u"|HASSHAPETYPE"_j : u""_j);
    if(npc(result)->length() > 0) {
        npc(result)->deleteCharAt(int32_t(0));
    }
    return npc(result)->toString();
}

int32_t org::apache::poi::ddf::EscherSpRecord::getShapeId()
{
    return field_1_shapeId;
}

void org::apache::poi::ddf::EscherSpRecord::setShapeId(int32_t field_1_shapeId)
{
    this->field_1_shapeId = field_1_shapeId;
}

int32_t org::apache::poi::ddf::EscherSpRecord::getFlags()
{
    return field_2_flags;
}

void org::apache::poi::ddf::EscherSpRecord::setFlags(int32_t field_2_flags)
{
    this->field_2_flags = field_2_flags;
}

int16_t org::apache::poi::ddf::EscherSpRecord::getShapeType()
{
    return getInstance();
}

void org::apache::poi::ddf::EscherSpRecord::setShapeType(int16_t value)
{
    setInstance(value);
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherSpRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"ShapeType"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(getShapeType()))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"ShapeId"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_1_shapeId))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Flags"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(decodeFlags(field_2_flags))->append(u" (0x"_j)
        ->append(::org::apache::poi::util::HexDump::toHex(field_2_flags))
        ->append(u")"_j)->toString())
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherSpRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherSpRecord", 33);
    return c;
}

void org::apache::poi::ddf::EscherSpRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtSp"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherSpRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherSpRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherSpRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherSpRecord::getClass0()
{
    return class_();
}

