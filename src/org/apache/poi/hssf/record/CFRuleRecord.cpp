// Generated from /POI/java/org/apache/poi/hssf/record/CFRuleRecord.java
#include <org/apache/poi/hssf/record/CFRuleRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase_ComparisonOperator.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cf/BorderFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/FontFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/PatternFormatting.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/BitField.hpp>
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

org::apache::poi::hssf::record::CFRuleRecord::CFRuleRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CFRuleRecord::CFRuleRecord(int8_t conditionType, int8_t comparisonOperation) 
    : CFRuleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditionType,comparisonOperation);
}

org::apache::poi::hssf::record::CFRuleRecord::CFRuleRecord(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2) 
    : CFRuleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditionType,comparisonOperation,formula1,formula2);
}

org::apache::poi::hssf::record::CFRuleRecord::CFRuleRecord(RecordInputStream* in) 
    : CFRuleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::CFRuleRecord::sid;

void org::apache::poi::hssf::record::CFRuleRecord::ctor(int8_t conditionType, int8_t comparisonOperation)
{
    super::ctor(conditionType, comparisonOperation);
    setDefaults();
}

void org::apache::poi::hssf::record::CFRuleRecord::ctor(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2)
{
    super::ctor(conditionType, comparisonOperation, formula1, formula2);
    setDefaults();
}

void org::apache::poi::hssf::record::CFRuleRecord::setDefaults()
{
    formatting_options = npc(modificationBits())->setValue(formatting_options, -int32_t(1));
    formatting_options = npc(fmtBlockBits())->setValue(formatting_options, 0);
    formatting_options = npc(undocumented())->clear(formatting_options);
    formatting_not_used = static_cast< int16_t >(int32_t(32770));
    _fontFormatting = nullptr;
    _borderFormatting = nullptr;
    _patternFormatting = nullptr;
}

org::apache::poi::hssf::record::CFRuleRecord* org::apache::poi::hssf::record::CFRuleRecord::create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::java::lang::String* formulaText)
{
    clinit();
    auto formula1 = parseFormula(formulaText, sheet);
    return new CFRuleRecord(CONDITION_TYPE_FORMULA, CFRuleBase_ComparisonOperator::NO_COMPARISON, formula1, nullptr);
}

org::apache::poi::hssf::record::CFRuleRecord* org::apache::poi::hssf::record::CFRuleRecord::create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2)
{
    clinit();
    auto formula1 = parseFormula(formulaText1, sheet);
    auto formula2 = parseFormula(formulaText2, sheet);
    return new CFRuleRecord(CONDITION_TYPE_CELL_VALUE_IS, comparisonOperation, formula1, formula2);
}

void org::apache::poi::hssf::record::CFRuleRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    setConditionType(npc(in)->readByte());
    setComparisonOperation(npc(in)->readByte());
    auto field_3_formula1_len = npc(in)->readUShort();
    auto field_4_formula2_len = npc(in)->readUShort();
    readFormatOptions(in);
    setFormula1(::org::apache::poi::ss::formula::Formula::read(field_3_formula1_len, in));
    setFormula2(::org::apache::poi::ss::formula::Formula::read(field_4_formula2_len, in));
}

int16_t org::apache::poi::hssf::record::CFRuleRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::CFRuleRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto formula1Len = getFormulaSize(getFormula1());
    auto formula2Len = getFormulaSize(getFormula2());
    npc(out)->writeByte(getConditionType());
    npc(out)->writeByte(getComparisonOperation());
    npc(out)->writeShort(formula1Len);
    npc(out)->writeShort(formula2Len);
    serializeFormattingBlock(out);
    npc(getFormula1())->serializeTokens(out);
    npc(getFormula2())->serializeTokens(out);
}

int32_t org::apache::poi::hssf::record::CFRuleRecord::getDataSize()
{
    return int32_t(6) + getFormattingBlockSize() + getFormulaSize(getFormula1())+ getFormulaSize(getFormula2());
}

java::lang::String* org::apache::poi::hssf::record::CFRuleRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CFRULE]\n"_j);
    npc(npc(npc(buffer)->append(u"    .condition_type   ="_j))->append(static_cast< int32_t >(getConditionType())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    OPTION FLAGS=0x"_j))->append(::java::lang::Integer::toHexString(getOptions())))->append(u"\n"_j);
    if(containsFontFormattingBlock()) {
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(_fontFormatting)))->append(u"\n"_j);
    }
    if(containsBorderFormattingBlock()) {
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(_borderFormatting)))->append(u"\n"_j);
    }
    if(containsPatternFormattingBlock()) {
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(_patternFormatting)))->append(u"\n"_j);
    }
    npc(npc(npc(buffer)->append(u"    Formula 1 ="_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(getFormula1())->getTokens()))))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    Formula 2 ="_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(getFormula2())->getTokens()))))->append(u"\n"_j);
    npc(buffer)->append(u"[/CFRULE]\n"_j);
    return npc(buffer)->toString();
}

org::apache::poi::hssf::record::CFRuleRecord* org::apache::poi::hssf::record::CFRuleRecord::clone()
{
    auto rec = new CFRuleRecord(getConditionType(), getComparisonOperation());
    super::copyTo(rec);
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CFRuleRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFRuleRecord", 39);
    return c;
}

int32_t org::apache::poi::hssf::record::CFRuleRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::CFRuleRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CFRuleRecord::getClass0()
{
    return class_();
}

