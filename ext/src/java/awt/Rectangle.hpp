// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/awt/Shape.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::Rectangle
    : public ::java::awt::geom::Rectangle2D
    , public virtual Shape
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::awt::geom::Rectangle2D super;
    int32_t height {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(-4345857070255674764LL) };

public:
    int32_t width {  };
    int32_t x {  };
    int32_t y {  };

protected:
    void ctor();
    void ctor(Rectangle* r);
    void ctor(Point* p);
    void ctor(Dimension* d);
    void ctor(int32_t width, int32_t height);
    void ctor(Point* p, Dimension* d);
    void ctor(int32_t x, int32_t y, int32_t width, int32_t height);

public:
    virtual void add(Point* pt);
    virtual void add(Rectangle* r);
    virtual void add(int32_t newx, int32_t newy);
    /*static int32_t clip(double v, bool doceil); (private) */
    virtual bool contains(Point* p);
    virtual bool contains(Rectangle* r);
    virtual bool contains(int32_t x, int32_t y);
    virtual bool contains(int32_t X, int32_t Y, int32_t W, int32_t H);
    ::java::awt::geom::Rectangle2D* createIntersection(::java::awt::geom::Rectangle2D* r) override;
    ::java::awt::geom::Rectangle2D* createUnion(::java::awt::geom::Rectangle2D* r) override;
    bool equals(::java::lang::Object* obj) override;
    Rectangle* getBounds() override;
    ::java::awt::geom::Rectangle2D* getBounds2D() override;
    double getHeight() override;
    virtual Point* getLocation();
    virtual Dimension* getSize();
    double getWidth() override;
    double getX() override;
    double getY() override;
    virtual void grow(int32_t h, int32_t v);
    /*static void initIDs(); (private) */
    virtual bool inside(int32_t X, int32_t Y);
    virtual Rectangle* intersection(Rectangle* r);
    virtual bool intersects(Rectangle* r);
    bool isEmpty() override;
    virtual void move(int32_t x, int32_t y);
    int32_t outcode(double x, double y) override;
    virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void resize(int32_t width, int32_t height);
    virtual void setBounds(Rectangle* r);
    virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void setLocation(Point* p);
    virtual void setLocation(int32_t x, int32_t y);
    void setRect(double x, double y, double width, double height) override;
    virtual void setSize(Dimension* d);
    virtual void setSize(int32_t width, int32_t height);
    ::java::lang::String* toString() override;
    virtual void translate(int32_t dx, int32_t dy);
    virtual Rectangle* union_(Rectangle* r);

    // Generated
    Rectangle();
    Rectangle(Rectangle* r);
    Rectangle(Point* p);
    Rectangle(Dimension* d);
    Rectangle(int32_t width, int32_t height);
    Rectangle(Point* p, Dimension* d);
    Rectangle(int32_t x, int32_t y, int32_t width, int32_t height);
protected:
    Rectangle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool contains(double x, double y);
    virtual bool contains(double x, double y, double w, double h);
    virtual bool contains(::java::awt::geom::Point2D* p);
    virtual bool contains(::java::awt::geom::Rectangle2D* r);
    virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at);
    virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness);
    virtual bool intersects(double x, double y, double w, double h);
    virtual bool intersects(::java::awt::geom::Rectangle2D* r);
    virtual void add(::java::awt::geom::Point2D* pt);
    virtual void add(::java::awt::geom::Rectangle2D* r);
    virtual void add(double newx, double newy);
    virtual int32_t outcode(::java::awt::geom::Point2D* p);
    virtual void setRect(::java::awt::geom::Rectangle2D* r);
    static void union_(::java::awt::geom::Rectangle2D* src1, ::java::awt::geom::Rectangle2D* src2, ::java::awt::geom::Rectangle2D* dest);

private:
    virtual ::java::lang::Class* getClass0();
};
