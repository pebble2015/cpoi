// Generated from /POI/java/org/apache/poi/ss/usermodel/ExcelGeneralNumberFormat.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/text/Format.hpp>

struct default_init_tag;

class poi::ss::usermodel::ExcelGeneralNumberFormat
    : public ::java::text::Format
{

public:
    typedef ::java::text::Format super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };
    static ::java::math::MathContext* TO_10_SF_;
    ::java::text::DecimalFormatSymbols* decimalSymbols {  };
    ::java::text::DecimalFormat* integerFormat {  };
    ::java::text::DecimalFormat* decimalFormat {  };
    ::java::text::DecimalFormat* scientificFormat {  };
protected:
    void ctor(::java::util::Locale* locale);

public:
    ::java::lang::StringBuffer* format(::java::lang::Object* number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
    ::java::lang::Object* parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos) override;

    // Generated
    ExcelGeneralNumberFormat(::java::util::Locale* locale);
protected:
    ExcelGeneralNumberFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);

private:
    static ::java::math::MathContext*& TO_10_SF();
    virtual ::java::lang::Class* getClass0();
};
