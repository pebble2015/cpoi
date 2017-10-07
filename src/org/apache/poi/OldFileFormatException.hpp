// Generated from /POI/java/org/apache/poi/OldFileFormatException.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <org/apache/poi/UnsupportedFileFormatException.hpp>

struct default_init_tag;

class org::apache::poi::OldFileFormatException
    : public UnsupportedFileFormatException
{

public:
    typedef UnsupportedFileFormatException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(7849681804154571175LL) };
protected:
    void ctor(::java::lang::String* s);

    // Generated

public:
    OldFileFormatException(::java::lang::String* s);
protected:
    OldFileFormatException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
