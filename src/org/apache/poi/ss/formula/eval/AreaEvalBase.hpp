// Generated from /POI/java/org/apache/poi/ss/formula/eval/AreaEvalBase.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::AreaEvalBase
    : public virtual ::java::lang::Object
    , public virtual AreaEval
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstSheet {  };
    int32_t _firstColumn {  };
    int32_t _firstRow {  };
    int32_t _lastSheet {  };
    int32_t _lastColumn {  };
    int32_t _lastRow {  };
    int32_t _nColumns {  };
    int32_t _nRows {  };
protected:
    void ctor(::org::apache::poi::ss::formula::SheetRange* sheets, int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn);
    void ctor(int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn);
    void ctor(::org::apache::poi::ss::formula::ptg::AreaI* ptg);
    void ctor(::org::apache::poi::ss::formula::ptg::AreaI* ptg, ::org::apache::poi::ss::formula::SheetRange* sheets);

public:
    int32_t getFirstColumn() override;
    int32_t getFirstRow() override;
    int32_t getLastColumn() override;
    int32_t getLastRow() override;
    int32_t getFirstSheetIndex() override;
    int32_t getLastSheetIndex() override;
    ValueEval* getAbsoluteValue(int32_t row, int32_t col) override;
    bool contains(int32_t row, int32_t col) override;
    bool containsRow(int32_t row) override;
    bool containsColumn(int32_t col) override;
    bool isColumn() override;
    bool isRow() override;
    int32_t getHeight() override;
    ValueEval* getValue(int32_t row, int32_t col) override;
    ValueEval* getValue(int32_t sheetIndex, int32_t row, int32_t col) override;
    /*ValueEval* getRelativeValue(int32_t relativeRowIndex, int32_t relativeColumnIndex); (already declared) */
    virtual ValueEval* getRelativeValue(int32_t sheetIndex, int32_t relativeRowIndex, int32_t relativeColumnIndex) = 0;
    int32_t getWidth() override;
    bool isSubTotal(int32_t rowIndex, int32_t columnIndex) override;

    // Generated

public: /* protected */
    AreaEvalBase(::org::apache::poi::ss::formula::SheetRange* sheets, int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn);
    AreaEvalBase(int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn);
    AreaEvalBase(::org::apache::poi::ss::formula::ptg::AreaI* ptg);
    AreaEvalBase(::org::apache::poi::ss::formula::ptg::AreaI* ptg, ::org::apache::poi::ss::formula::SheetRange* sheets);
protected:
    AreaEvalBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ValueEval* getRelativeValue(int32_t relativeRowIndex, int32_t relativeColumnIndex) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
