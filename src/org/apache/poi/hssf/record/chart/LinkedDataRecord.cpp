// Generated from /POI/java/org/apache/poi/hssf/record/chart/LinkedDataRecord.java
#include <org/apache/poi/hssf/record/chart/LinkedDataRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::chart::LinkedDataRecord::LinkedDataRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::LinkedDataRecord::LinkedDataRecord() 
    : LinkedDataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::LinkedDataRecord::LinkedDataRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : LinkedDataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::LinkedDataRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::LinkedDataRecord::customNumberFormat()
{
    clinit();
    return customNumberFormat_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::LinkedDataRecord::customNumberFormat_;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::LINK_TYPE_TITLE_OR_TEXT;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::LINK_TYPE_VALUES;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::LINK_TYPE_CATEGORIES;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::LINK_TYPE_SECONDARY_CATEGORIES;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::REFERENCE_TYPE_DEFAULT_CATEGORIES;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::REFERENCE_TYPE_DIRECT;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::REFERENCE_TYPE_WORKSHEET;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::REFERENCE_TYPE_NOT_USED;

constexpr int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::REFERENCE_TYPE_ERROR_REPORTED;

void org::apache::poi::hssf::record::chart::LinkedDataRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_linkType = npc(in)->readByte();
    field_2_referenceType = npc(in)->readByte();
    field_3_options = npc(in)->readShort();
    field_4_indexNumberFmtRecord = npc(in)->readShort();
    auto encodedTokenLen = npc(in)->readUShort();
    field_5_formulaOfLink = ::org::apache::poi::ss::formula::Formula::read(encodedTokenLen, in);
}

java::lang::String* org::apache::poi::hssf::record::chart::LinkedDataRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[AI]\n"_j);
    npc(npc(npc(buffer)->append(u"    .linkType             = "_j))->append(::org::apache::poi::util::HexDump::byteToHex(getLinkType())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .referenceType        = "_j))->append(::org::apache::poi::util::HexDump::byteToHex(getReferenceType())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getOptions())))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .customNumberFormat   = "_j))->append(isCustomNumberFormat()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .indexNumberFmtRecord = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getIndexNumberFmtRecord())))->append(u'\u000a');
    npc(npc(buffer)->append(u"    .formulaOfLink        = "_j))->append(u'\u000a');
    auto ptgs = npc(field_5_formulaOfLink)->getTokens();
    for (auto i = int32_t(0); i < npc(ptgs)->length; i++) {
        auto ptg = (*ptgs)[i];
        npc(npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(ptg)))->append(npc(ptg)->getRVAType()))->append(u'\u000a');
    }
    npc(buffer)->append(u"[/AI]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(field_1_linkType);
    npc(out)->writeByte(field_2_referenceType);
    npc(out)->writeShort(field_3_options);
    npc(out)->writeShort(field_4_indexNumberFmtRecord);
    npc(field_5_formulaOfLink)->serialize(out);
}

int32_t org::apache::poi::hssf::record::chart::LinkedDataRecord::getDataSize()
{
    return int32_t(1) + int32_t(1) + int32_t(2)+ int32_t(2)+ npc(field_5_formulaOfLink)->getEncodedSize();
}

int16_t org::apache::poi::hssf::record::chart::LinkedDataRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::LinkedDataRecord* org::apache::poi::hssf::record::chart::LinkedDataRecord::clone()
{
    auto rec = new LinkedDataRecord();
    npc(rec)->field_1_linkType = field_1_linkType;
    npc(rec)->field_2_referenceType = field_2_referenceType;
    npc(rec)->field_3_options = field_3_options;
    npc(rec)->field_4_indexNumberFmtRecord = field_4_indexNumberFmtRecord;
    npc(rec)->field_5_formulaOfLink = npc(field_5_formulaOfLink)->copy();
    return rec;
}

int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::getLinkType()
{
    return field_1_linkType;
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::setLinkType(int8_t field_1_linkType)
{
    this->field_1_linkType = field_1_linkType;
}

int8_t org::apache::poi::hssf::record::chart::LinkedDataRecord::getReferenceType()
{
    return field_2_referenceType;
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::setReferenceType(int8_t field_2_referenceType)
{
    this->field_2_referenceType = field_2_referenceType;
}

int16_t org::apache::poi::hssf::record::chart::LinkedDataRecord::getOptions()
{
    return field_3_options;
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::setOptions(int16_t field_3_options)
{
    this->field_3_options = field_3_options;
}

int16_t org::apache::poi::hssf::record::chart::LinkedDataRecord::getIndexNumberFmtRecord()
{
    return field_4_indexNumberFmtRecord;
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::setIndexNumberFmtRecord(int16_t field_4_indexNumberFmtRecord)
{
    this->field_4_indexNumberFmtRecord = field_4_indexNumberFmtRecord;
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::chart::LinkedDataRecord::getFormulaOfLink()
{
    return npc(field_5_formulaOfLink)->getTokens();
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::setFormulaOfLink(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    this->field_5_formulaOfLink = ::org::apache::poi::ss::formula::Formula::create(ptgs);
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::setCustomNumberFormat(bool value)
{
    field_3_options = npc(customNumberFormat_)->setShortBoolean(field_3_options, value);
}

bool org::apache::poi::hssf::record::chart::LinkedDataRecord::isCustomNumberFormat()
{
    return npc(customNumberFormat_)->isSet(field_3_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::LinkedDataRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.LinkedDataRecord", 49);
    return c;
}

void org::apache::poi::hssf::record::chart::LinkedDataRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        customNumberFormat_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::LinkedDataRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::LinkedDataRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::LinkedDataRecord::getClass0()
{
    return class_();
}

