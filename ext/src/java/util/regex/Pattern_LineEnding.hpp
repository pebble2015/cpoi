// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_Node.hpp>

struct default_init_tag;

class java::util::regex::Pattern_LineEnding final
    : public Pattern_Node
{

public:
    typedef Pattern_Node super;

protected:
    void ctor();

public: /* package */
    bool match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
    bool study(Pattern_TreeInfo* info) override;

    // Generated
    Pattern_LineEnding();
protected:
    Pattern_LineEnding(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
