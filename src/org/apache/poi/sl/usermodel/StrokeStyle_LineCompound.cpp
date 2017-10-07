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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound, ::java::lang::EnumArray > StrokeStyle_LineCompoundArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::StrokeStyle_LineCompound(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::StrokeStyle_LineCompound(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId) 
    : StrokeStyle_LineCompound(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId);
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::SINGLE = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound(u"SINGLE"_j, 0, int32_t(0), int32_t(1));
org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::DOUBLE = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound(u"DOUBLE"_j, 1, int32_t(1), int32_t(2));
org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::THICK_THIN = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound(u"THICK_THIN"_j, 2, int32_t(2), int32_t(3));
org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::THIN_THICK = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound(u"THIN_THICK"_j, 3, int32_t(3), int32_t(4));
org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::TRIPLE = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound(u"TRIPLE"_j, 4, int32_t(4), int32_t(5));
void org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::fromNativeId(int32_t nativeId)
{
    clinit();
    for(auto lc : *npc(values())) {
        if(npc(lc)->nativeId == nativeId)
            return lc;

    }
    return nullptr;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::fromOoxmlId(int32_t ooxmlId)
{
    clinit();
    for(auto lc : *npc(values())) {
        if(npc(lc)->ooxmlId == ooxmlId)
            return lc;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.StrokeStyle.LineCompound", 52);
    return c;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::valueOf(::java::lang::String* a0)
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

org::apache::poi::sl::usermodel::StrokeStyle_LineCompoundArray* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::values()
{
    return new org::apache::poi::sl::usermodel::StrokeStyle_LineCompoundArray({
        DOUBLE,
        SINGLE,
        THICK_THIN,
        THIN_THICK,
        TRIPLE,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::StrokeStyle_LineCompound::getClass0()
{
    return class_();
}

