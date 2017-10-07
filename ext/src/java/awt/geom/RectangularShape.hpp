// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Shape.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::geom::RectangularShape
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::Shape
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    bool contains(Point2D* p) override;
    bool contains(Rectangle2D* r) override;
    ::java::awt::Rectangle* getBounds() override;
    virtual double getCenterX();
    virtual double getCenterY();
    virtual Rectangle2D* getFrame();
    virtual double getHeight() = 0;
    virtual double getMaxX();
    virtual double getMaxY();
    virtual double getMinX();
    virtual double getMinY();
    PathIterator* getPathIterator(AffineTransform* at, double flatness) override;
    virtual double getWidth() = 0;
    virtual double getX() = 0;
    virtual double getY() = 0;
    bool intersects(Rectangle2D* r) override;
    virtual bool isEmpty() = 0;
    virtual void setFrame(Rectangle2D* r);
    virtual void setFrame(Point2D* loc, Dimension2D* size);
    virtual void setFrame(double x, double y, double w, double h) = 0;
    virtual void setFrameFromCenter(Point2D* center, Point2D* corner);
    virtual void setFrameFromCenter(double centerX, double centerY, double cornerX, double cornerY);
    virtual void setFrameFromDiagonal(Point2D* p1, Point2D* p2);
    virtual void setFrameFromDiagonal(double x1, double y1, double x2, double y2);

    // Generated

public: /* protected */
    RectangularShape();
protected:
    RectangularShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool contains(double x, double y) = 0;
    virtual bool contains(double x, double y, double w, double h) = 0;
    virtual PathIterator* getPathIterator(AffineTransform* at) = 0;
    virtual bool intersects(double x, double y, double w, double h) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
