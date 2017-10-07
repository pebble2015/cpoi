// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::commons::collections4::Put
    : public virtual ::java::lang::Object
{

    virtual void clear() = 0;
    virtual ::java::lang::Object* put(::java::lang::Object* arg0, ::java::lang::Object* arg1) = 0;
    virtual void putAll(::java::util::Map* arg0) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
