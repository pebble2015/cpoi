// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <org/apache/commons/collections4/IterableMap.hpp>
#include <java/util/Set.hpp>

struct org::apache::commons::collections4::BidiMap
    : public virtual IterableMap
{

    virtual ::java::lang::Object* getKey(::java::lang::Object* arg0) = 0;
    virtual BidiMap* inverseBidiMap() = 0;
    /*::java::lang::Object* put(::java::lang::Object* arg0, ::java::lang::Object* arg1); (already declared) */
    virtual ::java::lang::Object* removeValue(::java::lang::Object* arg0) = 0;
    ::java::util::Set* values() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
