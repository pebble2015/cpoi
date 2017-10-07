// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/security/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::SecureRandom_StrongPatternHolder final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::regex::Pattern* pattern_;

    /*void ctor(); (private) */

    // Generated

public:
    SecureRandom_StrongPatternHolder();
protected:
    SecureRandom_StrongPatternHolder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::regex::Pattern*& pattern();
    virtual ::java::lang::Class* getClass0();
};
