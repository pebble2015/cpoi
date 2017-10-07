// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Formatter_FormatSpecifier_BigDecimalLayout
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool dot {  };
    ::java::lang::StringBuilder* exp {  };
    ::java::lang::StringBuilder* mant {  };
    int32_t scale_ {  };

public: /* package */
    Formatter_FormatSpecifier* this$1 {  };

protected:
    void ctor(::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form);

public:
    virtual ::char16_tArray* exponent();
    virtual bool hasDot();
    /*void layout(::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form); (private) */
    virtual ::char16_tArray* layoutChars();
    virtual ::char16_tArray* mantissa();
    virtual int32_t scale();
    /*::char16_tArray* toCharArray_(::java::lang::StringBuilder* sb); (private) */

    // Generated
    Formatter_FormatSpecifier_BigDecimalLayout(Formatter_FormatSpecifier *Formatter_FormatSpecifier_this, ::java::math::BigInteger* intVal, int32_t scale, Formatter_BigDecimalLayoutForm* form);
protected:
    Formatter_FormatSpecifier_BigDecimalLayout(Formatter_FormatSpecifier *Formatter_FormatSpecifier_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Formatter_FormatSpecifier *Formatter_FormatSpecifier_this;

private:
    virtual ::java::lang::Class* getClass0();
};
