// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/time/temporal/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Formatter_FormatString.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::Formatter_Flags, ::java::lang::ObjectArray > Formatter_FlagsArray;
    } // util
} // java

struct default_init_tag;

class java::util::Formatter_FormatSpecifier
    : public virtual ::java::lang::Object
    , public virtual Formatter_FormatString
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    char16_t c {  };
    bool dt {  };
    Formatter_Flags* f {  };
    int32_t index_ {  };
    int32_t precision_ {  };

public: /* package */
    Formatter* this$0 {  };

private:
    int32_t width_ {  };

protected:
    void ctor(::java::util::regex::Matcher* m);
    /*::char16_tArray* addDot(::char16_tArray* mant); (private) */
    /*::char16_tArray* addZeros(::char16_tArray* v, int32_t prec); (private) */
    /*int32_t adjustWidth(int32_t width, Formatter_Flags* f, bool neg); (private) */
    /*void checkBadFlags(Formatter_FlagsArray* badFlags); (private) */
    /*void checkCharacter(); (private) */
    /*void checkDateTime(); (private) */
    /*void checkFloat(); (private) */
    /*void checkGeneral(); (private) */
    /*void checkInteger(); (private) */
    /*void checkNumeric(); (private) */
    /*void checkText(); (private) */
    /*char16_t conversion(); (private) */
    /*char16_t conversion(::java::lang::String* s); (private) */
    /*void failConversion(char16_t c, ::java::lang::Object* arg); (private) */
    /*void failMismatch(Formatter_Flags* f, char16_t c); (private) */

public: /* package */
    virtual Formatter_Flags* flags();
    /*Formatter_Flags* flags(::java::lang::String* s); (private) */
    /*char16_t getZero(Locale* l); (private) */
    /*::java::lang::String* hexDouble(double d, int32_t prec); (private) */

public:
    int32_t index() override;
    /*int32_t index(::java::lang::String* s); (private) */
    /*::java::lang::String* justify(::java::lang::String* s); (private) */
    /*::java::lang::StringBuilder* leadingSign(::java::lang::StringBuilder* sb, bool neg); (private) */
    /*::java::lang::StringBuilder* localizedMagnitude(::java::lang::StringBuilder* sb, int64_t value, Formatter_Flags* f, int32_t width, Locale* l); (private) */
    /*::java::lang::StringBuilder* localizedMagnitude(::java::lang::StringBuilder* sb, ::char16_tArray* value, Formatter_Flags* f, int32_t width, Locale* l); (private) */

public: /* package */
    virtual int32_t precision();
    /*int32_t precision(::java::lang::String* s); (private) */
    /*void print(::java::lang::String* s); (private) */

public:
    void print(::java::lang::Object* arg, Locale* l) override;
    /*void print(int8_t value, Locale* l); (private) */
    /*void print(int16_t value, Locale* l); (private) */
    /*void print(int32_t value, Locale* l); (private) */
    /*void print(int64_t value, Locale* l); (private) */
    /*void print(::java::math::BigInteger* value, Locale* l); (private) */
    /*void print(float value, Locale* l); (private) */
    /*void print(double value, Locale* l); (private) */
    /*void print(::java::math::BigDecimal* value, Locale* l); (private) */
    /*void print(Calendar* t, char16_t c, Locale* l); (private) */
    /*void print(::java::time::temporal::TemporalAccessor* t, char16_t c, Locale* l); (private) */
    /*::java::lang::Appendable* print(::java::lang::StringBuilder* sb, Calendar* t, char16_t c, Locale* l); (private) */
    /*::java::lang::Appendable* print(::java::lang::StringBuilder* sb, ::java::time::temporal::TemporalAccessor* t, char16_t c, Locale* l); (private) */
    /*void print(::java::lang::StringBuilder* sb, double value, Locale* l, Formatter_Flags* f, char16_t c, int32_t precision, bool neg); (private) */
    /*void print(::java::lang::StringBuilder* sb, ::java::math::BigDecimal* value, Locale* l, Formatter_Flags* f, char16_t c, int32_t precision, bool neg); (private) */
    /*void printBoolean(::java::lang::Object* arg); (private) */
    /*void printCharacter(::java::lang::Object* arg); (private) */
    /*void printDateTime(::java::lang::Object* arg, Locale* l); (private) */
    /*void printFloat(::java::lang::Object* arg, Locale* l); (private) */
    /*void printHashCode(::java::lang::Object* arg); (private) */
    /*void printInteger(::java::lang::Object* arg, Locale* l); (private) */
    /*void printString(::java::lang::Object* arg, Locale* l); (private) */
    ::java::lang::String* toString() override;
    /*::java::lang::StringBuilder* trailingSign(::java::lang::StringBuilder* sb, bool neg); (private) */
    /*::char16_tArray* trailingZeros(::char16_tArray* mant, int32_t nzeros); (private) */

public: /* package */
    virtual int32_t width();
    /*int32_t width(::java::lang::String* s); (private) */

    // Generated
    Formatter_FormatSpecifier(Formatter *Formatter_this, ::java::util::regex::Matcher* m);
protected:
    Formatter_FormatSpecifier(Formatter *Formatter_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Formatter *Formatter_this;

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
