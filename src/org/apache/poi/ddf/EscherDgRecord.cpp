// Generated from /POI/java/org/apache/poi/ddf/EscherDgRecord.java
#include <org/apache/poi/ddf/EscherDgRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
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

org::apache::poi::ddf::EscherDgRecord::EscherDgRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherDgRecord::EscherDgRecord()
    : EscherDgRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherDgRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherDgRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherDgRecord::RECORD_DESCRIPTION_;

int32_t org::apache::poi::ddf::EscherDgRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    field_1_numShapes = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_2_lastMSOSPID = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    return getRecordSize();
}

int32_t org::apache::poi::ddf::EscherDgRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), 8);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(8), field_1_numShapes);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(12), field_2_lastMSOSPID);
    npc(listener)->afterRecordSerialize(offset + int32_t(16), getRecordId(), getRecordSize(), this);
    return getRecordSize();
}

int32_t org::apache::poi::ddf::EscherDgRecord::getRecordSize()
{
    return int32_t(8) + int32_t(8);
}

int16_t org::apache::poi::ddf::EscherDgRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherDgRecord::getRecordName()
{
    return u"Dg"_j;
}

int32_t org::apache::poi::ddf::EscherDgRecord::getNumShapes()
{
    return field_1_numShapes;
}

void org::apache::poi::ddf::EscherDgRecord::setNumShapes(int32_t field_1_numShapes)
{
    this->field_1_numShapes = field_1_numShapes;
}

int32_t org::apache::poi::ddf::EscherDgRecord::getLastMSOSPID()
{
    return field_2_lastMSOSPID;
}

void org::apache::poi::ddf::EscherDgRecord::setLastMSOSPID(int32_t field_2_lastMSOSPID)
{
    this->field_2_lastMSOSPID = field_2_lastMSOSPID;
}

int16_t org::apache::poi::ddf::EscherDgRecord::getDrawingGroupId()
{
    return static_cast< int16_t >((getOptions() >> int32_t(4)));
}

void org::apache::poi::ddf::EscherDgRecord::incrementShapeCount()
{
    this->field_1_numShapes++;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherDgRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"NumShapes"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_1_numShapes))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"LastMSOSPID"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_2_lastMSOSPID))
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherDgRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherDgRecord", 33);
    return c;
}

void org::apache::poi::ddf::EscherDgRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtDg"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherDgRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherDgRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherDgRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherDgRecord::getClass0()
{
    return class_();
}

