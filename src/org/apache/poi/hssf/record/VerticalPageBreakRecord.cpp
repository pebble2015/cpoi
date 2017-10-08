// Generated from /POI/java/org/apache/poi/hssf/record/VerticalPageBreakRecord.java
#include <org/apache/poi/hssf/record/VerticalPageBreakRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord_Break.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord.hpp>

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

poi::hssf::record::VerticalPageBreakRecord::VerticalPageBreakRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::VerticalPageBreakRecord::VerticalPageBreakRecord() 
    : VerticalPageBreakRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::VerticalPageBreakRecord::VerticalPageBreakRecord(RecordInputStream* in) 
    : VerticalPageBreakRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::VerticalPageBreakRecord::sid;

void poi::hssf::record::VerticalPageBreakRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::VerticalPageBreakRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
}

int16_t poi::hssf::record::VerticalPageBreakRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::VerticalPageBreakRecord::clone()
{
    PageBreakRecord* result = new VerticalPageBreakRecord();
    auto iterator = getBreaksIterator();
    while (npc(iterator)->hasNext()) {
        auto original = java_cast< PageBreakRecord_Break* >(npc(iterator)->next());
        npc(result)->addBreak(npc(original)->main, npc(original)->subFrom, npc(original)->subTo);
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::VerticalPageBreakRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.VerticalPageBreakRecord", 50);
    return c;
}

java::lang::Class* poi::hssf::record::VerticalPageBreakRecord::getClass0()
{
    return class_();
}

