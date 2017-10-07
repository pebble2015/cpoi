// Generated from /POI/java/org/apache/poi/hssf/record/CFHeaderRecord.java
#include <org/apache/poi/hssf/record/CFHeaderRecord.hpp>

#include <java/lang/String.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::hssf::record::CFHeaderRecord::CFHeaderRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CFHeaderRecord::CFHeaderRecord() 
    : CFHeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CFHeaderRecord::CFHeaderRecord(::org::apache::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules) 
    : CFHeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,nRules);
}

org::apache::poi::hssf::record::CFHeaderRecord::CFHeaderRecord(RecordInputStream* in) 
    : CFHeaderRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::CFHeaderRecord::sid;

void org::apache::poi::hssf::record::CFHeaderRecord::ctor()
{
    super::ctor();
    createEmpty();
}

void org::apache::poi::hssf::record::CFHeaderRecord::ctor(::org::apache::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules)
{
    super::ctor(regions, nRules);
}

void org::apache::poi::hssf::record::CFHeaderRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    read(in);
}

java::lang::String* org::apache::poi::hssf::record::CFHeaderRecord::getRecordName()
{
    return u"CFHEADER"_j;
}

int16_t org::apache::poi::hssf::record::CFHeaderRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::CFHeaderRecord* org::apache::poi::hssf::record::CFHeaderRecord::clone()
{
    auto result = new CFHeaderRecord();
    super::copyTo(result);
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CFHeaderRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFHeaderRecord", 41);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::CFHeaderRecord::getClass0()
{
    return class_();
}

