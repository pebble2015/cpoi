// Generated from /POI/java/org/apache/poi/ss/formula/eval/RefEvalBase.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::RefEvalBase
    : public virtual ::java::lang::Object
    , public virtual RefEval
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstSheetIndex {  };
    int32_t _lastSheetIndex {  };
    int32_t _rowIndex {  };
    int32_t _columnIndex {  };
protected:
    void ctor(::org::apache::poi::ss::formula::SheetRange* sheetRange, int32_t rowIndex, int32_t columnIndex);
    void ctor(int32_t firstSheetIndex, int32_t lastSheetIndex, int32_t rowIndex, int32_t columnIndex);
    void ctor(int32_t onlySheetIndex, int32_t rowIndex, int32_t columnIndex);

public:
    int32_t getNumberOfSheets() override;
    int32_t getFirstSheetIndex() override;
    int32_t getLastSheetIndex() override;
    int32_t getRow() override;
    int32_t getColumn() override;

    // Generated

public: /* protected */
    RefEvalBase(::org::apache::poi::ss::formula::SheetRange* sheetRange, int32_t rowIndex, int32_t columnIndex);
    RefEvalBase(int32_t firstSheetIndex, int32_t lastSheetIndex, int32_t rowIndex, int32_t columnIndex);
    RefEvalBase(int32_t onlySheetIndex, int32_t rowIndex, int32_t columnIndex);
protected:
    RefEvalBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
