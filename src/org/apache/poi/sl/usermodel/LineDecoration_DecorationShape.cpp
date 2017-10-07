// Generated from /POI/java/org/apache/poi/sl/usermodel/LineDecoration.java
#include <org/apache/poi/sl/usermodel/LineDecoration_DecorationShape.hpp>

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
typedef ::SubArray< ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape, ::java::lang::EnumArray > LineDecoration_DecorationShapeArray;
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

org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::LineDecoration_DecorationShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::LineDecoration_DecorationShape(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId) 
    : LineDecoration_DecorationShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId);
}

org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::NONE = new ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape(u"NONE"_j, 0, int32_t(0), int32_t(1));
org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::TRIANGLE = new ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape(u"TRIANGLE"_j, 1, int32_t(1), int32_t(2));
org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::STEALTH = new ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape(u"STEALTH"_j, 2, int32_t(2), int32_t(3));
org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::DIAMOND = new ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape(u"DIAMOND"_j, 3, int32_t(3), int32_t(4));
org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::OVAL = new ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape(u"OVAL"_j, 4, int32_t(4), int32_t(5));
org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::ARROW = new ::org::apache::poi::sl::usermodel::LineDecoration_DecorationShape(u"ARROW"_j, 5, int32_t(5), int32_t(6));
void org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::fromNativeId(int32_t nativeId)
{
    clinit();
    for(auto ld : *npc(values())) {
        if(npc(ld)->nativeId == nativeId)
            return ld;

    }
    return nullptr;
}

org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::fromOoxmlId(int32_t ooxmlId)
{
    clinit();
    for(auto ds : *npc(values())) {
        if(npc(ds)->ooxmlId == ooxmlId)
            return ds;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.LineDecoration.DecorationShape", 58);
    return c;
}

org::apache::poi::sl::usermodel::LineDecoration_DecorationShape* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::valueOf(::java::lang::String* a0)
{
    if(ARROW->toString()->equals(a0))
        return ARROW;
    if(DIAMOND->toString()->equals(a0))
        return DIAMOND;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(OVAL->toString()->equals(a0))
        return OVAL;
    if(STEALTH->toString()->equals(a0))
        return STEALTH;
    if(TRIANGLE->toString()->equals(a0))
        return TRIANGLE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::LineDecoration_DecorationShapeArray* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::values()
{
    return new org::apache::poi::sl::usermodel::LineDecoration_DecorationShapeArray({
        ARROW,
        DIAMOND,
        NONE,
        OVAL,
        STEALTH,
        TRIANGLE,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::LineDecoration_DecorationShape::getClass0()
{
    return class_();
}

