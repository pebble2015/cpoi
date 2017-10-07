// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/RectangularShape.hpp>

struct default_init_tag;

class java::awt::geom::Rectangle2D
    : public RectangularShape
{

public:
    typedef RectangularShape super;
    static constexpr int32_t OUT_BOTTOM { int32_t(8) };
    static constexpr int32_t OUT_LEFT { int32_t(1) };
    static constexpr int32_t OUT_RIGHT { int32_t(4) };
    static constexpr int32_t OUT_TOP { int32_t(2) };

protected:
    void ctor();

public:
    virtual void add(Point2D* pt);
    virtual void add(Rectangle2D* r);
    virtual void add(double newx, double newy);
    bool contains(double x, double y) override;
    bool contains(double x, double y, double w, double h) override;
    virtual Rectangle2D* createIntersection(Rectangle2D* r) = 0;
    virtual Rectangle2D* createUnion(Rectangle2D* r) = 0;
    bool equals(::java::lang::Object* obj) override;
    Rectangle2D* getBounds2D() override;
    PathIterator* getPathIterator(AffineTransform* at) override;
    PathIterator* getPathIterator(AffineTransform* at, double flatness) override;
    int32_t hashCode() override;
    static void intersect(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest);
    bool intersects(double x, double y, double w, double h) override;
    virtual bool intersectsLine(Line2D* l);
    virtual bool intersectsLine(double x1, double y1, double x2, double y2);
    virtual int32_t outcode(Point2D* p);
    virtual int32_t outcode(double x, double y) = 0;
    void setFrame(double x, double y, double w, double h) override;
    virtual void setRect(Rectangle2D* r);
    virtual void setRect(double x, double y, double w, double h) = 0;
    static void union_(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest);

    // Generated

public: /* protected */
    Rectangle2D();
protected:
    Rectangle2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool contains(Point2D* p);
    bool contains(Rectangle2D* r);
    bool intersects(Rectangle2D* r);
    virtual void setFrame(Rectangle2D* r);
    virtual void setFrame(Point2D* loc, Dimension2D* size);

private:
    virtual ::java::lang::Class* getClass0();
};
