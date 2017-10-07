// Generated from /POI/java/org/apache/poi/hssf/record/InterfaceHdrRecord.java
#include <org/apache/poi/hssf/record/InterfaceHdrRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::InterfaceHdrRecord::InterfaceHdrRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::InterfaceHdrRecord::InterfaceHdrRecord(int32_t codePage) 
    : InterfaceHdrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(codePage);
}

org::apache::poi::hssf::record::InterfaceHdrRecord::InterfaceHdrRecord(RecordInputStream* in) 
    : InterfaceHdrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::InterfaceHdrRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::InterfaceHdrRecord::CODEPAGE;

void org::apache::poi::hssf::record::InterfaceHdrRecord::ctor(int32_t codePage)
{
    super::ctor();
    _codepage = codePage;
}

void org::apache::poi::hssf::record::InterfaceHdrRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _codepage = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::InterfaceHdrRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[INTERFACEHDR]\n"_j);
    npc(npc(npc(buffer)->append(u"    .codepage = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(_codepage)))->append(u"\n"_j);
    npc(buffer)->append(u"[/INTERFACEHDR]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::InterfaceHdrRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_codepage);
}

int32_t org::apache::poi::hssf::record::InterfaceHdrRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::InterfaceHdrRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::InterfaceHdrRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.InterfaceHdrRecord", 45);
    return c;
}

int32_t org::apache::poi::hssf::record::InterfaceHdrRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::InterfaceHdrRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::InterfaceHdrRecord::getClass0()
{
    return class_();
}

