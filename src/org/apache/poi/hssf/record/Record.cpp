// Generated from /POI/java/org/apache/poi/hssf/record/Record.java
#include <org/apache/poi/hssf/record/Record.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
        } // record
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::Record::Record(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::Record::Record() 
    : Record(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::record::Record::ctor()
{
    super::ctor();
}

int8_tArray* poi::hssf::record::Record::serialize()
{
    auto retval = new ::int8_tArray(getRecordSize());
    serialize(0, retval);
    return retval;
}

java::lang::String* poi::hssf::record::Record::toString()
{
    return super::toString();
}

java::lang::Object* poi::hssf::record::Record::clone() /* throws(CloneNotSupportedException) */
{
    throw new ::java::lang::CloneNotSupportedException(::java::lang::StringBuilder().append(u"The class "_j)->append(npc(getClass())->getName())
        ->append(u" needs to define a clone method"_j)->toString());
}

poi::hssf::record::Record* poi::hssf::record::Record::cloneViaReserialise()
{
    auto b = serialize();
    auto rinp = new RecordInputStream(new ::java::io::ByteArrayInputStream(b));
    npc(rinp)->nextRecord();
    auto r = RecordFactory::createRecord(rinp);
    if(npc(r)->length != 1) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Re-serialised a record to clone it, but got "_j)->append(npc(r)->length)
            ->append(u" records back!"_j)->toString());
    }
    return (*r)[int32_t(0)];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::Record::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.Record", 33);
    return c;
}

java::lang::Class* poi::hssf::record::Record::getClass0()
{
    return class_();
}

