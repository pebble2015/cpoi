// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/text/Format.hpp>

struct default_init_tag;

class poi::ss::usermodel::DataFormatter_ConstantStringFormat final
    : public ::java::text::Format
{

public:
    typedef ::java::text::Format super;

private:
    static ::java::text::DecimalFormat* df_;
    ::java::lang::String* str {  };
protected:
    void ctor(::java::lang::String* s);

public:
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
    ::java::lang::Object* parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos) override;

    // Generated
    DataFormatter_ConstantStringFormat(::java::lang::String* s);
protected:
    DataFormatter_ConstantStringFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);

private:
    static ::java::text::DecimalFormat*& df();
    virtual ::java::lang::Class* getClass0();
    friend class DataFormatter;
    friend class DataFormatter_LocaleChangeObservable;
    friend class DataFormatter_InternalDecimalFormatWithScale;
    friend class DataFormatter_SSNFormat;
    friend class DataFormatter_ZipPlusFourFormat;
    friend class DataFormatter_PhoneFormat;
    friend class DataFormatter_CellFormatResultWrapper;
};
