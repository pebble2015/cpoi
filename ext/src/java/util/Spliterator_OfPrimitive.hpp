// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/Spliterator.hpp>

struct java::util::Spliterator_OfPrimitive
    : public virtual Spliterator
{

    virtual void forEachRemaining(::java::lang::Object* action);
    virtual bool tryAdvance(::java::lang::Object* action) = 0;
    Spliterator_OfPrimitive* trySplit() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual bool tryAdvance(::java::util::function::Consumer* action) = 0;
};
