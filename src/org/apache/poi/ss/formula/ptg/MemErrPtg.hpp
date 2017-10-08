// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MemErrPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::MemErrPtg final
    : public OperandPtg
{

public:
    typedef OperandPtg super;
    static constexpr int16_t sid { int16_t(39) };

private:
    static constexpr int32_t SIZE { int32_t(7) };
    int32_t field_1_reserved {  };
    int16_t field_2_subex_len {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);

public:
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;

    // Generated
    MemErrPtg(::poi::util::LittleEndianInput* in);
protected:
    MemErrPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
