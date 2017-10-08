// Generated from /POI/java/org/apache/poi/ss/usermodel/ClientAnchor.java
#include <org/apache/poi/ss/usermodel/ClientAnchor_AnchorType.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::ClientAnchor_AnchorType, ::java::lang::EnumArray > ClientAnchor_AnchorTypeArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::ClientAnchor_AnchorType::ClientAnchor_AnchorType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::ClientAnchor_AnchorType::ClientAnchor_AnchorType(::java::lang::String* name, int ordinal, int32_t value) 
    : ClientAnchor_AnchorType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, value);
}

poi::ss::usermodel::ClientAnchor_AnchorType* poi::ss::usermodel::ClientAnchor_AnchorType::MOVE_AND_RESIZE = new ::poi::ss::usermodel::ClientAnchor_AnchorType(u"MOVE_AND_RESIZE"_j, 0, int32_t(0));
poi::ss::usermodel::ClientAnchor_AnchorType* poi::ss::usermodel::ClientAnchor_AnchorType::DONT_MOVE_DO_RESIZE = new ::poi::ss::usermodel::ClientAnchor_AnchorType(u"DONT_MOVE_DO_RESIZE"_j, 1, int32_t(1));
poi::ss::usermodel::ClientAnchor_AnchorType* poi::ss::usermodel::ClientAnchor_AnchorType::MOVE_DONT_RESIZE = new ::poi::ss::usermodel::ClientAnchor_AnchorType(u"MOVE_DONT_RESIZE"_j, 2, int32_t(2));
poi::ss::usermodel::ClientAnchor_AnchorType* poi::ss::usermodel::ClientAnchor_AnchorType::DONT_MOVE_AND_RESIZE = new ::poi::ss::usermodel::ClientAnchor_AnchorType(u"DONT_MOVE_AND_RESIZE"_j, 3, int32_t(3));
void poi::ss::usermodel::ClientAnchor_AnchorType::ctor(::java::lang::String* name, int ordinal, int32_t value)
{
    super::ctor(name, ordinal);
    this->value = static_cast< int16_t >(value);
}

poi::ss::usermodel::ClientAnchor_AnchorType* poi::ss::usermodel::ClientAnchor_AnchorType::byId(int32_t value)
{
    clinit();
    return (*values())[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::ClientAnchor_AnchorType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ClientAnchor.AnchorType", 51);
    return c;
}

poi::ss::usermodel::ClientAnchor_AnchorType* poi::ss::usermodel::ClientAnchor_AnchorType::valueOf(::java::lang::String* a0)
{
    if(DONT_MOVE_AND_RESIZE->toString()->equals(a0))
        return DONT_MOVE_AND_RESIZE;
    if(DONT_MOVE_DO_RESIZE->toString()->equals(a0))
        return DONT_MOVE_DO_RESIZE;
    if(MOVE_AND_RESIZE->toString()->equals(a0))
        return MOVE_AND_RESIZE;
    if(MOVE_DONT_RESIZE->toString()->equals(a0))
        return MOVE_DONT_RESIZE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::ClientAnchor_AnchorTypeArray* poi::ss::usermodel::ClientAnchor_AnchorType::values()
{
    return new poi::ss::usermodel::ClientAnchor_AnchorTypeArray({
        DONT_MOVE_AND_RESIZE,
        DONT_MOVE_DO_RESIZE,
        MOVE_AND_RESIZE,
        MOVE_DONT_RESIZE,
    });
}

java::lang::Class* poi::ss::usermodel::ClientAnchor_AnchorType::getClass0()
{
    return class_();
}

