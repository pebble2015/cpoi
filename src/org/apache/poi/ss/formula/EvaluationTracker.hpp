// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationTracker.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::EvaluationTracker final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _evaluationFrames {  };
    ::java::util::Set* _currentlyEvaluatingCells {  };
    EvaluationCache* _cache {  };
protected:
    void ctor(EvaluationCache* cache);

public:
    bool startEvaluate(FormulaCellCacheEntry* cce);
    void updateCacheResult(::poi::ss::formula::eval::ValueEval* result);
    void endEvaluate(CellCacheEntry* cce);
    void acceptFormulaDependency(CellCacheEntry* cce);
    void acceptPlainValueDependency(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, ::poi::ss::formula::eval::ValueEval* value);

    // Generated
    EvaluationTracker(EvaluationCache* cache);
protected:
    EvaluationTracker(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
