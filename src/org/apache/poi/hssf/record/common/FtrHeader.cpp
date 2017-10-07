// Generated from /POI/java/org/apache/poi/hssf/record/common/FtrHeader.java
#include <org/apache/poi/hssf/record/common/FtrHeader.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::common::FtrHeader::FtrHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::common::FtrHeader::FtrHeader() 
    : FtrHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::common::FtrHeader::FtrHeader(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : FtrHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::common::FtrHeader::ctor()
{
    super::ctor();
    associatedRange = new ::org::apache::poi::ss::util::CellRangeAddress(int32_t(0), int32_t(0), int32_t(0), int32_t(0));
}

void org::apache::poi::hssf::record::common::FtrHeader::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    recordType = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    associatedRange = new ::org::apache::poi::ss::util::CellRangeAddress(in);
}

java::lang::String* org::apache::poi::hssf::record::common::FtrHeader::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u" [FUTURE HEADER]\n"_j);
    npc(buffer)->append(::java::lang::StringBuilder().append(u"   Type "_j)->append(recordType)->toString());
    npc(buffer)->append(::java::lang::StringBuilder().append(u"   Flags "_j)->append(grbitFrt)->toString());
    npc(buffer)->append(u" [/FUTURE HEADER]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::common::FtrHeader::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(recordType);
    npc(out)->writeShort(grbitFrt);
    npc(associatedRange)->serialize(out);
}

int32_t org::apache::poi::hssf::record::common::FtrHeader::getDataSize()
{
    clinit();
    return 12;
}

int16_t org::apache::poi::hssf::record::common::FtrHeader::getRecordType()
{
    return recordType;
}

void org::apache::poi::hssf::record::common::FtrHeader::setRecordType(int16_t recordType)
{
    this->recordType = recordType;
}

int16_t org::apache::poi::hssf::record::common::FtrHeader::getGrbitFrt()
{
    return grbitFrt;
}

void org::apache::poi::hssf::record::common::FtrHeader::setGrbitFrt(int16_t grbitFrt)
{
    this->grbitFrt = grbitFrt;
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::common::FtrHeader::getAssociatedRange()
{
    return associatedRange;
}

void org::apache::poi::hssf::record::common::FtrHeader::setAssociatedRange(::org::apache::poi::ss::util::CellRangeAddress* associatedRange)
{
    this->associatedRange = associatedRange;
}

java::lang::Object* org::apache::poi::hssf::record::common::FtrHeader::clone()
{
    auto result = new FtrHeader();
    npc(result)->recordType = recordType;
    npc(result)->grbitFrt = grbitFrt;
    npc(result)->associatedRange = npc(associatedRange)->copy();
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::common::FtrHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.FtrHeader", 43);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::common::FtrHeader::getClass0()
{
    return class_();
}

