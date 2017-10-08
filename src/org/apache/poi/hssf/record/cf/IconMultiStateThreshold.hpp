// Generated from /POI/java/org/apache/poi/hssf/record/cf/IconMultiStateThreshold.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::cf::IconMultiStateThreshold final
    : public Threshold
    , public ::java::lang::Cloneable
{

public:
    typedef Threshold super;
    static constexpr int8_t EQUALS_EXCLUDE { int8_t(0) };
    static constexpr int8_t EQUALS_INCLUDE { int8_t(1) };

private:
    int8_t equals_ {  };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in);

public:
    int8_t getEquals();
    void setEquals(int8_t equals);
    int32_t getDataLength() override;
    IconMultiStateThreshold* clone() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

    // Generated
    IconMultiStateThreshold();
    IconMultiStateThreshold(::poi::util::LittleEndianInput* in);
protected:
    IconMultiStateThreshold(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
