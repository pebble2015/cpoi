// Generated from /POI/java/org/apache/poi/sl/usermodel/TextShape.java
#include <org/apache/poi/sl/usermodel/TextShape_TextAutofit.hpp>

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
typedef ::SubArray< ::poi::sl::usermodel::TextShape_TextAutofit, ::java::lang::EnumArray > TextShape_TextAutofitArray;
        } // usermodel
    } // sl
} // poi

poi::sl::usermodel::TextShape_TextAutofit::TextShape_TextAutofit(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::TextShape_TextAutofit::TextShape_TextAutofit(::java::lang::String* name, int ordinal)
    : TextShape_TextAutofit(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::sl::usermodel::TextShape_TextAutofit* poi::sl::usermodel::TextShape_TextAutofit::NONE = new ::poi::sl::usermodel::TextShape_TextAutofit(u"NONE"_j, 0);
poi::sl::usermodel::TextShape_TextAutofit* poi::sl::usermodel::TextShape_TextAutofit::NORMAL = new ::poi::sl::usermodel::TextShape_TextAutofit(u"NORMAL"_j, 1);
poi::sl::usermodel::TextShape_TextAutofit* poi::sl::usermodel::TextShape_TextAutofit::SHAPE = new ::poi::sl::usermodel::TextShape_TextAutofit(u"SHAPE"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::TextShape_TextAutofit::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TextShape.TextAutofit", 49);
    return c;
}

poi::sl::usermodel::TextShape_TextAutofit* poi::sl::usermodel::TextShape_TextAutofit::valueOf(::java::lang::String* a0)
{
    if(NONE->toString()->equals(a0))
        return NONE;
    if(NORMAL->toString()->equals(a0))
        return NORMAL;
    if(SHAPE->toString()->equals(a0))
        return SHAPE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::TextShape_TextAutofitArray* poi::sl::usermodel::TextShape_TextAutofit::values()
{
    return new poi::sl::usermodel::TextShape_TextAutofitArray({
        NONE,
        NORMAL,
        SHAPE,
    });
}

java::lang::Class* poi::sl::usermodel::TextShape_TextAutofit::getClass0()
{
    return class_();
}

