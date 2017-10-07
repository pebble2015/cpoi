// Generated from /POI/java/org/apache/poi/hssf/record/cf/ColorGradientFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
                    namespace cf
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::ColorGradientThreshold, ThresholdArray, ::java::lang::CloneableArray > ColorGradientThresholdArray;
                    } // cf

                    namespace common
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::common::ExtendedColor, ::java::lang::ObjectArray, ::java::lang::CloneableArray > ExtendedColorArray;
                    } // common
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::cf::ColorGradientFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* log_;
    int8_t options {  };
    ColorGradientThresholdArray* thresholds {  };
    ::org::apache::poi::hssf::record::common::ExtendedColorArray* colors {  };
    static ::org::apache::poi::util::BitField* clamp_;
    static ::org::apache::poi::util::BitField* background_;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    int32_t getNumControlPoints();
    void setNumControlPoints(int32_t num);
    ColorGradientThresholdArray* getThresholds();
    void setThresholds(ColorGradientThresholdArray* thresholds);
    ::org::apache::poi::hssf::record::common::ExtendedColorArray* getColors();
    void setColors(::org::apache::poi::hssf::record::common::ExtendedColorArray* colors);
    bool isClampToCurve();
    bool isAppliesToBackground();

private:
    bool getOptionFlag(::org::apache::poi::util::BitField* field);
    void updateThresholdPositions();

public:
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;
    int32_t getDataLength();
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    ColorGradientFormatting();
    ColorGradientFormatting(::org::apache::poi::util::LittleEndianInput* in);
protected:
    ColorGradientFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& log();
    static ::org::apache::poi::util::BitField*& clamp();
    static ::org::apache::poi::util::BitField*& background();
    virtual ::java::lang::Class* getClass0();
};
