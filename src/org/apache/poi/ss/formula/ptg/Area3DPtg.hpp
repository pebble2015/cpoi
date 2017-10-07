// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Area3DPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtgBase.hpp>
#include <org/apache/poi/ss/formula/WorkbookDependentFormula.hpp>
#include <org/apache/poi/ss/formula/ExternSheetReferenceToken.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::Area3DPtg final
    : public AreaPtgBase
    , public ::org::apache::poi::ss::formula::WorkbookDependentFormula
    , public ::org::apache::poi::ss::formula::ExternSheetReferenceToken
{

public:
    typedef AreaPtgBase super;
    static constexpr int8_t sid { int8_t(59) };

private:
    static constexpr int32_t SIZE { int32_t(11) };
    int32_t field_1_index_extern_sheet {  };
protected:
    void ctor(::java::lang::String* arearef, int32_t externIdx);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative, int32_t externalSheetIndex);
    void ctor(::org::apache::poi::ss::util::AreaReference* arearef, int32_t externIdx);

public:
    ::java::lang::String* toString() override;
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    int32_t getExternSheetIndex() override;
    void setExternSheetIndex(int32_t index);
    ::java::lang::String* format2DRefAsString() override;
    ::java::lang::String* toFormulaString(::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book) override;
    ::java::lang::String* toFormulaString() override;

    // Generated
    Area3DPtg(::java::lang::String* arearef, int32_t externIdx);
    Area3DPtg(::org::apache::poi::util::LittleEndianInput* in);
    Area3DPtg(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative, int32_t externalSheetIndex);
    Area3DPtg(::org::apache::poi::ss::util::AreaReference* arearef, int32_t externIdx);
protected:
    Area3DPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
