// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MemFuncPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::MemFuncPtg final
    : public OperandPtg
{

public:
    typedef OperandPtg super;
    static constexpr int8_t sid { int8_t(41) };

private:
    int32_t field_1_len_ref_subexpression {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(int32_t subExprLen);

public:
    int32_t getSize() override;
    void write(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;
    int32_t getNumberOfOperands();
    int32_t getLenRefSubexpression();
    ::java::lang::String* toString() override;

    // Generated
    MemFuncPtg(::poi::util::LittleEndianInput* in);
    MemFuncPtg(int32_t subExprLen);
protected:
    MemFuncPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
