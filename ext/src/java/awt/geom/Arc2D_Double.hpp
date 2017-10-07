// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/awt/geom/Arc2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Arc2D_Double
    : public Arc2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Arc2D super;
    double extent {  };
    double height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(728264085846882001LL) };

public:
    double start {  };
    double width {  };
    double x {  };
    double y {  };

protected:
    void ctor();
    void ctor(int32_t type);
    void ctor(Rectangle2D* ellipseBounds, double start, double extent, int32_t type);
    void ctor(double x, double y, double w, double h, double start, double extent, int32_t type);

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
    Arc2D_Double();
    Arc2D_Double(int32_t type);
    Arc2D_Double(Rectangle2D* ellipseBounds, double start, double extent, int32_t type);
    Arc2D_Double(double x, double y, double w, double h, double start, double extent, int32_t type);
protected:
    Arc2D_Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void setAngleStart(Point2D* p);
    virtual void setArc(Arc2D* a);
    virtual void setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure);
    virtual void setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure);

private:
    virtual ::java::lang::Class* getClass0();
};
