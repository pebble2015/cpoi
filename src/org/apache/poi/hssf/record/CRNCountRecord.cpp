// Generated from /POI/java/org/apache/poi/hssf/record/CRNCountRecord.java
#include <org/apache/poi/hssf/record/CRNCountRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
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

org::apache::poi::hssf::record::CRNCountRecord::CRNCountRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CRNCountRecord::CRNCountRecord() 
    : CRNCountRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CRNCountRecord::CRNCountRecord(RecordInputStream* in) 
    : CRNCountRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::CRNCountRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::CRNCountRecord::DATA_SIZE;

void org::apache::poi::hssf::record::CRNCountRecord::ctor()
{
    super::ctor();
    throw new ::java::lang::RuntimeException(u"incomplete code"_j);
}

int32_t org::apache::poi::hssf::record::CRNCountRecord::getNumberOfCRNs()
{
    return field_1_number_crn_records;
}

void org::apache::poi::hssf::record::CRNCountRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_number_crn_records = npc(in)->readShort();
    if(field_1_number_crn_records < 0) {
        field_1_number_crn_records = static_cast< int16_t >(-field_1_number_crn_records);
    }
    field_2_sheet_table_index = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::CRNCountRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" [XCT"_j);
    npc(npc(sb)->append(u" nCRNs="_j))->append(field_1_number_crn_records);
    npc(npc(sb)->append(u" sheetIx="_j))->append(field_2_sheet_table_index);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

void org::apache::poi::hssf::record::CRNCountRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(static_cast< int16_t >(field_1_number_crn_records));
    npc(out)->writeShort(static_cast< int16_t >(field_2_sheet_table_index));
}

int32_t org::apache::poi::hssf::record::CRNCountRecord::getDataSize()
{
    return DATA_SIZE;
}

int16_t org::apache::poi::hssf::record::CRNCountRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CRNCountRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CRNCountRecord", 41);
    return c;
}

int32_t org::apache::poi::hssf::record::CRNCountRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::CRNCountRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CRNCountRecord::getClass0()
{
    return class_();
}

