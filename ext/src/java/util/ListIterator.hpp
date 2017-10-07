// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/Iterator.hpp>

struct java::util::ListIterator
    : public virtual Iterator
{

    virtual void add(::java::lang::Object* e) = 0;
    /*bool hasNext(); (already declared) */
    virtual bool hasPrevious() = 0;
    /*::java::lang::Object* next(); (already declared) */
    virtual int32_t nextIndex() = 0;
    virtual ::java::lang::Object* previous() = 0;
    virtual int32_t previousIndex() = 0;
    /*void remove(); (already declared) */
    virtual void set(::java::lang::Object* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
