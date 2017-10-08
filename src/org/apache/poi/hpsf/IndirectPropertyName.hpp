// Generated from /POI/java/org/apache/poi/hpsf/IndirectPropertyName.java

#pragma once

#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/CodePageString.hpp>

struct default_init_tag;

class poi::hpsf::IndirectPropertyName
    : public CodePageString
{

public:
    typedef CodePageString super;
protected:
    void ctor();

    // Generated

public: /* package */
    IndirectPropertyName();
protected:
    IndirectPropertyName(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
