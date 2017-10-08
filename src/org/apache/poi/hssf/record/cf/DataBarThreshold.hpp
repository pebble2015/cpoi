// Generated from /POI/java/org/apache/poi/hssf/record/cf/DataBarThreshold.java

#pragma once

#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::cf::DataBarThreshold final
    : public Threshold
    , public ::java::lang::Cloneable
{

public:
    typedef Threshold super;
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in);

public:
    DataBarThreshold* clone() override;

    // Generated
    DataBarThreshold();
    DataBarThreshold(::poi::util::LittleEndianInput* in);
protected:
    DataBarThreshold(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
