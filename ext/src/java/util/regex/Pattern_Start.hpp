// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/util/regex/Pattern_Node.hpp>

struct default_init_tag;

class java::util::regex::Pattern_Start
    : public Pattern_Node
{

public:
    typedef Pattern_Node super;

public: /* package */
    int32_t minLength {  };

protected:
    void ctor(Pattern_Node* node);

public: /* package */
    bool match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
    bool study(Pattern_TreeInfo* info) override;

    // Generated
    Pattern_Start(Pattern_Node* node);
protected:
    Pattern_Start(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
