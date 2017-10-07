// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_BmpCharProperty.hpp>

struct default_init_tag;

class java::util::regex::Pattern_BitClass final
    : public Pattern_BmpCharProperty
{

public:
    typedef Pattern_BmpCharProperty super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    ::boolArray* bits {  };

protected:
    void ctor();
    /*void ctor(::boolArray* bits); (private) */

public: /* package */
    Pattern_BitClass* add(int32_t c, int32_t flags);
    bool isSatisfiedBy(int32_t ch) override;

    // Generated
    Pattern_BitClass();
protected:
    Pattern_BitClass(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
