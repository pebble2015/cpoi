// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractMap.hpp>

struct default_init_tag;

class java::text::AttributedString_AttributeMap final
    : public ::java::util::AbstractMap
{

public:
    typedef ::java::util::AbstractMap super;

public: /* package */
    int32_t beginIndex {  };
    int32_t endIndex {  };
    int32_t runIndex {  };
    AttributedString* this$0 {  };

protected:
    void ctor(int32_t runIndex, int32_t beginIndex, int32_t endIndex);

public:
    ::java::util::Set* entrySet() override;
    ::java::lang::Object* get(::java::lang::Object* key) override;

    // Generated

public: /* package */
    AttributedString_AttributeMap(AttributedString *AttributedString_this, int32_t runIndex, int32_t beginIndex, int32_t endIndex);
protected:
    AttributedString_AttributeMap(AttributedString *AttributedString_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    AttributedString *AttributedString_this;

private:
    virtual ::java::lang::Class* getClass0();
};
