// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/geom/Ellipse2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Ellipse2D_Float
    : public Ellipse2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Ellipse2D super;
    float height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(-6633761252372475977LL) };

public:
    float width {  };
    float x {  };
    float y {  };

protected:
    void ctor();
    void ctor(float x, float y, float w, float h);

public:
    Rectangle2D* getBounds2D() override;
    double getHeight() override;
    double getWidth() override;
    double getX() override;
    double getY() override;
    bool isEmpty() override;
    virtual void setFrame(float x, float y, float w, float h);
    void setFrame(double x, double y, double w, double h) override;

    // Generated
    Ellipse2D_Float();
    Ellipse2D_Float(float x, float y, float w, float h);
protected:
    Ellipse2D_Float(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setFrame(Rectangle2D* r);
    virtual void setFrame(Point2D* loc, Dimension2D* size);

private:
    virtual ::java::lang::Class* getClass0();
};
