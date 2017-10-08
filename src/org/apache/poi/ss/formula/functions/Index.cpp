// Generated from /POI/java/org/apache/poi/ss/formula/functions/Index.java
#include <org/apache/poi/ss/formula/functions/Index.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
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
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
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

poi::ss::formula::functions::Index::Index(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Index::Index()
    : Index(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Index::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    auto reference = convertFirstArg(arg0);
    auto columnIx = int32_t(0);
    try {
        auto rowIx = resolveIndexArg(arg1, srcRowIndex, srcColumnIndex);
        if(!npc(reference)->isColumn()) {
            if(!npc(reference)->isRow()) {
                return ::poi::ss::formula::eval::ErrorEval::REF_INVALID();
            }
            columnIx = rowIx;
            rowIx = 0;
        }
        return getValueFromArea(reference, rowIx, columnIx);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Index::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    auto reference = convertFirstArg(arg0);
    try {
        auto columnIx = resolveIndexArg(arg2, srcRowIndex, srcColumnIndex);
        auto rowIx = resolveIndexArg(arg1, srcRowIndex, srcColumnIndex);
        return getValueFromArea(reference, rowIx, columnIx);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Index::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2, ::poi::ss::formula::eval::ValueEval* arg3)
{
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Incomplete code"_j)->append(u" - don't know how to support the 'area_num' parameter yet)"_j)->toString());
}

poi::ss::formula::TwoDEval* poi::ss::formula::functions::Index::convertFirstArg(::poi::ss::formula::eval::ValueEval* arg0)
{
    clinit();
    auto firstArg = arg0;
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(firstArg) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::RefEval* >(firstArg)))->offset(0, 0, 0, 0);
    }
    if((dynamic_cast< ::poi::ss::formula::TwoDEval* >(firstArg) != nullptr)) {
        return java_cast< ::poi::ss::formula::TwoDEval* >(firstArg);
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Incomplete code - cannot handle first arg of type ("_j)->append(npc(npc(firstArg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Index::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    switch (npc(args)->length) {
    case int32_t(2):
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)]);
    case int32_t(3):
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)]);
    case int32_t(4):
        return evaluate(srcRowIndex, srcColumnIndex, (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], (*args)[int32_t(3)]);
    }

    return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Index::getValueFromArea(::poi::ss::formula::TwoDEval* ae, int32_t pRowIx, int32_t pColumnIx) /* throws(EvaluationException) */
{
    clinit();
    /* assert(pRowIx >= 0) */ ;
    /* assert(pColumnIx >= 0) */ ;
    auto result = ae;
    if(pRowIx != 0) {
        if(pRowIx > npc(ae)->getHeight()) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::REF_INVALID());
        }
        result = npc(result)->getRow(pRowIx - int32_t(1));
    }
    if(pColumnIx != 0) {
        if(pColumnIx > npc(ae)->getWidth()) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::REF_INVALID());
        }
        result = npc(result)->getColumn(pColumnIx - int32_t(1));
    }
    return result;
}

int32_t poi::ss::formula::functions::Index::resolveIndexArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ev = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, srcCellCol);
    if(ev == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
        return 0;
    }
    if(ev == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        return 0;
    }
    auto result = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ev);
    if(result < 0) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Index::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Index", 41);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Index::getClass0()
{
    return class_();
}

