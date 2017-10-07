// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <java/util/Iterator.hpp>

struct org::apache::commons::collections4::MapIterator
    : public virtual ::java::util::Iterator
{

    virtual ::java::lang::Object* getKey() = 0;
    virtual ::java::lang::Object* getValue() = 0;
    /*bool hasNext(); (already declared) */
    /*::java::lang::Object* next(); (already declared) */
    /*void remove(); (already declared) */
    virtual ::java::lang::Object* setValue(::java::lang::Object* arg0) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
