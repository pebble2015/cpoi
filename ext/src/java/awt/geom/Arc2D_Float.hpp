// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/awt/geom/Arc2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Arc2D_Float
    : public Arc2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Arc2D super;
    float extent {  };
    float height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(9130893014586380278LL) };

public:
    float start {  };
    float width {  };
    float x {  };
    float y {  };

protected:
    void ctor();
    void ctor(int32_t type);
    void ctor(Rectangle2D* ellipseBounds, float start, float extent, int32_t type);
    void ctor(float x, float y, float w, float h, float start, float extent, int32_t type);

public:
    double getAngleExtent() override;
    double getAngleStart() override;
    double getHeight() override;
    double getWidth() override;
    double getX() override;
    double getY() override;
    bool isEmpty() override;

public: /* protected */
    Rectangle2D* makeBounds(double x, double y, double w, double h) override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */

public:
    void setAngleExtent(double angExt) override;
    void setAngleStart(double angSt) override;
    void setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure) override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    Arc2D_Float();
    Arc2D_Float(int32_t type);
    Arc2D_Float(Rectangle2D* ellipseBounds, float start, float extent, int32_t type);
    Arc2D_Float(float x, float y, float w, float h, float start, float extent, int32_t type);
protected:
    Arc2D_Float(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setAngleStart(Point2D* p);
    virtual void setArc(Arc2D* a);
    virtual void setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure);
    virtual void setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure);

private:
    virtual ::java::lang::Class* getClass0();
};
