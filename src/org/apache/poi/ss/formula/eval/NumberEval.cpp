// Generated from /POI/java/org/apache/poi/ss/formula/eval/NumberEval.java
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/ptg/IntPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NumberPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>

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

poi::ss::formula::eval::NumberEval::NumberEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::NumberEval::NumberEval(::poi::ss::formula::ptg::Ptg* ptg) 
    : NumberEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(ptg);
}

poi::ss::formula::eval::NumberEval::NumberEval(double value) 
    : NumberEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

poi::ss::formula::eval::NumberEval*& poi::ss::formula::eval::NumberEval::ZERO()
{
    clinit();
    return ZERO_;
}
poi::ss::formula::eval::NumberEval* poi::ss::formula::eval::NumberEval::ZERO_;

void poi::ss::formula::eval::NumberEval::ctor(::poi::ss::formula::ptg::Ptg* ptg)
{
    super::ctor();
    if(ptg == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"ptg must not be null"_j);
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::IntPtg* >(ptg) != nullptr) {
        _value = npc((java_cast< ::poi::ss::formula::ptg::IntPtg* >(ptg)))->getValue();
    } else if(dynamic_cast< ::poi::ss::formula::ptg::NumberPtg* >(ptg) != nullptr) {
        _value = npc((java_cast< ::poi::ss::formula::ptg::NumberPtg* >(ptg)))->getValue();
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"bad argument type ("_j)->append(npc(npc(ptg)->getClass())->getName())
            ->append(u")"_j)->toString());
    }
}

void poi::ss::formula::eval::NumberEval::ctor(double value)
{
    super::ctor();
    _value = value;
}

double poi::ss::formula::eval::NumberEval::getNumberValue()
{
    return _value;
}

java::lang::String* poi::ss::formula::eval::NumberEval::getStringValue()
{
    if(_stringValue == nullptr) {
        _stringValue = ::poi::ss::util::NumberToTextConverter::toText(_value);
    }
    return _stringValue;
}

java::lang::String* poi::ss::formula::eval::NumberEval::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(getStringValue())
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::NumberEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.NumberEval", 41);
    return c;
}

void poi::ss::formula::eval::NumberEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ZERO_ = new NumberEval(static_cast< double >(int32_t(0)));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::eval::NumberEval::getClass0()
{
    return class_();
}

