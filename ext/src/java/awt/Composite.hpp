// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::Composite
    : public virtual ::java::lang::Object
{

    virtual CompositeContext* createContext(::java::awt::image::ColorModel* srcColorModel, ::java::awt::image::ColorModel* dstColorModel, RenderingHints* hints) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
