// Generated from /POI/java/org/apache/poi/ss/formula/CellCacheEntry.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener_ICacheEntry.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::FormulaCellCacheEntry, CellCacheEntryArray > FormulaCellCacheEntryArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::CellCacheEntry
    : public virtual ::java::lang::Object
    , public virtual IEvaluationListener_ICacheEntry
{

public:
    typedef ::java::lang::Object super;

private:
    static CellCacheEntryArray* EMPTY_ARRAY_;
    FormulaCellCacheEntrySet* _consumingCells {  };
    ::org::apache::poi::ss::formula::eval::ValueEval* _value {  };
protected:
    void ctor();

public: /* protected */
    void clearValue();

public:
    bool updateValue(::org::apache::poi::ss::formula::eval::ValueEval* value);
    ::org::apache::poi::ss::formula::eval::ValueEval* getValue() override;

private:
    static bool areValuesEqual(::org::apache::poi::ss::formula::eval::ValueEval* a, ::org::apache::poi::ss::formula::eval::ValueEval* b);

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
