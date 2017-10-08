// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::FormulaUsedBlankCellSet_BlankCellRectangleGroup final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstRowIndex {  };
    int32_t _firstColumnIndex {  };
    int32_t _lastColumnIndex {  };
    int32_t _lastRowIndex {  };
protected:
    void ctor(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastColumnIndex);

public:
    bool containsCell(int32_t rowIndex, int32_t columnIndex);
    bool acceptRow(int32_t rowIndex, int32_t firstColumnIndex, int32_t lastColumnIndex);
    ::java::lang::String* toString() override;

    // Generated
    FormulaUsedBlankCellSet_BlankCellRectangleGroup(int32_t firstRowIndex, int32_t firstColumnIndex, int32_t lastColumnIndex);
protected:
    FormulaUsedBlankCellSet_BlankCellRectangleGroup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaUsedBlankCellSet;
    friend class FormulaUsedBlankCellSet_BookSheetKey;
    friend class FormulaUsedBlankCellSet_BlankCellSheetGroup;
};
