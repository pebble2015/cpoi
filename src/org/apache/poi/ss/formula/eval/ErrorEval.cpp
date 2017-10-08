// Generated from /POI/java/org/apache/poi/ss/formula/eval/ErrorEval.java
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>

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

poi::ss::formula::eval::ErrorEval::ErrorEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::ErrorEval::ErrorEval(::poi::ss::usermodel::FormulaError* error) 
    : ErrorEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(error);
}

java::util::Map*& poi::ss::formula::eval::ErrorEval::evals()
{
    clinit();
    return evals_;
}
java::util::Map* poi::ss::formula::eval::ErrorEval::evals_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::NULL_INTERSECTION()
{
    clinit();
    return NULL_INTERSECTION_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::NULL_INTERSECTION_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::DIV_ZERO()
{
    clinit();
    return DIV_ZERO_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::DIV_ZERO_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::VALUE_INVALID()
{
    clinit();
    return VALUE_INVALID_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::VALUE_INVALID_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::REF_INVALID()
{
    clinit();
    return REF_INVALID_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::REF_INVALID_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::NAME_INVALID()
{
    clinit();
    return NAME_INVALID_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::NAME_INVALID_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::NUM_ERROR()
{
    clinit();
    return NUM_ERROR_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::NUM_ERROR_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::NA()
{
    clinit();
    return NA_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::NA_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::FUNCTION_NOT_IMPLEMENTED()
{
    clinit();
    return FUNCTION_NOT_IMPLEMENTED_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::FUNCTION_NOT_IMPLEMENTED_;

poi::ss::formula::eval::ErrorEval*& poi::ss::formula::eval::ErrorEval::CIRCULAR_REF_ERROR()
{
    clinit();
    return CIRCULAR_REF_ERROR_;
}
poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::CIRCULAR_REF_ERROR_;

poi::ss::formula::eval::ErrorEval* poi::ss::formula::eval::ErrorEval::valueOf(int32_t errorCode)
{
    clinit();
    auto error = ::poi::ss::usermodel::FormulaError::forInt(errorCode);
    auto eval = java_cast< ErrorEval* >(npc(evals_)->get(error));
    if(eval != nullptr) {
        return eval;
    } else {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unhandled error type for code "_j)->append(errorCode)->toString());
    }
}

java::lang::String* poi::ss::formula::eval::ErrorEval::getText(int32_t errorCode)
{
    clinit();
    if(::poi::ss::usermodel::FormulaError::isValidCode(errorCode)) {
        return npc(::poi::ss::usermodel::FormulaError::forInt(errorCode))->getString();
    }
    return ::java::lang::StringBuilder().append(u"~non~std~err("_j)->append(errorCode)
        ->append(u")~"_j)->toString();
}

void poi::ss::formula::eval::ErrorEval::ctor(::poi::ss::usermodel::FormulaError* error)
{
    super::ctor();
    _error = error;
    npc(evals_)->put(error, this);
}

int32_t poi::ss::formula::eval::ErrorEval::getErrorCode()
{
    return npc(_error)->getLongCode();
}

java::lang::String* poi::ss::formula::eval::ErrorEval::getErrorString()
{
    return npc(_error)->getString();
}

java::lang::String* poi::ss::formula::eval::ErrorEval::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(npc(_error)->getString())
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::ErrorEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.ErrorEval", 40);
    return c;
}

void poi::ss::formula::eval::ErrorEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        evals_ = new ::java::util::HashMap();
        NULL_INTERSECTION_ = new ErrorEval(::poi::ss::usermodel::FormulaError::NULL_);
        DIV_ZERO_ = new ErrorEval(::poi::ss::usermodel::FormulaError::DIV0);
        VALUE_INVALID_ = new ErrorEval(::poi::ss::usermodel::FormulaError::VALUE);
        REF_INVALID_ = new ErrorEval(::poi::ss::usermodel::FormulaError::REF);
        NAME_INVALID_ = new ErrorEval(::poi::ss::usermodel::FormulaError::NAME);
        NUM_ERROR_ = new ErrorEval(::poi::ss::usermodel::FormulaError::NUM);
        NA_ = new ErrorEval(::poi::ss::usermodel::FormulaError::NA);
        FUNCTION_NOT_IMPLEMENTED_ = new ErrorEval(::poi::ss::usermodel::FormulaError::FUNCTION_NOT_IMPLEMENTED);
        CIRCULAR_REF_ERROR_ = new ErrorEval(::poi::ss::usermodel::FormulaError::CIRCULAR_REF);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::eval::ErrorEval::getClass0()
{
    return class_();
}

