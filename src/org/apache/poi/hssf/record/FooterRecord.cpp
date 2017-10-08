// Generated from /POI/java/org/apache/poi/hssf/record/FooterRecord.java
#include <org/apache/poi/hssf/record/FooterRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::FooterRecord::FooterRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FooterRecord::FooterRecord(::java::lang::String* text) 
    : FooterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(text);
}

poi::hssf::record::FooterRecord::FooterRecord(RecordInputStream* in) 
    : FooterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::FooterRecord::sid;

void poi::hssf::record::FooterRecord::ctor(::java::lang::String* text)
{
    super::ctor(text);
}

void poi::hssf::record::FooterRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
}

java::lang::String* poi::hssf::record::FooterRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FOOTER]\n"_j);
    npc(npc(npc(buffer)->append(u"    .footer = "_j))->append(getText()))->append(u"\n"_j);
    npc(buffer)->append(u"[/FOOTER]\n"_j);
    return npc(buffer)->toString();
}

int16_t poi::hssf::record::FooterRecord::getSid()
{
    return sid;
}

poi::hssf::record::FooterRecord* poi::hssf::record::FooterRecord::clone()
{
    return new FooterRecord(getText());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FooterRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FooterRecord", 39);
    return c;
}

java::lang::Class* poi::hssf::record::FooterRecord::getClass0()
{
    return class_();
}

