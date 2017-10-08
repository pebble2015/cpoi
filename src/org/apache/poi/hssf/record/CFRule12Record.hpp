// Generated from /POI/java/org/apache/poi/hssf/record/CFRule12Record.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/common/FutureRecord.hpp>
#include <java/lang/Cloneable.hpp>

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

struct default_init_tag;

class poi::hssf::record::CFRule12Record final
    : public CFRuleBase
    , public ::poi::hssf::record::common::FutureRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef CFRuleBase super;
    static constexpr int16_t sid { int16_t(2170) };

private:
    ::poi::hssf::record::common::FtrHeader* futureHeader {  };
    int32_t ext_formatting_length {  };
    ::int8_tArray* ext_formatting_data {  };
    ::poi::ss::formula::Formula* formula_scale {  };
    int8_t ext_opts {  };
    int32_t priority {  };
    int32_t template_type {  };
    int8_t template_param_length {  };
    ::int8_tArray* template_params {  };
    ::poi::hssf::record::cf::DataBarFormatting* data_bar {  };
    ::poi::hssf::record::cf::IconMultiStateFormatting* multistate {  };
    ::poi::hssf::record::cf::ColorGradientFormatting* color_gradient {  };
    ::int8_tArray* filter_data {  };
protected:
    void ctor(int8_t conditionType, int8_t comparisonOperation);
    void ctor(int8_t conditionType, int8_t comparisonOperation, ::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2, ::poi::ss::formula::ptg::PtgArray* formulaScale);

private:
    void setDefaults();

public:
    static CFRule12Record* create(::poi::hssf::usermodel::HSSFSheet* sheet, ::java::lang::String* formulaText);
    static CFRule12Record* create(::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2);
    static CFRule12Record* create(::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2, ::java::lang::String* formulaTextScale);
    static CFRule12Record* create(::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::hssf::record::common::ExtendedColor* color);
    static CFRule12Record* create(::poi::hssf::usermodel::HSSFSheet* sheet, ::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet);
    static CFRule12Record* createColorScale(::poi::hssf::usermodel::HSSFSheet* sheet);
protected:
    void ctor(RecordInputStream* in);

public:
    bool containsDataBarBlock();
    ::poi::hssf::record::cf::DataBarFormatting* getDataBarFormatting();
    ::poi::hssf::record::cf::DataBarFormatting* createDataBarFormatting();
    bool containsMultiStateBlock();
    ::poi::hssf::record::cf::IconMultiStateFormatting* getMultiStateFormatting();
    ::poi::hssf::record::cf::IconMultiStateFormatting* createMultiStateFormatting();
    bool containsColorGradientBlock();
    ::poi::hssf::record::cf::ColorGradientFormatting* getColorGradientFormatting();
    ::poi::hssf::record::cf::ColorGradientFormatting* createColorGradientFormatting();
    ::poi::ss::formula::ptg::PtgArray* getParsedExpressionScale();
    void setParsedExpressionScale(::poi::ss::formula::ptg::PtgArray* ptgs);
    int32_t getPriority();
    void setPriority(int32_t priority);
    int16_t getSid() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::java::lang::String* toString() override;
    CFRule12Record* clone() override;
    int16_t getFutureRecordType() override;
    ::poi::hssf::record::common::FtrHeader* getFutureHeader() override;
    ::poi::ss::util::CellRangeAddress* getAssociatedRange() override;

    // Generated

private:
    CFRule12Record(int8_t conditionType, int8_t comparisonOperation);
    CFRule12Record(int8_t conditionType, int8_t comparisonOperation, ::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2, ::poi::ss::formula::ptg::PtgArray* formulaScale);

public:
    CFRule12Record(RecordInputStream* in);
protected:
    CFRule12Record(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
