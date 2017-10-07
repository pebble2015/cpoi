// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_LookupValueComparer.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LookupUtils_LookupValueComparerBase
    : public virtual ::java::lang::Object
    , public virtual LookupUtils_LookupValueComparer
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Class* _targetClass {  };
protected:
    void ctor(::org::apache::poi::ss::formula::eval::ValueEval* targetValue);

public:
    LookupUtils_CompareResult* compareTo(::org::apache::poi::ss::formula::eval::ValueEval* other) override;
    ::java::lang::String* toString() override;

public: /* protected */
    virtual LookupUtils_CompareResult* compareSameType(::org::apache::poi::ss::formula::eval::ValueEval* other) = 0;
    virtual ::java::lang::String* getValueAsString() = 0;

    // Generated
    LookupUtils_LookupValueComparerBase(::org::apache::poi::ss::formula::eval::ValueEval* targetValue);
protected:
    LookupUtils_LookupValueComparerBase(const ::default_init_tag&);


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
    friend class LookupUtils_StringLookupComparer;
    friend class LookupUtils_NumberLookupComparer;
    friend class LookupUtils_BooleanLookupComparer;
    friend class LookupUtils_BinarySearchIndexes;
};
