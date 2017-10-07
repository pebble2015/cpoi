// Generated from /POI/java/org/apache/poi/hssf/record/OldStringRecord.java
#include <org/apache/poi/hssf/record/OldStringRecord.hpp>

#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::OldStringRecord::OldStringRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::OldStringRecord::OldStringRecord(RecordInputStream* in) 
    : OldStringRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::OldStringRecord::biff2_sid;

constexpr int16_t org::apache::poi::hssf::record::OldStringRecord::biff345_sid;

void org::apache::poi::hssf::record::OldStringRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    sid = npc(in)->getSid();
    if(npc(in)->getSid() == biff2_sid) {
        field_1_string_len = static_cast< int16_t >(npc(in)->readUByte());
    } else {
        field_1_string_len = npc(in)->readShort();
    }
    field_2_bytes = new ::int8_tArray(field_1_string_len);
    npc(in)->read(field_2_bytes, 0, field_1_string_len);
}

bool org::apache::poi::hssf::record::OldStringRecord::isBiff2()
{
    return sid == biff2_sid;
}

int16_t org::apache::poi::hssf::record::OldStringRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::OldStringRecord::setCodePage(CodepageRecord* codepage)
{
    this->codepage = codepage;
}

java::lang::String* org::apache::poi::hssf::record::OldStringRecord::getString()
{
    return getString(field_2_bytes, codepage);
}

java::lang::String* org::apache::poi::hssf::record::OldStringRecord::getString(::int8_tArray* data, CodepageRecord* codepage)
{
    clinit();
    auto cp = ::org::apache::poi::hpsf::Property::DEFAULT_CODEPAGE;
    if(codepage != nullptr) {
        cp = npc(codepage)->getCodepage() & int32_t(65535);
    }
    try {
        return ::org::apache::poi::util::CodePageUtil::getStringFromCodePage(data, cp);
    } catch (::java::io::UnsupportedEncodingException* uee) {
        throw new ::java::lang::IllegalArgumentException(u"Unsupported codepage requested"_j, uee);
    }
}

java::lang::String* org::apache::poi::hssf::record::OldStringRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[OLD STRING]\n"_j);
    npc(npc(npc(buffer)->append(u"    .string            = "_j))->append(getString()))->append(u"\n"_j);
    npc(buffer)->append(u"[/OLD STRING]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::OldStringRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.OldStringRecord", 42);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::OldStringRecord::getClass0()
{
    return class_();
}

