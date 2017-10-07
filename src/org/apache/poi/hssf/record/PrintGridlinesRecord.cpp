// Generated from /POI/java/org/apache/poi/hssf/record/PrintGridlinesRecord.java
#include <org/apache/poi/hssf/record/PrintGridlinesRecord.hpp>

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

org::apache::poi::hssf::record::PrintGridlinesRecord::PrintGridlinesRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::PrintGridlinesRecord::PrintGridlinesRecord() 
    : PrintGridlinesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::PrintGridlinesRecord::PrintGridlinesRecord(RecordInputStream* in) 
    : PrintGridlinesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::PrintGridlinesRecord::sid;

void org::apache::poi::hssf::record::PrintGridlinesRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::PrintGridlinesRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_print_gridlines = npc(in)->readShort();
}

void org::apache::poi::hssf::record::PrintGridlinesRecord::setPrintGridlines(bool pg)
{
    if(pg == true) {
        field_1_print_gridlines = 1;
    } else {
        field_1_print_gridlines = 0;
    }
}

bool org::apache::poi::hssf::record::PrintGridlinesRecord::getPrintGridlines()
{
    return (field_1_print_gridlines == 1);
}

java::lang::String* org::apache::poi::hssf::record::PrintGridlinesRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PRINTGRIDLINES]\n"_j);
    npc(npc(npc(buffer)->append(u"    .printgridlines = "_j))->append(getPrintGridlines()))->append(u"\n"_j);
    npc(buffer)->append(u"[/PRINTGRIDLINES]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::PrintGridlinesRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_print_gridlines);
}

int32_t org::apache::poi::hssf::record::PrintGridlinesRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::PrintGridlinesRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::PrintGridlinesRecord::clone()
{
    auto rec = new PrintGridlinesRecord();
    npc(rec)->field_1_print_gridlines = field_1_print_gridlines;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::PrintGridlinesRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PrintGridlinesRecord", 47);
    return c;
}

int32_t org::apache::poi::hssf::record::PrintGridlinesRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::PrintGridlinesRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::PrintGridlinesRecord::getClass0()
{
    return class_();
}

