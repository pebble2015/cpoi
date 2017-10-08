// Generated from /POI/java/org/apache/poi/hssf/record/PageBreakRecord.java
#include <org/apache/poi/hssf/record/PageBreakRecord_Break.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::PageBreakRecord_Break::PageBreakRecord_Break(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::PageBreakRecord_Break::PageBreakRecord_Break(int32_t main, int32_t subFrom, int32_t subTo) 
    : PageBreakRecord_Break(*static_cast< ::default_init_tag* >(0))
{
    ctor(main,subFrom,subTo);
}

poi::hssf::record::PageBreakRecord_Break::PageBreakRecord_Break(RecordInputStream* in) 
    : PageBreakRecord_Break(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::PageBreakRecord_Break::ENCODED_SIZE;

void poi::hssf::record::PageBreakRecord_Break::ctor(int32_t main, int32_t subFrom, int32_t subTo)
{
    super::ctor();
    this->main = main;
    this->subFrom = subFrom;
    this->subTo = subTo;
}

void poi::hssf::record::PageBreakRecord_Break::ctor(RecordInputStream* in)
{
    super::ctor();
    main = npc(in)->readUShort() - int32_t(1);
    subFrom = npc(in)->readUShort();
    subTo = npc(in)->readUShort();
}

void poi::hssf::record::PageBreakRecord_Break::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(main + int32_t(1));
    npc(out)->writeShort(subFrom);
    npc(out)->writeShort(subTo);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::PageBreakRecord_Break::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PageBreakRecord.Break", 48);
    return c;
}

java::lang::Class* poi::hssf::record::PageBreakRecord_Break::getClass0()
{
    return class_();
}

