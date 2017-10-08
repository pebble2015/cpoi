// Generated from /POI/java/org/apache/poi/poifs/filesystem/OfficeXmlFileException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/UnsupportedFileFormatException.hpp>

struct default_init_tag;

class poi::poifs::filesystem::OfficeXmlFileException
    : public ::poi::UnsupportedFileFormatException
{

public:
    typedef ::poi::UnsupportedFileFormatException super;
protected:
    void ctor(::java::lang::String* s);

    // Generated

public:
    OfficeXmlFileException(::java::lang::String* s);
protected:
    OfficeXmlFileException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
