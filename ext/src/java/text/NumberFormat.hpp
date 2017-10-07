// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/util/locale/provider/fwd-POI.hpp>
#include <java/text/Format.hpp>

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

class java::text::NumberFormat
    : public Format
{

public:
    typedef Format super;

private:
    static constexpr int32_t CURRENCYSTYLE { int32_t(1) };

public:
    static constexpr int32_t FRACTION_FIELD { int32_t(1) };

private:
    static constexpr int32_t INTEGERSTYLE { int32_t(4) };

public:
    static constexpr int32_t INTEGER_FIELD { int32_t(0) };

private:
    static constexpr int32_t NUMBERSTYLE { int32_t(0) };
    static constexpr int32_t PERCENTSTYLE { int32_t(2) };
    static constexpr int32_t SCIENTIFICSTYLE { int32_t(3) };

public: /* package */
    static constexpr int32_t currentSerialVersion { int32_t(1) };

private:
    bool groupingUsed {  };
    int8_t maxFractionDigits {  };
    int8_t maxIntegerDigits {  };
    int32_t maximumFractionDigits {  };
    int32_t maximumIntegerDigits {  };
    int8_t minFractionDigits {  };
    int8_t minIntegerDigits {  };
    int32_t minimumFractionDigits {  };
    int32_t minimumIntegerDigits {  };
    bool parseIntegerOnly {  };
    int32_t serialVersionOnStream {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-2308460125733713944LL) };

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    bool equals(::java::lang::Object* obj) override;

public: /* package */
    virtual ::java::lang::String* fastFormat(double number);

public:
    ::java::lang::String* format(double number);
    ::java::lang::String* format(int64_t number);
    ::java::lang::StringBuffer* format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos) override;
    virtual ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos) = 0;
    virtual ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos) = 0;
    static ::java::util::LocaleArray* getAvailableLocales();
    virtual ::java::util::Currency* getCurrency();
    static NumberFormat* getCurrencyInstance();
    static NumberFormat* getCurrencyInstance(::java::util::Locale* inLocale);
    static NumberFormat* getInstance();
    static NumberFormat* getInstance(::java::util::Locale* inLocale);
    /*static NumberFormat* getInstance(::java::util::Locale* desiredLocale, int32_t choice); (private) */
    /*static NumberFormat* getInstance(::sun::util::locale::provider::LocaleProviderAdapter* adapter, ::java::util::Locale* locale, int32_t choice); (private) */
    static NumberFormat* getIntegerInstance();
    static NumberFormat* getIntegerInstance(::java::util::Locale* inLocale);
    virtual int32_t getMaximumFractionDigits();
    virtual int32_t getMaximumIntegerDigits();
    virtual int32_t getMinimumFractionDigits();
    virtual int32_t getMinimumIntegerDigits();
    static NumberFormat* getNumberInstance();
    static NumberFormat* getNumberInstance(::java::util::Locale* inLocale);
    static NumberFormat* getPercentInstance();
    static NumberFormat* getPercentInstance(::java::util::Locale* inLocale);
    virtual ::java::math::RoundingMode* getRoundingMode();

public: /* package */
    static NumberFormat* getScientificInstance();
    static NumberFormat* getScientificInstance(::java::util::Locale* inLocale);

public:
    int32_t hashCode() override;
    virtual bool isGroupingUsed();
    virtual bool isParseIntegerOnly();
    virtual ::java::lang::Number* parse(::java::lang::String* source);
    virtual ::java::lang::Number* parse(::java::lang::String* source, ParsePosition* parsePosition) = 0;
    ::java::lang::Object* parseObject(::java::lang::String* source, ParsePosition* pos) override;
    /*void readObject(::java::io::ObjectInputStream* stream); (private) */
    virtual void setCurrency(::java::util::Currency* currency);
    virtual void setGroupingUsed(bool newValue);
    virtual void setMaximumFractionDigits(int32_t newValue);
    virtual void setMaximumIntegerDigits(int32_t newValue);
    virtual void setMinimumFractionDigits(int32_t newValue);
    virtual void setMinimumIntegerDigits(int32_t newValue);
    virtual void setParseIntegerOnly(bool value);
    virtual void setRoundingMode(::java::math::RoundingMode* roundingMode);
    /*void writeObject(::java::io::ObjectOutputStream* stream); (private) */

    // Generated

public: /* protected */
    NumberFormat();
protected:
    NumberFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);

private:
    virtual ::java::lang::Class* getClass0();
};
