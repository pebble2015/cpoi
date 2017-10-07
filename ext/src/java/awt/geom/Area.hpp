// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Shape.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::geom::Area
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::Shape
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Vector* EmptyCurves_;
    Rectangle2D* cachedBounds {  };
    ::java::util::Vector* curves {  };

protected:
    void ctor();
    void ctor(::java::awt::Shape* s);

public:
    virtual void add(Area* rhs);
    ::java::lang::Object* clone() override;
    bool contains(Point2D* p) override;
    bool contains(Rectangle2D* r) override;
    bool contains(double x, double y) override;
    bool contains(double x, double y, double w, double h) override;
    virtual Area* createTransformedArea(AffineTransform* t);
    virtual bool equals(Area* other);
    virtual void exclusiveOr(Area* rhs);
    ::java::awt::Rectangle* getBounds() override;
    Rectangle2D* getBounds2D() override;
    /*Rectangle2D* getCachedBounds(); (private) */
    PathIterator* getPathIterator(AffineTransform* at) override;
    PathIterator* getPathIterator(AffineTransform* at, double flatness) override;
    virtual void intersect(Area* rhs);
    bool intersects(Rectangle2D* r) override;
    bool intersects(double x, double y, double w, double h) override;
    /*void invalidateBounds(); (private) */
    virtual bool isEmpty();
    virtual bool isPolygonal();
    virtual bool isRectangular();
    virtual bool isSingular();
    /*static ::java::util::Vector* pathToCurves(PathIterator* pi); (private) */
    virtual void reset();
    virtual void subtract(Area* rhs);
    virtual void transform(AffineTransform* t);

    // Generated
    Area();
    Area(::java::awt::Shape* s);
protected:
    Area(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::Vector*& EmptyCurves();
    virtual ::java::lang::Class* getClass0();
};
