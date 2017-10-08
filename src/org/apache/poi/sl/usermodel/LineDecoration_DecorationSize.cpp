// Generated from /POI/java/org/apache/poi/sl/usermodel/LineDecoration.java
#include <org/apache/poi/sl/usermodel/LineDecoration_DecorationSize.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
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
typedef ::SubArray< ::poi::sl::usermodel::LineDecoration_DecorationSize, ::java::lang::EnumArray > LineDecoration_DecorationSizeArray;
        } // usermodel
    } // sl
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::usermodel::LineDecoration_DecorationSize::LineDecoration_DecorationSize(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::LineDecoration_DecorationSize::LineDecoration_DecorationSize(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId) 
    : LineDecoration_DecorationSize(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId);
}

poi::sl::usermodel::LineDecoration_DecorationSize* poi::sl::usermodel::LineDecoration_DecorationSize::SMALL = new ::poi::sl::usermodel::LineDecoration_DecorationSize(u"SMALL"_j, 0, int32_t(0), int32_t(1));
poi::sl::usermodel::LineDecoration_DecorationSize* poi::sl::usermodel::LineDecoration_DecorationSize::MEDIUM = new ::poi::sl::usermodel::LineDecoration_DecorationSize(u"MEDIUM"_j, 1, int32_t(1), int32_t(2));
poi::sl::usermodel::LineDecoration_DecorationSize* poi::sl::usermodel::LineDecoration_DecorationSize::LARGE = new ::poi::sl::usermodel::LineDecoration_DecorationSize(u"LARGE"_j, 2, int32_t(2), int32_t(3));
void poi::sl::usermodel::LineDecoration_DecorationSize::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

poi::sl::usermodel::LineDecoration_DecorationSize* poi::sl::usermodel::LineDecoration_DecorationSize::fromNativeId(int32_t nativeId)
{
    clinit();
    for(auto ld : *npc(values())) {
        if(npc(ld)->nativeId == nativeId)
            return ld;

    }
    return nullptr;
}

poi::sl::usermodel::LineDecoration_DecorationSize* poi::sl::usermodel::LineDecoration_DecorationSize::fromOoxmlId(int32_t ooxmlId)
{
    clinit();
    for(auto ds : *npc(values())) {
        if(npc(ds)->ooxmlId == ooxmlId)
            return ds;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::LineDecoration_DecorationSize::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.LineDecoration.DecorationSize", 57);
    return c;
}

poi::sl::usermodel::LineDecoration_DecorationSize* poi::sl::usermodel::LineDecoration_DecorationSize::valueOf(::java::lang::String* a0)
{
    if(LARGE->toString()->equals(a0))
        return LARGE;
    if(MEDIUM->toString()->equals(a0))
        return MEDIUM;
    if(SMALL->toString()->equals(a0))
        return SMALL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::LineDecoration_DecorationSizeArray* poi::sl::usermodel::LineDecoration_DecorationSize::values()
{
    return new poi::sl::usermodel::LineDecoration_DecorationSizeArray({
        LARGE,
        MEDIUM,
        SMALL,
    });
}

java::lang::Class* poi::sl::usermodel::LineDecoration_DecorationSize::getClass0()
{
    return class_();
}

