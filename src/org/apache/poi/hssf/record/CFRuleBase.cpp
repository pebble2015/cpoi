// Generated from /POI/java/org/apache/poi/hssf/record/CFRuleBase.java
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase_ComparisonOperator.hpp>
#include <org/apache/poi/hssf/record/CFRuleRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cf/BorderFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/FontFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/PatternFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
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

poi::hssf::record::CFRuleBase::CFRuleBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::CFRuleBase::CFRuleBase(int8_t conditionType, int8_t comparisonOperation) 
    : CFRuleBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditionType,comparisonOperation);
}

poi::hssf::record::CFRuleBase::CFRuleBase(int8_t conditionType, int8_t comparisonOperation, ::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2) 
    : CFRuleBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditionType,comparisonOperation,formula1,formula2);
}

poi::hssf::record::CFRuleBase::CFRuleBase() 
    : CFRuleBase(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::hssf::record::CFRuleBase::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::hssf::record::CFRuleBase::logger_;

constexpr int8_t poi::hssf::record::CFRuleBase::CONDITION_TYPE_CELL_VALUE_IS;

constexpr int8_t poi::hssf::record::CFRuleBase::CONDITION_TYPE_FORMULA;

constexpr int8_t poi::hssf::record::CFRuleBase::CONDITION_TYPE_COLOR_SCALE;

constexpr int8_t poi::hssf::record::CFRuleBase::CONDITION_TYPE_DATA_BAR;

constexpr int8_t poi::hssf::record::CFRuleBase::CONDITION_TYPE_FILTER;

constexpr int8_t poi::hssf::record::CFRuleBase::CONDITION_TYPE_ICON_SET;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_CELL_VALUE;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_FORMULA;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_COLOR_SCALE_FORMATTING;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_DATA_BAR_FORMATTING;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_ICON_SET_FORMATTING;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_FILTER;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_UNIQUE_VALUES;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_CONTAINS_TEXT;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_CONTAINS_BLANKS;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_CONTAINS_NO_BLANKS;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_CONTAINS_ERRORS;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_CONTAINS_NO_ERRORS;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_TODAY;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_TOMORROW;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_YESTERDAY;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_LAST_7_DAYS;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_LAST_MONTH;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_NEXT_MONTH;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_THIS_WEEK;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_NEXT_WEEK;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_LAST_WEEK;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_THIS_MONTH;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_ABOVE_AVERAGE;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_BELOW_AVERAGE;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_DUPLICATE_VALUES;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_ABOVE_OR_EQUAL_TO_AVERAGE;

constexpr int32_t poi::hssf::record::CFRuleBase::TEMPLATE_BELOW_OR_EQUAL_TO_AVERAGE;

poi::util::BitField*& poi::hssf::record::CFRuleBase::modificationBits()
{
    clinit();
    return modificationBits_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::modificationBits_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignHor()
{
    clinit();
    return alignHor_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignHor_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignVer()
{
    clinit();
    return alignVer_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignVer_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignWrap()
{
    clinit();
    return alignWrap_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignWrap_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignRot()
{
    clinit();
    return alignRot_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignRot_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignJustLast()
{
    clinit();
    return alignJustLast_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignJustLast_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignIndent()
{
    clinit();
    return alignIndent_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignIndent_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignShrin()
{
    clinit();
    return alignShrin_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignShrin_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::mergeCell()
{
    clinit();
    return mergeCell_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::mergeCell_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::protLocked()
{
    clinit();
    return protLocked_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::protLocked_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::protHidden()
{
    clinit();
    return protHidden_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::protHidden_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bordLeft()
{
    clinit();
    return bordLeft_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bordLeft_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bordRight()
{
    clinit();
    return bordRight_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bordRight_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bordTop()
{
    clinit();
    return bordTop_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bordTop_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bordBot()
{
    clinit();
    return bordBot_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bordBot_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bordTlBr()
{
    clinit();
    return bordTlBr_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bordTlBr_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bordBlTr()
{
    clinit();
    return bordBlTr_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bordBlTr_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::pattStyle()
{
    clinit();
    return pattStyle_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::pattStyle_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::pattCol()
{
    clinit();
    return pattCol_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::pattCol_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::pattBgCol()
{
    clinit();
    return pattBgCol_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::pattBgCol_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::notUsed2()
{
    clinit();
    return notUsed2_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::notUsed2_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::undocumented()
{
    clinit();
    return undocumented_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::undocumented_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::fmtBlockBits()
{
    clinit();
    return fmtBlockBits_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::fmtBlockBits_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::font()
{
    clinit();
    return font_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::font_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::align()
{
    clinit();
    return align_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::align_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::bord()
{
    clinit();
    return bord_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::bord_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::patt()
{
    clinit();
    return patt_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::patt_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::prot()
{
    clinit();
    return prot_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::prot_;

poi::util::BitField*& poi::hssf::record::CFRuleBase::alignTextDir()
{
    clinit();
    return alignTextDir_;
}
poi::util::BitField* poi::hssf::record::CFRuleBase::alignTextDir_;

poi::util::BitField* poi::hssf::record::CFRuleBase::bf(int32_t i)
{
    clinit();
    return ::poi::util::BitFieldFactory::getInstance(i);
}

void poi::hssf::record::CFRuleBase::ctor(int8_t conditionType, int8_t comparisonOperation)
{
    super::ctor();
    setConditionType(conditionType);
    setComparisonOperation(comparisonOperation);
    formula1 = ::poi::ss::formula::Formula::create(::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY());
    formula2 = ::poi::ss::formula::Formula::create(::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY());
}

void poi::hssf::record::CFRuleBase::ctor(int8_t conditionType, int8_t comparisonOperation, ::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2)
{
    ctor(conditionType, comparisonOperation);
    this->formula1 = ::poi::ss::formula::Formula::create(formula1);
    this->formula2 = ::poi::ss::formula::Formula::create(formula2);
}

void poi::hssf::record::CFRuleBase::ctor()
{
    super::ctor();
}

int32_t poi::hssf::record::CFRuleBase::readFormatOptions(RecordInputStream* in)
{
    formatting_options = npc(in)->readInt();
    formatting_not_used = npc(in)->readShort();
    auto len = int32_t(6);
    if(containsFontFormattingBlock()) {
        _fontFormatting = new ::poi::hssf::record::cf::FontFormatting(in);
        len += npc(_fontFormatting)->getDataLength();
    }
    if(containsBorderFormattingBlock()) {
        _borderFormatting = new ::poi::hssf::record::cf::BorderFormatting(in);
        len += npc(_borderFormatting)->getDataLength();
    }
    if(containsPatternFormattingBlock()) {
        _patternFormatting = new ::poi::hssf::record::cf::PatternFormatting(in);
        len += npc(_patternFormatting)->getDataLength();
    }
    return len;
}

int8_t poi::hssf::record::CFRuleBase::getConditionType()
{
    return condition_type;
}

void poi::hssf::record::CFRuleBase::setConditionType(int8_t condition_type)
{
    if((dynamic_cast< CFRuleRecord* >(this) != nullptr)) {
        if(condition_type == CONDITION_TYPE_CELL_VALUE_IS || condition_type == CONDITION_TYPE_FORMULA) {
        } else {
            throw new ::java::lang::IllegalArgumentException(u"CFRuleRecord only accepts Value-Is and Formula types"_j);
        }
    }
    this->condition_type = condition_type;
}

void poi::hssf::record::CFRuleBase::setComparisonOperation(int8_t operation)
{
    if(operation < 0 || operation > CFRuleBase_ComparisonOperator::max_operator)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Valid operators are only in the range 0 to "_j)->append(CFRuleBase_ComparisonOperator::max_operator)->toString());

    this->comparison_operator = operation;
}

int8_t poi::hssf::record::CFRuleBase::getComparisonOperation()
{
    return comparison_operator;
}

bool poi::hssf::record::CFRuleBase::containsFontFormattingBlock()
{
    return getOptionFlag(font_);
}

void poi::hssf::record::CFRuleBase::setFontFormatting(::poi::hssf::record::cf::FontFormatting* fontFormatting)
{
    _fontFormatting = fontFormatting;
    setOptionFlag(fontFormatting != nullptr, font_);
}

poi::hssf::record::cf::FontFormatting* poi::hssf::record::CFRuleBase::getFontFormatting()
{
    if(containsFontFormattingBlock()) {
        return _fontFormatting;
    }
    return nullptr;
}

bool poi::hssf::record::CFRuleBase::containsAlignFormattingBlock()
{
    return getOptionFlag(align_);
}

void poi::hssf::record::CFRuleBase::setAlignFormattingUnchanged()
{
    setOptionFlag(false, align_);
}

bool poi::hssf::record::CFRuleBase::containsBorderFormattingBlock()
{
    return getOptionFlag(bord_);
}

void poi::hssf::record::CFRuleBase::setBorderFormatting(::poi::hssf::record::cf::BorderFormatting* borderFormatting)
{
    _borderFormatting = borderFormatting;
    setOptionFlag(borderFormatting != nullptr, bord_);
}

poi::hssf::record::cf::BorderFormatting* poi::hssf::record::CFRuleBase::getBorderFormatting()
{
    if(containsBorderFormattingBlock()) {
        return _borderFormatting;
    }
    return nullptr;
}

bool poi::hssf::record::CFRuleBase::containsPatternFormattingBlock()
{
    return getOptionFlag(patt_);
}

void poi::hssf::record::CFRuleBase::setPatternFormatting(::poi::hssf::record::cf::PatternFormatting* patternFormatting)
{
    _patternFormatting = patternFormatting;
    setOptionFlag(patternFormatting != nullptr, patt_);
}

poi::hssf::record::cf::PatternFormatting* poi::hssf::record::CFRuleBase::getPatternFormatting()
{
    if(containsPatternFormattingBlock()) {
        return _patternFormatting;
    }
    return nullptr;
}

bool poi::hssf::record::CFRuleBase::containsProtectionFormattingBlock()
{
    return getOptionFlag(prot_);
}

void poi::hssf::record::CFRuleBase::setProtectionFormattingUnchanged()
{
    setOptionFlag(false, prot_);
}

int32_t poi::hssf::record::CFRuleBase::getOptions()
{
    return formatting_options;
}

bool poi::hssf::record::CFRuleBase::isModified(::poi::util::BitField* field)
{
    return !npc(field)->isSet(formatting_options);
}

void poi::hssf::record::CFRuleBase::setModified(bool modified, ::poi::util::BitField* field)
{
    formatting_options = npc(field)->setBoolean(formatting_options, !modified);
}

bool poi::hssf::record::CFRuleBase::isLeftBorderModified()
{
    return isModified(bordLeft_);
}

void poi::hssf::record::CFRuleBase::setLeftBorderModified(bool modified)
{
    setModified(modified, bordLeft_);
}

bool poi::hssf::record::CFRuleBase::isRightBorderModified()
{
    return isModified(bordRight_);
}

void poi::hssf::record::CFRuleBase::setRightBorderModified(bool modified)
{
    setModified(modified, bordRight_);
}

bool poi::hssf::record::CFRuleBase::isTopBorderModified()
{
    return isModified(bordTop_);
}

void poi::hssf::record::CFRuleBase::setTopBorderModified(bool modified)
{
    setModified(modified, bordTop_);
}

bool poi::hssf::record::CFRuleBase::isBottomBorderModified()
{
    return isModified(bordBot_);
}

void poi::hssf::record::CFRuleBase::setBottomBorderModified(bool modified)
{
    setModified(modified, bordBot_);
}

bool poi::hssf::record::CFRuleBase::isTopLeftBottomRightBorderModified()
{
    return isModified(bordTlBr_);
}

void poi::hssf::record::CFRuleBase::setTopLeftBottomRightBorderModified(bool modified)
{
    setModified(modified, bordTlBr_);
}

bool poi::hssf::record::CFRuleBase::isBottomLeftTopRightBorderModified()
{
    return isModified(bordBlTr_);
}

void poi::hssf::record::CFRuleBase::setBottomLeftTopRightBorderModified(bool modified)
{
    setModified(modified, bordBlTr_);
}

bool poi::hssf::record::CFRuleBase::isPatternStyleModified()
{
    return isModified(pattStyle_);
}

void poi::hssf::record::CFRuleBase::setPatternStyleModified(bool modified)
{
    setModified(modified, pattStyle_);
}

bool poi::hssf::record::CFRuleBase::isPatternColorModified()
{
    return isModified(pattCol_);
}

void poi::hssf::record::CFRuleBase::setPatternColorModified(bool modified)
{
    setModified(modified, pattCol_);
}

bool poi::hssf::record::CFRuleBase::isPatternBackgroundColorModified()
{
    return isModified(pattBgCol_);
}

void poi::hssf::record::CFRuleBase::setPatternBackgroundColorModified(bool modified)
{
    setModified(modified, pattBgCol_);
}

bool poi::hssf::record::CFRuleBase::getOptionFlag(::poi::util::BitField* field)
{
    return npc(field)->isSet(formatting_options);
}

void poi::hssf::record::CFRuleBase::setOptionFlag(bool flag, ::poi::util::BitField* field)
{
    formatting_options = npc(field)->setBoolean(formatting_options, flag);
}

int32_t poi::hssf::record::CFRuleBase::getFormattingBlockSize()
{
    return int32_t(6) + (containsFontFormattingBlock() ? npc(npc(_fontFormatting)->getRawRecord())->length : int32_t(0)) + (containsBorderFormattingBlock() ? int32_t(8) : int32_t(0))+ (containsPatternFormattingBlock() ? int32_t(4) : int32_t(0));
}

void poi::hssf::record::CFRuleBase::serializeFormattingBlock(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(formatting_options);
    npc(out)->writeShort(formatting_not_used);
    if(containsFontFormattingBlock()) {
        auto fontFormattingRawRecord = npc(_fontFormatting)->getRawRecord();
        npc(out)->write(fontFormattingRawRecord);
    }
    if(containsBorderFormattingBlock()) {
        npc(_borderFormatting)->serialize(out);
    }
    if(containsPatternFormattingBlock()) {
        npc(_patternFormatting)->serialize(out);
    }
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::CFRuleBase::getParsedExpression1()
{
    return npc(formula1)->getTokens();
}

void poi::hssf::record::CFRuleBase::setParsedExpression1(::poi::ss::formula::ptg::PtgArray* ptgs)
{
    formula1 = ::poi::ss::formula::Formula::create(ptgs);
}

poi::ss::formula::Formula* poi::hssf::record::CFRuleBase::getFormula1()
{
    return formula1;
}

void poi::hssf::record::CFRuleBase::setFormula1(::poi::ss::formula::Formula* formula1)
{
    this->formula1 = formula1;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::CFRuleBase::getParsedExpression2()
{
    return ::poi::ss::formula::Formula::getTokens(formula2);
}

void poi::hssf::record::CFRuleBase::setParsedExpression2(::poi::ss::formula::ptg::PtgArray* ptgs)
{
    formula2 = ::poi::ss::formula::Formula::create(ptgs);
}

poi::ss::formula::Formula* poi::hssf::record::CFRuleBase::getFormula2()
{
    return formula2;
}

void poi::hssf::record::CFRuleBase::setFormula2(::poi::ss::formula::Formula* formula2)
{
    this->formula2 = formula2;
}

int32_t poi::hssf::record::CFRuleBase::getFormulaSize(::poi::ss::formula::Formula* formula)
{
    clinit();
    return npc(formula)->getEncodedTokenSize();
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::CFRuleBase::parseFormula(::java::lang::String* formula, ::poi::hssf::usermodel::HSSFSheet* sheet)
{
    clinit();
    if(formula == nullptr) {
        return nullptr;
    }
    auto sheetIndex = npc(java_cast< ::poi::hssf::usermodel::HSSFWorkbook* >(npc(sheet)->getWorkbook()))->getSheetIndex(static_cast< ::poi::ss::usermodel::Sheet* >(sheet));
    return ::poi::hssf::model::HSSFFormulaParser::parse(formula, java_cast< ::poi::hssf::usermodel::HSSFWorkbook* >(npc(sheet)->getWorkbook()), ::poi::ss::formula::FormulaType::CELL, sheetIndex);
}

void poi::hssf::record::CFRuleBase::copyTo(CFRuleBase* rec)
{
    npc(rec)->condition_type = condition_type;
    npc(rec)->comparison_operator = comparison_operator;
    npc(rec)->formatting_options = formatting_options;
    npc(rec)->formatting_not_used = formatting_not_used;
    if(containsFontFormattingBlock()) {
        npc(rec)->_fontFormatting = npc(_fontFormatting)->clone();
    }
    if(containsBorderFormattingBlock()) {
        npc(rec)->_borderFormatting = npc(_borderFormatting)->clone();
    }
    if(containsPatternFormattingBlock()) {
        npc(rec)->_patternFormatting = java_cast< ::poi::hssf::record::cf::PatternFormatting* >(npc(_patternFormatting)->clone());
    }
    npc(rec)->setFormula1(npc(getFormula1())->copy());
    npc(rec)->setFormula2(npc(getFormula2())->copy());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::CFRuleBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CFRuleBase", 37);
    return c;
}

void poi::hssf::record::CFRuleBase::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(CFRuleBase::class_()));
        modificationBits_ = bf(4194303);
        alignHor_ = bf(1);
        alignVer_ = bf(2);
        alignWrap_ = bf(4);
        alignRot_ = bf(8);
        alignJustLast_ = bf(16);
        alignIndent_ = bf(32);
        alignShrin_ = bf(64);
        mergeCell_ = bf(128);
        protLocked_ = bf(256);
        protHidden_ = bf(512);
        bordLeft_ = bf(1024);
        bordRight_ = bf(2048);
        bordTop_ = bf(4096);
        bordBot_ = bf(8192);
        bordTlBr_ = bf(16384);
        bordBlTr_ = bf(32768);
        pattStyle_ = bf(65536);
        pattCol_ = bf(131072);
        pattBgCol_ = bf(262144);
        notUsed2_ = bf(3670016);
        undocumented_ = bf(62914560);
        fmtBlockBits_ = bf(2080374784);
        font_ = bf(67108864);
        align_ = bf(134217728);
        bord_ = bf(268435456);
        patt_ = bf(536870912);
        prot_ = bf(1073741824);
        alignTextDir_ = bf(int32_t(-0x7fffffff-1));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::CFRuleBase::getClass0()
{
    return class_();
}

