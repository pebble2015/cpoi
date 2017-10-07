// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Iterable
    : public virtual Object
{

    virtual void forEach(::java::util::function::Consumer* action);
    virtual ::java::util::Iterator* iterator() = 0;
    virtual ::java::util::Spliterator* spliterator();

    // Generated
    static ::java::lang::Class *class_();
};
