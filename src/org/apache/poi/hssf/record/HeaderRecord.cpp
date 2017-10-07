// Generated from /POI/java/org/apache/poi/hssf/record/HeaderRecord.java
#include <org/apache/poi/hssf/record/HeaderRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::HeaderRecord::HeaderRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::HeaderRecord::HeaderRecord(::java::lang::String* text) 
    : HeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(text);
}

org::apache::poi::hssf::record::HeaderRecord::HeaderRecord(RecordInputStream* in) 
    : HeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::HeaderRecord::sid;

void org::apache::poi::hssf::record::HeaderRecord::ctor(::java::lang::String* text)
{
    super::ctor(text);
}

void org::apache::poi::hssf::record::HeaderRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
}

java::lang::String* org::apache::poi::hssf::record::HeaderRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[HEADER]\n"_j);
    npc(npc(npc(buffer)->append(u"    .header = "_j))->append(getText()))->append(u"\n"_j);
    npc(buffer)->append(u"[/HEADER]\n"_j);
    return npc(buffer)->toString();
}

int16_t org::apache::poi::hssf::record::HeaderRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::HeaderRecord* org::apache::poi::hssf::record::HeaderRecord::clone()
{
    return new HeaderRecord(getText());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::HeaderRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HeaderRecord", 39);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::HeaderRecord::getClass0()
{
    return class_();
}

