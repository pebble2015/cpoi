// Generated from /POI/java/org/apache/poi/ss/util/MutableFPNumber.java
#include <org/apache/poi/ss/util/MutableFPNumber_TenPower.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigInteger.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::MutableFPNumber_TenPower, ::java::lang::ObjectArray > MutableFPNumber_TenPowerArray;
                } // util
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

org::apache::poi::ss::util::MutableFPNumber_TenPower::MutableFPNumber_TenPower(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::MutableFPNumber_TenPower::MutableFPNumber_TenPower(int32_t index) 
    : MutableFPNumber_TenPower(*static_cast< ::default_init_tag* >(0))
{
    ctor(index);
}

java::math::BigInteger*& org::apache::poi::ss::util::MutableFPNumber_TenPower::FIVE()
{
    clinit();
    return FIVE_;
}
java::math::BigInteger* org::apache::poi::ss::util::MutableFPNumber_TenPower::FIVE_;

org::apache::poi::ss::util::MutableFPNumber_TenPowerArray*& org::apache::poi::ss::util::MutableFPNumber_TenPower::_cache()
{
    clinit();
    return _cache_;
}
org::apache::poi::ss::util::MutableFPNumber_TenPowerArray* org::apache::poi::ss::util::MutableFPNumber_TenPower::_cache_;

void org::apache::poi::ss::util::MutableFPNumber_TenPower::ctor(int32_t index)
{
    super::ctor();
    auto fivePowIndex = npc(FIVE_)->pow(index);
    auto bitsDueToFiveFactors = npc(fivePowIndex)->bitLength();
    auto px = int32_t(80) + bitsDueToFiveFactors;
    auto fx = npc(npc(::java::math::BigInteger::ONE())->shiftLeft(px))->divide(fivePowIndex);
    auto adj = npc(fx)->bitLength() - int32_t(80);
    _divisor = npc(fx)->shiftRight(adj);
    bitsDueToFiveFactors -= adj;
    _divisorShift = -(bitsDueToFiveFactors + index + int32_t(80));
    auto sc = npc(fivePowIndex)->bitLength() - int32_t(68);
    if(sc > 0) {
        _multiplierShift = index + sc;
        _multiplicand = npc(fivePowIndex)->shiftRight(sc);
    } else {
        _multiplierShift = index;
        _multiplicand = fivePowIndex;
    }
}

org::apache::poi::ss::util::MutableFPNumber_TenPower* org::apache::poi::ss::util::MutableFPNumber_TenPower::getInstance(int32_t index)
{
    clinit();
    auto result = (*_cache_)[index];
    if(result == nullptr) {
        result = new MutableFPNumber_TenPower(index);
        _cache_->set(index, result);
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::MutableFPNumber_TenPower::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.MutableFPNumber.TenPower", 47);
    return c;
}

void org::apache::poi::ss::util::MutableFPNumber_TenPower::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FIVE_ = new ::java::math::BigInteger(u"5"_j);
        _cache_ = new MutableFPNumber_TenPowerArray(int32_t(350));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::util::MutableFPNumber_TenPower::getClass0()
{
    return class_();
}

