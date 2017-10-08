// Generated from /POI/java/org/apache/poi/ss/usermodel/FractionFormat.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/text/Format.hpp>

struct default_init_tag;

class poi::ss::usermodel::FractionFormat
    : public ::java::text::Format
{

public:
    typedef ::java::text::Format super;

private:
    static ::poi::util::POILogger* LOGGER_;
    static ::java::util::regex::Pattern* DENOM_FORMAT_PATTERN_;
    static constexpr int32_t MAX_DENOM_POW { int32_t(4) };
    int32_t exactDenom {  };
    int32_t maxDenom {  };
    ::java::lang::String* wholePartFormatString {  };
protected:
    void ctor(::java::lang::String* wholePartFormatString, ::java::lang::String* denomFormatString);

public:
    virtual ::java::lang::String* format(::java::lang::Number* num);
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
    ::java::lang::Object* parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos) override;

    // Generated
    FractionFormat(::java::lang::String* wholePartFormatString, ::java::lang::String* denomFormatString);
protected:
    FractionFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);

private:
    static ::poi::util::POILogger*& LOGGER();
    static ::java::util::regex::Pattern*& DENOM_FORMAT_PATTERN();
    virtual ::java::lang::Class* getClass0();
};
