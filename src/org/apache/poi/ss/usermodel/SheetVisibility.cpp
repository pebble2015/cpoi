// Generated from /POI/java/org/apache/poi/ss/usermodel/SheetVisibility.java
#include <org/apache/poi/ss/usermodel/SheetVisibility.hpp>

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
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::SheetVisibility, ::java::lang::EnumArray > SheetVisibilityArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::SheetVisibility::SheetVisibility(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::SheetVisibility::SheetVisibility(::java::lang::String* name, int ordinal)
    : SheetVisibility(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::SheetVisibility* org::apache::poi::ss::usermodel::SheetVisibility::VISIBLE = new ::org::apache::poi::ss::usermodel::SheetVisibility(u"VISIBLE"_j, 0);
org::apache::poi::ss::usermodel::SheetVisibility* org::apache::poi::ss::usermodel::SheetVisibility::HIDDEN = new ::org::apache::poi::ss::usermodel::SheetVisibility(u"HIDDEN"_j, 1);
org::apache::poi::ss::usermodel::SheetVisibility* org::apache::poi::ss::usermodel::SheetVisibility::VERY_HIDDEN = new ::org::apache::poi::ss::usermodel::SheetVisibility(u"VERY_HIDDEN"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::SheetVisibility::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.SheetVisibility", 43);
    return c;
}

org::apache::poi::ss::usermodel::SheetVisibility* org::apache::poi::ss::usermodel::SheetVisibility::valueOf(::java::lang::String* a0)
{
    if(HIDDEN->toString()->equals(a0))
        return HIDDEN;
    if(VERY_HIDDEN->toString()->equals(a0))
        return VERY_HIDDEN;
    if(VISIBLE->toString()->equals(a0))
        return VISIBLE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::SheetVisibilityArray* org::apache::poi::ss::usermodel::SheetVisibility::values()
{
    return new org::apache::poi::ss::usermodel::SheetVisibilityArray({
        HIDDEN,
        VERY_HIDDEN,
        VISIBLE,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::SheetVisibility::getClass0()
{
    return class_();
}

