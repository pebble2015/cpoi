// Generated from /POI/java/org/apache/poi/ss/util/MutableFPNumber.java
#include <org/apache/poi/ss/util/MutableFPNumber_Rounder.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/math/BigInteger.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
    } // lang

    namespace math
    {
typedef ::SubArray< ::java::math::BigInteger, ::java::lang::NumberArray, ::java::lang::ComparableArray > BigIntegerArray;
    } // math
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::MutableFPNumber_Rounder::MutableFPNumber_Rounder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::MutableFPNumber_Rounder::MutableFPNumber_Rounder()
    : MutableFPNumber_Rounder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::math::BigIntegerArray*& poi::ss::util::MutableFPNumber_Rounder::HALF_BITS()
{
    clinit();
    return HALF_BITS_;
}
java::math::BigIntegerArray* poi::ss::util::MutableFPNumber_Rounder::HALF_BITS_;

java::math::BigInteger* poi::ss::util::MutableFPNumber_Rounder::round(::java::math::BigInteger* bi, int32_t nBits)
{
    clinit();
    if(nBits < 1) {
        return bi;
    }
    return npc(bi)->add((*HALF_BITS_)[nBits]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::MutableFPNumber_Rounder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.MutableFPNumber.Rounder", 46);
    return c;
}

void poi::ss::util::MutableFPNumber_Rounder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            auto bis = new ::java::math::BigIntegerArray(int32_t(33));
            int64_t acc = int32_t(1);
            for (auto i = int32_t(1); i < npc(bis)->length; i++) {
                bis->set(i, ::java::math::BigInteger::valueOf(acc));
                acc <<= 1;
            }
            HALF_BITS_ = bis;
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::MutableFPNumber_Rounder::getClass0()
{
    return class_();
}

