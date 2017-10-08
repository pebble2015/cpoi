// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MemAreaPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::MemAreaPtg final
    : public OperandPtg
{

public:
    typedef OperandPtg super;
    static constexpr int16_t sid { int16_t(38) };

private:
    static constexpr int32_t SIZE { int32_t(7) };
    int32_t field_1_reserved {  };
    int32_t field_2_subex_len {  };
protected:
    void ctor(int32_t subexLen);
    void ctor(::poi::util::LittleEndianInput* in);

public:
    int32_t getLenRefSubexpression();
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;
    ::java::lang::String* toString() override;

    // Generated
    MemAreaPtg(int32_t subexLen);
    MemAreaPtg(::poi::util::LittleEndianInput* in);
protected:
    MemAreaPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
