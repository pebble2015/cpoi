// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_CharProperty.hpp>

struct default_init_tag;

class java::util::regex::Pattern_BmpCharProperty
    : public Pattern_CharProperty
{

public:
    typedef Pattern_CharProperty super;

    /*void ctor(); (private) */

public: /* package */
    bool match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;

    // Generated

public:
    Pattern_BmpCharProperty();
protected:
    Pattern_BmpCharProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
