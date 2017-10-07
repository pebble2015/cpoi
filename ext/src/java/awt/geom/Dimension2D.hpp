// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::geom::Dimension2D
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    virtual double getHeight() = 0;
    virtual double getWidth() = 0;
    virtual void setSize(Dimension2D* d);
    virtual void setSize(double width, double height) = 0;

    // Generated

public: /* protected */
    Dimension2D();
protected:
    Dimension2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
