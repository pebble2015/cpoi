// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_Node.hpp>

struct default_init_tag;

class java::util::regex::Pattern_CIBackRef
    : public Pattern_Node
{

public:
    typedef Pattern_Node super;

public: /* package */
    bool doUnicodeCase {  };
    int32_t groupIndex {  };

protected:
    void ctor(int32_t groupCount, bool doUnicodeCase);

public: /* package */
    bool match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
    bool study(Pattern_TreeInfo* info) override;

    // Generated
    Pattern_CIBackRef(int32_t groupCount, bool doUnicodeCase);
protected:
    Pattern_CIBackRef(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
