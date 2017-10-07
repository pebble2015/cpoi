// Generated from /POI/java/org/apache/poi/sl/usermodel/RectAlign.java
#include <org/apache/poi/sl/usermodel/RectAlign.hpp>

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::RectAlign, ::java::lang::EnumArray > RectAlignArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

org::apache::poi::sl::usermodel::RectAlign::RectAlign(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::RectAlign::RectAlign(::java::lang::String* name, int ordinal, ::java::lang::String* dir) 
    : RectAlign(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, dir);
}

org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::TOP_LEFT = new ::org::apache::poi::sl::usermodel::RectAlign(u"TOP_LEFT"_j, 0, u"tl"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::TOP = new ::org::apache::poi::sl::usermodel::RectAlign(u"TOP"_j, 1, u"t"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::TOP_RIGHT = new ::org::apache::poi::sl::usermodel::RectAlign(u"TOP_RIGHT"_j, 2, u"tr"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::LEFT = new ::org::apache::poi::sl::usermodel::RectAlign(u"LEFT"_j, 3, u"l"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::CENTER = new ::org::apache::poi::sl::usermodel::RectAlign(u"CENTER"_j, 4, u"ctr"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::RIGHT = new ::org::apache::poi::sl::usermodel::RectAlign(u"RIGHT"_j, 5, u"r"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::BOTTOM_LEFT = new ::org::apache::poi::sl::usermodel::RectAlign(u"BOTTOM_LEFT"_j, 6, u"bl"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::BOTTOM = new ::org::apache::poi::sl::usermodel::RectAlign(u"BOTTOM"_j, 7, u"b"_j);
org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::BOTTOM_RIGHT = new ::org::apache::poi::sl::usermodel::RectAlign(u"BOTTOM_RIGHT"_j, 8, u"br"_j);
void org::apache::poi::sl::usermodel::RectAlign::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* dir)
{
    super::ctor(name, ordinal);
    this->dir = dir;
}

java::lang::String* org::apache::poi::sl::usermodel::RectAlign::toString()
{
    return dir;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::RectAlign::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.RectAlign", 37);
    return c;
}

org::apache::poi::sl::usermodel::RectAlign* org::apache::poi::sl::usermodel::RectAlign::valueOf(::java::lang::String* a0)
{
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(BOTTOM_LEFT->toString()->equals(a0))
        return BOTTOM_LEFT;
    if(BOTTOM_RIGHT->toString()->equals(a0))
        return BOTTOM_RIGHT;
    if(CENTER->toString()->equals(a0))
        return CENTER;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    if(TOP->toString()->equals(a0))
        return TOP;
    if(TOP_LEFT->toString()->equals(a0))
        return TOP_LEFT;
    if(TOP_RIGHT->toString()->equals(a0))
        return TOP_RIGHT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::RectAlignArray* org::apache::poi::sl::usermodel::RectAlign::values()
{
    return new org::apache::poi::sl::usermodel::RectAlignArray({
        BOTTOM,
        BOTTOM_LEFT,
        BOTTOM_RIGHT,
        CENTER,
        LEFT,
        RIGHT,
        TOP,
        TOP_LEFT,
        TOP_RIGHT,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::RectAlign::getClass0()
{
    return class_();
}

