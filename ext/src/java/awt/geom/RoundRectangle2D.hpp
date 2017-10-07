// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/RectangularShape.hpp>

struct default_init_tag;

class java::awt::geom::RoundRectangle2D
    : public RectangularShape
{

public:
    typedef RectangularShape super;

protected:
    void ctor();
    /*int32_t classify(double coord, double left, double right, double arcsize); (private) */

public:
    bool contains(double x, double y) override;
    bool contains(double x, double y, double w, double h) override;
    bool equals(::java::lang::Object* obj) override;
    virtual double getArcHeight() = 0;
    virtual double getArcWidth() = 0;
    PathIterator* getPathIterator(AffineTransform* at) override;
    int32_t hashCode() override;
    bool intersects(double x, double y, double w, double h) override;
    void setFrame(double x, double y, double w, double h) override;
    virtual void setRoundRect(RoundRectangle2D* rr);
    virtual void setRoundRect(double x, double y, double w, double h, double arcWidth, double arcHeight) = 0;

    // Generated

public: /* protected */
    RoundRectangle2D();
protected:
    RoundRectangle2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool contains(Point2D* p);
    bool contains(Rectangle2D* r);
    PathIterator* getPathIterator(AffineTransform* at, double flatness);
    bool intersects(Rectangle2D* r);
    virtual void setFrame(Rectangle2D* r);
    virtual void setFrame(Point2D* loc, Dimension2D* size);

private:
    virtual ::java::lang::Class* getClass0();
};
