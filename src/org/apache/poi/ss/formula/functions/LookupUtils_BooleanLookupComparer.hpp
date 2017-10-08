// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_LookupValueComparerBase.hpp>

struct default_init_tag;

class poi::ss::formula::functions::LookupUtils_BooleanLookupComparer final
    : public LookupUtils_LookupValueComparerBase
{

public:
    typedef LookupUtils_LookupValueComparerBase super;

private:
    bool _value {  };
protected:
    void ctor(::poi::ss::formula::eval::BoolEval* be);

public: /* protected */
    LookupUtils_CompareResult* compareSameType(::poi::ss::formula::eval::ValueEval* other) override;
    ::java::lang::String* getValueAsString() override;

    // Generated
    LookupUtils_BooleanLookupComparer(::poi::ss::formula::eval::BoolEval* be);
protected:
    LookupUtils_BooleanLookupComparer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LookupUtils;
    friend class LookupUtils_ValueVector;
    friend class LookupUtils_RowVector;
    friend class LookupUtils_ColumnVector;
    friend class LookupUtils_SheetVector;
    friend class LookupUtils_CompareResult;
    friend class LookupUtils_LookupValueComparer;
    friend class LookupUtils_LookupValueComparerBase;
    friend class LookupUtils_StringLookupComparer;
    friend class LookupUtils_NumberLookupComparer;
    friend class LookupUtils_BinarySearchIndexes;
};
