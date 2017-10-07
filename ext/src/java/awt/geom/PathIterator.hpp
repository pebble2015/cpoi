// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::geom::PathIterator
    : public virtual ::java::lang::Object
{
    static constexpr int32_t SEG_CLOSE { int32_t(4) };
    static constexpr int32_t SEG_CUBICTO { int32_t(3) };
    static constexpr int32_t SEG_LINETO { int32_t(1) };
    static constexpr int32_t SEG_MOVETO { int32_t(0) };
    static constexpr int32_t SEG_QUADTO { int32_t(2) };
    static constexpr int32_t WIND_EVEN_ODD { int32_t(0) };
    static constexpr int32_t WIND_NON_ZERO { int32_t(1) };

    virtual int32_t currentSegment(::floatArray* coords) = 0;
    virtual int32_t currentSegment(::doubleArray* coords) = 0;
    virtual int32_t getWindingRule() = 0;
    virtual bool isDone() = 0;
    virtual void next() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
