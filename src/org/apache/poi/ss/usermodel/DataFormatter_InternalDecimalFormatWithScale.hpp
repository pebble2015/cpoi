// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/text/Format.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DataFormatter_InternalDecimalFormatWithScale
    : public ::java::text::Format
{

public:
    typedef ::java::text::Format super;

private:
    static ::java::util::regex::Pattern* endsWithCommas_;
    ::java::math::BigDecimal* divider {  };
    static ::java::math::BigDecimal* ONE_THOUSAND_;
    ::java::text::DecimalFormat* df {  };
    static ::java::lang::String* trimTrailingCommas(::java::lang::String* s);
protected:
    void ctor(::java::lang::String* pattern, ::java::text::DecimalFormatSymbols* symbols);

private:
    ::java::lang::Object* scaleInput(::java::lang::Object* obj);

public:
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
    ::java::lang::Object* parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos) override;

    // Generated
    DataFormatter_InternalDecimalFormatWithScale(::java::lang::String* pattern, ::java::text::DecimalFormatSymbols* symbols);
protected:
    DataFormatter_InternalDecimalFormatWithScale(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);

private:
    static ::java::util::regex::Pattern*& endsWithCommas();
    static ::java::math::BigDecimal*& ONE_THOUSAND();
    virtual ::java::lang::Class* getClass0();
    friend class DataFormatter;
    friend class DataFormatter_LocaleChangeObservable;
    friend class DataFormatter_SSNFormat;
    friend class DataFormatter_ZipPlusFourFormat;
    friend class DataFormatter_PhoneFormat;
    friend class DataFormatter_ConstantStringFormat;
    friend class DataFormatter_CellFormatResultWrapper;
};
