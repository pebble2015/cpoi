// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSViewEngine.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/dev/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::dev::POIFSViewEngine
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* _EOL_;

public:
    static ::java::util::List* inspectViewable(::java::lang::Object* viewable, bool drilldown, int32_t indentLevel, ::java::lang::String* indentString);

private:
    static ::java::lang::String* indent(int32_t indentLevel, ::java::lang::String* indentString, ::java::lang::String* data);

    // Generated

public:
    POIFSViewEngine();
protected:
    POIFSViewEngine(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& _EOL();
    virtual ::java::lang::Class* getClass0();
};
