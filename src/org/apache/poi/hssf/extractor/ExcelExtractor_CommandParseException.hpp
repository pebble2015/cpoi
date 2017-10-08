// Generated from /POI/java/org/apache/poi/hssf/extractor/ExcelExtractor.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/extractor/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class poi::hssf::extractor::ExcelExtractor_CommandParseException final
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;
protected:
    void ctor(::java::lang::String* msg);

    // Generated

public:
    ExcelExtractor_CommandParseException(::java::lang::String* msg);
protected:
    ExcelExtractor_CommandParseException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ExcelExtractor;
    friend class ExcelExtractor_CommandArgs;
};
