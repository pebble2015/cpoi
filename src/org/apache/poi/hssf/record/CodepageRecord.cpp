// Generated from /POI/java/org/apache/poi/hssf/record/CodepageRecord.java
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::CodepageRecord::CodepageRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CodepageRecord::CodepageRecord() 
    : CodepageRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CodepageRecord::CodepageRecord(RecordInputStream* in) 
    : CodepageRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::CodepageRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::CodepageRecord::CODEPAGE;

void org::apache::poi::hssf::record::CodepageRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::CodepageRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_codepage = npc(in)->readShort();
}

void org::apache::poi::hssf::record::CodepageRecord::setCodepage(int16_t cp)
{
    field_1_codepage = cp;
}

int16_t org::apache::poi::hssf::record::CodepageRecord::getCodepage()
{
    return field_1_codepage;
}

java::lang::String* org::apache::poi::hssf::record::CodepageRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CODEPAGE]\n"_j);
    npc(npc(npc(buffer)->append(u"    .codepage        = "_j))->append(::java::lang::Integer::toHexString(getCodepage())))->append(u"\n"_j);
    npc(buffer)->append(u"[/CODEPAGE]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::CodepageRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getCodepage());
}

int32_t org::apache::poi::hssf::record::CodepageRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::CodepageRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CodepageRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CodepageRecord", 41);
    return c;
}

int32_t org::apache::poi::hssf::record::CodepageRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::CodepageRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CodepageRecord::getClass0()
{
    return class_();
}

