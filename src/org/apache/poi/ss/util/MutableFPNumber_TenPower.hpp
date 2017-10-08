// Generated from /POI/java/org/apache/poi/ss/util/MutableFPNumber.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::MutableFPNumber_TenPower, ::java::lang::ObjectArray > MutableFPNumber_TenPowerArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::ss::util::MutableFPNumber_TenPower final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::math::BigInteger* FIVE_;
    static MutableFPNumber_TenPowerArray* _cache_;

public:
    ::java::math::BigInteger* _multiplicand {  };
    ::java::math::BigInteger* _divisor {  };
    int32_t _divisorShift {  };
    int32_t _multiplierShift {  };
protected:
    void ctor(int32_t index);

public: /* package */
    static MutableFPNumber_TenPower* getInstance(int32_t index);

    // Generated

private:
    MutableFPNumber_TenPower(int32_t index);
protected:
    MutableFPNumber_TenPower(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::math::BigInteger*& FIVE();
    static MutableFPNumber_TenPowerArray*& _cache();
    virtual ::java::lang::Class* getClass0();
    friend class MutableFPNumber;
    friend class MutableFPNumber_Rounder;
};
