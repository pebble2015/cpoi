// Generated from /POI/java/org/apache/poi/sl/usermodel/StrokeStyle.java
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineDash.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::poi::sl::usermodel::StrokeStyle_LineDash, ::java::lang::EnumArray > StrokeStyle_LineDashArray;
        } // usermodel
    } // sl
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::usermodel::StrokeStyle_LineDash::StrokeStyle_LineDash(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::StrokeStyle_LineDash::StrokeStyle_LineDash(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::int32_tArray*/*...*/ pattern) 
    : StrokeStyle_LineDash(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId,pattern);
}

poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::SOLID = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"SOLID"_j, 0, int32_t(1), int32_t(1), nullptr);
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"DOT"_j, 1, int32_t(6), int32_t(2), new ::int32_tArray({int32_t(1), int32_t(1)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::DASH = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"DASH"_j, 2, int32_t(7), int32_t(3), new ::int32_tArray({int32_t(3), int32_t(4)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::DASH_DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"DASH_DOT"_j, 3, int32_t(9), int32_t(5), new ::int32_tArray({int32_t(4), int32_t(3), int32_t(1), int32_t(3)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::LG_DASH = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"LG_DASH"_j, 4, int32_t(8), int32_t(4), new ::int32_tArray({int32_t(8), int32_t(3)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::LG_DASH_DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"LG_DASH_DOT"_j, 5, int32_t(10), int32_t(6), new ::int32_tArray({int32_t(8), int32_t(3), int32_t(1), int32_t(3)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::LG_DASH_DOT_DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"LG_DASH_DOT_DOT"_j, 6, int32_t(11), int32_t(7), new ::int32_tArray({int32_t(8), int32_t(3), int32_t(1), int32_t(3), int32_t(1), int32_t(3)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::SYS_DASH = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"SYS_DASH"_j, 7, int32_t(2), int32_t(8), new ::int32_tArray({int32_t(2), int32_t(2)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::SYS_DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"SYS_DOT"_j, 8, int32_t(3), int32_t(9), new ::int32_tArray({int32_t(1), int32_t(1)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::SYS_DASH_DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"SYS_DASH_DOT"_j, 9, int32_t(4), int32_t(10), new ::int32_tArray({int32_t(2), int32_t(2), int32_t(1), int32_t(1)}));
poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::SYS_DASH_DOT_DOT = new ::poi::sl::usermodel::StrokeStyle_LineDash(u"SYS_DASH_DOT_DOT"_j, 10, int32_t(5), int32_t(11), new ::int32_tArray({int32_t(2), int32_t(2), int32_t(1), int32_t(1), int32_t(1), int32_t(1)}));
void poi::sl::usermodel::StrokeStyle_LineDash::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::int32_tArray*/*...*/ pattern)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
    this->pattern = (pattern == nullptr || npc(pattern)->length == 0) ? static_cast< ::int32_tArray* >(nullptr) : pattern;
}

poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::fromNativeId(int32_t nativeId)
{
    clinit();
    for(auto ld : *npc(values())) {
        if(npc(ld)->nativeId == nativeId)
            return ld;

    }
    return nullptr;
}

poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::fromOoxmlId(int32_t ooxmlId)
{
    clinit();
    for(auto ld : *npc(values())) {
        if(npc(ld)->ooxmlId == ooxmlId)
            return ld;

    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::StrokeStyle_LineDash::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.StrokeStyle.LineDash", 48);
    return c;
}

poi::sl::usermodel::StrokeStyle_LineDash* poi::sl::usermodel::StrokeStyle_LineDash::valueOf(::java::lang::String* a0)
{
    if(DASH->toString()->equals(a0))
        return DASH;
    if(DASH_DOT->toString()->equals(a0))
        return DASH_DOT;
    if(DOT->toString()->equals(a0))
        return DOT;
    if(LG_DASH->toString()->equals(a0))
        return LG_DASH;
    if(LG_DASH_DOT->toString()->equals(a0))
        return LG_DASH_DOT;
    if(LG_DASH_DOT_DOT->toString()->equals(a0))
        return LG_DASH_DOT_DOT;
    if(SOLID->toString()->equals(a0))
        return SOLID;
    if(SYS_DASH->toString()->equals(a0))
        return SYS_DASH;
    if(SYS_DASH_DOT->toString()->equals(a0))
        return SYS_DASH_DOT;
    if(SYS_DASH_DOT_DOT->toString()->equals(a0))
        return SYS_DASH_DOT_DOT;
    if(SYS_DOT->toString()->equals(a0))
        return SYS_DOT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::StrokeStyle_LineDashArray* poi::sl::usermodel::StrokeStyle_LineDash::values()
{
    return new poi::sl::usermodel::StrokeStyle_LineDashArray({
        DASH,
        DASH_DOT,
        DOT,
        LG_DASH,
        LG_DASH_DOT,
        LG_DASH_DOT_DOT,
        SOLID,
        SYS_DASH,
        SYS_DASH_DOT,
        SYS_DASH_DOT_DOT,
        SYS_DOT,
    });
}

java::lang::Class* poi::sl::usermodel::StrokeStyle_LineDash::getClass0()
{
    return class_();
}

