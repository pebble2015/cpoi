// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFColorScaleFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/ColorScaleFormatting.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>
#include <org/apache/poi/ss/usermodel/Color.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.hpp>
#include <org/apache/poi/ss/usermodel/ExtendedColor.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingThreshold, ::java::lang::ObjectArray > ConditionalFormattingThresholdArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFConditionalFormattingThreshold, ::java::lang::ObjectArray, ::poi::ss::usermodel::ConditionalFormattingThresholdArray > HSSFConditionalFormattingThresholdArray;
        } // usermodel
    } // hssf

    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::Color, ::java::lang::ObjectArray > ColorArray;
typedef ::SubArray< ::poi::ss::usermodel::ExtendedColor, ::java::lang::ObjectArray, ColorArray > ExtendedColorArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFExtendedColor, ::poi::ss::usermodel::ExtendedColorArray > HSSFExtendedColorArray;
        } // usermodel
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::usermodel::HSSFColorScaleFormatting final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::ColorScaleFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* sheet {  };
    ::poi::hssf::record::CFRule12Record* cfRule12Record {  };
    ::poi::hssf::record::cf::ColorGradientFormatting* colorFormatting {  };
protected:
    void ctor(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet);

public:
    int32_t getNumControlPoints() override;
    void setNumControlPoints(int32_t num) override;
    HSSFExtendedColorArray* getColors() override;
    void setColors(::poi::ss::usermodel::ColorArray* colors) override;
    HSSFConditionalFormattingThresholdArray* getThresholds() override;
    void setThresholds(::poi::ss::usermodel::ConditionalFormattingThresholdArray* thresholds) override;
    HSSFConditionalFormattingThreshold* createThreshold() override;

    // Generated

public: /* protected */
    HSSFColorScaleFormatting(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet);
protected:
    HSSFColorScaleFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
