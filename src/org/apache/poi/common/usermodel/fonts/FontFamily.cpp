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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace common
            {
                namespace usermodel
                {
                    namespace fonts
                    {
typedef ::SubArray< ::org::apache::poi::common::usermodel::fonts::FontFamily, ::java::lang::EnumArray > FontFamilyArray;
                    } // fonts
                } // usermodel
            } // common
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::common::usermodel::fonts::FontFamily::FontFamily(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::common::usermodel::fonts::FontFamily::FontFamily(::java::lang::String* name, int ordinal, int32_t nativeId) 
    : FontFamily(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId);
}

org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::FF_DONTCARE = new ::org::apache::poi::common::usermodel::fonts::FontFamily(u"FF_DONTCARE"_j, 0, int32_t(0));
org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::FF_ROMAN = new ::org::apache::poi::common::usermodel::fonts::FontFamily(u"FF_ROMAN"_j, 1, int32_t(1));
org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::FF_SWISS = new ::org::apache::poi::common::usermodel::fonts::FontFamily(u"FF_SWISS"_j, 2, int32_t(2));
org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::FF_MODERN = new ::org::apache::poi::common::usermodel::fonts::FontFamily(u"FF_MODERN"_j, 3, int32_t(3));
org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::FF_SCRIPT = new ::org::apache::poi::common::usermodel::fonts::FontFamily(u"FF_SCRIPT"_j, 4, int32_t(4));
org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::FF_DECORATIVE = new ::org::apache::poi::common::usermodel::fonts::FontFamily(u"FF_DECORATIVE"_j, 5, int32_t(5));
void org::apache::poi::common::usermodel::fonts::FontFamily::ctor(::java::lang::String* name, int ordinal, int32_t nativeId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
}

int32_t org::apache::poi::common::usermodel::fonts::FontFamily::getFlag()
{
    return nativeId;
}

org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::valueOf(int32_t nativeId)
{
    clinit();
    for(auto ff : *npc(values())) {
        if(npc(ff)->nativeId == nativeId) {
            return ff;
        }
    }
    return nullptr;
}

org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::valueOfPitchFamily(int8_t pitchAndFamily)
{
    clinit();
    return valueOf(static_cast<int8_t>(static_cast<uint32_t>(pitchAndFamily) >> int32_t(4)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::common::usermodel::fonts::FontFamily::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontFamily", 48);
    return c;
}

java::lang::Enum* org::apache::poi::common::usermodel::fonts::FontFamily::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

org::apache::poi::common::usermodel::fonts::FontFamily* org::apache::poi::common::usermodel::fonts::FontFamily::valueOf(::java::lang::String* a0)
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

org::apache::poi::common::usermodel::fonts::FontFamilyArray* org::apache::poi::common::usermodel::fonts::FontFamily::values()
{
    return new org::apache::poi::common::usermodel::fonts::FontFamilyArray({
        FF_DECORATIVE,
        FF_DONTCARE,
        FF_MODERN,
        FF_ROMAN,
        FF_SCRIPT,
        FF_SWISS,
    });
}

java::lang::Class* org::apache::poi::common::usermodel::fonts::FontFamily::getClass0()
{
    return class_();
}

