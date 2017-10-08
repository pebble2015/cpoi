// Generated from /POI/java/org/apache/poi/ss/formula/CellCacheEntry.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener_ICacheEntry.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
typedef ::SubArray< ::poi::ss::formula::FormulaCellCacheEntry, CellCacheEntryArray > FormulaCellCacheEntryArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::CellCacheEntry
    : public virtual ::java::lang::Object
    , public virtual IEvaluationListener_ICacheEntry
{

public:
    typedef ::java::lang::Object super;

private:
    static CellCacheEntryArray* EMPTY_ARRAY_;
    FormulaCellCacheEntrySet* _consumingCells {  };
    ::poi::ss::formula::eval::ValueEval* _value {  };
protected:
    void ctor();

public: /* protected */
    void clearValue();

public:
    bool updateValue(::poi::ss::formula::eval::ValueEval* value);
    ::poi::ss::formula::eval::ValueEval* getValue() override;

private:
    static bool areValuesEqual(::poi::ss::formula::eval::ValueEval* a, ::poi::ss::formula::eval::ValueEval* b);

public:
    void addConsumingCell(FormulaCellCacheEntry* cellLoc);
    FormulaCellCacheEntryArray* getConsumingCells();
    void clearConsumingCell(FormulaCellCacheEntry* cce);
    void recurseClearCachedFormulaResults(IEvaluationListener* listener);

public: /* protected */
    void recurseClearCachedFormulaResults();
    void recurseClearCachedFormulaResults(IEvaluationListener* listener, int32_t depth);

    // Generated
    CellCacheEntry();
protected:
    CellCacheEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static CellCacheEntryArray*& EMPTY_ARRAY();

private:
    virtual ::java::lang::Class* getClass0();
};
