// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/geom/Path2D.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::geom::Path2D_Double
    : public Path2D
    , public virtual ::java::io::Serializable
{

public:
    typedef Path2D super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    ::doubleArray* doubleCoords {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1826762518450014216LL) };

protected:
    void ctor();
    void ctor(int32_t rule);
    void ctor(::java::awt::Shape* s);
    void ctor(int32_t rule, int32_t initialCapacity);
    void ctor(::java::awt::Shape* s, AffineTransform* at);

public: /* package */
    void append(float x, float y) override;
    void append(double x, double y) override;

public:
    void append(PathIterator* pi, bool connect) override;
    ::java::lang::Object* clone() override;

public: /* package */
    ::doubleArray* cloneCoordsDouble(AffineTransform* at) override;
    ::floatArray* cloneCoordsFloat(AffineTransform* at) override;

public:
    void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;

public: /* package */
    static ::doubleArray* expandCoords(::doubleArray* oldCoords, int32_t needed);

public:
    Rectangle2D* getBounds2D() override;
    PathIterator* getPathIterator(AffineTransform* at) override;

public: /* package */
    Point2D* getPoint(int32_t coordindex) override;

public:
    void lineTo(double x, double y) override;
    void moveTo(double x, double y) override;

public: /* package */
    void needRoom(bool needMove, int32_t newCoords) override;
    int32_t pointCrossings(double px, double py) override;

public:
    void quadTo(double x1, double y1, double x2, double y2) override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */

public: /* package */
    int32_t rectCrossings(double rxmin, double rymin, double rxmax, double rymax) override;

public:
    void transform(AffineTransform* at) override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    Path2D_Double();
    Path2D_Double(int32_t rule);
    Path2D_Double(::java::awt::Shape* s);
    Path2D_Double(int32_t rule, int32_t initialCapacity);
    Path2D_Double(::java::awt::Shape* s, AffineTransform* at);
protected:
    Path2D_Double(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void append(::java::awt::Shape* s, bool connect);
    PathIterator* getPathIterator(AffineTransform* at, double flatness);

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
