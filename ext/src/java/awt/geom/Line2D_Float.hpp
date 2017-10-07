// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/geom/Line2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Line2D_Float
    : public Line2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Line2D super;

private:
    static constexpr int64_t serialVersionUID { int64_t(6161772511649436349LL) };

public:
    float x1 {  };
    float x2 {  };
    float y1 {  };
    float y2 {  };

protected:
    void ctor();
    void ctor(Point2D* p1, Point2D* p2);
    void ctor(float x1, float y1, float x2, float y2);

public:
    Rectangle2D* getBounds2D() override;
    Point2D* getP1() override;
    Point2D* getP2() override;
    double getX1() override;
    double getX2() override;
    double getY1() override;
    double getY2() override;
    void setLine(double x1, double y1, double x2, double y2) override;
    virtual void setLine(float x1, float y1, float x2, float y2);

    // Generated
    Line2D_Float();
    Line2D_Float(Point2D* p1, Point2D* p2);
    Line2D_Float(float x1, float y1, float x2, float y2);
protected:
    Line2D_Float(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setLine(Line2D* l);
    virtual void setLine(Point2D* p1, Point2D* p2);

private:
    virtual ::java::lang::Class* getClass0();
};
