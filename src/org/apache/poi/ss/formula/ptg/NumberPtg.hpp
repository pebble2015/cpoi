// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NumberPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::NumberPtg final
    : public ScalarConstantPtg
{

public:
    typedef ScalarConstantPtg super;
    static constexpr int32_t SIZE { int32_t(9) };
    static constexpr int8_t sid { int8_t(31) };

private:
    double field_1_value {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(::java::lang::String* value);
    void ctor(double value);

public:
    double getValue();
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

    // Generated
    NumberPtg(::poi::util::LittleEndianInput* in);
    NumberPtg(::java::lang::String* value);
    NumberPtg(double value);
protected:
    NumberPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
