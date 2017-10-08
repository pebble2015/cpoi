// Generated from /POI/java/org/apache/poi/hssf/record/HorizontalPageBreakRecord.java
#include <org/apache/poi/hssf/record/HorizontalPageBreakRecord.hpp>

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

poi::hssf::record::HorizontalPageBreakRecord::HorizontalPageBreakRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::HorizontalPageBreakRecord::HorizontalPageBreakRecord() 
    : HorizontalPageBreakRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::HorizontalPageBreakRecord::HorizontalPageBreakRecord(RecordInputStream* in) 
    : HorizontalPageBreakRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::HorizontalPageBreakRecord::sid;

void poi::hssf::record::HorizontalPageBreakRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::HorizontalPageBreakRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
}

int16_t poi::hssf::record::HorizontalPageBreakRecord::getSid()
{
    return sid;
}

poi::hssf::record::PageBreakRecord* poi::hssf::record::HorizontalPageBreakRecord::clone()
{
    PageBreakRecord* result = new HorizontalPageBreakRecord();
    auto iterator = getBreaksIterator();
    while (npc(iterator)->hasNext()) {
        auto original = java_cast< PageBreakRecord_Break* >(npc(iterator)->next());
        npc(result)->addBreak(npc(original)->main, npc(original)->subFrom, npc(original)->subTo);
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::HorizontalPageBreakRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HorizontalPageBreakRecord", 52);
    return c;
}

java::lang::Class* poi::hssf::record::HorizontalPageBreakRecord::getClass0()
{
    return class_();
}

