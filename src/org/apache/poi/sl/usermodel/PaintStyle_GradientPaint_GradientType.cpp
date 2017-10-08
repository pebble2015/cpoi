// Generated from /POI/java/org/apache/poi/sl/usermodel/PaintStyle.java
#include <org/apache/poi/sl/usermodel/PaintStyle_GradientPaint_GradientType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType, ::java::lang::EnumArray > PaintStyle_GradientPaint_GradientTypeArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::PaintStyle_GradientPaint_GradientType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::PaintStyle_GradientPaint_GradientType(::java::lang::String* name, int ordinal)
    : PaintStyle_GradientPaint_GradientType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::PaintStyle_GradientPaint_GradientType* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::linear = new ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType(u"linear"_j, 0);
poi::sl::usermodel::PaintStyle_GradientPaint_GradientType* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::circular = new ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType(u"circular"_j, 1);
poi::sl::usermodel::PaintStyle_GradientPaint_GradientType* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::shape = new ::poi::sl::usermodel::PaintStyle_GradientPaint_GradientType(u"shape"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.PaintStyle.GradientPaint.GradientType", 65);
    return c;
}

poi::sl::usermodel::PaintStyle_GradientPaint_GradientType* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::valueOf(::java::lang::String* a0)
{
    if(circular->toString()->equals(a0))
        return circular;
    if(linear->toString()->equals(a0))
        return linear;
    if(shape->toString()->equals(a0))
        return shape;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::PaintStyle_GradientPaint_GradientTypeArray* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::values()
{
    return new poi::sl::usermodel::PaintStyle_GradientPaint_GradientTypeArray({
        circular,
        linear,
        shape,
    });
}

java::lang::Class* poi::sl::usermodel::PaintStyle_GradientPaint_GradientType::getClass0()
{
    return class_();
}

