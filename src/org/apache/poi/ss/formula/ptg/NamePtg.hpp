// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NamePtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/WorkbookDependentFormula.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::NamePtg final
    : public OperandPtg
    , public ::org::apache::poi::ss::formula::WorkbookDependentFormula
{

public:
    typedef OperandPtg super;
    static constexpr int16_t sid { int16_t(35) };

private:
    static constexpr int32_t SIZE { int32_t(5) };
    int32_t field_1_label_index {  };
    int16_t field_2_zero {  };
protected:
    void ctor(int32_t nameIndex);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    int32_t getIndex();
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString(::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book) override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;

    // Generated
    NamePtg(int32_t nameIndex);
    NamePtg(::org::apache::poi::util::LittleEndianInput* in);
protected:
    NamePtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
