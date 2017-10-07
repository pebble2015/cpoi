// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
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

class java::awt::MultipleGradientPaint
    : public virtual ::java::lang::Object
    , public virtual Paint
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    MultipleGradientPaint_ColorSpaceType* colorSpace {  };
    ColorArray* colors {  };
    MultipleGradientPaint_CycleMethod* cycleMethod {  };
    int32_t fastGradientArraySize {  };
    ::floatArray* fractions {  };
    ::java::lang::ref::SoftReference* gradient {  };
    ::java::awt::geom::AffineTransform* gradientTransform {  };
    ::java::lang::ref::SoftReference* gradients {  };
    bool isSimpleLookup {  };
    ::java::awt::image::ColorModel* model {  };
    ::floatArray* normalizedIntervals {  };
    int32_t transparency {  };

protected:
    void ctor(::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);

public:
    MultipleGradientPaint_ColorSpaceType* getColorSpace();
    ColorArray* getColors();
    MultipleGradientPaint_CycleMethod* getCycleMethod();
    ::floatArray* getFractions();
    ::java::awt::geom::AffineTransform* getTransform();
    int32_t getTransparency() override;

    // Generated

public: /* package */
    MultipleGradientPaint(::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);
protected:
    MultipleGradientPaint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
