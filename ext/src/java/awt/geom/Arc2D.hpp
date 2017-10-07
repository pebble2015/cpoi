// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/RectangularShape.hpp>

struct default_init_tag;

class java::awt::geom::Arc2D
    : public RectangularShape
{

public:
    typedef RectangularShape super;
    static constexpr int32_t CHORD { int32_t(1) };
    static constexpr int32_t OPEN { int32_t(0) };
    static constexpr int32_t PIE { int32_t(2) };

private:
    int32_t type {  };

protected:
    void ctor();
    void ctor(int32_t type);

public:
    bool contains(Rectangle2D* r) override;
    bool contains(double x, double y) override;
    bool contains(double x, double y, double w, double h) override;
    /*bool contains(double x, double y, double w, double h, Rectangle2D* origrect); (private) */
    virtual bool containsAngle(double angle);
    bool equals(::java::lang::Object* obj) override;
    virtual double getAngleExtent() = 0;
    virtual double getAngleStart() = 0;
    virtual int32_t getArcType();
    Rectangle2D* getBounds2D() override;
    virtual Point2D* getEndPoint();
    PathIterator* getPathIterator(AffineTransform* at) override;
    virtual Point2D* getStartPoint();
    int32_t hashCode() override;
    bool intersects(double x, double y, double w, double h) override;

public: /* protected */
    virtual Rectangle2D* makeBounds(double x, double y, double w, double h) = 0;

public: /* package */
    static double normalizeDegrees(double angle);

public:
    virtual void setAngleExtent(double angExt) = 0;
    virtual void setAngleStart(double angSt) = 0;
    virtual void setAngleStart(Point2D* p);
    virtual void setAngles(Point2D* p1, Point2D* p2);
    virtual void setAngles(double x1, double y1, double x2, double y2);
    virtual void setArc(Arc2D* a);
    virtual void setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure);
    virtual void setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure);
    virtual void setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure) = 0;
    virtual void setArcByCenter(double x, double y, double radius, double angSt, double angExt, int32_t closure);
    virtual void setArcByTangent(Point2D* p1, Point2D* p2, Point2D* p3, double radius);
    virtual void setArcType(int32_t type);
    void setFrame(double x, double y, double w, double h) override;

    // Generated

public: /* protected */
    Arc2D();
    Arc2D(int32_t type);
protected:
    Arc2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool contains(Point2D* p);
    PathIterator* getPathIterator(AffineTransform* at, double flatness);
    bool intersects(Rectangle2D* r);
    virtual void setFrame(Rectangle2D* r);
    virtual void setFrame(Point2D* loc, Dimension2D* size);

private:
    virtual ::java::lang::Class* getClass0();
};
