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

org::apache::poi::ss::formula::constant::ErrorConstant::ErrorConstant(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::constant::ErrorConstant::ErrorConstant(int32_t errorCode) 
    : ErrorConstant(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCode);
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::formula::constant::ErrorConstant::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::formula::constant::ErrorConstant::logger_;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::NULL_()
{
    clinit();
    return NULL__;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::NULL__;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::DIV_0()
{
    clinit();
    return DIV_0_;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::DIV_0_;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::VALUE()
{
    clinit();
    return VALUE_;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::VALUE_;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::REF()
{
    clinit();
    return REF_;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::REF_;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::NAME()
{
    clinit();
    return NAME_;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::NAME_;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::NUM()
{
    clinit();
    return NUM_;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::NUM_;

org::apache::poi::ss::formula::constant::ErrorConstant*& org::apache::poi::ss::formula::constant::ErrorConstant::NA()
{
    clinit();
    return NA_;
}
org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::NA_;

void org::apache::poi::ss::formula::constant::ErrorConstant::ctor(int32_t errorCode)
{
    super::ctor();
    _errorCode = errorCode;
}

int32_t org::apache::poi::ss::formula::constant::ErrorConstant::getErrorCode()
{
    return _errorCode;
}

java::lang::String* org::apache::poi::ss::formula::constant::ErrorConstant::getText()
{
    if(::org::apache::poi::ss::usermodel::FormulaError::isValidCode(_errorCode)) {
        return npc(::org::apache::poi::ss::usermodel::FormulaError::forInt(_errorCode))->getString();
    }
    return ::java::lang::StringBuilder().append(u"unknown error code ("_j)->append(_errorCode)
        ->append(u")"_j)->toString();
}

org::apache::poi::ss::formula::constant::ErrorConstant* org::apache::poi::ss::formula::constant::ErrorConstant::valueOf(int32_t errorCode)
{
    clinit();
    if(::org::apache::poi::ss::usermodel::FormulaError::isValidCode(errorCode)) {
        {
            auto v = ::org::apache::poi::ss::usermodel::FormulaError::forInt(errorCode);
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::NULL_)) {
                return NULL__;
            }
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::DIV0)) {
                return DIV_0_;
            }
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::VALUE)) {
                return VALUE_;
            }
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::REF)) {
                return REF_;
            }
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::NAME)) {
                return NAME_;
            }
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::NUM)) {
                return NUM_;
            }
            if((v == ::org::apache::poi::ss::usermodel::FormulaError::NA)) {
                return NA_;
            }
            if((((v != ::org::apache::poi::ss::usermodel::FormulaError::NULL_) && (v != ::org::apache::poi::ss::usermodel::FormulaError::DIV0) && (v != ::org::apache::poi::ss::usermodel::FormulaError::VALUE) && (v != ::org::apache::poi::ss::usermodel::FormulaError::REF) && (v != ::org::apache::poi::ss::usermodel::FormulaError::NAME) && (v != ::org::apache::poi::ss::usermodel::FormulaError::NUM) && (v != ::org::apache::poi::ss::usermodel::FormulaError::NA)))) {
                goto end_switch0;;
            }
end_switch0:;
        }

    }
    npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Warning - unexpected error code ("_j)->append(errorCode)
        ->append(u")"_j)->toString())}));
    return new ErrorConstant(errorCode);
}

java::lang::String* org::apache::poi::ss::formula::constant::ErrorConstant::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(getText());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::constant::ErrorConstant::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.constant.ErrorConstant", 48);
    return c;
}

void org::apache::poi::ss::formula::constant::ErrorConstant::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ErrorConstant::class_()));
        NULL__ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::NULL_)->getCode());
        DIV_0_ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::DIV0)->getCode());
        VALUE_ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::VALUE)->getCode());
        REF_ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::REF)->getCode());
        NAME_ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::NAME)->getCode());
        NUM_ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::NUM)->getCode());
        NA_ = new ErrorConstant(npc(::org::apache::poi::ss::usermodel::FormulaError::NA)->getCode());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::constant::ErrorConstant::getClass0()
{
    return class_();
}

