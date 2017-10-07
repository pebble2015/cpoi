// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::text::DecimalFormat_DigitArrays
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::char16_tArray* DigitHundreds1000_;
    static ::char16_tArray* DigitOnes1000_;
    static ::char16_tArray* DigitTens1000_;

    /*void ctor(); (private) */

    // Generated

public:
    DecimalFormat_DigitArrays();
protected:
    DecimalFormat_DigitArrays(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::char16_tArray*& DigitHundreds1000();
    static ::char16_tArray*& DigitOnes1000();
    static ::char16_tArray*& DigitTens1000();

private:
    virtual ::java::lang::Class* getClass0();
};
