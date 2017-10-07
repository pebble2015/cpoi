// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/stream/fwd-POI.hpp>
#include <java/util/function/Consumer.hpp>

struct java::util::stream::Stream_Builder
    : public virtual ::java::util::function::Consumer
{

    /*void accept(::java::lang::Object* t); (already declared) */
    virtual Stream_Builder* add(::java::lang::Object* t);
    virtual Stream* build() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
