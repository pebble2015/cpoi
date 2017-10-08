// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_CompareResult.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::LookupUtils_CompareResult::LookupUtils_CompareResult(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_CompareResult::LookupUtils_CompareResult(bool isTypeMismatch, int32_t simpleCompareResult) 
    : LookupUtils_CompareResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(isTypeMismatch,simpleCompareResult);
}

void poi::ss::formula::functions::LookupUtils_CompareResult::ctor(bool isTypeMismatch, int32_t simpleCompareResult)
{
    super::ctor();
    if(isTypeMismatch) {
        _isTypeMismatch = true;
        _isLessThan = false;
        _isEqual = false;
        _isGreaterThan = false;
    } else {
        _isTypeMismatch = false;
        _isLessThan = simpleCompareResult < 0;
        _isEqual = simpleCompareResult == 0;
        _isGreaterThan = simpleCompareResult > 0;
    }
}

poi::ss::formula::functions::LookupUtils_CompareResult*& poi::ss::formula::functions::LookupUtils_CompareResult::TYPE_MISMATCH()
{
    clinit();
    return TYPE_MISMATCH_;
}
poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_CompareResult::TYPE_MISMATCH_;

poi::ss::formula::functions::LookupUtils_CompareResult*& poi::ss::formula::functions::LookupUtils_CompareResult::LESS_THAN()
{
    clinit();
    return LESS_THAN_;
}
poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_CompareResult::LESS_THAN_;

poi::ss::formula::functions::LookupUtils_CompareResult*& poi::ss::formula::functions::LookupUtils_CompareResult::EQUAL()
{
    clinit();
    return EQUAL_;
}
poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_CompareResult::EQUAL_;

poi::ss::formula::functions::LookupUtils_CompareResult*& poi::ss::formula::functions::LookupUtils_CompareResult::GREATER_THAN()
{
    clinit();
    return GREATER_THAN_;
}
poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_CompareResult::GREATER_THAN_;

poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_CompareResult::valueOf(int32_t simpleCompareResult)
{
    clinit();
    if(simpleCompareResult < 0) {
        return LESS_THAN_;
    }
    if(simpleCompareResult > 0) {
        return GREATER_THAN_;
    }
    return EQUAL_;
}

poi::ss::formula::functions::LookupUtils_CompareResult* poi::ss::formula::functions::LookupUtils_CompareResult::valueOf(bool matches)
{
    clinit();
    if(matches) {
        return EQUAL_;
    }
    return LESS_THAN_;
}

bool poi::ss::formula::functions::LookupUtils_CompareResult::isTypeMismatch()
{
    return _isTypeMismatch;
}

bool poi::ss::formula::functions::LookupUtils_CompareResult::isLessThan()
{
    return _isLessThan;
}

bool poi::ss::formula::functions::LookupUtils_CompareResult::isEqual()
{
    return _isEqual;
}

bool poi::ss::formula::functions::LookupUtils_CompareResult::isGreaterThan()
{
    return _isGreaterThan;
}

java::lang::String* poi::ss::formula::functions::LookupUtils_CompareResult::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(formatAsString())
        ->append(u"]"_j)->toString();
}

java::lang::String* poi::ss::formula::functions::LookupUtils_CompareResult::formatAsString()
{
    if(_isTypeMismatch) {
        return u"TYPE_MISMATCH"_j;
    }
    if(_isLessThan) {
        return u"LESS_THAN"_j;
    }
    if(_isEqual) {
        return u"EQUAL"_j;
    }
    if(_isGreaterThan) {
        return u"GREATER_THAN"_j;
    }
    return u"??error??"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_CompareResult::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.CompareResult", 61);
    return c;
}

void poi::ss::formula::functions::LookupUtils_CompareResult::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TYPE_MISMATCH_ = new LookupUtils_CompareResult(true, int32_t(0));
        LESS_THAN_ = new LookupUtils_CompareResult(false, -int32_t(1));
        EQUAL_ = new LookupUtils_CompareResult(false, int32_t(0));
        GREATER_THAN_ = new LookupUtils_CompareResult(false, +int32_t(1));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_CompareResult::getClass0()
{
    return class_();
}

