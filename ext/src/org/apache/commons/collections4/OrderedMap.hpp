// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <org/apache/commons/collections4/IterableMap.hpp>
#include <org/apache/commons/collections4/OrderedMapIterator.hpp>

struct org::apache::commons::collections4::OrderedMap
    : public virtual IterableMap
{

    virtual ::java::lang::Object* firstKey() = 0;
    virtual ::java::lang::Object* lastKey() = 0;
    OrderedMapIterator* mapIterator() = 0;
    virtual ::java::lang::Object* nextKey(::java::lang::Object* arg0) = 0;
    virtual ::java::lang::Object* previousKey(::java::lang::Object* arg0) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
