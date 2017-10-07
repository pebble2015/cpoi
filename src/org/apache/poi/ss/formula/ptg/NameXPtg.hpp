// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NameXPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/WorkbookDependentFormula.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::NameXPtg final
    : public OperandPtg
    , public ::org::apache::poi::ss::formula::WorkbookDependentFormula
{

public:
    typedef OperandPtg super;
    static constexpr int16_t sid { int16_t(57) };

private:
    static constexpr int32_t SIZE { int32_t(7) };
    int32_t _sheetRefIndex {  };
    int32_t _nameNumber {  };
    int32_t _reserved {  };
protected:
    void ctor(int32_t sheetRefIndex, int32_t nameNumber, int32_t reserved);
    void ctor(int32_t sheetRefIndex, int32_t nameIndex);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString(::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book) override;
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toString() override;
    int8_t getDefaultOperandClass() override;
    int32_t getSheetRefIndex();
    int32_t getNameIndex();

    // Generated

private:
    NameXPtg(int32_t sheetRefIndex, int32_t nameNumber, int32_t reserved);

public:
    NameXPtg(int32_t sheetRefIndex, int32_t nameIndex);
    NameXPtg(::org::apache::poi::util::LittleEndianInput* in);
protected:
    NameXPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
