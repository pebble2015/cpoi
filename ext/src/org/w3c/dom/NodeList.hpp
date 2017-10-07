// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::w3c::dom::NodeList
    : public virtual ::java::lang::Object
{

    virtual int32_t getLength() = 0;
    virtual Node* item(int32_t index) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
