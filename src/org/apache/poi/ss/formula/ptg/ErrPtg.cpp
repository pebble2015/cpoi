// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ErrPtg.java
#include <org/apache/poi/ss/formula/ptg/ErrPtg.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::ErrPtg::ErrPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::ErrPtg::ErrPtg(int32_t errorCode) 
    : ErrPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCode);
}

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::NULL_INTERSECTION()
{
    clinit();
    return NULL_INTERSECTION_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::NULL_INTERSECTION_;

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::DIV_ZERO()
{
    clinit();
    return DIV_ZERO_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::DIV_ZERO_;

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::VALUE_INVALID()
{
    clinit();
    return VALUE_INVALID_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::VALUE_INVALID_;

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::REF_INVALID()
{
    clinit();
    return REF_INVALID_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::REF_INVALID_;

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::NAME_INVALID()
{
    clinit();
    return NAME_INVALID_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::NAME_INVALID_;

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::NUM_ERROR()
{
    clinit();
    return NUM_ERROR_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::NUM_ERROR_;

poi::ss::formula::ptg::ErrPtg*& poi::ss::formula::ptg::ErrPtg::N_A()
{
    clinit();
    return N_A_;
}
poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::N_A_;

constexpr int16_t poi::ss::formula::ptg::ErrPtg::sid;

constexpr int32_t poi::ss::formula::ptg::ErrPtg::SIZE;

void poi::ss::formula::ptg::ErrPtg::ctor(int32_t errorCode)
{
    super::ctor();
    if(!::poi::ss::usermodel::FormulaError::isValidCode(errorCode)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid error code ("_j)->append(errorCode)
            ->append(u")"_j)->toString());
    }
    field_1_error_code = errorCode;
}

poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::read(::poi::util::LittleEndianInput* in)
{
    clinit();
    return valueOf(npc(in)->readByte());
}

void poi::ss::formula::ptg::ErrPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeByte(field_1_error_code);
}

java::lang::String* poi::ss::formula::ptg::ErrPtg::toFormulaString()
{
    return npc(::poi::ss::usermodel::FormulaError::forInt(field_1_error_code))->getString();
}

int32_t poi::ss::formula::ptg::ErrPtg::getSize()
{
    return SIZE;
}

int32_t poi::ss::formula::ptg::ErrPtg::getErrorCode()
{
    return field_1_error_code;
}

poi::ss::formula::ptg::ErrPtg* poi::ss::formula::ptg::ErrPtg::valueOf(int32_t code)
{
    clinit();
    {
        auto v = ::poi::ss::usermodel::FormulaError::forInt(code);
        if((v == ::poi::ss::usermodel::FormulaError::DIV0)) {
            return DIV_ZERO_;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NA)) {
            return N_A_;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NAME)) {
            return NAME_INVALID_;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NULL_)) {
            return NULL_INTERSECTION_;
        }
        if((v == ::poi::ss::usermodel::FormulaError::NUM)) {
            return NUM_ERROR_;
        }
        if((v == ::poi::ss::usermodel::FormulaError::REF)) {
            return REF_INVALID_;
        }
        if((v == ::poi::ss::usermodel::FormulaError::VALUE)) {
            return VALUE_INVALID_;
        }
        if((((v != ::poi::ss::usermodel::FormulaError::DIV0) && (v != ::poi::ss::usermodel::FormulaError::NA) && (v != ::poi::ss::usermodel::FormulaError::NAME) && (v != ::poi::ss::usermodel::FormulaError::NULL_) && (v != ::poi::ss::usermodel::FormulaError::NUM) && (v != ::poi::ss::usermodel::FormulaError::REF) && (v != ::poi::ss::usermodel::FormulaError::VALUE)))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected error code ("_j)->append(code)
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::ErrPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ErrPtg", 36);
    return c;
}

void poi::ss::formula::ptg::ErrPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NULL_INTERSECTION_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::NULL_)->getCode());
        DIV_ZERO_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::DIV0)->getCode());
        VALUE_INVALID_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::VALUE)->getCode());
        REF_INVALID_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::REF)->getCode());
        NAME_INVALID_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::NAME)->getCode());
        NUM_ERROR_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::NUM)->getCode());
        N_A_ = new ErrPtg(npc(::poi::ss::usermodel::FormulaError::NA)->getCode());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::ptg::ErrPtg::getClass0()
{
    return class_();
}

