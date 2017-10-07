// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParseException.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::FormulaParseException final
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;
protected:
    void ctor(::java::lang::String* msg);

    // Generated

public: /* package */
    FormulaParseException(::java::lang::String* msg);
protected:
    FormulaParseException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
