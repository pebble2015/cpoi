// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Formatter_DateTime
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr char16_t AM_PM { u'p' };
    static constexpr char16_t CENTURY { u'C' };
    static constexpr char16_t DATE { u'D' };
    static constexpr char16_t DATE_TIME { u'c' };
    static constexpr char16_t DAY_OF_MONTH { u'e' };
    static constexpr char16_t DAY_OF_MONTH_0 { u'd' };
    static constexpr char16_t DAY_OF_YEAR { u'j' };
    static constexpr char16_t HOUR { u'l' };
    static constexpr char16_t HOUR_0 { u'I' };
    static constexpr char16_t HOUR_OF_DAY { u'k' };
    static constexpr char16_t HOUR_OF_DAY_0 { u'H' };
    static constexpr char16_t ISO_STANDARD_DATE { u'F' };
    static constexpr char16_t MILLISECOND { u'L' };
    static constexpr char16_t MILLISECOND_SINCE_EPOCH { u'Q' };
    static constexpr char16_t MINUTE { u'M' };
    static constexpr char16_t MONTH { u'm' };
    static constexpr char16_t NAME_OF_DAY { u'A' };
    static constexpr char16_t NAME_OF_DAY_ABBREV { u'a' };
    static constexpr char16_t NAME_OF_MONTH { u'B' };
    static constexpr char16_t NAME_OF_MONTH_ABBREV { u'b' };
    static constexpr char16_t NAME_OF_MONTH_ABBREV_X { u'h' };
    static constexpr char16_t NANOSECOND { u'N' };
    static constexpr char16_t SECOND { u'S' };
    static constexpr char16_t SECONDS_SINCE_EPOCH { u's' };
    static constexpr char16_t TIME { u'T' };
    static constexpr char16_t TIME_12_HOUR { u'r' };
    static constexpr char16_t TIME_24_HOUR { u'R' };
    static constexpr char16_t YEAR_2 { u'y' };
    static constexpr char16_t YEAR_4 { u'Y' };
    static constexpr char16_t ZONE { u'Z' };
    static constexpr char16_t ZONE_NUMERIC { u'z' };

    /*void ctor(); (private) */
    static bool isValid(char16_t c);

    // Generated

public:
    Formatter_DateTime();
protected:
    Formatter_DateTime(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
