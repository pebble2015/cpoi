// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ref3DPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>
#include <org/apache/poi/ss/formula/WorkbookDependentFormula.hpp>
#include <org/apache/poi/ss/formula/ExternSheetReferenceToken.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::Ref3DPtg final
    : public RefPtgBase
    , public ::poi::ss::formula::WorkbookDependentFormula
    , public ::poi::ss::formula::ExternSheetReferenceToken
{

public:
    typedef RefPtgBase super;
    static constexpr int8_t sid { int8_t(58) };

private:
    static constexpr int32_t SIZE { int32_t(7) };
    int32_t field_1_index_extern_sheet {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(::java::lang::String* cellref, int32_t externIdx);
    void ctor(::poi::ss::util::CellReference* c, int32_t externIdx);

public:
    ::java::lang::String* toString() override;
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    int32_t getExternSheetIndex() override;
    void setExternSheetIndex(int32_t index);
    ::java::lang::String* format2DRefAsString() override;
    ::java::lang::String* toFormulaString(::poi::ss::formula::FormulaRenderingWorkbook* book) override;
    ::java::lang::String* toFormulaString() override;

    // Generated
    Ref3DPtg(::poi::util::LittleEndianInput* in);
    Ref3DPtg(::java::lang::String* cellref, int32_t externIdx);
    Ref3DPtg(::poi::ss::util::CellReference* c, int32_t externIdx);
protected:
    Ref3DPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
