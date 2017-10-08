// Generated from /POI/java/org/apache/poi/ss/formula/ptg/DeletedArea3DPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>
#include <org/apache/poi/ss/formula/WorkbookDependentFormula.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::DeletedArea3DPtg final
    : public OperandPtg
    , public ::poi::ss::formula::WorkbookDependentFormula
{

public:
    typedef OperandPtg super;
    static constexpr int8_t sid { int8_t(61) };

private:
    int32_t field_1_index_extern_sheet {  };
    int32_t unused1 {  };
    int32_t unused2 {  };
protected:
    void ctor(int32_t externSheetIndex);
    void ctor(::poi::util::LittleEndianInput* in);

public:
    ::java::lang::String* toFormulaString(::poi::ss::formula::FormulaRenderingWorkbook* book) override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;
    int32_t getSize() override;
    void write(::poi::util::LittleEndianOutput* out) override;

    // Generated
    DeletedArea3DPtg(int32_t externSheetIndex);
    DeletedArea3DPtg(::poi::util::LittleEndianInput* in);
protected:
    DeletedArea3DPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
