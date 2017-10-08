// Generated from /POI/java/org/apache/poi/sl/draw/PathGradientPaint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Paint.hpp>

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

class poi::sl::draw::PathGradientPaint
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::Paint
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::awt::ColorArray* colors {  };
    ::floatArray* fractions {  };
    int32_t capStyle {  };
    int32_t joinStyle {  };
    int32_t transparency {  };
protected:
    void ctor(::java::awt::ColorArray* colors, ::floatArray* fractions);
    void ctor(::java::awt::ColorArray* colors, ::floatArray* fractions, int32_t capStyle, int32_t joinStyle);

public:
    ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, ::java::awt::RenderingHints* hints) override;
    int32_t getTransparency() override;

    // Generated
    PathGradientPaint(::java::awt::ColorArray* colors, ::floatArray* fractions);
    PathGradientPaint(::java::awt::ColorArray* colors, ::floatArray* fractions, int32_t capStyle, int32_t joinStyle);
protected:
    PathGradientPaint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PathGradientPaint_PathGradientContext;
};
