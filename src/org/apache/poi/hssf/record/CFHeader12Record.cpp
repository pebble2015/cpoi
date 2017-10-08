// Generated from /POI/java/org/apache/poi/hssf/record/CFHeader12Record.java
#include <org/apache/poi/hssf/record/CFHeader12Record.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/common/FtrHeader.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <Array.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::CFHeader12Record::CFHeader12Record(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CFHeader12Record::CFHeader12Record() 
    : CFHeader12Record(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::CFHeader12Record::CFHeader12Record(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules) 
    : CFHeader12Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,nRules);
}

poi::hssf::record::CFHeader12Record::CFHeader12Record(RecordInputStream* in) 
    : CFHeader12Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::CFHeader12Record::sid;

void poi::hssf::record::CFHeader12Record::ctor()
{
    super::ctor();
    createEmpty();
    futureHeader = new ::poi::hssf::record::common::FtrHeader();
    npc(futureHeader)->setRecordType(sid);
}

void poi::hssf::record::CFHeader12Record::ctor(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules)
{
    super::ctor(regions, nRules);
    futureHeader = new ::poi::hssf::record::common::FtrHeader();
    npc(futureHeader)->setRecordType(sid);
}

void poi::hssf::record::CFHeader12Record::ctor(RecordInputStream* in)
{
    super::ctor();
    futureHeader = new ::poi::hssf::record::common::FtrHeader(in);
    read(in);
}

java::lang::String* poi::hssf::record::CFHeader12Record::getRecordName()
{
    return u"CFHEADER12"_j;
}

int32_t poi::hssf::record::CFHeader12Record::getDataSize()
{
    return ::poi::hssf::record::common::FtrHeader::getDataSize() + super::getDataSize();
}

void poi::hssf::record::CFHeader12Record::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(futureHeader)->setAssociatedRange(getEnclosingCellRange());
    npc(futureHeader)->serialize(out);
    super::serialize(out);
}

int16_t poi::hssf::record::CFHeader12Record::getSid()
{
    return sid;
}

int16_t poi::hssf::record::CFHeader12Record::getFutureRecordType()
{
    return npc(futureHeader)->getRecordType();
}

poi::hssf::record::common::FtrHeader* poi::hssf::record::CFHeader12Record::getFutureHeader()
{
    return futureHeader;
}

poi::ss::util::CellRangeAddress* poi::hssf::record::CFHeader12Record::getAssociatedRange()
{
    return npc(futureHeader)->getAssociatedRange();
}

poi::hssf::record::CFHeader12Record* poi::hssf::record::CFHeader12Record::clone()
{
    auto result = new CFHeader12Record();
    npc(result)->futureHeader = java_cast< ::poi::hssf::record::common::FtrHeader* >(npc(futureHeader)->clone());
    super::copyTo(result);
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CFHeader12Record::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFHeader12Record", 43);
    return c;
}

int32_t poi::hssf::record::CFHeader12Record::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::CFHeader12Record::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::CFHeader12Record::getClass0()
{
    return class_();
}

