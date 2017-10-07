// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/Point2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Point2D_Double
    : public Point2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Point2D super;

private:
    static constexpr int64_t serialVersionUID { int64_t(6150783262733311327LL) };

public:
    double x {  };
    double y {  };

protected:
    void ctor();
    void ctor(double x, double y);

public:
    double getX() override;
    double getY() override;
    void setLocation(double x, double y) override;
    ::java::lang::String* toString() override;

    // Generated
    Point2D_Double();
    Point2D_Double(double x, double y);
protected:
    Point2D_Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setLocation(Point2D* p);

private:
    virtual ::java::lang::Class* getClass0();
};
