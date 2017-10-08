// Generated from /POI/java/org/apache/poi/ss/usermodel/FontFamily.java
#include <org/apache/poi/ss/usermodel/FontFamily.hpp>

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
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::FontFamily, ::java::lang::EnumArray > FontFamilyArray;
        } // usermodel
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::FontFamily::FontFamily(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::FontFamily::FontFamily(::java::lang::String* name, int ordinal, int32_t value) 
    : FontFamily(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, value);
}

poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::NOT_APPLICABLE = new ::poi::ss::usermodel::FontFamily(u"NOT_APPLICABLE"_j, 0, int32_t(0));
poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::ROMAN = new ::poi::ss::usermodel::FontFamily(u"ROMAN"_j, 1, int32_t(1));
poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::SWISS = new ::poi::ss::usermodel::FontFamily(u"SWISS"_j, 2, int32_t(2));
poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::MODERN = new ::poi::ss::usermodel::FontFamily(u"MODERN"_j, 3, int32_t(3));
poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::SCRIPT = new ::poi::ss::usermodel::FontFamily(u"SCRIPT"_j, 4, int32_t(4));
poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::DECORATIVE = new ::poi::ss::usermodel::FontFamily(u"DECORATIVE"_j, 5, int32_t(5));
void poi::ss::usermodel::FontFamily::ctor(::java::lang::String* name, int ordinal, int32_t value)
{
    super::ctor(name, ordinal);
    family = value;
}

int32_t poi::ss::usermodel::FontFamily::getValue()
{
    return family;
}

poi::ss::usermodel::FontFamilyArray*& poi::ss::usermodel::FontFamily::_table()
{
    clinit();
    return _table_;
}
poi::ss::usermodel::FontFamilyArray* poi::ss::usermodel::FontFamily::_table_;

poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::valueOf(int32_t family)
{
    clinit();
    return (*_table_)[family];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::FontFamily::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FontFamily", 38);
    return c;
}

void poi::ss::usermodel::FontFamily::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new FontFamilyArray(int32_t(6));
        {
            for(auto c : *npc(values())) {
                _table_->set(npc(c)->getValue(), c);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Enum* poi::ss::usermodel::FontFamily::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::ss::usermodel::FontFamily* poi::ss::usermodel::FontFamily::valueOf(::java::lang::String* a0)
{
    if(DECORATIVE->toString()->equals(a0))
        return DECORATIVE;
    if(MODERN->toString()->equals(a0))
        return MODERN;
    if(NOT_APPLICABLE->toString()->equals(a0))
        return NOT_APPLICABLE;
    if(ROMAN->toString()->equals(a0))
        return ROMAN;
    if(SCRIPT->toString()->equals(a0))
        return SCRIPT;
    if(SWISS->toString()->equals(a0))
        return SWISS;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::FontFamilyArray* poi::ss::usermodel::FontFamily::values()
{
    return new poi::ss::usermodel::FontFamilyArray({
        DECORATIVE,
        MODERN,
        NOT_APPLICABLE,
        ROMAN,
        SCRIPT,
        SWISS,
    });
}

java::lang::Class* poi::ss::usermodel::FontFamily::getClass0()
{
    return class_();
}

