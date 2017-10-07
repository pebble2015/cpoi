// Generated from /POI/java/org/apache/poi/hssf/record/DVRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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

class org::apache::poi::hssf::record::DVRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(446) };

private:
    static ::org::apache::poi::hssf::record::common::UnicodeString* NULL_TEXT_STRING_;
    int32_t _option_flags {  };
    ::org::apache::poi::hssf::record::common::UnicodeString* _promptTitle {  };
    ::org::apache::poi::hssf::record::common::UnicodeString* _errorTitle {  };
    ::org::apache::poi::hssf::record::common::UnicodeString* _promptText {  };
    ::org::apache::poi::hssf::record::common::UnicodeString* _errorText {  };
    int16_t _not_used_1 {  };
    ::org::apache::poi::ss::formula::Formula* _formula1 {  };
    int16_t _not_used_2 {  };
    ::org::apache::poi::ss::formula::Formula* _formula2 {  };
    ::org::apache::poi::ss::util::CellRangeAddressList* _regions {  };
    static ::org::apache::poi::util::BitField* opt_data_type_;
    static ::org::apache::poi::util::BitField* opt_error_style_;
    static ::org::apache::poi::util::BitField* opt_string_list_formula_;
    static ::org::apache::poi::util::BitField* opt_empty_cell_allowed_;
    static ::org::apache::poi::util::BitField* opt_suppress_dropdown_arrow_;
    static ::org::apache::poi::util::BitField* opt_show_prompt_on_cell_selected_;
    static ::org::apache::poi::util::BitField* opt_show_error_on_invalid_value_;
    static ::org::apache::poi::util::BitField* opt_condition_operator_;
protected:
    void ctor(int32_t validationType, int32_t operator_, int32_t errorStyle, bool emptyCellAllowed, bool suppressDropDownArrow, bool isExplicitList, bool showPromptBox, ::java::lang::String* promptTitle, ::java::lang::String* promptText, bool showErrorBox, ::java::lang::String* errorTitle, ::java::lang::String* errorText, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2, ::org::apache::poi::ss::util::CellRangeAddressList* regions);
    void ctor(RecordInputStream* in);

public:
    int32_t getDataType();
    int32_t getErrorStyle();
    bool getListExplicitFormula();
    bool getEmptyCellAllowed();
    bool getSuppressDropdownArrow();
    bool getShowPromptOnCellSelected();
    bool getShowErrorOnInvalidValue();
    int32_t getConditionOperator();
    ::java::lang::String* getPromptTitle();
    ::java::lang::String* getErrorTitle();
    ::java::lang::String* getPromptText();
    ::java::lang::String* getErrorText();
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormula1();
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormula2();
    ::org::apache::poi::ss::util::CellRangeAddressList* getCellRangeAddress();
    ::java::lang::String* toString() override;

private:
    static ::java::lang::String* formatTextTitle(::org::apache::poi::hssf::record::common::UnicodeString* us);
    static void appendFormula(::java::lang::StringBuffer* sb, ::java::lang::String* label, ::org::apache::poi::ss::formula::Formula* f);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

private:
    static ::org::apache::poi::hssf::record::common::UnicodeString* resolveTitleText(::java::lang::String* str);
    static ::java::lang::String* resolveTitleString(::org::apache::poi::hssf::record::common::UnicodeString* us);
    static ::org::apache::poi::hssf::record::common::UnicodeString* readUnicodeString(RecordInputStream* in);
    static void serializeUnicodeString(::org::apache::poi::hssf::record::common::UnicodeString* us, ::org::apache::poi::util::LittleEndianOutput* out);
    static int32_t getUnicodeStringSize(::org::apache::poi::hssf::record::common::UnicodeString* us);

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DVRecord* clone() override;

    // Generated
    DVRecord(int32_t validationType, int32_t operator_, int32_t errorStyle, bool emptyCellAllowed, bool suppressDropDownArrow, bool isExplicitList, bool showPromptBox, ::java::lang::String* promptTitle, ::java::lang::String* promptText, bool showErrorBox, ::java::lang::String* errorTitle, ::java::lang::String* errorText, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2, ::org::apache::poi::ss::util::CellRangeAddressList* regions);
    DVRecord(RecordInputStream* in);
protected:
    DVRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::hssf::record::common::UnicodeString*& NULL_TEXT_STRING();
    static ::org::apache::poi::util::BitField*& opt_data_type();
    static ::org::apache::poi::util::BitField*& opt_error_style();
    static ::org::apache::poi::util::BitField*& opt_string_list_formula();
    static ::org::apache::poi::util::BitField*& opt_empty_cell_allowed();
    static ::org::apache::poi::util::BitField*& opt_suppress_dropdown_arrow();
    static ::org::apache::poi::util::BitField*& opt_show_prompt_on_cell_selected();
    static ::org::apache::poi::util::BitField*& opt_show_error_on_invalid_value();
    static ::org::apache::poi::util::BitField*& opt_condition_operator();
    virtual ::java::lang::Class* getClass0();
};
