// Generated from /POI/java/org/apache/poi/ss/formula/FormulaUsedBlankCellSet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::FormulaUsedBlankCellSet_BookSheetKey final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _bookIndex {  };
    int32_t _sheetIndex {  };
protected:
    void ctor(int32_t bookIndex, int32_t sheetIndex);

public:
    int32_t hashCode() override;
    bool equals(::java::lang::Object* obj) override;

    // Generated
    FormulaUsedBlankCellSet_BookSheetKey(int32_t bookIndex, int32_t sheetIndex);
protected:
    FormulaUsedBlankCellSet_BookSheetKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaUsedBlankCellSet;
    friend class FormulaUsedBlankCellSet_BlankCellSheetGroup;
    friend class FormulaUsedBlankCellSet_BlankCellRectangleGroup;
};
