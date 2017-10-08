// Generated from /POI/java/org/apache/poi/ss/util/DateFormatConverter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::DateFormatConverter
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* logger_;
    static ::java::util::Map* tokenConversions_;
    static ::java::util::Map* localePrefixes_;
    static ::java::util::Map* prepareTokenConversions();
    static ::java::util::Map* prepareLocalePrefixes();

public:
    static ::java::lang::String* getPrefixForLocale(::java::util::Locale* locale);
    static ::java::lang::String* convert(::java::util::Locale* locale, ::java::text::DateFormat* df);
    static ::java::lang::String* convert(::java::util::Locale* locale, ::java::lang::String* format);
    static ::java::lang::String* getJavaDatePattern(int32_t style, ::java::util::Locale* locale);
    static ::java::lang::String* getJavaTimePattern(int32_t style, ::java::util::Locale* locale);
    static ::java::lang::String* getJavaDateTimePattern(int32_t style, ::java::util::Locale* locale);

    // Generated
    DateFormatConverter();
protected:
    DateFormatConverter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& logger();
    static ::java::util::Map*& tokenConversions();
    static ::java::util::Map*& localePrefixes();
    virtual ::java::lang::Class* getClass0();
    friend class DateFormatConverter_DateFormatTokenizer;
};
