// Generated from /POI/java/org/apache/poi/hssf/OldExcelFormatException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/fwd-POI.hpp>
#include <org/apache/poi/OldFileFormatException.hpp>

struct default_init_tag;

class poi::hssf::OldExcelFormatException
    : public ::poi::OldFileFormatException
{

public:
    typedef ::poi::OldFileFormatException super;
protected:
    void ctor(::java::lang::String* s);

    // Generated

public:
    OldExcelFormatException(::java::lang::String* s);
protected:
    OldExcelFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
