// Generated from /POI/java/org/apache/poi/ss/formula/ptg/IntPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::IntPtg final
    : public ScalarConstantPtg
{

public:
    typedef ScalarConstantPtg super;

private:
    static constexpr int32_t MIN_VALUE { int32_t(0) };
    static constexpr int32_t MAX_VALUE { int32_t(65535) };

public:
    static bool isInRange(int32_t i);
    static constexpr int32_t SIZE { int32_t(3) };
    static constexpr int8_t sid { int8_t(30) };

private:
    int32_t field_1_value {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(int32_t value);

public:
    int32_t getValue();
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

    // Generated
    IntPtg(::poi::util::LittleEndianInput* in);
    IntPtg(int32_t value);
protected:
    IntPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
