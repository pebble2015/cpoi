// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Paint.hpp>

struct default_init_tag;

class java::awt::TexturePaint
    : public virtual ::java::lang::Object
    , public virtual Paint
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::awt::image::BufferedImage* bufImg {  };
    double sx {  };
    double sy {  };
    double tx {  };
    double ty {  };

protected:
    void ctor(::java::awt::image::BufferedImage* txtr, ::java::awt::geom::Rectangle2D* anchor);

public:
    PaintContext* createContext(::java::awt::image::ColorModel* cm, Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, RenderingHints* hints) override;
    virtual ::java::awt::geom::Rectangle2D* getAnchorRect();
    virtual ::java::awt::image::BufferedImage* getImage();
    int32_t getTransparency() override;

    // Generated
    TexturePaint(::java::awt::image::BufferedImage* txtr, ::java::awt::geom::Rectangle2D* anchor);
protected:
    TexturePaint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
