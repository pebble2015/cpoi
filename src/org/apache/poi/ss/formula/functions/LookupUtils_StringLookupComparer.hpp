// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_LookupValueComparerBase.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LookupUtils_StringLookupComparer final
    : public LookupUtils_LookupValueComparerBase
{

public:
    typedef LookupUtils_LookupValueComparerBase super;

private:
    ::java::lang::String* _value {  };
    ::java::util::regex::Pattern* _wildCardPattern {  };
    bool _matchExact {  };
    bool _isMatchFunction {  };
protected:
    void ctor(::org::apache::poi::ss::formula::eval::StringEval* se, bool matchExact, bool isMatchFunction);

public: /* protected */
    LookupUtils_CompareResult* compareSameType(::org::apache::poi::ss::formula::eval::ValueEval* other) override;
    ::java::lang::String* getValueAsString() override;

    // Generated
    LookupUtils_StringLookupComparer(::org::apache::poi::ss::formula::eval::StringEval* se, bool matchExact, bool isMatchFunction);
protected:
    LookupUtils_StringLookupComparer(const ::default_init_tag&);


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
    friend class LookupUtils_NumberLookupComparer;
    friend class LookupUtils_BooleanLookupComparer;
    friend class LookupUtils_BinarySearchIndexes;
};
