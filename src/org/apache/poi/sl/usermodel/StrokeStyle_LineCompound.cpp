// Generated from /POI/java/org/apache/poi/sl/usermodel/StrokeStyle.java
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineCompound.hpp>

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
typedef ::SubArray< ::poi::sl::usermodel::StrokeStyle_LineCompound, ::java::lang::EnumArray > StrokeStyle_LineCompoundArray;
        } // usermodel
    } // sl
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::usermodel::StrokeStyle_LineCompound::StrokeStyle_LineCompound(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::StrokeStyle_LineCompound::StrokeStyle_LineCompound(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId) 
    : StrokeStyle_LineCompound(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId);
}

poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::SINGLE = new ::poi::sl::usermodel::StrokeStyle_LineCompound(u"SINGLE"_j, 0, int32_t(0), int32_t(1));
poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::DOUBLE = new ::poi::sl::usermodel::StrokeStyle_LineCompound(u"DOUBLE"_j, 1, int32_t(1), int32_t(2));
poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::THICK_THIN = new ::poi::sl::usermodel::StrokeStyle_LineCompound(u"THICK_THIN"_j, 2, int32_t(2), int32_t(3));
poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::THIN_THICK = new ::poi::sl::usermodel::StrokeStyle_LineCompound(u"THIN_THICK"_j, 3, int32_t(3), int32_t(4));
poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::TRIPLE = new ::poi::sl::usermodel::StrokeStyle_LineCompound(u"TRIPLE"_j, 4, int32_t(4), int32_t(5));
void poi::sl::usermodel::StrokeStyle_LineCompound::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::fromNativeId(int32_t nativeId)
{
    clinit();
    for(auto lc : *npc(values())) {
        if(npc(lc)->nativeId == nativeId)
            return lc;

    }
    return nullptr;
}

poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::fromOoxmlId(int32_t ooxmlId)
{
    clinit();
    for(auto lc : *npc(values())) {
        if(npc(lc)->ooxmlId == ooxmlId)
            return lc;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::StrokeStyle_LineCompound::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.StrokeStyle.LineCompound", 52);
    return c;
}

poi::sl::usermodel::StrokeStyle_LineCompound* poi::sl::usermodel::StrokeStyle_LineCompound::valueOf(::java::lang::String* a0)
{
    if(DOUBLE->toString()->equals(a0))
        return DOUBLE;
    if(SINGLE->toString()->equals(a0))
        return SINGLE;
    if(THICK_THIN->toString()->equals(a0))
        return THICK_THIN;
    if(THIN_THICK->toString()->equals(a0))
        return THIN_THICK;
    if(TRIPLE->toString()->equals(a0))
        return TRIPLE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::StrokeStyle_LineCompoundArray* poi::sl::usermodel::StrokeStyle_LineCompound::values()
{
    return new poi::sl::usermodel::StrokeStyle_LineCompoundArray({
        DOUBLE,
        SINGLE,
        THICK_THIN,
        THIN_THICK,
        TRIPLE,
    });
}

java::lang::Class* poi::sl::usermodel::StrokeStyle_LineCompound::getClass0()
{
    return class_();
}

