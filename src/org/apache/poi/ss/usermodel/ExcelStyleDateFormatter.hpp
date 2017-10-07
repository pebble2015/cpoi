// Generated from /POI/java/org/apache/poi/ss/usermodel/ExcelStyleDateFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/text/SimpleDateFormat.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::ExcelStyleDateFormatter
    : public ::java::text::SimpleDateFormat
{

public:
    typedef ::java::text::SimpleDateFormat super;
    static constexpr char16_t MMMMM_START_SYMBOL { u'\ue001' };
    static constexpr char16_t MMMMM_TRUNCATE_SYMBOL { u'\ue002' };
    static constexpr char16_t H_BRACKET_SYMBOL { u'\ue010' };
    static constexpr char16_t HH_BRACKET_SYMBOL { u'\ue011' };
    static constexpr char16_t M_BRACKET_SYMBOL { u'\ue012' };
    static constexpr char16_t MM_BRACKET_SYMBOL { u'\ue013' };
    static constexpr char16_t S_BRACKET_SYMBOL { u'\ue014' };
    static constexpr char16_t SS_BRACKET_SYMBOL { u'\ue015' };
    static constexpr char16_t L_BRACKET_SYMBOL { u'\ue016' };
    static constexpr char16_t LL_BRACKET_SYMBOL { u'\ue017' };

private:
    static ::java::text::DecimalFormat* format1digit_;
    static ::java::text::DecimalFormat* format2digits_;
    static ::java::text::DecimalFormat* format3digit_;
    static ::java::text::DecimalFormat* format4digits_;
    double dateToBeFormatted {  };
protected:
    void ctor(::java::lang::String* pattern);
    void ctor(::java::lang::String* pattern, ::java::text::DateFormatSymbols* formatSymbols);
    void ctor(::java::lang::String* pattern, ::java::util::Locale* locale);

private:
    static ::java::lang::String* processFormatPattern(::java::lang::String* f);

public:
    virtual void setDateToBeFormatted(double date);
    ::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* paramStringBuffer, ::java::text::FieldPosition* paramFieldPosition) override;
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;

    // Generated
    ExcelStyleDateFormatter(::java::lang::String* pattern);
    ExcelStyleDateFormatter(::java::lang::String* pattern, ::java::text::DateFormatSymbols* formatSymbols);
    ExcelStyleDateFormatter(::java::lang::String* pattern, ::java::util::Locale* locale);
protected:
    ExcelStyleDateFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    ::java::lang::String* format(::java::util::Date* date);
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* fieldPosition);
    ::java::lang::String* format(::java::lang::Object* obj);

private:
    static ::java::text::DecimalFormat*& format1digit();
    static ::java::text::DecimalFormat*& format2digits();
    static ::java::text::DecimalFormat*& format3digit();
    static ::java::text::DecimalFormat*& format4digits();
    virtual ::java::lang::Class* getClass0();
};
