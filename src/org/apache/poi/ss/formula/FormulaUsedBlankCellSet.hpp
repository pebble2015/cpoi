// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::FormulaUsedBlankCellSet final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* _sheetGroupsByBookSheet {  };
protected:
    void ctor();

public:
    void addCell(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);

private:
    FormulaUsedBlankCellSet_BlankCellSheetGroup* getSheetGroup(int32_t bookIndex, int32_t sheetIndex);

public:
    bool containsCell(FormulaUsedBlankCellSet_BookSheetKey* key, int32_t rowIndex, int32_t columnIndex);
    bool isEmpty();

    // Generated
    FormulaUsedBlankCellSet();
protected:
    FormulaUsedBlankCellSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaUsedBlankCellSet_BookSheetKey;
    friend class FormulaUsedBlankCellSet_BlankCellSheetGroup;
    friend class FormulaUsedBlankCellSet_BlankCellRectangleGroup;
};
