// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_CharProperty.hpp>

struct default_init_tag;

class java::util::regex::Pattern_SingleS final
    : public Pattern_CharProperty
{

public:
    typedef Pattern_CharProperty super;

public: /* package */
    int32_t c {  };

protected:
    void ctor(int32_t c);

public: /* package */
    bool isSatisfiedBy(int32_t ch) override;

    // Generated
    Pattern_SingleS(int32_t c);
protected:
    Pattern_SingleS(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
