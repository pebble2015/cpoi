// Generated from /POI/java/org/apache/poi/ss/formula/functions/Lookup.java
#include <org/apache/poi/ss/formula/functions/Lookup.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils.hpp>

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
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Lookup::Lookup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Lookup::Lookup()
    : Lookup(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Lookup::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    try {
        auto lookupValue = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        auto lookupArray_ = LookupUtils::resolveTableArrayArg(arg1);
        LookupUtils_ValueVector* lookupVector;
        LookupUtils_ValueVector* resultVector;
        if(npc(lookupArray_)->getWidth() > npc(lookupArray_)->getHeight()) {
            lookupVector = createVector(npc(lookupArray_)->getRow(0));
            resultVector = createVector(npc(lookupArray_)->getRow(npc(lookupArray_)->getHeight() - int32_t(1)));
        } else {
            lookupVector = createVector(npc(lookupArray_)->getColumn(0));
            resultVector = createVector(npc(lookupArray_)->getColumn(npc(lookupArray_)->getWidth() - int32_t(1)));
        }
        /* assert((npc(lookupVector)->getSize() == npc(resultVector)->getSize())) */ ;
        auto index = LookupUtils::lookupIndexOfValue(lookupValue, lookupVector, true);
        return npc(resultVector)->getItem(index);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Lookup::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2)
{
    try {
        auto lookupValue = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        auto aeLookupVector = LookupUtils::resolveTableArrayArg(arg1);
        auto aeResultVector = LookupUtils::resolveTableArrayArg(arg2);
        auto lookupVector = createVector(aeLookupVector);
        auto resultVector = createVector(aeResultVector);
        if(npc(lookupVector)->getSize() > npc(resultVector)->getSize()) {
            throw new ::java::lang::RuntimeException(u"Lookup vector and result vector of differing sizes not supported yet"_j);
        }
        auto index = LookupUtils::lookupIndexOfValue(lookupValue, lookupVector, true);
        return npc(resultVector)->getItem(index);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

org::apache::poi::ss::formula::functions::LookupUtils_ValueVector* org::apache::poi::ss::formula::functions::Lookup::createVector(::org::apache::poi::ss::formula::TwoDEval* ae)
{
    clinit();
    auto result = LookupUtils::createVector(ae);
    if(result != nullptr) {
        return result;
    }
    throw new ::java::lang::RuntimeException(u"non-vector lookup or result areas not supported yet"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Lookup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Lookup", 42);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Lookup::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Lookup::getClass0()
{
    return class_();
}

