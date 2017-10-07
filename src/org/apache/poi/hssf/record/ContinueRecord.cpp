// Generated from /POI/java/org/apache/poi/hssf/record/ContinueRecord.java
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>

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

org::apache::poi::hssf::record::ContinueRecord::ContinueRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::ContinueRecord::ContinueRecord(::int8_tArray* data) 
    : ContinueRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

org::apache::poi::hssf::record::ContinueRecord::ContinueRecord(RecordInputStream* in) 
    : ContinueRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::ContinueRecord::sid;

void org::apache::poi::hssf::record::ContinueRecord::ctor(::int8_tArray* data)
{
    super::ctor();
    _data = data;
}

int32_t org::apache::poi::hssf::record::ContinueRecord::getDataSize()
{
    return npc(_data)->length;
}

void org::apache::poi::hssf::record::ContinueRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_data);
}

int8_tArray* org::apache::poi::hssf::record::ContinueRecord::getData()
{
    return _data;
}

java::lang::String* org::apache::poi::hssf::record::ContinueRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CONTINUE RECORD]\n"_j);
    npc(npc(npc(buffer)->append(u"    .data = "_j))->append(::org::apache::poi::util::HexDump::toHex(_data)))->append(u"\n"_j);
    npc(buffer)->append(u"[/CONTINUE RECORD]\n"_j);
    return npc(buffer)->toString();
}

int16_t org::apache::poi::hssf::record::ContinueRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::ContinueRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _data = npc(in)->readRemainder();
}

org::apache::poi::hssf::record::ContinueRecord* org::apache::poi::hssf::record::ContinueRecord::clone()
{
    return new ContinueRecord(_data);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::ContinueRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ContinueRecord", 41);
    return c;
}

int32_t org::apache::poi::hssf::record::ContinueRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::ContinueRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::ContinueRecord::getClass0()
{
    return class_();
}

