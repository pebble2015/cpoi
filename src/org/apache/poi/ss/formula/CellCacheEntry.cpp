// Generated from /POI/java/org/apache/poi/ss/formula/CellCacheEntry.java
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntrySet.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener_ICacheEntry.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

poi::ss::formula::CellCacheEntry::CellCacheEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::CellCacheEntry::CellCacheEntry() 
    : CellCacheEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::CellCacheEntryArray*& poi::ss::formula::CellCacheEntry::EMPTY_ARRAY()
{
    clinit();
    return EMPTY_ARRAY_;
}
poi::ss::formula::CellCacheEntryArray* poi::ss::formula::CellCacheEntry::EMPTY_ARRAY_;

void poi::ss::formula::CellCacheEntry::ctor()
{
    super::ctor();
    _consumingCells = new FormulaCellCacheEntrySet();
}

void poi::ss::formula::CellCacheEntry::clearValue()
{
    _value = nullptr;
}

bool poi::ss::formula::CellCacheEntry::updateValue(::poi::ss::formula::eval::ValueEval* value)
{
    if(value == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"Did not expect to update to null"_j);
    }
    auto result = !areValuesEqual(_value, value);
    _value = value;
    return result;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::CellCacheEntry::getValue()
{
    return _value;
}

bool poi::ss::formula::CellCacheEntry::areValuesEqual(::poi::ss::formula::eval::ValueEval* a, ::poi::ss::formula::eval::ValueEval* b)
{
    clinit();
    if(a == nullptr) {
        return false;
    }
    auto cls = npc(a)->getClass();
    if(static_cast< ::java::lang::Object* >(cls) != static_cast< ::java::lang::Object* >(npc(b)->getClass())) {
        return false;
    }
    if(a == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        return b == a;
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::NumberEval::class_())) {
        return npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(a)))->getNumberValue() == npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(b)))->getNumberValue();
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::StringEval::class_())) {
        return npc(npc((java_cast< ::poi::ss::formula::eval::StringEval* >(a)))->getStringValue())->equals(static_cast< ::java::lang::Object* >(npc((java_cast< ::poi::ss::formula::eval::StringEval* >(b)))->getStringValue()));
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::BoolEval::class_())) {
        return npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(a)))->getBooleanValue() == npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(b)))->getBooleanValue();
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::ErrorEval::class_())) {
        return npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(a)))->getErrorCode() == npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(b)))->getErrorCode();
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected value class ("_j)->append(npc(cls)->getName())
        ->append(u")"_j)->toString());
}

void poi::ss::formula::CellCacheEntry::addConsumingCell(FormulaCellCacheEntry* cellLoc)
{
    npc(_consumingCells)->add(cellLoc);
}

poi::ss::formula::FormulaCellCacheEntryArray* poi::ss::formula::CellCacheEntry::getConsumingCells()
{
    return npc(_consumingCells)->toArray_();
}

void poi::ss::formula::CellCacheEntry::clearConsumingCell(FormulaCellCacheEntry* cce)
{
    if(!npc(_consumingCells)->remove(cce)) {
        throw new ::java::lang::IllegalStateException(u"Specified formula cell is not consumed by this cell"_j);
    }
}

void poi::ss::formula::CellCacheEntry::recurseClearCachedFormulaResults(IEvaluationListener* listener)
{
    if(listener == nullptr) {
        recurseClearCachedFormulaResults();
    } else {
        npc(listener)->onClearCachedValue(this);
        recurseClearCachedFormulaResults(listener, 1);
    }
}

void poi::ss::formula::CellCacheEntry::recurseClearCachedFormulaResults()
{
    auto formulaCells = getConsumingCells();
    for (auto i = int32_t(0); i < npc(formulaCells)->length; i++) {
        auto fc = (*formulaCells)[i];
        npc(fc)->clearFormulaEntry();
        npc(fc)->recurseClearCachedFormulaResults();
    }
}

void poi::ss::formula::CellCacheEntry::recurseClearCachedFormulaResults(IEvaluationListener* listener, int32_t depth)
{
    auto formulaCells = getConsumingCells();
    npc(listener)->sortDependentCachedValues(formulaCells);
    for (auto i = int32_t(0); i < npc(formulaCells)->length; i++) {
        auto fc = (*formulaCells)[i];
        npc(listener)->onClearDependentCachedValue(fc, depth);
        npc(fc)->clearFormulaEntry();
        npc(fc)->recurseClearCachedFormulaResults(listener, depth + int32_t(1));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::CellCacheEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.CellCacheEntry", 40);
    return c;
}

void poi::ss::formula::CellCacheEntry::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_ARRAY_ = (new ::poi::ss::formula::CellCacheEntryArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::CellCacheEntry::getClass0()
{
    return class_();
}

