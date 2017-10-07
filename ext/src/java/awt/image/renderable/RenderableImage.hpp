// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/image/renderable/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct java::awt::image::renderable::RenderableImage
    : public virtual ::java::lang::Object
{

private:
    static ::java::lang::String* HINTS_OBSERVED_;


public:
    virtual ::java::awt::image::RenderedImage* createDefaultRendering() = 0;
    virtual ::java::awt::image::RenderedImage* createRendering(RenderContext* renderContext) = 0;
    virtual ::java::awt::image::RenderedImage* createScaledRendering(int32_t w, int32_t h, ::java::awt::RenderingHints* hints) = 0;
    virtual float getHeight() = 0;
    virtual float getMinX() = 0;
    virtual float getMinY() = 0;
    virtual ::java::lang::Object* getProperty(::java::lang::String* name) = 0;
    virtual ::java::lang::StringArray* getPropertyNames() = 0;
    virtual ::java::util::Vector* getSources() = 0;
    virtual float getWidth() = 0;
    virtual bool isDynamic() = 0;

    // Generated
    static ::java::lang::Class *class_();
    static ::java::lang::String*& HINTS_OBSERVED();
};
