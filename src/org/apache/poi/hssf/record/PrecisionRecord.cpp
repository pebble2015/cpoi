// Generated from /POI/java/org/apache/poi/hssf/record/PrecisionRecord.java
#include <org/apache/poi/hssf/record/PrecisionRecord.hpp>

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

org::apache::poi::hssf::record::PrecisionRecord::PrecisionRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::PrecisionRecord::PrecisionRecord() 
    : PrecisionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::PrecisionRecord::PrecisionRecord(RecordInputStream* in) 
    : PrecisionRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::PrecisionRecord::sid;

void org::apache::poi::hssf::record::PrecisionRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::PrecisionRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_precision = npc(in)->readShort();
}

void org::apache::poi::hssf::record::PrecisionRecord::setFullPrecision(bool fullprecision)
{
    if(fullprecision == true) {
        field_1_precision = 1;
    } else {
        field_1_precision = 0;
    }
}

bool org::apache::poi::hssf::record::PrecisionRecord::getFullPrecision()
{
    return (field_1_precision == 1);
}

java::lang::String* org::apache::poi::hssf::record::PrecisionRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PRECISION]\n"_j);
    npc(npc(npc(buffer)->append(u"    .precision       = "_j))->append(getFullPrecision()))->append(u"\n"_j);
    npc(buffer)->append(u"[/PRECISION]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::PrecisionRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_precision);
}

int32_t org::apache::poi::hssf::record::PrecisionRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::PrecisionRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::PrecisionRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PrecisionRecord", 42);
    return c;
}

int32_t org::apache::poi::hssf::record::PrecisionRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::PrecisionRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::PrecisionRecord::getClass0()
{
    return class_();
}

