// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Rectangle2D_Double
    : public Rectangle2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Rectangle2D super;
    double height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(7771313791441850493LL) };

public:
    double width {  };
    double x {  };
    double y {  };

protected:
    void ctor();
    void ctor(double x, double y, double w, double h);

public:
    Rectangle2D* createIntersection(Rectangle2D* r) override;
    Rectangle2D* createUnion(Rectangle2D* r) override;
    Rectangle2D* getBounds2D() override;
    double getHeight() override;
    double getWidth() override;
    double getX() override;
    double getY() override;
    bool isEmpty() override;
    int32_t outcode(double x, double y) override;
    void setRect(Rectangle2D* r) override;
    void setRect(double x, double y, double w, double h) override;
    ::java::lang::String* toString() override;

    // Generated
    Rectangle2D_Double();
    Rectangle2D_Double(double x, double y, double w, double h);
protected:
    Rectangle2D_Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t outcode(Point2D* p);

private:
    virtual ::java::lang::Class* getClass0();
};
