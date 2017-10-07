// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Locale, ::java::lang::ObjectArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > LocaleArray;
    } // util
} // java

struct default_init_tag;

class java::text::DecimalFormatSymbols
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* NaN {  };
    ::java::util::Currency* currency {  };
    ::java::lang::String* currencySymbol {  };
    static constexpr int32_t currentSerialVersion { int32_t(3) };
    char16_t decimalSeparator {  };
    char16_t digit {  };
    char16_t exponential {  };
    ::java::lang::String* exponentialSeparator {  };
    char16_t groupingSeparator {  };
    ::java::lang::String* infinity {  };
    ::java::lang::String* intlCurrencySymbol {  };
    ::java::util::Locale* locale {  };
    char16_t minusSign {  };
    char16_t monetarySeparator {  };
    char16_t patternSeparator {  };
    char16_t perMill {  };
    char16_t percent {  };
    int32_t serialVersionOnStream {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(5772796243397350300LL) };

private:
    char16_t zeroDigit {  };

protected:
    void ctor();
    void ctor(::java::util::Locale* locale);

public:
    ::java::lang::Object* clone() override;
    bool equals(::java::lang::Object* obj) override;
    static ::java::util::LocaleArray* getAvailableLocales();
    virtual ::java::util::Currency* getCurrency();
    virtual ::java::lang::String* getCurrencySymbol();
    virtual char16_t getDecimalSeparator();
    virtual char16_t getDigit();
    virtual ::java::lang::String* getExponentSeparator();

public: /* package */
    virtual char16_t getExponentialSymbol();

public:
    virtual char16_t getGroupingSeparator();
    virtual ::java::lang::String* getInfinity();
    static DecimalFormatSymbols* getInstance();
    static DecimalFormatSymbols* getInstance(::java::util::Locale* locale);
    virtual ::java::lang::String* getInternationalCurrencySymbol();
    virtual char16_t getMinusSign();
    virtual char16_t getMonetaryDecimalSeparator();
    virtual ::java::lang::String* getNaN();
    virtual char16_t getPatternSeparator();
    virtual char16_t getPerMill();
    virtual char16_t getPercent();
    virtual char16_t getZeroDigit();
    int32_t hashCode() override;
    /*void initialize(::java::util::Locale* locale); (private) */
    /*void readObject(::java::io::ObjectInputStream* stream); (private) */
    virtual void setCurrency(::java::util::Currency* currency);
    virtual void setCurrencySymbol(::java::lang::String* currency);
    virtual void setDecimalSeparator(char16_t decimalSeparator);
    virtual void setDigit(char16_t digit);
    virtual void setExponentSeparator(::java::lang::String* exp);

public: /* package */
    virtual void setExponentialSymbol(char16_t exp);

public:
    virtual void setGroupingSeparator(char16_t groupingSeparator);
    virtual void setInfinity(::java::lang::String* infinity);
    virtual void setInternationalCurrencySymbol(::java::lang::String* currencyCode);
    virtual void setMinusSign(char16_t minusSign);
    virtual void setMonetaryDecimalSeparator(char16_t sep);
    virtual void setNaN(::java::lang::String* NaN);
    virtual void setPatternSeparator(char16_t patternSeparator);
    virtual void setPerMill(char16_t perMill);
    virtual void setPercent(char16_t percent);
    virtual void setZeroDigit(char16_t zeroDigit);

    // Generated
    DecimalFormatSymbols();
    DecimalFormatSymbols(::java::util::Locale* locale);
protected:
    DecimalFormatSymbols(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
