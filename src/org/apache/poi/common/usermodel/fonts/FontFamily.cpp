// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontFamily.java
#include <org/apache/poi/common/usermodel/fonts/FontFamily.hpp>

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
    namespace common
    {
        namespace usermodel
        {
            namespace fonts
            {
typedef ::SubArray< ::poi::common::usermodel::fonts::FontFamily, ::java::lang::EnumArray > FontFamilyArray;
            } // fonts
        } // usermodel
    } // common
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::common::usermodel::fonts::FontFamily::FontFamily(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::common::usermodel::fonts::FontFamily::FontFamily(::java::lang::String* name, int ordinal, int32_t nativeId) 
    : FontFamily(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId);
}

poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::FF_DONTCARE = new ::poi::common::usermodel::fonts::FontFamily(u"FF_DONTCARE"_j, 0, int32_t(0));
poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::FF_ROMAN = new ::poi::common::usermodel::fonts::FontFamily(u"FF_ROMAN"_j, 1, int32_t(1));
poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::FF_SWISS = new ::poi::common::usermodel::fonts::FontFamily(u"FF_SWISS"_j, 2, int32_t(2));
poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::FF_MODERN = new ::poi::common::usermodel::fonts::FontFamily(u"FF_MODERN"_j, 3, int32_t(3));
poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::FF_SCRIPT = new ::poi::common::usermodel::fonts::FontFamily(u"FF_SCRIPT"_j, 4, int32_t(4));
poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::FF_DECORATIVE = new ::poi::common::usermodel::fonts::FontFamily(u"FF_DECORATIVE"_j, 5, int32_t(5));
void poi::common::usermodel::fonts::FontFamily::ctor(::java::lang::String* name, int ordinal, int32_t nativeId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
}

int32_t poi::common::usermodel::fonts::FontFamily::getFlag()
{
    return nativeId;
}

poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::valueOf(int32_t nativeId)
{
    clinit();
    for(auto ff : *npc(values())) {
        if(npc(ff)->nativeId == nativeId) {
            return ff;
        }
    }
    return nullptr;
}

poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::valueOfPitchFamily(int8_t pitchAndFamily)
{
    clinit();
    return valueOf(static_cast<int8_t>(static_cast<uint32_t>(pitchAndFamily) >> int32_t(4)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::common::usermodel::fonts::FontFamily::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontFamily", 48);
    return c;
}

java::lang::Enum* poi::common::usermodel::fonts::FontFamily::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::common::usermodel::fonts::FontFamily* poi::common::usermodel::fonts::FontFamily::valueOf(::java::lang::String* a0)
{
    if(FF_DECORATIVE->toString()->equals(a0))
        return FF_DECORATIVE;
    if(FF_DONTCARE->toString()->equals(a0))
        return FF_DONTCARE;
    if(FF_MODERN->toString()->equals(a0))
        return FF_MODERN;
    if(FF_ROMAN->toString()->equals(a0))
        return FF_ROMAN;
    if(FF_SCRIPT->toString()->equals(a0))
        return FF_SCRIPT;
    if(FF_SWISS->toString()->equals(a0))
        return FF_SWISS;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::common::usermodel::fonts::FontFamilyArray* poi::common::usermodel::fonts::FontFamily::values()
{
    return new poi::common::usermodel::fonts::FontFamilyArray({
        FF_DECORATIVE,
        FF_DONTCARE,
        FF_MODERN,
        FF_ROMAN,
        FF_SCRIPT,
        FF_SWISS,
    });
}

java::lang::Class* poi::common::usermodel::fonts::FontFamily::getClass0()
{
    return class_();
}

