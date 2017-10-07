// Generated from /POI/java/org/apache/poi/UnsupportedFileFormatException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class org::apache::poi::UnsupportedFileFormatException
    : public ::java::lang::IllegalArgumentException
{

public:
    typedef ::java::lang::IllegalArgumentException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-8281969197282030046LL) };
protected:
    void ctor(::java::lang::String* s);

    // Generated

public:
    UnsupportedFileFormatException(::java::lang::String* s);
protected:
    UnsupportedFileFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
