// Generated from /POI/java/org/apache/poi/hssf/record/NameRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecord.hpp>

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

class org::apache::poi::hssf::record::NameRecord final
    : public ::org::apache::poi::hssf::record::cont::ContinuableRecord
{

public:
    typedef ::org::apache::poi::hssf::record::cont::ContinuableRecord super;
    static constexpr int16_t sid { int16_t(24) };
    static constexpr int8_t BUILTIN_CONSOLIDATE_AREA { int8_t(1) };
    static constexpr int8_t BUILTIN_AUTO_OPEN { int8_t(2) };
    static constexpr int8_t BUILTIN_AUTO_CLOSE { int8_t(3) };
    static constexpr int8_t BUILTIN_DATABASE { int8_t(4) };
    static constexpr int8_t BUILTIN_CRITERIA { int8_t(5) };
    static constexpr int8_t BUILTIN_PRINT_AREA { int8_t(6) };
    static constexpr int8_t BUILTIN_PRINT_TITLE { int8_t(7) };
    static constexpr int8_t BUILTIN_RECORDER { int8_t(8) };
    static constexpr int8_t BUILTIN_DATA_FORM { int8_t(9) };
    static constexpr int8_t BUILTIN_AUTO_ACTIVATE { int8_t(10) };
    static constexpr int8_t BUILTIN_AUTO_DEACTIVATE { int8_t(11) };
    static constexpr int8_t BUILTIN_SHEET_TITLE { int8_t(12) };
    static constexpr int8_t BUILTIN_FILTER_DB { int8_t(13) };

private:
    int16_t field_1_option_flag {  };
    int8_t field_2_keyboard_shortcut {  };
    int16_t field_5_externSheetIndex_plus1 {  };
    int32_t field_6_sheetNumber {  };
    bool field_11_nameIsMultibyte {  };
    int8_t field_12_built_in_code {  };
    ::java::lang::String* field_12_name_text {  };
    ::org::apache::poi::ss::formula::Formula* field_13_name_definition {  };
    ::java::lang::String* field_14_custom_menu_text {  };
    ::java::lang::String* field_15_description_text {  };
    ::java::lang::String* field_16_help_topic_text {  };
    ::java::lang::String* field_17_status_bar_text {  };
protected:
    void ctor();
    void ctor(int8_t builtin, int32_t sheetNumber);

public:
    void setOptionFlag(int16_t flag);
    void setKeyboardShortcut(int8_t shortcut);
    int32_t getSheetNumber();
    int8_t getFnGroup();
    void setSheetNumber(int32_t value);
    void setNameText(::java::lang::String* name);
    void setCustomMenuText(::java::lang::String* text);
    void setDescriptionText(::java::lang::String* text);
    void setHelpTopicText(::java::lang::String* text);
    void setStatusBarText(::java::lang::String* text);
    int16_t getOptionFlag();
    int8_t getKeyboardShortcut();

private:
    int32_t getNameTextLength();

public:
    bool isHiddenName();
    void setHidden(bool b);
    bool isFunctionName();
    void setFunction(bool function);
    bool hasFormula();
    bool isCommandName();
    bool isMacro();
    bool isComplexFunction();
    bool isBuiltInName();
    ::java::lang::String* getNameText();
    int8_t getBuiltInName();
    ::org::apache::poi::ss::formula::ptg::PtgArray* getNameDefinition();
    void setNameDefinition(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);
    ::java::lang::String* getCustomMenuText();
    ::java::lang::String* getDescriptionText();
    ::java::lang::String* getHelpTopicText();
    ::java::lang::String* getStatusBarText();
    void serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out) override;

private:
    int32_t getNameRawSize();

public: /* protected */
    int32_t getDataSize();

public:
    int32_t getExternSheetNumber();
protected:
    void ctor(RecordInputStream* ris);

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

private:
    static ::java::lang::String* translateBuiltInName(int8_t name);

    // Generated

public:
    NameRecord();
    NameRecord(int8_t builtin, int32_t sheetNumber);
    NameRecord(RecordInputStream* ris);
protected:
    NameRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class NameRecord_Option;
};
