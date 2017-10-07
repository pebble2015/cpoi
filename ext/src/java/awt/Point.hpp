// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/Point2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::Point
    : public ::java::awt::geom::Point2D
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::awt::geom::Point2D super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-5276940640259749850LL) };

public:
    int32_t x {  };
    int32_t y {  };

protected:
    void ctor();
    void ctor(Point* p);
    void ctor(int32_t x, int32_t y);

public:
    bool equals(::java::lang::Object* obj) override;
    virtual Point* getLocation();
    double getX() override;
    double getY() override;
    virtual void move(int32_t x, int32_t y);
    virtual void setLocation(Point* p);
    virtual void setLocation(int32_t x, int32_t y);
    void setLocation(double x, double y) override;
    ::java::lang::String* toString() override;
    virtual void translate(int32_t dx, int32_t dy);

    // Generated
    Point();
    Point(Point* p);
    Point(int32_t x, int32_t y);
protected:
    Point(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setLocation(::java::awt::geom::Point2D* p);

private:
    virtual ::java::lang::Class* getClass0();
};
