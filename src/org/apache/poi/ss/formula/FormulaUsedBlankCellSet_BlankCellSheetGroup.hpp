// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::FormulaUsedBlankCellSet_BlankCellSheetGroup final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _rectangleGroups {  };
    int32_t _currentRowIndex {  };
    int32_t _firstColumnIndex {  };
    int32_t _lastColumnIndex {  };
    FormulaUsedBlankCellSet_BlankCellRectangleGroup* _currentRectangleGroup {  };
protected:
    void ctor();

public:
    void addCell(int32_t rowIndex, int32_t columnIndex);
    bool containsCell(int32_t rowIndex, int32_t columnIndex);

    // Generated
    FormulaUsedBlankCellSet_BlankCellSheetGroup();
protected:
    FormulaUsedBlankCellSet_BlankCellSheetGroup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaUsedBlankCellSet;
    friend class FormulaUsedBlankCellSet_BookSheetKey;
    friend class FormulaUsedBlankCellSet_BlankCellRectangleGroup;
};
