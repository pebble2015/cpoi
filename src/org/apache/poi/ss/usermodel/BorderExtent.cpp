// Generated from /POI/java/org/apache/poi/ss/usermodel/BorderExtent.java
#include <org/apache/poi/ss/usermodel/BorderExtent.hpp>

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
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::BorderExtent, ::java::lang::EnumArray > BorderExtentArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::BorderExtent::BorderExtent(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::BorderExtent::BorderExtent(::java::lang::String* name, int ordinal)
    : BorderExtent(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::NONE = new ::poi::ss::usermodel::BorderExtent(u"NONE"_j, 0);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::ALL = new ::poi::ss::usermodel::BorderExtent(u"ALL"_j, 1);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::INSIDE = new ::poi::ss::usermodel::BorderExtent(u"INSIDE"_j, 2);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::OUTSIDE = new ::poi::ss::usermodel::BorderExtent(u"OUTSIDE"_j, 3);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::TOP = new ::poi::ss::usermodel::BorderExtent(u"TOP"_j, 4);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::BOTTOM = new ::poi::ss::usermodel::BorderExtent(u"BOTTOM"_j, 5);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::LEFT = new ::poi::ss::usermodel::BorderExtent(u"LEFT"_j, 6);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::RIGHT = new ::poi::ss::usermodel::BorderExtent(u"RIGHT"_j, 7);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::HORIZONTAL = new ::poi::ss::usermodel::BorderExtent(u"HORIZONTAL"_j, 8);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::INSIDE_HORIZONTAL = new ::poi::ss::usermodel::BorderExtent(u"INSIDE_HORIZONTAL"_j, 9);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::OUTSIDE_HORIZONTAL = new ::poi::ss::usermodel::BorderExtent(u"OUTSIDE_HORIZONTAL"_j, 10);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::VERTICAL = new ::poi::ss::usermodel::BorderExtent(u"VERTICAL"_j, 11);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::INSIDE_VERTICAL = new ::poi::ss::usermodel::BorderExtent(u"INSIDE_VERTICAL"_j, 12);
poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::OUTSIDE_VERTICAL = new ::poi::ss::usermodel::BorderExtent(u"OUTSIDE_VERTICAL"_j, 13);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::BorderExtent::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.BorderExtent", 40);
    return c;
}

poi::ss::usermodel::BorderExtent* poi::ss::usermodel::BorderExtent::valueOf(::java::lang::String* a0)
{
    if(ALL->toString()->equals(a0))
        return ALL;
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(HORIZONTAL->toString()->equals(a0))
        return HORIZONTAL;
    if(INSIDE->toString()->equals(a0))
        return INSIDE;
    if(INSIDE_HORIZONTAL->toString()->equals(a0))
        return INSIDE_HORIZONTAL;
    if(INSIDE_VERTICAL->toString()->equals(a0))
        return INSIDE_VERTICAL;
    if(LEFT->toString()->equals(a0))
        return LEFT;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(OUTSIDE->toString()->equals(a0))
        return OUTSIDE;
    if(OUTSIDE_HORIZONTAL->toString()->equals(a0))
        return OUTSIDE_HORIZONTAL;
    if(OUTSIDE_VERTICAL->toString()->equals(a0))
        return OUTSIDE_VERTICAL;
    if(RIGHT->toString()->equals(a0))
        return RIGHT;
    if(TOP->toString()->equals(a0))
        return TOP;
    if(VERTICAL->toString()->equals(a0))
        return VERTICAL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::BorderExtentArray* poi::ss::usermodel::BorderExtent::values()
{
    return new poi::ss::usermodel::BorderExtentArray({
        ALL,
        BOTTOM,
        HORIZONTAL,
        INSIDE,
        INSIDE_HORIZONTAL,
        INSIDE_VERTICAL,
        LEFT,
        NONE,
        OUTSIDE,
        OUTSIDE_HORIZONTAL,
        OUTSIDE_VERTICAL,
        RIGHT,
        TOP,
        VERTICAL,
    });
}

java::lang::Class* poi::ss::usermodel::BorderExtent::getClass0()
{
    return class_();
}

