// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_BmpCharProperty.hpp>

struct default_init_tag;

class java::util::regex::Pattern_HorizWS final
    : public Pattern_BmpCharProperty
{

public:
    typedef Pattern_BmpCharProperty super;

protected:
    void ctor();

public: /* package */
    bool isSatisfiedBy(int32_t cp) override;

    // Generated
    Pattern_HorizWS();
protected:
    Pattern_HorizWS(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
