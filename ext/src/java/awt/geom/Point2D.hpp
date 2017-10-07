// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::geom::Point2D
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    virtual double distance(Point2D* pt);
    virtual double distance(double px, double py);
    static double distance(double x1, double y1, double x2, double y2);
    virtual double distanceSq(Point2D* pt);
    virtual double distanceSq(double px, double py);
    static double distanceSq(double x1, double y1, double x2, double y2);
    bool equals(::java::lang::Object* obj) override;
    virtual double getX() = 0;
    virtual double getY() = 0;
    int32_t hashCode() override;
    virtual void setLocation(Point2D* p);
    virtual void setLocation(double x, double y) = 0;

    // Generated

public: /* protected */
    Point2D();
protected:
    Point2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
