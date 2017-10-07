// Generated from /POI/java/org/apache/poi/ss/usermodel/FontScheme.java
#include <org/apache/poi/ss/usermodel/FontScheme.hpp>

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
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FontScheme, ::java::lang::EnumArray > FontSchemeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::FontScheme::FontScheme(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::FontScheme::FontScheme(::java::lang::String* name, int ordinal, int32_t val) 
    : FontScheme(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, val);
}

org::apache::poi::ss::usermodel::FontScheme* org::apache::poi::ss::usermodel::FontScheme::NONE = new ::org::apache::poi::ss::usermodel::FontScheme(u"NONE"_j, 0, int32_t(1));
org::apache::poi::ss::usermodel::FontScheme* org::apache::poi::ss::usermodel::FontScheme::MAJOR = new ::org::apache::poi::ss::usermodel::FontScheme(u"MAJOR"_j, 1, int32_t(2));
org::apache::poi::ss::usermodel::FontScheme* org::apache::poi::ss::usermodel::FontScheme::MINOR = new ::org::apache::poi::ss::usermodel::FontScheme(u"MINOR"_j, 2, int32_t(3));
void org::apache::poi::ss::usermodel::FontScheme::ctor(::java::lang::String* name, int ordinal, int32_t val)
{
    super::ctor(name, ordinal);
    value = val;
}

int32_t org::apache::poi::ss::usermodel::FontScheme::getValue()
{
    return value;
}

org::apache::poi::ss::usermodel::FontSchemeArray*& org::apache::poi::ss::usermodel::FontScheme::_table()
{
    clinit();
    return _table_;
}
org::apache::poi::ss::usermodel::FontSchemeArray* org::apache::poi::ss::usermodel::FontScheme::_table_;

org::apache::poi::ss::usermodel::FontScheme* org::apache::poi::ss::usermodel::FontScheme::valueOf(int32_t value)
{
    clinit();
    return (*_table_)[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::FontScheme::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FontScheme", 38);
    return c;
}

void org::apache::poi::ss::usermodel::FontScheme::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new FontSchemeArray(int32_t(4));
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

java::lang::Enum* org::apache::poi::ss::usermodel::FontScheme::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

org::apache::poi::ss::usermodel::FontScheme* org::apache::poi::ss::usermodel::FontScheme::valueOf(::java::lang::String* a0)
{
    if(MAJOR->toString()->equals(a0))
        return MAJOR;
    if(MINOR->toString()->equals(a0))
        return MINOR;
    if(NONE->toString()->equals(a0))
        return NONE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::FontSchemeArray* org::apache::poi::ss::usermodel::FontScheme::values()
{
    return new org::apache::poi::ss::usermodel::FontSchemeArray({
        MAJOR,
        MINOR,
        NONE,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::FontScheme::getClass0()
{
    return class_();
}

