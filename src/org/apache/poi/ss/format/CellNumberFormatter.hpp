// Generated from /POI/java/org/apache/poi/ss/format/CellNumberFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Iterable, ObjectArray > IterableArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Collection, ::java::lang::ObjectArray, ::java::lang::IterableArray > CollectionArray;
typedef ::SubArray< ::java::util::List, ::java::lang::ObjectArray, CollectionArray > ListArray;
    } // util
} // java

struct default_init_tag;

class org::apache::poi::ss::format::CellNumberFormatter
    : public CellFormatter
{

public:
    typedef CellFormatter super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    ::java::lang::String* desc {  };
    ::java::lang::String* printfFmt {  };
    double scale {  };
    CellNumberFormatter_Special* decimalPoint {  };
    CellNumberFormatter_Special* slash {  };
    CellNumberFormatter_Special* exponent {  };
    CellNumberFormatter_Special* numerator {  };
    CellNumberFormatter_Special* afterInteger {  };
    CellNumberFormatter_Special* afterFractional {  };
    bool showGroupingSeparator {  };
    ::java::util::List* specials {  };
    ::java::util::List* integerSpecials {  };
    ::java::util::List* fractionalSpecials {  };
    ::java::util::List* numeratorSpecials {  };
    ::java::util::List* denominatorSpecials {  };
    ::java::util::List* exponentSpecials {  };
    ::java::util::List* exponentDigitSpecials {  };
    int32_t maxDenominator {  };
    ::java::lang::String* numeratorFmt {  };
    ::java::lang::String* denominatorFmt {  };
    bool improperFraction {  };
    ::java::text::DecimalFormat* decimalFmt {  };
    CellFormatter* SIMPLE_NUMBER {  };
protected:
    void ctor(::java::lang::String* format);
    void ctor(::java::util::Locale* locale, ::java::lang::String* format);

private:
    ::java::text::DecimalFormatSymbols* getDecimalFormatSymbols();
    static void placeZeros(::java::lang::StringBuffer* sb, ::java::util::List* specials);
    static CellNumberStringMod* insertMod(CellNumberFormatter_Special* special, ::java::lang::CharSequence* toAdd, int32_t where);
    static CellNumberStringMod* deleteMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive);
    static CellNumberStringMod* replaceMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive, char16_t withChar);
    static ::java::lang::String* singleNumberFormat(::java::util::List* numSpecials);
    static int32_t maxValue(::java::util::List* s);
    ::java::util::List* specialsFor(int32_t pos, int32_t takeFirst);
    ::java::util::List* specialsFor(int32_t pos);
    static bool isDigitFmt(CellNumberFormatter_Special* s);
    int32_t calculateIntegerPartWidth();
    static int32_t interpretPrecision(CellNumberFormatter_Special* decimalPoint, ::java::util::List* specials);
    static bool interpretIntegerCommas(::java::lang::StringBuffer* sb, ::java::util::List* specials, CellNumberFormatter_Special* decimalPoint, int32_t integerEnd, int32_t fractionalEnd, ::doubleArray* scale);
    int32_t integerEnd();
    int32_t fractionalEnd();

public:
    void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* valueObject) override;

private:
    void writeScientific(double value, ::java::lang::StringBuffer* output, ::java::util::Set* mods);
    void writeFraction(double value, ::java::lang::StringBuffer* result, double fractional, ::java::lang::StringBuffer* output, ::java::util::Set* mods);
    ::java::lang::String* localiseFormat(::java::lang::String* format);
    static ::java::lang::String* replaceLast(::java::lang::String* text, ::java::lang::String* regex, ::java::lang::String* replacement);
    static bool hasChar(char16_t ch, ::java::util::ListArray*/*...*/ numSpecials);
    void writeSingleInteger(::java::lang::String* fmt, int32_t num, ::java::lang::StringBuffer* output, ::java::util::List* numSpecials, ::java::util::Set* mods);
    void writeInteger(::java::lang::StringBuffer* result, ::java::lang::StringBuffer* output, ::java::util::List* numSpecials, ::java::util::Set* mods, bool showGroupingSeparator);
    void writeFractional(::java::lang::StringBuffer* result, ::java::lang::StringBuffer* output);

public:
    void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;

private:
    static CellNumberFormatter_Special* lastSpecial(::java::util::List* s);

    // Generated

public:
    CellNumberFormatter(::java::lang::String* format);
    CellNumberFormatter(::java::util::Locale* locale, ::java::lang::String* format);
protected:
    CellNumberFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
    friend class CellNumberFormatter_GeneralNumberFormatter;
    friend class CellNumberFormatter_Special;
};
