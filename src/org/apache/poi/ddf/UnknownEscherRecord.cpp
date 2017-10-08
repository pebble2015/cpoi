// Generated from /POI/java/org/apache/poi/ddf/UnknownEscherRecord.java
#include <org/apache/poi/ddf/UnknownEscherRecord.hpp>

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
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
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

poi::ddf::UnknownEscherRecord::UnknownEscherRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::UnknownEscherRecord::UnknownEscherRecord() 
    : UnknownEscherRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ddf::UnknownEscherRecord::init()
{
    thedata = UnknownEscherRecord::NO_BYTES_;
}

int8_tArray*& poi::ddf::UnknownEscherRecord::NO_BYTES()
{
    clinit();
    return NO_BYTES_;
}
int8_tArray* poi::ddf::UnknownEscherRecord::NO_BYTES_;

void poi::ddf::UnknownEscherRecord::ctor()
{
    super::ctor();
    init();
    _childRecords = new ::java::util::ArrayList();
}

int32_t poi::ddf::UnknownEscherRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto available = npc(data)->length - (offset + int32_t(8));
    if(bytesRemaining > available) {
        bytesRemaining = available;
    }
    if(isContainerRecord()) {
        auto bytesWritten = int32_t(0);
        thedata = new ::int8_tArray(int32_t(0));
        offset += 8;
        bytesWritten += 8;
        while (bytesRemaining > 0) {
            auto child = npc(recordFactory)->createRecord(data, offset);
            auto childBytesWritten = npc(child)->fillFields(data, offset, recordFactory);
            bytesWritten += childBytesWritten;
            offset += childBytesWritten;
            bytesRemaining -= childBytesWritten;
            npc(getChildRecords())->add(static_cast< ::java::lang::Object* >(child));
        }
        return bytesWritten;
    }
    if(bytesRemaining < 0) {
        bytesRemaining = 0;
    }
    thedata = new ::int8_tArray(bytesRemaining);
    ::java::lang::System::arraycopy(data, offset + int32_t(8), thedata, 0, bytesRemaining);
    return bytesRemaining + int32_t(8);
}

int32_t poi::ddf::UnknownEscherRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    ::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto remainingBytes = npc(thedata)->length;
    for (auto _i = npc(_childRecords)->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            remainingBytes += npc(r)->getRecordSize();
        }
    }
    ::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    ::java::lang::System::arraycopy(thedata, 0, data, offset + int32_t(8), npc(thedata)->length);
    auto pos = offset + int32_t(8) + npc(thedata)->length;
    for (auto _i = npc(_childRecords)->iterator(); _i->hasNext(); ) {
        EscherRecord* r = java_cast< EscherRecord* >(_i->next());
        {
            pos += npc(r)->serialize(pos, data, listener);
        }
    }
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

int8_tArray* poi::ddf::UnknownEscherRecord::getData()
{
    return thedata;
}

int32_t poi::ddf::UnknownEscherRecord::getRecordSize()
{
    return int32_t(8) + npc(thedata)->length;
}

java::util::List* poi::ddf::UnknownEscherRecord::getChildRecords()
{
    return _childRecords;
}

void poi::ddf::UnknownEscherRecord::setChildRecords(::java::util::List* childRecords)
{
    _childRecords = childRecords;
}

poi::ddf::UnknownEscherRecord* poi::ddf::UnknownEscherRecord::clone()
{
    auto uer = new UnknownEscherRecord();
    npc(uer)->thedata = npc(this->thedata)->clone();
    npc(uer)->setOptions(this->getOptions());
    npc(uer)->setRecordId(this->getRecordId());
    return uer;
}

java::lang::String* poi::ddf::UnknownEscherRecord::getRecordName()
{
    return ::java::lang::StringBuilder().append(u"Unknown 0x"_j)->append(::poi::util::HexDump::toHex(getRecordId()))->toString();
}

void poi::ddf::UnknownEscherRecord::addChildRecord(EscherRecord* childRecord)
{
    npc(getChildRecords())->add(static_cast< ::java::lang::Object* >(childRecord));
}

java::lang::ObjectArrayArray* poi::ddf::UnknownEscherRecord::getAttributeMap()
{
    auto numCh = npc(getChildRecords())->size();
    ::java::util::List* chLst = new ::java::util::ArrayList(numCh * int32_t(2) + int32_t(2));
    npc(chLst)->add(static_cast< ::java::lang::Object* >(u"children"_j));
    npc(chLst)->add(::java::lang::Integer::valueOf(numCh));
    for (auto _i = npc(_childRecords)->iterator(); _i->hasNext(); ) {
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

java::lang::Class* poi::ddf::UnknownEscherRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.UnknownEscherRecord", 38);
    return c;
}

void poi::ddf::UnknownEscherRecord::clinit()
{
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

int32_t poi::ddf::UnknownEscherRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* poi::ddf::UnknownEscherRecord::serialize()
{
    return super::serialize();
}

int32_t poi::ddf::UnknownEscherRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* poi::ddf::UnknownEscherRecord::getClass0()
{
    return class_();
}

