// Generated from /POI/java/org/apache/poi/ddf/AbstractEscherOptRecord.java
#include <org/apache/poi/ddf/AbstractEscherOptRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/AbstractEscherOptRecord_sortProperties_1.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherPropertyFactory.hpp>
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

poi::ddf::AbstractEscherOptRecord::AbstractEscherOptRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::AbstractEscherOptRecord::AbstractEscherOptRecord()
    : AbstractEscherOptRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ddf::AbstractEscherOptRecord::ctor()
{
    super::ctor();
    init();
}

void poi::ddf::AbstractEscherOptRecord::init()
{
    properties = new ::java::util::ArrayList();
}

void poi::ddf::AbstractEscherOptRecord::addEscherProperty(EscherProperty* prop)
{
    npc(properties)->add(static_cast< ::java::lang::Object* >(prop));
}

int32_t poi::ddf::AbstractEscherOptRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto propertiesCount = readInstance(data, offset);
    auto pos = offset + int32_t(8);
    auto f = new EscherPropertyFactory();
    properties = npc(f)->createProperties(data, pos, propertiesCount);
    return bytesRemaining + int32_t(8);
}

java::util::List* poi::ddf::AbstractEscherOptRecord::getEscherProperties()
{
    return properties;
}

poi::ddf::EscherProperty* poi::ddf::AbstractEscherOptRecord::getEscherProperty(int32_t index)
{
    return java_cast< EscherProperty* >(npc(properties)->get(index));
}

int32_t poi::ddf::AbstractEscherOptRecord::getPropertiesSize()
{
    auto totalSize = int32_t(0);
    for (auto _i = npc(properties)->iterator(); _i->hasNext(); ) {
        EscherProperty* property = java_cast< EscherProperty* >(_i->next());
        {
            totalSize += npc(property)->getPropertySize();
        }
    }
    return totalSize;
}

int32_t poi::ddf::AbstractEscherOptRecord::getRecordSize()
{
    return int32_t(8) + getPropertiesSize();
}

/* <T extends EscherProperty> */poi::ddf::EscherProperty* poi::ddf::AbstractEscherOptRecord::lookup(int32_t propId)
{
    for (auto _i = npc(properties)->iterator(); _i->hasNext(); ) {
        EscherProperty* prop = java_cast< EscherProperty* >(_i->next());
        {
            if(npc(prop)->getPropertyNumber() == propId) {
                auto const result = java_cast< EscherProperty* >(prop);
                return result;
            }
        }
    }
    return nullptr;
}

int32_t poi::ddf::AbstractEscherOptRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    ::poi::util::LittleEndian::putInt(data, offset + int32_t(4), getPropertiesSize());
    auto pos = offset + int32_t(8);
    for (auto _i = npc(properties)->iterator(); _i->hasNext(); ) {
        EscherProperty* property = java_cast< EscherProperty* >(_i->next());
        {
            pos += npc(property)->serializeSimplePart(data, pos);
        }
    }
    for (auto _i = npc(properties)->iterator(); _i->hasNext(); ) {
        EscherProperty* property = java_cast< EscherProperty* >(_i->next());
        {
            pos += npc(property)->serializeComplexPart(data, pos);
        }
    }
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

void poi::ddf::AbstractEscherOptRecord::sortProperties()
{
    ::java::util::Collections::sort(properties, new AbstractEscherOptRecord_sortProperties_1(this));
}

void poi::ddf::AbstractEscherOptRecord::setEscherProperty(EscherProperty* value)
{
    for (auto *iterator = npc(properties)->iterator(); npc(iterator)->hasNext(); ) {
        auto prop = java_cast< EscherProperty* >(npc(iterator)->next());
        if(npc(prop)->getId() == npc(value)->getId()) {
            npc(iterator)->remove();
        }
    }
    npc(properties)->add(static_cast< ::java::lang::Object* >(value));
    sortProperties();
}

void poi::ddf::AbstractEscherOptRecord::removeEscherProperty(int32_t num)
{
    for (auto *iterator = npc(getEscherProperties())->iterator(); npc(iterator)->hasNext(); ) {
        auto prop = java_cast< EscherProperty* >(npc(iterator)->next());
        if(npc(prop)->getPropertyNumber() == num) {
            npc(iterator)->remove();
        }
    }
}

java::lang::ObjectArrayArray* poi::ddf::AbstractEscherOptRecord::getAttributeMap()
{
    ::java::util::List* attrList = new ::java::util::ArrayList(npc(properties)->size() * int32_t(2) + int32_t(2));
    npc(attrList)->add(static_cast< ::java::lang::Object* >(u"properties"_j));
    npc(attrList)->add(::java::lang::Integer::valueOf(npc(properties)->size()));
    for (auto _i = npc(properties)->iterator(); _i->hasNext(); ) {
        EscherProperty* property = java_cast< EscherProperty* >(_i->next());
        {
            npc(attrList)->add(static_cast< ::java::lang::Object* >(npc(property)->getName()));
            npc(attrList)->add(static_cast< ::java::lang::Object* >(property));
        }
    }
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"isContainer"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Boolean::valueOf(isContainerRecord()))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"numchildren"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(getChildRecords())->size()))
    }))
        , npc(attrList)->toArray_()
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::AbstractEscherOptRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.AbstractEscherOptRecord", 42);
    return c;
}

int32_t poi::ddf::AbstractEscherOptRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* poi::ddf::AbstractEscherOptRecord::serialize()
{
    return super::serialize();
}

int32_t poi::ddf::AbstractEscherOptRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* poi::ddf::AbstractEscherOptRecord::getClass0()
{
    return class_();
}

