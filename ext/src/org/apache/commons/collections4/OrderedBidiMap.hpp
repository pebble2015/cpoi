// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <org/apache/commons/collections4/BidiMap.hpp>
#include <org/apache/commons/collections4/OrderedMap.hpp>

struct org::apache::commons::collections4::OrderedBidiMap
    : public virtual BidiMap
    , public virtual OrderedMap
{

    OrderedBidiMap* inverseBidiMap() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
