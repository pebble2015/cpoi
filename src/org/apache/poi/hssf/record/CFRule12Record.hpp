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

class org::apache::poi::hssf::record::CFRule12Record final
    : public CFRuleBase
    , public ::org::apache::poi::hssf::record::common::FutureRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef CFRuleBase super;
    static constexpr int16_t sid { int16_t(2170) };

private:
    ::org::apache::poi::hssf::record::common::FtrHeader* futureHeader {  };
    int32_t ext_formatting_length {  };
    ::int8_tArray* ext_formatting_data {  };
    ::org::apache::poi::ss::formula::Formula* formula_scale {  };
    int8_t ext_opts {  };
    int32_t priority {  };
    int32_t template_type {  };
    int8_t template_param_length {  };
    ::int8_tArray* template_params {  };
    ::org::apache::poi::hssf::record::cf::DataBarFormatting* data_bar {  };
    ::org::apache::poi::hssf::record::cf::IconMultiStateFormatting* multistate {  };
    ::org::apache::poi::hssf::record::cf::ColorGradientFormatting* color_gradient {  };
    ::int8_tArray* filter_data {  };
protected:
    void ctor(int8_t conditionType, int8_t comparisonOperation);
    void ctor(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2, ::org::apache::poi::ss::formula::ptg::PtgArray* formulaScale);

private:
    void setDefaults();

public:
    static CFRule12Record* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::java::lang::String* formulaText);
    static CFRule12Record* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2);
    static CFRule12Record* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2, ::java::lang::String* formulaTextScale);
    static CFRule12Record* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::hssf::record::common::ExtendedColor* color);
    static CFRule12Record* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet);
    static CFRule12Record* createColorScale(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet);
protected:
    void ctor(RecordInputStream* in);

public:
    bool containsDataBarBlock();
    ::org::apache::poi::hssf::record::cf::DataBarFormatting* getDataBarFormatting();
    ::org::apache::poi::hssf::record::cf::DataBarFormatting* createDataBarFormatting();
    bool containsMultiStateBlock();
    ::org::apache::poi::hssf::record::cf::IconMultiStateFormatting* getMultiStateFormatting();
    ::org::apache::poi::hssf::record::cf::IconMultiStateFormatting* createMultiStateFormatting();
    bool containsColorGradientBlock();
    ::org::apache::poi::hssf::record::cf::ColorGradientFormatting* getColorGradientFormatting();
    ::org::apache::poi::hssf::record::cf::ColorGradientFormatting* createColorGradientFormatting();
    ::org::apache::poi::ss::formula::ptg::PtgArray* getParsedExpressionScale();
    void setParsedExpressionScale(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);
    int32_t getPriority();
    void setPriority(int32_t priority);
    int16_t getSid() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::java::lang::String* toString() override;
    CFRule12Record* clone() override;
    int16_t getFutureRecordType() override;
    ::org::apache::poi::hssf::record::common::FtrHeader* getFutureHeader() override;
    ::org::apache::poi::ss::util::CellRangeAddress* getAssociatedRange() override;

    // Generated

private:
    CFRule12Record(int8_t conditionType, int8_t comparisonOperation);
    CFRule12Record(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2, ::org::apache::poi::ss::formula::ptg::PtgArray* formulaScale);

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
