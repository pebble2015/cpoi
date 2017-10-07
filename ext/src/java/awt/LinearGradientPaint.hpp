// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/MultipleGradientPaint.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::Transparency, ::java::lang::ObjectArray > TransparencyArray;
typedef ::SubArray< ::java::awt::Paint, ::java::lang::ObjectArray, TransparencyArray > PaintArray;
    } // awt

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Color, ::java::lang::ObjectArray, PaintArray, ::java::io::SerializableArray > ColorArray;
    } // awt
} // java

struct default_init_tag;

class java::awt::LinearGradientPaint final
    : public MultipleGradientPaint
{

public:
    typedef MultipleGradientPaint super;

private:
    ::java::awt::geom::Point2D* end {  };
    ::java::awt::geom::Point2D* start {  };

protected:
    void ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors);
    void ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod);
    void ctor(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors);
    void ctor(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod);
    void ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);

public:
    PaintContext* createContext(::java::awt::image::ColorModel* cm, Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, RenderingHints* hints) override;
    ::java::awt::geom::Point2D* getEndPoint();
    ::java::awt::geom::Point2D* getStartPoint();

    // Generated
    LinearGradientPaint(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors);
    LinearGradientPaint(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod);
    LinearGradientPaint(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors);
    LinearGradientPaint(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod);
    LinearGradientPaint(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);
protected:
    LinearGradientPaint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
