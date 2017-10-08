// Generated from /POI/java/org/apache/poi/hssf/record/cf/ColorGradientThreshold.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::cf::ColorGradientThreshold final
    : public Threshold
    , public ::java::lang::Cloneable
{

public:
    typedef Threshold super;

private:
    double position {  };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in);

public:
    double getPosition();
    void setPosition(double position);
    int32_t getDataLength() override;
    ColorGradientThreshold* clone() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

    // Generated
    ColorGradientThreshold();
    ColorGradientThreshold(::poi::util::LittleEndianInput* in);
protected:
    ColorGradientThreshold(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
