// Generated from /POI/java/org/apache/poi/sl/usermodel/VerticalAlignment.java
#include <org/apache/poi/sl/usermodel/VerticalAlignment.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::VerticalAlignment, ::java::lang::EnumArray > VerticalAlignmentArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

org::apache::poi::sl::usermodel::VerticalAlignment::VerticalAlignment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::VerticalAlignment::VerticalAlignment(::java::lang::String* name, int ordinal)
    : VerticalAlignment(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::sl::usermodel::VerticalAlignment* org::apache::poi::sl::usermodel::VerticalAlignment::TOP = new ::org::apache::poi::sl::usermodel::VerticalAlignment(u"TOP"_j, 0);
org::apache::poi::sl::usermodel::VerticalAlignment* org::apache::poi::sl::usermodel::VerticalAlignment::MIDDLE = new ::org::apache::poi::sl::usermodel::VerticalAlignment(u"MIDDLE"_j, 1);
org::apache::poi::sl::usermodel::VerticalAlignment* org::apache::poi::sl::usermodel::VerticalAlignment::BOTTOM = new ::org::apache::poi::sl::usermodel::VerticalAlignment(u"BOTTOM"_j, 2);
org::apache::poi::sl::usermodel::VerticalAlignment* org::apache::poi::sl::usermodel::VerticalAlignment::JUSTIFIED = new ::org::apache::poi::sl::usermodel::VerticalAlignment(u"JUSTIFIED"_j, 3);
org::apache::poi::sl::usermodel::VerticalAlignment* org::apache::poi::sl::usermodel::VerticalAlignment::DISTRIBUTED = new ::org::apache::poi::sl::usermodel::VerticalAlignment(u"DISTRIBUTED"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::VerticalAlignment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.VerticalAlignment", 45);
    return c;
}

org::apache::poi::sl::usermodel::VerticalAlignment* org::apache::poi::sl::usermodel::VerticalAlignment::valueOf(::java::lang::String* a0)
{
    if(BOTTOM->toString()->equals(a0))
        return BOTTOM;
    if(DISTRIBUTED->toString()->equals(a0))
        return DISTRIBUTED;
    if(JUSTIFIED->toString()->equals(a0))
        return JUSTIFIED;
    if(MIDDLE->toString()->equals(a0))
        return MIDDLE;
    if(TOP->toString()->equals(a0))
        return TOP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::VerticalAlignmentArray* org::apache::poi::sl::usermodel::VerticalAlignment::values()
{
    return new org::apache::poi::sl::usermodel::VerticalAlignmentArray({
        BOTTOM,
        DISTRIBUTED,
        JUSTIFIED,
        MIDDLE,
        TOP,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::VerticalAlignment::getClass0()
{
    return class_();
}

