// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_SliceNode.hpp>

struct default_init_tag;

class java::util::regex::Pattern_SliceU final
    : public Pattern_SliceNode
{

public:
    typedef Pattern_SliceNode super;

protected:
    void ctor(::int32_tArray* buf);

public: /* package */
    bool match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;

    // Generated
    Pattern_SliceU(::int32_tArray* buf);
protected:
    Pattern_SliceU(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
