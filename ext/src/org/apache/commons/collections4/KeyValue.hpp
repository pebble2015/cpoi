// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::commons::collections4::KeyValue
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::Object* getKey() = 0;
    virtual ::java::lang::Object* getValue() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
