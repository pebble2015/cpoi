// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <sun/misc/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::math::BigInteger_UnsafeHolder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static int64_t magOffset_;
    static int64_t signumOffset_;
    static ::sun::misc::Unsafe* unsafe_;

    /*void ctor(); (private) */

public: /* package */
    static void putMag(BigInteger* bi, ::int32_tArray* magnitude);
    static void putSign(BigInteger* bi, int32_t sign);

    // Generated

public:
    BigInteger_UnsafeHolder();
protected:
    BigInteger_UnsafeHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static int64_t& magOffset();
    static int64_t& signumOffset();
    static ::sun::misc::Unsafe*& unsafe();
    virtual ::java::lang::Class* getClass0();
};
