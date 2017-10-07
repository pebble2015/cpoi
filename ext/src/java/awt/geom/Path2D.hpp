// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Shape.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::geom::Path2D
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::Shape
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    static constexpr int32_t EXPAND_MAX { int32_t(500) };
    static constexpr int32_t EXPAND_MAX_COORDS { int32_t(1000) };
    static constexpr int32_t EXPAND_MIN { int32_t(10) };
    static constexpr int32_t INIT_SIZE { int32_t(20) };

private:
    static constexpr int8_t SEG_CLOSE { int8_t(4) };
    static constexpr int8_t SEG_CUBICTO { int8_t(3) };
    static constexpr int8_t SEG_LINETO { int8_t(1) };
    static constexpr int8_t SEG_MOVETO { int8_t(0) };
    static constexpr int8_t SEG_QUADTO { int8_t(2) };
    static constexpr int8_t SERIAL_PATH_END { int8_t(97) };
    static constexpr int8_t SERIAL_SEG_CLOSE { int8_t(96) };
    static constexpr int8_t SERIAL_SEG_DBL_CUBICTO { int8_t(83) };
    static constexpr int8_t SERIAL_SEG_DBL_LINETO { int8_t(81) };
    static constexpr int8_t SERIAL_SEG_DBL_MOVETO { int8_t(80) };
    static constexpr int8_t SERIAL_SEG_DBL_QUADTO { int8_t(82) };
    static constexpr int8_t SERIAL_SEG_FLT_CUBICTO { int8_t(67) };
    static constexpr int8_t SERIAL_SEG_FLT_LINETO { int8_t(65) };
    static constexpr int8_t SERIAL_SEG_FLT_MOVETO { int8_t(64) };
    static constexpr int8_t SERIAL_SEG_FLT_QUADTO { int8_t(66) };
    static constexpr int8_t SERIAL_STORAGE_DBL_ARRAY { int8_t(49) };
    static constexpr int8_t SERIAL_STORAGE_FLT_ARRAY { int8_t(48) };

public:
    static constexpr int32_t WIND_EVEN_ODD { int32_t(0) };
    static constexpr int32_t WIND_NON_ZERO { int32_t(1) };

public: /* package */
    int32_t numCoords {  };
    int32_t numTypes {  };
    ::int8_tArray* pointTypes {  };
    int32_t windingRule {  };

protected:
    void ctor();
    void ctor(int32_t rule, int32_t initialTypes);

public: /* package */
    virtual void append(float x, float y) = 0;
    virtual void append(double x, double y) = 0;

public:
    void append(::java::awt::Shape* s, bool connect);
    virtual void append(PathIterator* pi, bool connect) = 0;
    /*::java::lang::Object* clone(); (already declared) */

public: /* package */
    virtual ::doubleArray* cloneCoordsDouble(AffineTransform* at) = 0;
    virtual ::floatArray* cloneCoordsFloat(AffineTransform* at) = 0;

public:
    void closePath();
    bool contains(Point2D* p) override;
    bool contains(Rectangle2D* r) override;
    static bool contains(PathIterator* pi, Point2D* p);
    bool contains(double x, double y) override;
    static bool contains(PathIterator* pi, Rectangle2D* r);
    static bool contains(PathIterator* pi, double x, double y);
    bool contains(double x, double y, double w, double h) override;
    static bool contains(PathIterator* pi, double x, double y, double w, double h);
    ::java::awt::Shape* createTransformedShape(AffineTransform* at);
    virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) = 0;

public: /* package */
    static ::int8_tArray* expandPointTypes(::int8_tArray* oldPointTypes, int32_t needed);

public:
    ::java::awt::Rectangle* getBounds() override;
    Point2D* getCurrentPoint();
    PathIterator* getPathIterator(AffineTransform* at, double flatness) override;

public: /* package */
    virtual Point2D* getPoint(int32_t coordindex) = 0;

public:
    int32_t getWindingRule();
    bool intersects(Rectangle2D* r) override;
    static bool intersects(PathIterator* pi, Rectangle2D* r);
    bool intersects(double x, double y, double w, double h) override;
    static bool intersects(PathIterator* pi, double x, double y, double w, double h);
    virtual void lineTo(double x, double y) = 0;
    virtual void moveTo(double x, double y) = 0;

public: /* package */
    virtual void needRoom(bool needMove, int32_t newCoords) = 0;
    virtual int32_t pointCrossings(double px, double py) = 0;

public:
    virtual void quadTo(double x1, double y1, double x2, double y2) = 0;

public: /* package */
    void readObject(::java::io::ObjectInputStream* s, bool storedbl);
    virtual int32_t rectCrossings(double rxmin, double rymin, double rxmax, double rymax) = 0;

public:
    void reset();
    void setWindingRule(int32_t rule);
    virtual void transform(AffineTransform* at) = 0;

public: /* package */
    void writeObject(::java::io::ObjectOutputStream* s, bool isdbl);

    // Generated
    Path2D();
    Path2D(int32_t rule, int32_t initialTypes);
protected:
    Path2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual PathIterator* getPathIterator(AffineTransform* at) = 0;

public: /* package */
    static bool& $assertionsDisabled();

private:
    virtual ::java::lang::Class* getClass0();
};
