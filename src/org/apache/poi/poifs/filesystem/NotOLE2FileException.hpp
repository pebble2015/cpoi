// Generated from /POI/java/org/apache/poi/poifs/filesystem/NotOLE2FileException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class poi::poifs::filesystem::NotOLE2FileException
    : public ::java::io::IOException
{

public:
    typedef ::java::io::IOException super;
protected:
    void ctor(::java::lang::String* s);

    // Generated

public:
    NotOLE2FileException(::java::lang::String* s);
protected:
    NotOLE2FileException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
