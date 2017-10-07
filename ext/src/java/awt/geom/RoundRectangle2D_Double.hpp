// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/geom/RoundRectangle2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::RoundRectangle2D_Double
    : public RoundRectangle2D
    , public virtual ::java::io::Serializable
{

public:
    typedef RoundRectangle2D super;
    double archeight {  };
    double arcwidth {  };
    double height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1048939333485206117LL) };

public:
    double width {  };
    double x {  };
    double y {  };

protected:
    void ctor();
    void ctor(double x, double y, double w, double h, double arcw, double arch);

public:
    double getArcHeight() override;
    double getArcWidth() override;
    Rectangle2D* getBounds2D() override;
    double getHeight() override;
    double getWidth() override;
    double getX() override;
    double getY() override;
    bool isEmpty() override;
    void setRoundRect(RoundRectangle2D* rr) override;
    void setRoundRect(double x, double y, double w, double h, double arcw, double arch) override;

    // Generated
    RoundRectangle2D_Double();
    RoundRectangle2D_Double(double x, double y, double w, double h, double arcw, double arch);
protected:
    RoundRectangle2D_Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
