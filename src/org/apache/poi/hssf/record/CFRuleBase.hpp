// Generated from /POI/java/org/apache/poi/hssf/record/CFRuleBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

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

struct default_init_tag;

class org::apache::poi::hssf::record::CFRuleBase
    : public StandardRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;

private:
    static ::org::apache::poi::util::POILogger* logger_;
    int8_t condition_type {  };

public:
    static constexpr int8_t CONDITION_TYPE_CELL_VALUE_IS { int8_t(1) };
    static constexpr int8_t CONDITION_TYPE_FORMULA { int8_t(2) };
    static constexpr int8_t CONDITION_TYPE_COLOR_SCALE { int8_t(3) };
    static constexpr int8_t CONDITION_TYPE_DATA_BAR { int8_t(4) };
    static constexpr int8_t CONDITION_TYPE_FILTER { int8_t(5) };
    static constexpr int8_t CONDITION_TYPE_ICON_SET { int8_t(6) };

private:
    int8_t comparison_operator {  };

public:
    static constexpr int32_t TEMPLATE_CELL_VALUE { int32_t(0) };
    static constexpr int32_t TEMPLATE_FORMULA { int32_t(1) };
    static constexpr int32_t TEMPLATE_COLOR_SCALE_FORMATTING { int32_t(2) };
    static constexpr int32_t TEMPLATE_DATA_BAR_FORMATTING { int32_t(3) };
    static constexpr int32_t TEMPLATE_ICON_SET_FORMATTING { int32_t(4) };
    static constexpr int32_t TEMPLATE_FILTER { int32_t(5) };
    static constexpr int32_t TEMPLATE_UNIQUE_VALUES { int32_t(7) };
    static constexpr int32_t TEMPLATE_CONTAINS_TEXT { int32_t(8) };
    static constexpr int32_t TEMPLATE_CONTAINS_BLANKS { int32_t(9) };
    static constexpr int32_t TEMPLATE_CONTAINS_NO_BLANKS { int32_t(10) };
    static constexpr int32_t TEMPLATE_CONTAINS_ERRORS { int32_t(11) };
    static constexpr int32_t TEMPLATE_CONTAINS_NO_ERRORS { int32_t(12) };
    static constexpr int32_t TEMPLATE_TODAY { int32_t(15) };
    static constexpr int32_t TEMPLATE_TOMORROW { int32_t(16) };
    static constexpr int32_t TEMPLATE_YESTERDAY { int32_t(17) };
    static constexpr int32_t TEMPLATE_LAST_7_DAYS { int32_t(18) };
    static constexpr int32_t TEMPLATE_LAST_MONTH { int32_t(19) };
    static constexpr int32_t TEMPLATE_NEXT_MONTH { int32_t(20) };
    static constexpr int32_t TEMPLATE_THIS_WEEK { int32_t(21) };
    static constexpr int32_t TEMPLATE_NEXT_WEEK { int32_t(22) };
    static constexpr int32_t TEMPLATE_LAST_WEEK { int32_t(23) };
    static constexpr int32_t TEMPLATE_THIS_MONTH { int32_t(24) };
    static constexpr int32_t TEMPLATE_ABOVE_AVERAGE { int32_t(25) };
    static constexpr int32_t TEMPLATE_BELOW_AVERAGE { int32_t(26) };
    static constexpr int32_t TEMPLATE_DUPLICATE_VALUES { int32_t(27) };
    static constexpr int32_t TEMPLATE_ABOVE_OR_EQUAL_TO_AVERAGE { int32_t(29) };
    static constexpr int32_t TEMPLATE_BELOW_OR_EQUAL_TO_AVERAGE { int32_t(30) };

private:
    static ::org::apache::poi::util::BitField* modificationBits_;
    static ::org::apache::poi::util::BitField* alignHor_;
    static ::org::apache::poi::util::BitField* alignVer_;
    static ::org::apache::poi::util::BitField* alignWrap_;
    static ::org::apache::poi::util::BitField* alignRot_;
    static ::org::apache::poi::util::BitField* alignJustLast_;
    static ::org::apache::poi::util::BitField* alignIndent_;
    static ::org::apache::poi::util::BitField* alignShrin_;
    static ::org::apache::poi::util::BitField* mergeCell_;
    static ::org::apache::poi::util::BitField* protLocked_;
    static ::org::apache::poi::util::BitField* protHidden_;
    static ::org::apache::poi::util::BitField* bordLeft_;
    static ::org::apache::poi::util::BitField* bordRight_;
    static ::org::apache::poi::util::BitField* bordTop_;
    static ::org::apache::poi::util::BitField* bordBot_;
    static ::org::apache::poi::util::BitField* bordTlBr_;
    static ::org::apache::poi::util::BitField* bordBlTr_;
    static ::org::apache::poi::util::BitField* pattStyle_;
    static ::org::apache::poi::util::BitField* pattCol_;
    static ::org::apache::poi::util::BitField* pattBgCol_;
    static ::org::apache::poi::util::BitField* notUsed2_;
    static ::org::apache::poi::util::BitField* undocumented_;
    static ::org::apache::poi::util::BitField* fmtBlockBits_;
    static ::org::apache::poi::util::BitField* font_;
    static ::org::apache::poi::util::BitField* align_;
    static ::org::apache::poi::util::BitField* bord_;
    static ::org::apache::poi::util::BitField* patt_;
    static ::org::apache::poi::util::BitField* prot_;
    static ::org::apache::poi::util::BitField* alignTextDir_;
    static ::org::apache::poi::util::BitField* bf(int32_t i);

public: /* protected */
    int32_t formatting_options {  };
    int16_t formatting_not_used {  };
    ::org::apache::poi::hssf::record::cf::FontFormatting* _fontFormatting {  };
    ::org::apache::poi::hssf::record::cf::BorderFormatting* _borderFormatting {  };
    ::org::apache::poi::hssf::record::cf::PatternFormatting* _patternFormatting {  };

private:
    ::org::apache::poi::ss::formula::Formula* formula1 {  };
    ::org::apache::poi::ss::formula::Formula* formula2 {  };
protected:
    void ctor(int8_t conditionType, int8_t comparisonOperation);
    void ctor(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2);
    void ctor();

public: /* protected */
    virtual int32_t readFormatOptions(RecordInputStream* in);

public:
    virtual int8_t getConditionType();

public: /* protected */
    virtual void setConditionType(int8_t condition_type);

public:
    virtual void setComparisonOperation(int8_t operation);
    virtual int8_t getComparisonOperation();
    virtual bool containsFontFormattingBlock();
    virtual void setFontFormatting(::org::apache::poi::hssf::record::cf::FontFormatting* fontFormatting);
    virtual ::org::apache::poi::hssf::record::cf::FontFormatting* getFontFormatting();
    virtual bool containsAlignFormattingBlock();
    virtual void setAlignFormattingUnchanged();
    virtual bool containsBorderFormattingBlock();
    virtual void setBorderFormatting(::org::apache::poi::hssf::record::cf::BorderFormatting* borderFormatting);
    virtual ::org::apache::poi::hssf::record::cf::BorderFormatting* getBorderFormatting();
    virtual bool containsPatternFormattingBlock();
    virtual void setPatternFormatting(::org::apache::poi::hssf::record::cf::PatternFormatting* patternFormatting);
    virtual ::org::apache::poi::hssf::record::cf::PatternFormatting* getPatternFormatting();
    virtual bool containsProtectionFormattingBlock();
    virtual void setProtectionFormattingUnchanged();
    virtual int32_t getOptions();

private:
    bool isModified(::org::apache::poi::util::BitField* field);
    void setModified(bool modified, ::org::apache::poi::util::BitField* field);

public:
    virtual bool isLeftBorderModified();
    virtual void setLeftBorderModified(bool modified);
    virtual bool isRightBorderModified();
    virtual void setRightBorderModified(bool modified);
    virtual bool isTopBorderModified();
    virtual void setTopBorderModified(bool modified);
    virtual bool isBottomBorderModified();
    virtual void setBottomBorderModified(bool modified);
    virtual bool isTopLeftBottomRightBorderModified();
    virtual void setTopLeftBottomRightBorderModified(bool modified);
    virtual bool isBottomLeftTopRightBorderModified();
    virtual void setBottomLeftTopRightBorderModified(bool modified);
    virtual bool isPatternStyleModified();
    virtual void setPatternStyleModified(bool modified);
    virtual bool isPatternColorModified();
    virtual void setPatternColorModified(bool modified);
    virtual bool isPatternBackgroundColorModified();
    virtual void setPatternBackgroundColorModified(bool modified);

private:
    bool getOptionFlag(::org::apache::poi::util::BitField* field);
    void setOptionFlag(bool flag, ::org::apache::poi::util::BitField* field);

public: /* protected */
    virtual int32_t getFormattingBlockSize();
    virtual void serializeFormattingBlock(::org::apache::poi::util::LittleEndianOutput* out);

public:
    virtual ::org::apache::poi::ss::formula::ptg::PtgArray* getParsedExpression1();
    virtual void setParsedExpression1(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);

public: /* protected */
    virtual ::org::apache::poi::ss::formula::Formula* getFormula1();
    virtual void setFormula1(::org::apache::poi::ss::formula::Formula* formula1);

public:
    virtual ::org::apache::poi::ss::formula::ptg::PtgArray* getParsedExpression2();
    virtual void setParsedExpression2(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);

public: /* protected */
    virtual ::org::apache::poi::ss::formula::Formula* getFormula2();
    virtual void setFormula2(::org::apache::poi::ss::formula::Formula* formula2);
    static int32_t getFormulaSize(::org::apache::poi::ss::formula::Formula* formula);

public:
    static ::org::apache::poi::ss::formula::ptg::PtgArray* parseFormula(::java::lang::String* formula, ::org::apache::poi::hssf::usermodel::HSSFSheet* sheet);

public: /* protected */
    virtual void copyTo(CFRuleBase* rec);

public:
    CFRuleBase* clone() = 0;

    // Generated

public: /* protected */
    CFRuleBase(int8_t conditionType, int8_t comparisonOperation);
    CFRuleBase(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2);
    CFRuleBase();
protected:
    CFRuleBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::org::apache::poi::util::POILogger*& logger();

public: /* package */
    static ::org::apache::poi::util::BitField*& modificationBits();
    static ::org::apache::poi::util::BitField*& alignHor();
    static ::org::apache::poi::util::BitField*& alignVer();
    static ::org::apache::poi::util::BitField*& alignWrap();
    static ::org::apache::poi::util::BitField*& alignRot();
    static ::org::apache::poi::util::BitField*& alignJustLast();
    static ::org::apache::poi::util::BitField*& alignIndent();
    static ::org::apache::poi::util::BitField*& alignShrin();
    static ::org::apache::poi::util::BitField*& mergeCell();
    static ::org::apache::poi::util::BitField*& protLocked();
    static ::org::apache::poi::util::BitField*& protHidden();
    static ::org::apache::poi::util::BitField*& bordLeft();
    static ::org::apache::poi::util::BitField*& bordRight();
    static ::org::apache::poi::util::BitField*& bordTop();
    static ::org::apache::poi::util::BitField*& bordBot();
    static ::org::apache::poi::util::BitField*& bordTlBr();
    static ::org::apache::poi::util::BitField*& bordBlTr();
    static ::org::apache::poi::util::BitField*& pattStyle();
    static ::org::apache::poi::util::BitField*& pattCol();
    static ::org::apache::poi::util::BitField*& pattBgCol();
    static ::org::apache::poi::util::BitField*& notUsed2();
    static ::org::apache::poi::util::BitField*& undocumented();
    static ::org::apache::poi::util::BitField*& fmtBlockBits();
    static ::org::apache::poi::util::BitField*& font();
    static ::org::apache::poi::util::BitField*& align();
    static ::org::apache::poi::util::BitField*& bord();
    static ::org::apache::poi::util::BitField*& patt();
    static ::org::apache::poi::util::BitField*& prot();
    static ::org::apache::poi::util::BitField*& alignTextDir();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CFRuleBase_ComparisonOperator;
};
