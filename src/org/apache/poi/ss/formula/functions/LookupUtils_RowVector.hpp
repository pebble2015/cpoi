// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>

struct default_init_tag;

class poi::ss::formula::functions::LookupUtils_RowVector final
    : public virtual ::java::lang::Object
    , public LookupUtils_ValueVector
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::formula::TwoDEval* _tableArray_ {  };
    int32_t _size {  };
    int32_t _rowIndex {  };
protected:
    void ctor(::poi::ss::formula::TwoDEval* tableArray_, int32_t rowIndex);

public:
    ::poi::ss::formula::eval::ValueEval* getItem(int32_t index) override;
    int32_t getSize() override;

    // Generated
    LookupUtils_RowVector(::poi::ss::formula::TwoDEval* tableArray_, int32_t rowIndex);
protected:
    LookupUtils_RowVector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LookupUtils;
    friend class LookupUtils_ValueVector;
    friend class LookupUtils_ColumnVector;
    friend class LookupUtils_SheetVector;
    friend class LookupUtils_CompareResult;
    friend class LookupUtils_LookupValueComparer;
    friend class LookupUtils_LookupValueComparerBase;
    friend class LookupUtils_StringLookupComparer;
    friend class LookupUtils_NumberLookupComparer;
    friend class LookupUtils_BooleanLookupComparer;
    friend class LookupUtils_BinarySearchIndexes;
};
