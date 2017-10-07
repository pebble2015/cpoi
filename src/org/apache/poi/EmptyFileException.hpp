// Generated from /POI/java/org/apache/poi/EmptyFileException.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <java/lang/IllegalArgumentException.hpp>

struct default_init_tag;

class org::apache::poi::EmptyFileException
    : public ::java::lang::IllegalArgumentException
{

public:
    typedef ::java::lang::IllegalArgumentException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(1536449292174360166LL) };
protected:
    void ctor();

    // Generated

public:
    EmptyFileException();
protected:
    EmptyFileException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
