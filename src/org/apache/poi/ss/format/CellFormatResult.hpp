// Generated from /POI/java/org/apache/poi/ss/format/CellFormatResult.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellFormatResult
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    bool applies {  };
    ::java::lang::String* text {  };
    ::java::awt::Color* textColor {  };
protected:
    void ctor(bool applies, ::java::lang::String* text, ::java::awt::Color* textColor) /* throws(IllegalArgumentException) */;

    // Generated

public:
    CellFormatResult(bool applies, ::java::lang::String* text, ::java::awt::Color* textColor);
protected:
    CellFormatResult(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
