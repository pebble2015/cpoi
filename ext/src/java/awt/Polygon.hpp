// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <sun/awt/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Shape.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::Polygon
    : public virtual ::java::lang::Object
    , public virtual Shape
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MIN_LENGTH { int32_t(4) };

public: /* protected */
    Rectangle* bounds {  };

public:
    int32_t npoints {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(-6460061437900069969LL) };

public:
    ::int32_tArray* xpoints {  };
    ::int32_tArray* ypoints {  };

protected:
    void ctor();
    void ctor(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints);

public:
    virtual void addPoint(int32_t x, int32_t y);

public: /* package */
    virtual void calculateBounds(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints);

public:
    virtual bool contains(Point* p);
    bool contains(::java::awt::geom::Point2D* p) override;
    bool contains(::java::awt::geom::Rectangle2D* r) override;
    virtual bool contains(int32_t x, int32_t y);
    bool contains(double x, double y) override;
    bool contains(double x, double y, double w, double h) override;
    virtual Rectangle* getBoundingBox();
    Rectangle* getBounds() override;
    ::java::awt::geom::Rectangle2D* getBounds2D() override;
    /*::sun::awt::geom::Crossings* getCrossings(double xlo, double ylo, double xhi, double yhi); (private) */
    ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
    ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
    virtual bool inside(int32_t x, int32_t y);
    bool intersects(::java::awt::geom::Rectangle2D* r) override;
    bool intersects(double x, double y, double w, double h) override;
    virtual void invalidate();
    virtual void reset();
    virtual void translate(int32_t deltaX, int32_t deltaY);

public: /* package */
    virtual void updateBounds(int32_t x, int32_t y);

    // Generated

public:
    Polygon();
    Polygon(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints);
protected:
    Polygon(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
