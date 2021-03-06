// Generated from /POI/java/org/apache/poi/sl/usermodel/PaintStyle.java
#include <org/apache/poi/sl/usermodel/PaintStyle_PaintModifier.hpp>

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
typedef ::SubArray< ::poi::sl::usermodel::PaintStyle_PaintModifier, ::java::lang::EnumArray > PaintStyle_PaintModifierArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::PaintStyle_PaintModifier::PaintStyle_PaintModifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::PaintStyle_PaintModifier::PaintStyle_PaintModifier(::java::lang::String* name, int ordinal)
    : PaintStyle_PaintModifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::NONE = new ::poi::sl::usermodel::PaintStyle_PaintModifier(u"NONE"_j, 0);
poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::NORM = new ::poi::sl::usermodel::PaintStyle_PaintModifier(u"NORM"_j, 1);
poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN = new ::poi::sl::usermodel::PaintStyle_PaintModifier(u"LIGHTEN"_j, 2);
poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN_LESS = new ::poi::sl::usermodel::PaintStyle_PaintModifier(u"LIGHTEN_LESS"_j, 3);
poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN = new ::poi::sl::usermodel::PaintStyle_PaintModifier(u"DARKEN"_j, 4);
poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN_LESS = new ::poi::sl::usermodel::PaintStyle_PaintModifier(u"DARKEN_LESS"_j, 5);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::PaintStyle_PaintModifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.PaintStyle.PaintModifier", 52);
    return c;
}

poi::sl::usermodel::PaintStyle_PaintModifier* poi::sl::usermodel::PaintStyle_PaintModifier::valueOf(::java::lang::String* a0)
{
    if(DARKEN->toString()->equals(a0))
        return DARKEN;
    if(DARKEN_LESS->toString()->equals(a0))
        return DARKEN_LESS;
    if(LIGHTEN->toString()->equals(a0))
        return LIGHTEN;
    if(LIGHTEN_LESS->toString()->equals(a0))
        return LIGHTEN_LESS;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(NORM->toString()->equals(a0))
        return NORM;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::PaintStyle_PaintModifierArray* poi::sl::usermodel::PaintStyle_PaintModifier::values()
{
    return new poi::sl::usermodel::PaintStyle_PaintModifierArray({
        DARKEN,
        DARKEN_LESS,
        LIGHTEN,
        LIGHTEN_LESS,
        NONE,
        NORM,
    });
}

java::lang::Class* poi::sl::usermodel::PaintStyle_PaintModifier::getClass0()
{
    return class_();
}

