// Generated from /POI/java/org/apache/poi/hssf/record/CFHeaderRecord.java
#include <org/apache/poi/hssf/record/CFHeaderRecord.hpp>

#include <java/lang/String.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

poi::hssf::record::CFHeaderRecord::CFHeaderRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CFHeaderRecord::CFHeaderRecord() 
    : CFHeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::CFHeaderRecord::CFHeaderRecord(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules) 
    : CFHeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,nRules);
}

poi::hssf::record::CFHeaderRecord::CFHeaderRecord(RecordInputStream* in) 
    : CFHeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::CFHeaderRecord::sid;

void poi::hssf::record::CFHeaderRecord::ctor()
{
    super::ctor();
    createEmpty();
}

void poi::hssf::record::CFHeaderRecord::ctor(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules)
{
    super::ctor(regions, nRules);
}

void poi::hssf::record::CFHeaderRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    read(in);
}

java::lang::String* poi::hssf::record::CFHeaderRecord::getRecordName()
{
    return u"CFHEADER"_j;
}

int16_t poi::hssf::record::CFHeaderRecord::getSid()
{
    return sid;
}

poi::hssf::record::CFHeaderRecord* poi::hssf::record::CFHeaderRecord::clone()
{
    auto result = new CFHeaderRecord();
    super::copyTo(result);
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CFHeaderRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFHeaderRecord", 41);
    return c;
}

java::lang::Class* poi::hssf::record::CFHeaderRecord::getClass0()
{
    return class_();
}

