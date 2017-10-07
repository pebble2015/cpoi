// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::Shape
    : public virtual ::java::lang::Object
{

    virtual bool contains(::java::awt::geom::Point2D* p) = 0;
    virtual bool contains(::java::awt::geom::Rectangle2D* r) = 0;
    virtual bool contains(double x, double y) = 0;
    virtual bool contains(double x, double y, double w, double h) = 0;
    virtual Rectangle* getBounds() = 0;
    virtual ::java::awt::geom::Rectangle2D* getBounds2D() = 0;
    virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) = 0;
    virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) = 0;
    virtual bool intersects(::java::awt::geom::Rectangle2D* r) = 0;
    virtual bool intersects(double x, double y, double w, double h) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
