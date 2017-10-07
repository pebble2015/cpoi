// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LookupUtils_CompareResult final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool _isTypeMismatch {  };
    bool _isLessThan {  };
    bool _isEqual {  };
    bool _isGreaterThan {  };
protected:
    void ctor(bool isTypeMismatch, int32_t simpleCompareResult);

private:
    static LookupUtils_CompareResult* TYPE_MISMATCH_;
    static LookupUtils_CompareResult* LESS_THAN_;
    static LookupUtils_CompareResult* EQUAL_;
    static LookupUtils_CompareResult* GREATER_THAN_;

public:
    static LookupUtils_CompareResult* valueOf(int32_t simpleCompareResult);
    static LookupUtils_CompareResult* valueOf(bool matches);
    bool isTypeMismatch();
    bool isLessThan();
    bool isEqual();
    bool isGreaterThan();
    ::java::lang::String* toString() override;

private:
    ::java::lang::String* formatAsString();

    // Generated
    LookupUtils_CompareResult(bool isTypeMismatch, int32_t simpleCompareResult);
protected:
    LookupUtils_CompareResult(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static LookupUtils_CompareResult*& TYPE_MISMATCH();
    static LookupUtils_CompareResult*& LESS_THAN();
    static LookupUtils_CompareResult*& EQUAL();
    static LookupUtils_CompareResult*& GREATER_THAN();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LookupUtils;
    friend class LookupUtils_ValueVector;
    friend class LookupUtils_RowVector;
    friend class LookupUtils_ColumnVector;
    friend class LookupUtils_SheetVector;
    friend class LookupUtils_LookupValueComparer;
    friend class LookupUtils_LookupValueComparerBase;
    friend class LookupUtils_StringLookupComparer;
    friend class LookupUtils_NumberLookupComparer;
    friend class LookupUtils_BooleanLookupComparer;
    friend class LookupUtils_BinarySearchIndexes;
};
