// Generated from /POI/java/org/apache/poi/hssf/record/CRNRecord.java
#include <org/apache/poi/hssf/record/CRNRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/formula/constant/ConstantValueParser.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::CRNRecord::CRNRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CRNRecord::CRNRecord() 
    : CRNRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CRNRecord::CRNRecord(RecordInputStream* in) 
    : CRNRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::CRNRecord::sid;

void org::apache::poi::hssf::record::CRNRecord::ctor()
{
    super::ctor();
    throw new ::java::lang::RuntimeException(u"incomplete code"_j);
}

int32_t org::apache::poi::hssf::record::CRNRecord::getNumberOfCRNs()
{
    return field_1_last_column_index;
}

void org::apache::poi::hssf::record::CRNRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_last_column_index = npc(in)->readUByte();
    field_2_first_column_index = npc(in)->readUByte();
    field_3_row_index = npc(in)->readShort();
    auto nValues = field_1_last_column_index - field_2_first_column_index + int32_t(1);
    field_4_constant_values = ::org::apache::poi::ss::formula::constant::ConstantValueParser::parse(in, nValues);
}

java::lang::String* org::apache::poi::hssf::record::CRNRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" [CRN"_j);
    npc(npc(sb)->append(u" rowIx="_j))->append(field_3_row_index);
    npc(npc(sb)->append(u" firstColIx="_j))->append(field_2_first_column_index);
    npc(npc(sb)->append(u" lastColIx="_j))->append(field_1_last_column_index);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

int32_t org::apache::poi::hssf::record::CRNRecord::getDataSize()
{
    return int32_t(4) + ::org::apache::poi::ss::formula::constant::ConstantValueParser::getEncodedSize(field_4_constant_values);
}

void org::apache::poi::hssf::record::CRNRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(field_1_last_column_index);
    npc(out)->writeByte(field_2_first_column_index);
    npc(out)->writeShort(field_3_row_index);
    ::org::apache::poi::ss::formula::constant::ConstantValueParser::encode(out, field_4_constant_values);
}

int16_t org::apache::poi::hssf::record::CRNRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CRNRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CRNRecord", 36);
    return c;
}

int32_t org::apache::poi::hssf::record::CRNRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::CRNRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CRNRecord::getClass0()
{
    return class_();
}

