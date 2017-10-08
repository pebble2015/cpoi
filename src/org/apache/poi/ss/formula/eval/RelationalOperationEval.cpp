// Generated from /POI/java/org/apache/poi/ss/formula/eval/RelationalOperationEval.java
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_1.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_2.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_3.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_4.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_5.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval_6.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/util/NumberComparer.hpp>

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

poi::ss::formula::eval::RelationalOperationEval::RelationalOperationEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::RelationalOperationEval::RelationalOperationEval()
    : RelationalOperationEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::RelationalOperationEval::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    ValueEval* vA;
    ValueEval* vB;
    try {
        vA = OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        vB = OperandResolver::getSingleValue(arg1, srcRowIndex, srcColumnIndex);
    } catch (EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto cmpResult = doCompare(vA, vB);
    auto result = convertComparisonResult(cmpResult);
    return BoolEval::valueOf(result);
}

int32_t poi::ss::formula::eval::RelationalOperationEval::doCompare(ValueEval* va, ValueEval* vb)
{
    clinit();
    if(va == static_cast< ValueEval* >(BlankEval::instance())) {
        return compareBlank(vb);
    }
    if(vb == static_cast< ValueEval* >(BlankEval::instance())) {
        return -compareBlank(va);
    }
    if(dynamic_cast< BoolEval* >(va) != nullptr) {
        if(dynamic_cast< BoolEval* >(vb) != nullptr) {
            auto bA = java_cast< BoolEval* >(va);
            auto bB = java_cast< BoolEval* >(vb);
            if(npc(bA)->getBooleanValue() == npc(bB)->getBooleanValue()) {
                return 0;
            }
            return npc(bA)->getBooleanValue() ? int32_t(1) : -int32_t(1);
        }
        return 1;
    }
    if(dynamic_cast< BoolEval* >(vb) != nullptr) {
        return -int32_t(1);
    }
    if(dynamic_cast< StringEval* >(va) != nullptr) {
        if(dynamic_cast< StringEval* >(vb) != nullptr) {
            auto sA = java_cast< StringEval* >(va);
            auto sB = java_cast< StringEval* >(vb);
            return npc(npc(sA)->getStringValue())->compareToIgnoreCase(npc(sB)->getStringValue());
        }
        return 1;
    }
    if(dynamic_cast< StringEval* >(vb) != nullptr) {
        return -int32_t(1);
    }
    if(dynamic_cast< NumberEval* >(va) != nullptr) {
        if(dynamic_cast< NumberEval* >(vb) != nullptr) {
            auto nA = java_cast< NumberEval* >(va);
            auto nB = java_cast< NumberEval* >(vb);
            return ::poi::ss::util::NumberComparer::compare(npc(nA)->getNumberValue(), npc(nB)->getNumberValue());
        }
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad operand types ("_j)->append(npc(npc(va)->getClass())->getName())
        ->append(u"), ("_j)
        ->append(npc(npc(vb)->getClass())->getName())
        ->append(u")"_j)->toString());
}

int32_t poi::ss::formula::eval::RelationalOperationEval::compareBlank(ValueEval* v)
{
    clinit();
    if(v == static_cast< ValueEval* >(BlankEval::instance())) {
        return 0;
    }
    if(dynamic_cast< BoolEval* >(v) != nullptr) {
        auto boolEval = java_cast< BoolEval* >(v);
        return npc(boolEval)->getBooleanValue() ? -int32_t(1) : int32_t(0);
    }
    if(dynamic_cast< NumberEval* >(v) != nullptr) {
        auto ne = java_cast< NumberEval* >(v);
        return ::poi::ss::util::NumberComparer::compare(0.0, npc(ne)->getNumberValue());
    }
    if(dynamic_cast< StringEval* >(v) != nullptr) {
        auto se = java_cast< StringEval* >(v);
        return npc(npc(se)->getStringValue())->length() < 1 ? int32_t(0) : -int32_t(1);
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"bad value class ("_j)->append(npc(npc(v)->getClass())->getName())
        ->append(u")"_j)->toString());
}

poi::ss::formula::functions::Function*& poi::ss::formula::eval::RelationalOperationEval::EqualEval()
{
    clinit();
    return EqualEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::RelationalOperationEval::EqualEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::RelationalOperationEval::GreaterEqualEval()
{
    clinit();
    return GreaterEqualEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::RelationalOperationEval::GreaterEqualEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::RelationalOperationEval::GreaterThanEval()
{
    clinit();
    return GreaterThanEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::RelationalOperationEval::GreaterThanEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::RelationalOperationEval::LessEqualEval()
{
    clinit();
    return LessEqualEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::RelationalOperationEval::LessEqualEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::RelationalOperationEval::LessThanEval()
{
    clinit();
    return LessThanEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::RelationalOperationEval::LessThanEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::RelationalOperationEval::NotEqualEval()
{
    clinit();
    return NotEqualEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::RelationalOperationEval::NotEqualEval_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::RelationalOperationEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.RelationalOperationEval", 54);
    return c;
}

void poi::ss::formula::eval::RelationalOperationEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EqualEval_ = new RelationalOperationEval_1();
        GreaterEqualEval_ = new RelationalOperationEval_2();
        GreaterThanEval_ = new RelationalOperationEval_3();
        LessEqualEval_ = new RelationalOperationEval_4();
        LessThanEval_ = new RelationalOperationEval_5();
        NotEqualEval_ = new RelationalOperationEval_6();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::RelationalOperationEval::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::eval::RelationalOperationEval::getClass0()
{
    return class_();
}

