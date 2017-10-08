// Generated from /POI/java/org/apache/poi/ss/formula/constant/ErrorConstant.java
#include <org/apache/poi/ss/formula/constant/ErrorConstant.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::constant::ErrorConstant::ErrorConstant(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::constant::ErrorConstant::ErrorConstant(int32_t errorCode) 
    : ErrorConstant(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCode);
}

poi::util::POILogger*& poi::ss::formula::constant::ErrorConstant::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::ss::formula::constant::ErrorConstant::logger_;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::NULL_()
{
    clinit();
    return NULL__;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::NULL__;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::DIV_0()
{
    clinit();
    return DIV_0_;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::DIV_0_;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::VALUE()
{
    clinit();
    return VALUE_;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::VALUE_;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::REF()
{
    clinit();
    return REF_;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::REF_;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::NAME()
{
    clinit();
    return NAME_;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::NAME_;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::NUM()
{
    clinit();
    return NUM_;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::NUM_;

poi::ss::formula::constant::ErrorConstant*& poi::ss::formula::constant::ErrorConstant::NA()
{
    clinit();
    return NA_;
}
poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::NA_;

void poi::ss::formula::constant::ErrorConstant::ctor(int32_t errorCode)
{
    super::ctor();
    _errorCode = errorCode;
}

int32_t poi::ss::formula::constant::ErrorConstant::getErrorCode()
{
    return _errorCode;
}

java::lang::String* poi::ss::formula::constant::ErrorConstant::getText()
{
    if(::poi::ss::usermodel::FormulaError::isValidCode(_errorCode)) {
        return npc(::poi::ss::usermodel::FormulaError::forInt(_errorCode))->getString();
    }
    return ::java::lang::StringBuilder().append(u"unknown error code ("_j)->append(_errorCode)
        ->append(u")"_j)->toString();
}

poi::ss::formula::constant::ErrorConstant* poi::ss::formula::constant::ErrorConstant::valueOf(int32_t errorCode)
{
    clinit();
    if(::poi::ss::usermodel::FormulaError::isValidCode(errorCode)) {
        {
            auto v = ::poi::ss::usermodel::FormulaError::forInt(errorCode);
            if((v == ::poi::ss::usermodel::FormulaError::NULL_)) {
                return NULL__;
            }
            if((v == ::poi::ss::usermodel::FormulaError::DIV0)) {
                return DIV_0_;
            }
            if((v == ::poi::ss::usermodel::FormulaError::VALUE)) {
                return VALUE_;
            }
            if((v == ::poi::ss::usermodel::FormulaError::REF)) {
                return REF_;
            }
            if((v == ::poi::ss::usermodel::FormulaError::NAME)) {
                return NAME_;
            }
            if((v == ::poi::ss::usermodel::FormulaError::NUM)) {
                return NUM_;
            }
            if((v == ::poi::ss::usermodel::FormulaError::NA)) {
                return NA_;
            }
            if((((v != ::poi::ss::usermodel::FormulaError::NULL_) && (v != ::poi::ss::usermodel::FormulaError::DIV0) && (v != ::poi::ss::usermodel::FormulaError::VALUE) && (v != ::poi::ss::usermodel::FormulaError::REF) && (v != ::poi::ss::usermodel::FormulaError::NAME) && (v != ::poi::ss::usermodel::FormulaError::NUM) && (v != ::poi::ss::usermodel::FormulaError::NA)))) {
                goto end_switch0;;
            }
end_switch0:;
        }

    }
    npc(logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Warning - unexpected error code ("_j)->append(errorCode)
        ->append(u")"_j)->toString())}));
    return new ErrorConstant(errorCode);
}

java::lang::String* poi::ss::formula::constant::ErrorConstant::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(getText());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::constant::ErrorConstant::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.constant.ErrorConstant", 48);
    return c;
}

void poi::ss::formula::constant::ErrorConstant::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ErrorConstant::class_()));
        NULL__ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::NULL_)->getCode());
        DIV_0_ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::DIV0)->getCode());
        VALUE_ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::VALUE)->getCode());
        REF_ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::REF)->getCode());
        NAME_ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::NAME)->getCode());
        NUM_ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::NUM)->getCode());
        NA_ = new ErrorConstant(npc(::poi::ss::usermodel::FormulaError::NA)->getCode());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::constant::ErrorConstant::getClass0()
{
    return class_();
}

