// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontPitch.java
#include <org/apache/poi/common/usermodel/fonts/FontPitch.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontFamily.hpp>
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
typedef ::SubArray< ::poi::common::usermodel::fonts::FontPitch, ::java::lang::EnumArray > FontPitchArray;
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

poi::common::usermodel::fonts::FontPitch::FontPitch(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::common::usermodel::fonts::FontPitch::FontPitch(::java::lang::String* name, int ordinal, int32_t nativeId) 
    : FontPitch(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId);
}

poi::common::usermodel::fonts::FontPitch* poi::common::usermodel::fonts::FontPitch::DEFAULT = new ::poi::common::usermodel::fonts::FontPitch(u"DEFAULT"_j, 0, int32_t(0));
poi::common::usermodel::fonts::FontPitch* poi::common::usermodel::fonts::FontPitch::FIXED = new ::poi::common::usermodel::fonts::FontPitch(u"FIXED"_j, 1, int32_t(1));
poi::common::usermodel::fonts::FontPitch* poi::common::usermodel::fonts::FontPitch::VARIABLE = new ::poi::common::usermodel::fonts::FontPitch(u"VARIABLE"_j, 2, int32_t(2));
void poi::common::usermodel::fonts::FontPitch::ctor(::java::lang::String* name, int ordinal, int32_t nativeId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
}

int32_t poi::common::usermodel::fonts::FontPitch::getNativeId()
{
    return nativeId;
}

poi::common::usermodel::fonts::FontPitch* poi::common::usermodel::fonts::FontPitch::valueOf(int32_t flag)
{
    clinit();
    for(auto fp : *npc(values())) {
        if(npc(fp)->nativeId == flag)
            return fp;

    }
    return nullptr;
}

int8_t poi::common::usermodel::fonts::FontPitch::getNativeId(FontPitch* pitch, FontFamily* family)
{
    clinit();
    return static_cast< int8_t >((npc(pitch)->getNativeId() | (npc(family)->getFlag() << int32_t(4))));
}

poi::common::usermodel::fonts::FontPitch* poi::common::usermodel::fonts::FontPitch::valueOfPitchFamily(int8_t pitchAndFamily)
{
    clinit();
    return valueOf(pitchAndFamily & int32_t(3));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::common::usermodel::fonts::FontPitch::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontPitch", 47);
    return c;
}

java::lang::Enum* poi::common::usermodel::fonts::FontPitch::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::common::usermodel::fonts::FontPitch* poi::common::usermodel::fonts::FontPitch::valueOf(::java::lang::String* a0)
{
    if(DEFAULT->toString()->equals(a0))
        return DEFAULT;
    if(FIXED->toString()->equals(a0))
        return FIXED;
    if(VARIABLE->toString()->equals(a0))
        return VARIABLE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::common::usermodel::fonts::FontPitchArray* poi::common::usermodel::fonts::FontPitch::values()
{
    return new poi::common::usermodel::fonts::FontPitchArray({
        DEFAULT,
        FIXED,
        VARIABLE,
    });
}

java::lang::Class* poi::common::usermodel::fonts::FontPitch::getClass0()
{
    return class_();
}

