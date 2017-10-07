// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::commons::collections4::Get
    : public virtual ::java::lang::Object
{

    virtual bool containsKey(::java::lang::Object* arg0) = 0;
    virtual bool containsValue(::java::lang::Object* arg0) = 0;
    virtual ::java::util::Set* entrySet() = 0;
    virtual ::java::lang::Object* get(::java::lang::Object* arg0) = 0;
    virtual bool isEmpty() = 0;
    virtual ::java::util::Set* keySet() = 0;
    virtual ::java::lang::Object* remove(::java::lang::Object* arg0) = 0;
    virtual int32_t size() = 0;
    virtual ::java::util::Collection* values() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
