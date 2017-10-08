// Generated from /POI/java/org/apache/poi/ddf/EscherClientDataRecord.java
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
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

poi::ddf::EscherClientDataRecord::EscherClientDataRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherClientDataRecord::EscherClientDataRecord()
    : EscherClientDataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t poi::ddf::EscherClientDataRecord::RECORD_ID;

java::lang::String*& poi::ddf::EscherClientDataRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* poi::ddf::EscherClientDataRecord::RECORD_DESCRIPTION_;

int32_t poi::ddf::EscherClientDataRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    remainingData = new ::int8_tArray(bytesRemaining);
    ::java::lang::System::arraycopy(data, pos, remainingData, 0, bytesRemaining);
    return int32_t(8) + bytesRemaining;
}

int32_t poi::ddf::EscherClientDataRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    if(remainingData == nullptr) {
        remainingData = new ::int8_tArray(int32_t(0));
    }
    ::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    ::poi::util::LittleEndian::putInt(data, offset + int32_t(4), npc(remainingData)->length);
    ::java::lang::System::arraycopy(remainingData, 0, data, offset + int32_t(8), npc(remainingData)->length);
    auto pos = offset + int32_t(8) + npc(remainingData)->length;
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

int32_t poi::ddf::EscherClientDataRecord::getRecordSize()
{
    return int32_t(8) + (remainingData == nullptr ? int32_t(0) : npc(remainingData)->length);
}

int16_t poi::ddf::EscherClientDataRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* poi::ddf::EscherClientDataRecord::getRecordName()
{
    return u"ClientData"_j;
}

int8_tArray* poi::ddf::EscherClientDataRecord::getRemainingData()
{
    return remainingData;
}

void poi::ddf::EscherClientDataRecord::setRemainingData(::int8_tArray* remainingData)
{
    this->remainingData = (remainingData == nullptr) ? new ::int8_tArray(int32_t(0)) : npc(remainingData)->clone();
}

java::lang::ObjectArrayArray* poi::ddf::EscherClientDataRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({(new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(getRemainingData())
    }))});
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherClientDataRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherClientDataRecord", 41);
    return c;
}

void poi::ddf::EscherClientDataRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtClientData"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t poi::ddf::EscherClientDataRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* poi::ddf::EscherClientDataRecord::serialize()
{
    return super::serialize();
}

int32_t poi::ddf::EscherClientDataRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* poi::ddf::EscherClientDataRecord::getClass0()
{
    return class_();
}

