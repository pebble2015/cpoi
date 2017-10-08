// Generated from /POI/java/org/apache/poi/hssf/record/CFRule12Record.java
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase_ComparisonOperator.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cf/BorderFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/ColorGradientFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/ColorGradientThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/DataBarFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/DataBarThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/FontFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/IconMultiStateFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/IconMultiStateThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/PatternFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>
#include <org/apache/poi/hssf/record/common/FtrHeader.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold_RangeType.hpp>
#include <org/apache/poi/ss/usermodel/IconMultiStateFormatting_IconSet.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace cf
            {
typedef ::SubArray< ::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
typedef ::SubArray< ::poi::hssf::record::cf::ColorGradientThreshold, ThresholdArray, ::java::lang::CloneableArray > ColorGradientThresholdArray;
            } // cf

            namespace common
            {
typedef ::SubArray< ::poi::hssf::record::common::ExtendedColor, ::java::lang::ObjectArray, ::java::lang::CloneableArray > ExtendedColorArray;
            } // common
        } // record
    } // hssf

    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
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

poi::hssf::record::CFRule12Record::CFRule12Record(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CFRule12Record::CFRule12Record(int8_t conditionType, int8_t comparisonOperation) 
    : CFRule12Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditionType,comparisonOperation);
}

poi::hssf::record::CFRule12Record::CFRule12Record(int8_t conditionType, int8_t comparisonOperation, ::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2, ::poi::ss::formula::ptg::PtgArray* formulaScale) 
    : CFRule12Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditionType,comparisonOperation,formula1,formula2,formulaScale);
}

poi::hssf::record::CFRule12Record::CFRule12Record(RecordInputStream* in) 
    : CFRule12Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::CFRule12Record::sid;

void poi::hssf::record::CFRule12Record::ctor(int8_t conditionType, int8_t comparisonOperation)
{
    super::ctor(conditionType, comparisonOperation);
    setDefaults();
}

void poi::hssf::record::CFRule12Record::ctor(int8_t conditionType, int8_t comparisonOperation, ::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2, ::poi::ss::formula::ptg::PtgArray* formulaScale)
{
    super::ctor(conditionType, comparisonOperation, formula1, formula2);
    setDefaults();
    this->formula_scale = ::poi::ss::formula::Formula::create(formulaScale);
}

void poi::hssf::record::CFRule12Record::setDefaults()
{
    futureHeader = new ::poi::hssf::record::common::FtrHeader();
    npc(futureHeader)->setRecordType(sid);
    ext_formatting_length = 0;
    ext_formatting_data = new ::int8_tArray(int32_t(4));
    formula_scale = ::poi::ss::formula::Formula::create(::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY());
    ext_opts = 0;
    priority = 0;
    template_type = getConditionType();
    template_param_length = 16;
    template_params = new ::int8_tArray(template_param_length);
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::create(::poi::hssf::usermodel::HSSFSheet* sheet, ::java::lang::String* formulaText)
{
    clinit();
    auto formula1 = parseFormula(formulaText, sheet);
    return new CFRule12Record(CONDITION_TYPE_FORMULA, CFRuleBase_ComparisonOperator::NO_COMPARISON, formula1, nullptr, nullptr);
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::create(::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2)
{
    clinit();
    auto formula1 = parseFormula(formulaText1, sheet);
    auto formula2 = parseFormula(formulaText2, sheet);
    return new CFRule12Record(CONDITION_TYPE_CELL_VALUE_IS, comparisonOperation, formula1, formula2, nullptr);
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::create(::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2, ::java::lang::String* formulaTextScale)
{
    clinit();
    auto formula1 = parseFormula(formulaText1, sheet);
    auto formula2 = parseFormula(formulaText2, sheet);
    auto formula3 = parseFormula(formulaTextScale, sheet);
    return new CFRule12Record(CONDITION_TYPE_CELL_VALUE_IS, comparisonOperation, formula1, formula2, formula3);
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::create(::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::record::common::ExtendedColor* color)
{
    clinit();
    auto r = new CFRule12Record(CONDITION_TYPE_DATA_BAR, CFRuleBase_ComparisonOperator::NO_COMPARISON);
    auto dbf = npc(r)->createDataBarFormatting();
    npc(dbf)->setColor(color);
    npc(dbf)->setPercentMin(static_cast< int8_t >(int32_t(0)));
    npc(dbf)->setPercentMax(static_cast< int8_t >(int32_t(100)));
    auto min = new ::poi::hssf::record::cf::DataBarThreshold();
    npc(min)->setType(npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MIN)->id);
    npc(dbf)->setThresholdMin(min);
    auto max = new ::poi::hssf::record::cf::DataBarThreshold();
    npc(max)->setType(npc(::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType::MAX)->id);
    npc(dbf)->setThresholdMax(max);
    return r;
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::create(::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet)
{
    clinit();
    auto ts = new ::poi::hssf::record::cf::ThresholdArray(npc(iconSet)->num);
    for (auto i = int32_t(0); i < npc(ts)->length; i++) {
        ts->set(i, new ::poi::hssf::record::cf::IconMultiStateThreshold());
    }
    auto r = new CFRule12Record(CONDITION_TYPE_ICON_SET, CFRuleBase_ComparisonOperator::NO_COMPARISON);
    auto imf = npc(r)->createMultiStateFormatting();
    npc(imf)->setIconSet(iconSet);
    npc(imf)->setThresholds(ts);
    return r;
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::createColorScale(::poi::hssf::usermodel::HSSFSheet* sheet)
{
    clinit();
    auto numPoints = int32_t(3);
    auto colors = new ::poi::hssf::record::common::ExtendedColorArray(numPoints);
    auto ts = new ::poi::hssf::record::cf::ColorGradientThresholdArray(numPoints);
    for (auto i = int32_t(0); i < npc(ts)->length; i++) {
        ts->set(i, new ::poi::hssf::record::cf::ColorGradientThreshold());
        colors->set(i, new ::poi::hssf::record::common::ExtendedColor());
    }
    auto r = new CFRule12Record(CONDITION_TYPE_COLOR_SCALE, CFRuleBase_ComparisonOperator::NO_COMPARISON);
    auto cgf = npc(r)->createColorGradientFormatting();
    npc(cgf)->setNumControlPoints(numPoints);
    npc(cgf)->setThresholds(ts);
    npc(cgf)->setColors(colors);
    return r;
}

void poi::hssf::record::CFRule12Record::ctor(RecordInputStream* in)
{
    super::ctor();
    futureHeader = new ::poi::hssf::record::common::FtrHeader(in);
    setConditionType(npc(in)->readByte());
    setComparisonOperation(npc(in)->readByte());
    auto field_3_formula1_len = npc(in)->readUShort();
    auto field_4_formula2_len = npc(in)->readUShort();
    ext_formatting_length = npc(in)->readInt();
    ext_formatting_data = new ::int8_tArray(int32_t(0));
    if(ext_formatting_length == 0) {
        npc(in)->readUShort();
    } else {
        auto len = readFormatOptions(in);
        if(len < ext_formatting_length) {
            ext_formatting_data = new ::int8_tArray(ext_formatting_length - len);
            npc(in)->readFully(ext_formatting_data);
        }
    }
    setFormula1(::poi::ss::formula::Formula::read(field_3_formula1_len, in));
    setFormula2(::poi::ss::formula::Formula::read(field_4_formula2_len, in));
    auto formula_scale_len = npc(in)->readUShort();
    formula_scale = ::poi::ss::formula::Formula::read(formula_scale_len, in);
    ext_opts = npc(in)->readByte();
    priority = npc(in)->readUShort();
    template_type = npc(in)->readUShort();
    template_param_length = npc(in)->readByte();
    if(template_param_length == 0 || template_param_length == 16) {
        template_params = new ::int8_tArray(template_param_length);
        npc(in)->readFully(template_params);
    } else {
        npc(logger())->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"CF Rule v12 template params length should be 0 or 16, found "_j)->append(template_param_length)->toString())}));
        npc(in)->readRemainder();
    }
    auto type = getConditionType();
    if(type == CONDITION_TYPE_COLOR_SCALE) {
        color_gradient = new ::poi::hssf::record::cf::ColorGradientFormatting(in);
    } else if(type == CONDITION_TYPE_DATA_BAR) {
        data_bar = new ::poi::hssf::record::cf::DataBarFormatting(in);
    } else if(type == CONDITION_TYPE_FILTER) {
        filter_data = npc(in)->readRemainder();
    } else if(type == CONDITION_TYPE_ICON_SET) {
        multistate = new ::poi::hssf::record::cf::IconMultiStateFormatting(in);
    }
}

bool poi::hssf::record::CFRule12Record::containsDataBarBlock()
{
    return (data_bar != nullptr);
}

poi::hssf::record::cf::DataBarFormatting* poi::hssf::record::CFRule12Record::getDataBarFormatting()
{
    return data_bar;
}

poi::hssf::record::cf::DataBarFormatting* poi::hssf::record::CFRule12Record::createDataBarFormatting()
{
    if(data_bar != nullptr)
        return data_bar;

    setConditionType(CONDITION_TYPE_DATA_BAR);
    data_bar = new ::poi::hssf::record::cf::DataBarFormatting();
    return data_bar;
}

bool poi::hssf::record::CFRule12Record::containsMultiStateBlock()
{
    return (multistate != nullptr);
}

poi::hssf::record::cf::IconMultiStateFormatting* poi::hssf::record::CFRule12Record::getMultiStateFormatting()
{
    return multistate;
}

poi::hssf::record::cf::IconMultiStateFormatting* poi::hssf::record::CFRule12Record::createMultiStateFormatting()
{
    if(multistate != nullptr)
        return multistate;

    setConditionType(CONDITION_TYPE_ICON_SET);
    multistate = new ::poi::hssf::record::cf::IconMultiStateFormatting();
    return multistate;
}

bool poi::hssf::record::CFRule12Record::containsColorGradientBlock()
{
    return (color_gradient != nullptr);
}

poi::hssf::record::cf::ColorGradientFormatting* poi::hssf::record::CFRule12Record::getColorGradientFormatting()
{
    return color_gradient;
}

poi::hssf::record::cf::ColorGradientFormatting* poi::hssf::record::CFRule12Record::createColorGradientFormatting()
{
    if(color_gradient != nullptr)
        return color_gradient;

    setConditionType(CONDITION_TYPE_COLOR_SCALE);
    color_gradient = new ::poi::hssf::record::cf::ColorGradientFormatting();
    return color_gradient;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::CFRule12Record::getParsedExpressionScale()
{
    return npc(formula_scale)->getTokens();
}

void poi::hssf::record::CFRule12Record::setParsedExpressionScale(::poi::ss::formula::ptg::PtgArray* ptgs)
{
    formula_scale = ::poi::ss::formula::Formula::create(ptgs);
}

int32_t poi::hssf::record::CFRule12Record::getPriority()
{
    return priority;
}

void poi::hssf::record::CFRule12Record::setPriority(int32_t priority)
{
    this->priority = priority;
}

int16_t poi::hssf::record::CFRule12Record::getSid()
{
    return sid;
}

void poi::hssf::record::CFRule12Record::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(futureHeader)->serialize(out);
    auto formula1Len = getFormulaSize(getFormula1());
    auto formula2Len = getFormulaSize(getFormula2());
    npc(out)->writeByte(getConditionType());
    npc(out)->writeByte(getComparisonOperation());
    npc(out)->writeShort(formula1Len);
    npc(out)->writeShort(formula2Len);
    if(ext_formatting_length == 0) {
        npc(out)->writeInt(0);
        npc(out)->writeShort(0);
    } else {
        npc(out)->writeInt(ext_formatting_length);
        serializeFormattingBlock(out);
        npc(out)->write(ext_formatting_data);
    }
    npc(getFormula1())->serializeTokens(out);
    npc(getFormula2())->serializeTokens(out);
    npc(out)->writeShort(getFormulaSize(formula_scale));
    npc(formula_scale)->serializeTokens(out);
    npc(out)->writeByte(ext_opts);
    npc(out)->writeShort(priority);
    npc(out)->writeShort(template_type);
    npc(out)->writeByte(template_param_length);
    npc(out)->write(template_params);
    auto type = getConditionType();
    if(type == CONDITION_TYPE_COLOR_SCALE) {
        npc(color_gradient)->serialize(out);
    } else if(type == CONDITION_TYPE_DATA_BAR) {
        npc(data_bar)->serialize(out);
    } else if(type == CONDITION_TYPE_FILTER) {
        npc(out)->write(filter_data);
    } else if(type == CONDITION_TYPE_ICON_SET) {
        npc(multistate)->serialize(out);
    }
}

int32_t poi::hssf::record::CFRule12Record::getDataSize()
{
    auto len = ::poi::hssf::record::common::FtrHeader::getDataSize() + int32_t(6);
    if(ext_formatting_length == 0) {
        len += 6;
    } else {
        len += int32_t(4) + getFormattingBlockSize() + npc(ext_formatting_data)->length;
    }
    len += getFormulaSize(getFormula1());
    len += getFormulaSize(getFormula2());
    len += int32_t(2) + getFormulaSize(formula_scale);
    len += int32_t(6) + npc(template_params)->length;
    auto type = getConditionType();
    if(type == CONDITION_TYPE_COLOR_SCALE) {
        len += npc(color_gradient)->getDataLength();
    } else if(type == CONDITION_TYPE_DATA_BAR) {
        len += npc(data_bar)->getDataLength();
    } else if(type == CONDITION_TYPE_FILTER) {
        len += npc(filter_data)->length;
    } else if(type == CONDITION_TYPE_ICON_SET) {
        len += npc(multistate)->getDataLength();
    }
    return len;
}

java::lang::String* poi::hssf::record::CFRule12Record::toString()
{
    auto buffer = new ::java::lang::StringBuilder();
    npc(buffer)->append(u"[CFRULE12]\n"_j);
    npc(npc(npc(buffer)->append(u"    .condition_type="_j))->append(static_cast< int32_t >(getConditionType())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .dxfn12_length =0x"_j))->append(::java::lang::Integer::toHexString(ext_formatting_length)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .option_flags  =0x"_j))->append(::java::lang::Integer::toHexString(getOptions())))->append(u"\n"_j);
    if(containsFontFormattingBlock()) {
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(_fontFormatting)))->append(u"\n"_j);
    }
    if(containsBorderFormattingBlock()) {
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(_borderFormatting)))->append(u"\n"_j);
    }
    if(containsPatternFormattingBlock()) {
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(_patternFormatting)))->append(u"\n"_j);
    }
    npc(npc(npc(buffer)->append(u"    .dxfn12_ext="_j))->append(::poi::util::HexDump::toHex(ext_formatting_data)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .formula_1 ="_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(getFormula1())->getTokens()))))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .formula_2 ="_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(getFormula2())->getTokens()))))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .formula_S ="_j))->append(::java::util::Arrays::toString(static_cast< ::java::lang::ObjectArray* >(npc(formula_scale)->getTokens()))))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .ext_opts  ="_j))->append(static_cast< int32_t >(ext_opts)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .priority  ="_j))->append(priority))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .template_type  ="_j))->append(template_type))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .template_params="_j))->append(::poi::util::HexDump::toHex(template_params)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .filter_data    ="_j))->append(::poi::util::HexDump::toHex(filter_data)))->append(u"\n"_j);
    if(color_gradient != nullptr) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(color_gradient));
    }
    if(multistate != nullptr) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(multistate));
    }
    if(data_bar != nullptr) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(data_bar));
    }
    npc(buffer)->append(u"[/CFRULE12]\n"_j);
    return npc(buffer)->toString();
}

poi::hssf::record::CFRule12Record* poi::hssf::record::CFRule12Record::clone()
{
    auto rec = new CFRule12Record(getConditionType(), getComparisonOperation());
    npc(npc(rec)->futureHeader)->setAssociatedRange(npc(npc(futureHeader)->getAssociatedRange())->copy());
    super::copyTo(rec);
    npc(rec)->ext_formatting_length = ::java::lang::Math::min(ext_formatting_length, npc(ext_formatting_data)->length);
    npc(rec)->ext_formatting_data = new ::int8_tArray(ext_formatting_length);
    ::java::lang::System::arraycopy(ext_formatting_data, 0, npc(rec)->ext_formatting_data, 0, npc(rec)->ext_formatting_length);
    npc(rec)->formula_scale = npc(formula_scale)->copy();
    npc(rec)->ext_opts = ext_opts;
    npc(rec)->priority = priority;
    npc(rec)->template_type = template_type;
    npc(rec)->template_param_length = template_param_length;
    npc(rec)->template_params = new ::int8_tArray(template_param_length);
    ::java::lang::System::arraycopy(template_params, 0, npc(rec)->template_params, 0, template_param_length);
    if(color_gradient != nullptr) {
        npc(rec)->color_gradient = java_cast< ::poi::hssf::record::cf::ColorGradientFormatting* >(npc(color_gradient)->clone());
    }
    if(multistate != nullptr) {
        npc(rec)->multistate = java_cast< ::poi::hssf::record::cf::IconMultiStateFormatting* >(npc(multistate)->clone());
    }
    if(data_bar != nullptr) {
        npc(rec)->data_bar = java_cast< ::poi::hssf::record::cf::DataBarFormatting* >(npc(data_bar)->clone());
    }
    if(filter_data != nullptr) {
        npc(rec)->filter_data = new ::int8_tArray(npc(filter_data)->length);
        ::java::lang::System::arraycopy(filter_data, 0, npc(rec)->filter_data, 0, npc(filter_data)->length);
    }
    return rec;
}

int16_t poi::hssf::record::CFRule12Record::getFutureRecordType()
{
    return npc(futureHeader)->getRecordType();
}

poi::hssf::record::common::FtrHeader* poi::hssf::record::CFRule12Record::getFutureHeader()
{
    return futureHeader;
}

poi::ss::util::CellRangeAddress* poi::hssf::record::CFRule12Record::getAssociatedRange()
{
    return npc(futureHeader)->getAssociatedRange();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CFRule12Record::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFRule12Record", 41);
    return c;
}

int32_t poi::hssf::record::CFRule12Record::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::CFRule12Record::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::CFRule12Record::getClass0()
{
    return class_();
}

