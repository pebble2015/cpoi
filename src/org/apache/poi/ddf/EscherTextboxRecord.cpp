// Generated from /POI/java/org/apache/poi/ddf/EscherTextboxRecord.java
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
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

org::apache::poi::ddf::EscherTextboxRecord::EscherTextboxRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherTextboxRecord::EscherTextboxRecord() 
    : EscherTextboxRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherTextboxRecord::init()
{
    thedata = EscherTextboxRecord::NO_BYTES_;
}

constexpr int16_t org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherTextboxRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherTextboxRecord::RECORD_DESCRIPTION_;

int8_tArray*& org::apache::poi::ddf::EscherTextboxRecord::NO_BYTES()
{
    clinit();
    return NO_BYTES_;
}
int8_tArray* org::apache::poi::ddf::EscherTextboxRecord::NO_BYTES_;

void org::apache::poi::ddf::EscherTextboxRecord::ctor()
{
    super::ctor();
    init();
}

int32_t org::apache::poi::ddf::EscherTextboxRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    thedata = new ::int8_tArray(bytesRemaining);
    ::java::lang::System::arraycopy(data, offset + int32_t(8), thedata, 0, bytesRemaining);
    return bytesRemaining + int32_t(8);
}

int32_t org::apache::poi::ddf::EscherTextboxRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto remainingBytes = npc(thedata)->length;
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    ::java::lang::System::arraycopy(thedata, 0, data, offset + int32_t(8), npc(thedata)->length);
    auto pos = offset + int32_t(8) + npc(thedata)->length;
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    auto size = pos - offset;
    if(size != getRecordSize()) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(size)->append(u" bytes written but getRecordSize() reports "_j)
            ->append(getRecordSize())->toString());
    }
    return size;
}

int8_tArray* org::apache::poi::ddf::EscherTextboxRecord::getData()
{
    return thedata;
}

void org::apache::poi::ddf::EscherTextboxRecord::setData(::int8_tArray* b, int32_t start, int32_t length)
{
    thedata = new ::int8_tArray(length);
    ::java::lang::System::arraycopy(b, start, thedata, 0, length);
}

void org::apache::poi::ddf::EscherTextboxRecord::setData(::int8_tArray* b)
{
    setData(b, 0, npc(b)->length);
}

int32_t org::apache::poi::ddf::EscherTextboxRecord::getRecordSize()
{
    return int32_t(8) + npc(thedata)->length;
}

org::apache::poi::ddf::EscherTextboxRecord* org::apache::poi::ddf::EscherTextboxRecord::clone()
{
    auto etr = new EscherTextboxRecord();
    npc(etr)->setOptions(this->getOptions());
    npc(etr)->setRecordId(this->getRecordId());
    npc(etr)->thedata = npc(this->thedata)->clone();
    return etr;
}

java::lang::String* org::apache::poi::ddf::EscherTextboxRecord::getRecordName()
{
    return u"ClientTextbox"_j;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherTextboxRecord::getAttributeMap()
{
    auto numCh = npc(getChildRecords())->size();
    ::java::util::List* chLst = new ::java::util::ArrayList(numCh * int32_t(2) + int32_t(2));
    npc(chLst)->add(static_cast< ::java::lang::Object* >(u"children"_j));
    npc(chLst)->add(::java::lang::Integer::valueOf(numCh));
    for (auto _i = npc(getChildRecords())->iterator(); _i->hasNext(); ) {
        EscherRecord* er = java_cast< EscherRecord* >(_i->next());
        {
            npc(chLst)->add(static_cast< ::java::lang::Object* >(npc(er)->getRecordName()));
            npc(chLst)->add(static_cast< ::java::lang::Object* >(er));
        }
    }
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"isContainer"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Boolean::valueOf(isContainerRecord()))
    }))
        , npc(chLst)->toArray_()
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(thedata)
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherTextboxRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherTextboxRecord", 38);
    return c;
}

void org::apache::poi::ddf::EscherTextboxRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"msofbtClientTextbox"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NO_BYTES_ = new ::int8_tArray(int32_t(0));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::ddf::EscherTextboxRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherTextboxRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherTextboxRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherTextboxRecord::getClass0()
{
    return class_();
}

