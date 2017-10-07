// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <java/util/Iterator.hpp>

struct org::apache::commons::collections4::OrderedIterator
    : public virtual ::java::util::Iterator
{

    virtual bool hasPrevious() = 0;
    virtual ::java::lang::Object* previous() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
