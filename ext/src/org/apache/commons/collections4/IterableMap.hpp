// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <java/util/Map.hpp>
#include <org/apache/commons/collections4/Put.hpp>
#include <org/apache/commons/collections4/IterableGet.hpp>
#include <java/lang/Object.hpp>

struct org::apache::commons::collections4::IterableMap
    : public virtual ::java::util::Map
    , public virtual Put
    , public virtual IterableGet
{


    // Generated
    static ::java::lang::Class *class_();
    virtual void clear() = 0;
    virtual ::java::lang::Object* put(::java::lang::Object* arg0, ::java::lang::Object* arg1) = 0;
    virtual void putAll(::java::util::Map* arg0) = 0;
};
