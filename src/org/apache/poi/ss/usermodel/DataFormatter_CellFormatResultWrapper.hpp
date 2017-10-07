// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/text/Format.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper final
    : public ::java::text::Format
{

public:
    typedef ::java::text::Format super;

private:
    ::org::apache::poi::ss::format::CellFormatResult* result {  };
protected:
    void ctor(::org::apache::poi::ss::format::CellFormatResult* result);

public:
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
    ::java::lang::Object* parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos) override;

    // Generated

private:
    DataFormatter_CellFormatResultWrapper(DataFormatter *DataFormatter_this, ::org::apache::poi::ss::format::CellFormatResult* result);
protected:
    DataFormatter_CellFormatResultWrapper(DataFormatter *DataFormatter_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);
    DataFormatter *DataFormatter_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataFormatter;
    friend class DataFormatter_LocaleChangeObservable;
    friend class DataFormatter_InternalDecimalFormatWithScale;
    friend class DataFormatter_SSNFormat;
    friend class DataFormatter_ZipPlusFourFormat;
    friend class DataFormatter_PhoneFormat;
    friend class DataFormatter_ConstantStringFormat;
};
