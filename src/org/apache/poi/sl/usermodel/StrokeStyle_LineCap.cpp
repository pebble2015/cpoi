// Generated from /POI/java/org/apache/poi/sl/usermodel/StrokeStyle.java
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineCap.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::StrokeStyle_LineCap, ::java::lang::EnumArray > StrokeStyle_LineCapArray;
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

org::apache::poi::sl::usermodel::StrokeStyle_LineCap::StrokeStyle_LineCap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCap::StrokeStyle_LineCap(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId) 
    : StrokeStyle_LineCap(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId);
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCap* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::ROUND = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCap(u"ROUND"_j, 0, int32_t(0), int32_t(1));
org::apache::poi::sl::usermodel::StrokeStyle_LineCap* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::SQUARE = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCap(u"SQUARE"_j, 1, int32_t(1), int32_t(2));
org::apache::poi::sl::usermodel::StrokeStyle_LineCap* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::FLAT = new ::org::apache::poi::sl::usermodel::StrokeStyle_LineCap(u"FLAT"_j, 2, int32_t(2), int32_t(3));
void org::apache::poi::sl::usermodel::StrokeStyle_LineCap::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCap* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::fromNativeId(int32_t nativeId)
{
    clinit();
    for(auto ld : *npc(values())) {
        if(npc(ld)->nativeId == nativeId)
            return ld;

    }
    return nullptr;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCap* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::fromOoxmlId(int32_t ooxmlId)
{
    clinit();
    for(auto lc : *npc(values())) {
        if(npc(lc)->ooxmlId == ooxmlId)
            return lc;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.StrokeStyle.LineCap", 47);
    return c;
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCap* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::valueOf(::java::lang::String* a0)
{
    if(FLAT->toString()->equals(a0))
        return FLAT;
    if(ROUND->toString()->equals(a0))
        return ROUND;
    if(SQUARE->toString()->equals(a0))
        return SQUARE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::StrokeStyle_LineCapArray* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::values()
{
    return new org::apache::poi::sl::usermodel::StrokeStyle_LineCapArray({
        FLAT,
        ROUND,
        SQUARE,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::StrokeStyle_LineCap::getClass0()
{
    return class_();
}

