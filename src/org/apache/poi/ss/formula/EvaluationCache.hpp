// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationCache.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::EvaluationCache final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    PlainCellCache* _plainCellCache {  };
    FormulaCellCache* _formulaCellCache {  };

public: /* package */
    IEvaluationListener* _evaluationListener {  };
protected:
    void ctor(IEvaluationListener* evaluationListener);

public:
    void notifyUpdateCell(int32_t bookIndex, int32_t sheetIndex, EvaluationCell* cell);

private:
    void updateAnyBlankReferencingFormulas(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);

public:
    PlainValueCellCacheEntry* getPlainValueEntry(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* value);

private:
    bool areValuesEqual(::org::apache::poi::ss::formula::eval::ValueEval* a, ::org::apache::poi::ss::formula::eval::ValueEval* b);

public:
    FormulaCellCacheEntry* getOrCreateFormulaCellEntry(EvaluationCell* cell);
    void clear();
    void notifyDeleteCell(int32_t bookIndex, int32_t sheetIndex, EvaluationCell* cell);

    // Generated

public: /* package */
    EvaluationCache(IEvaluationListener* evaluationListener);
protected:
    EvaluationCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationCache_updateAnyBlankReferencingFormulas_1;
};
