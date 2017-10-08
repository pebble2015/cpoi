// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationTracker.java
#include <org/apache/poi/ss/formula/EvaluationTracker.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/CellEvaluationFrame.hpp>
#include <org/apache/poi/ss/formula/EvaluationCache.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/PlainValueCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::EvaluationTracker::EvaluationTracker(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::EvaluationTracker::EvaluationTracker(EvaluationCache* cache) 
    : EvaluationTracker(*static_cast< ::default_init_tag* >(0))
{
    ctor(cache);
}

void poi::ss::formula::EvaluationTracker::ctor(EvaluationCache* cache)
{
    super::ctor();
    _cache = cache;
    _evaluationFrames = new ::java::util::ArrayList();
    _currentlyEvaluatingCells = new ::java::util::HashSet();
}

bool poi::ss::formula::EvaluationTracker::startEvaluate(FormulaCellCacheEntry* cce)
{
    if(cce == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cellLoc must not be null"_j);
    }
    if(npc(_currentlyEvaluatingCells)->contains(static_cast< ::java::lang::Object* >(cce))) {
        return false;
    }
    npc(_currentlyEvaluatingCells)->add(static_cast< ::java::lang::Object* >(cce));
    npc(_evaluationFrames)->add(static_cast< ::java::lang::Object* >(new CellEvaluationFrame(cce)));
    return true;
}

void poi::ss::formula::EvaluationTracker::updateCacheResult(::poi::ss::formula::eval::ValueEval* result)
{
    auto nFrames = npc(_evaluationFrames)->size();
    if(nFrames < 1) {
        throw new ::java::lang::IllegalStateException(u"Call to endEvaluate without matching call to startEvaluate"_j);
    }
    auto frame = java_cast< CellEvaluationFrame* >(npc(_evaluationFrames)->get(nFrames - int32_t(1)));
    if(result == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::ErrorEval::CIRCULAR_REF_ERROR()) && nFrames > 1) {
        return;
    }
    npc(frame)->updateFormulaResult(result);
}

void poi::ss::formula::EvaluationTracker::endEvaluate(CellCacheEntry* cce)
{
    auto nFrames = npc(_evaluationFrames)->size();
    if(nFrames < 1) {
        throw new ::java::lang::IllegalStateException(u"Call to endEvaluate without matching call to startEvaluate"_j);
    }
    nFrames--;
    auto frame = java_cast< CellEvaluationFrame* >(npc(_evaluationFrames)->get(nFrames));
    if(cce != npc(frame)->getCCE()) {
        throw new ::java::lang::IllegalStateException(u"Wrong cell specified. "_j);
    }
    npc(_evaluationFrames)->remove(nFrames);
    npc(_currentlyEvaluatingCells)->remove(static_cast< ::java::lang::Object* >(cce));
}

void poi::ss::formula::EvaluationTracker::acceptFormulaDependency(CellCacheEntry* cce)
{
    auto prevFrameIndex = npc(_evaluationFrames)->size() - int32_t(1);
    if(prevFrameIndex < 0) {
    } else {
        auto consumingFrame = java_cast< CellEvaluationFrame* >(npc(_evaluationFrames)->get(prevFrameIndex));
        npc(consumingFrame)->addSensitiveInputCell(cce);
    }
}

void poi::ss::formula::EvaluationTracker::acceptPlainValueDependency(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, ::poi::ss::formula::eval::ValueEval* value)
{
    auto prevFrameIndex = npc(_evaluationFrames)->size() - int32_t(1);
    if(prevFrameIndex < 0) {
    } else {
        auto consumingFrame = java_cast< CellEvaluationFrame* >(npc(_evaluationFrames)->get(prevFrameIndex));
        if(value == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
            npc(consumingFrame)->addUsedBlankCell(bookIndex, sheetIndex, rowIndex, columnIndex);
        } else {
            auto cce = npc(_cache)->getPlainValueEntry(bookIndex, sheetIndex, rowIndex, columnIndex, value);
            npc(consumingFrame)->addSensitiveInputCell(cce);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationTracker::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationTracker", 43);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationTracker::getClass0()
{
    return class_();
}

