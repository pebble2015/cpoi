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

class java::awt::geom::Line2D
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
    bool contains(double x, double y) override;
    bool contains(double x, double y, double w, double h) override;
    ::java::awt::Rectangle* getBounds() override;
    virtual Point2D* getP1() = 0;
    virtual Point2D* getP2() = 0;
    PathIterator* getPathIterator(AffineTransform* at) override;
    PathIterator* getPathIterator(AffineTransform* at, double flatness) override;
    virtual double getX1() = 0;
    virtual double getX2() = 0;
    virtual double getY1() = 0;
    virtual double getY2() = 0;
    bool intersects(Rectangle2D* r) override;
    bool intersects(double x, double y, double w, double h) override;
    virtual bool intersectsLine(Line2D* l);
    virtual bool intersectsLine(double x1, double y1, double x2, double y2);
    static bool linesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    virtual double ptLineDist(Point2D* pt);
    virtual double ptLineDist(double px, double py);
    static double ptLineDist(double x1, double y1, double x2, double y2, double px, double py);
    virtual double ptLineDistSq(Point2D* pt);
    virtual double ptLineDistSq(double px, double py);
    static double ptLineDistSq(double x1, double y1, double x2, double y2, double px, double py);
    virtual double ptSegDist(Point2D* pt);
    virtual double ptSegDist(double px, double py);
    static double ptSegDist(double x1, double y1, double x2, double y2, double px, double py);
    virtual double ptSegDistSq(Point2D* pt);
    virtual double ptSegDistSq(double px, double py);
    static double ptSegDistSq(double x1, double y1, double x2, double y2, double px, double py);
    virtual int32_t relativeCCW(Point2D* p);
    virtual int32_t relativeCCW(double px, double py);
    static int32_t relativeCCW(double x1, double y1, double x2, double y2, double px, double py);
    virtual void setLine(Line2D* l);
    virtual void setLine(Point2D* p1, Point2D* p2);
    virtual void setLine(double x1, double y1, double x2, double y2) = 0;

    // Generated

public: /* protected */
    Line2D();
protected:
    Line2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
