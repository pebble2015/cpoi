// Generated from /POI/java/org/apache/poi/hssf/record/MulRKRecord.java
#include <org/apache/poi/hssf/record/MulRKRecord_RkRec.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::MulRKRecord_RkRec, ::java::lang::ObjectArray > MulRKRecord_RkRecArray;
        } // record
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::MulRKRecord_RkRec::MulRKRecord_RkRec(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::MulRKRecord_RkRec::MulRKRecord_RkRec(RecordInputStream* in) 
    : MulRKRecord_RkRec(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::MulRKRecord_RkRec::ENCODED_SIZE;

void poi::hssf::record::MulRKRecord_RkRec::ctor(RecordInputStream* in)
{
    super::ctor();
    xf = npc(in)->readShort();
    rk = npc(in)->readInt();
}

poi::hssf::record::MulRKRecord_RkRecArray* poi::hssf::record::MulRKRecord_RkRec::parseRKs(RecordInputStream* in)
{
    clinit();
    auto nItems = (npc(in)->remaining() - int32_t(2)) / ENCODED_SIZE;
    auto retval = new MulRKRecord_RkRecArray(nItems);
    for (auto i = int32_t(0); i < nItems; i++) {
        retval->set(i, new MulRKRecord_RkRec(in));
    }
    return retval;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::MulRKRecord_RkRec::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.MulRKRecord.RkRec", 44);
    return c;
}

java::lang::Class* poi::hssf::record::MulRKRecord_RkRec::getClass0()
{
    return class_();
}

