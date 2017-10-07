// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Formatter_Conversion
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr char16_t BOOLEAN { u'b' };
    static constexpr char16_t BOOLEAN_UPPER { u'B' };
    static constexpr char16_t CHARACTER { u'c' };
    static constexpr char16_t CHARACTER_UPPER { u'C' };
    static constexpr char16_t DATE_TIME { u't' };
    static constexpr char16_t DATE_TIME_UPPER { u'T' };
    static constexpr char16_t DECIMAL_FLOAT { u'f' };
    static constexpr char16_t DECIMAL_INTEGER { u'd' };
    static constexpr char16_t GENERAL { u'g' };
    static constexpr char16_t GENERAL_UPPER { u'G' };
    static constexpr char16_t HASHCODE { u'h' };
    static constexpr char16_t HASHCODE_UPPER { u'H' };
    static constexpr char16_t HEXADECIMAL_FLOAT { u'a' };
    static constexpr char16_t HEXADECIMAL_FLOAT_UPPER { u'A' };
    static constexpr char16_t HEXADECIMAL_INTEGER { u'x' };
    static constexpr char16_t HEXADECIMAL_INTEGER_UPPER { u'X' };
    static constexpr char16_t LINE_SEPARATOR { u'n' };
    static constexpr char16_t OCTAL_INTEGER { u'o' };
    static constexpr char16_t PERCENT_SIGN { u'%' };
    static constexpr char16_t SCIENTIFIC { u'e' };
    static constexpr char16_t SCIENTIFIC_UPPER { u'E' };
    static constexpr char16_t STRING { u's' };
    static constexpr char16_t STRING_UPPER { u'S' };

    /*void ctor(); (private) */
    static bool isCharacter(char16_t c);
    static bool isFloat(char16_t c);
    static bool isGeneral(char16_t c);
    static bool isInteger(char16_t c);
    static bool isText(char16_t c);
    static bool isValid(char16_t c);

    // Generated

public:
    Formatter_Conversion();
protected:
    Formatter_Conversion(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
