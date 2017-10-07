// Generated from /POI/java/org/apache/poi/ss/usermodel/BorderStyle.java
#include <org/apache/poi/ss/usermodel/BorderStyle.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::BorderStyle, ::java::lang::EnumArray > BorderStyleArray;
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

org::apache::poi::ss::usermodel::BorderStyle::BorderStyle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::BorderStyle::BorderStyle(::java::lang::String* name, int ordinal, int32_t code) 
    : BorderStyle(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, code);
}

org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::NONE = new ::org::apache::poi::ss::usermodel::BorderStyle(u"NONE"_j, 0, int32_t(0));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::THIN = new ::org::apache::poi::ss::usermodel::BorderStyle(u"THIN"_j, 1, int32_t(1));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::MEDIUM = new ::org::apache::poi::ss::usermodel::BorderStyle(u"MEDIUM"_j, 2, int32_t(2));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::DASHED = new ::org::apache::poi::ss::usermodel::BorderStyle(u"DASHED"_j, 3, int32_t(3));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::DOTTED = new ::org::apache::poi::ss::usermodel::BorderStyle(u"DOTTED"_j, 4, int32_t(4));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::THICK = new ::org::apache::poi::ss::usermodel::BorderStyle(u"THICK"_j, 5, int32_t(5));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::DOUBLE = new ::org::apache::poi::ss::usermodel::BorderStyle(u"DOUBLE"_j, 6, int32_t(6));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::HAIR = new ::org::apache::poi::ss::usermodel::BorderStyle(u"HAIR"_j, 7, int32_t(7));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::MEDIUM_DASHED = new ::org::apache::poi::ss::usermodel::BorderStyle(u"MEDIUM_DASHED"_j, 8, int32_t(8));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::DASH_DOT = new ::org::apache::poi::ss::usermodel::BorderStyle(u"DASH_DOT"_j, 9, int32_t(9));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::MEDIUM_DASH_DOT = new ::org::apache::poi::ss::usermodel::BorderStyle(u"MEDIUM_DASH_DOT"_j, 10, int32_t(10));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::DASH_DOT_DOT = new ::org::apache::poi::ss::usermodel::BorderStyle(u"DASH_DOT_DOT"_j, 11, int32_t(11));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::MEDIUM_DASH_DOT_DOT = new ::org::apache::poi::ss::usermodel::BorderStyle(u"MEDIUM_DASH_DOT_DOT"_j, 12, int32_t(12));
org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::SLANTED_DASH_DOT = new ::org::apache::poi::ss::usermodel::BorderStyle(u"SLANTED_DASH_DOT"_j, 13, int32_t(13));
void org::apache::poi::ss::usermodel::BorderStyle::ctor(::java::lang::String* name, int ordinal, int32_t code)
{
    super::ctor(name, ordinal);
    this->code = static_cast< int16_t >(code);
}

int16_t org::apache::poi::ss::usermodel::BorderStyle::getCode()
{
    return code;
}

org::apache::poi::ss::usermodel::BorderStyleArray*& org::apache::poi::ss::usermodel::BorderStyle::_table()
{
    clinit();
    return _table_;
}
org::apache::poi::ss::usermodel::BorderStyleArray* org::apache::poi::ss::usermodel::BorderStyle::_table_;

org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::valueOf(int16_t code)
{
    clinit();
    return (*_table_)[code];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::BorderStyle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.BorderStyle", 39);
    return c;
}

void org::apache::poi::ss::usermodel::BorderStyle::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new BorderStyleArray(int32_t(13) + int32_t(1));
        {
            for(auto c : *npc(values())) {
                _table_->set(npc(c)->getCode(), c);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Enum* org::apache::poi::ss::usermodel::BorderStyle::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::usermodel::BorderStyle::valueOf(::java::lang::String* a0)
{
    if(DASHED->toString()->equals(a0))
        return DASHED;
    if(DASH_DOT->toString()->equals(a0))
        return DASH_DOT;
    if(DASH_DOT_DOT->toString()->equals(a0))
        return DASH_DOT_DOT;
    if(DOTTED->toString()->equals(a0))
        return DOTTED;
    if(DOUBLE->toString()->equals(a0))
        return DOUBLE;
    if(HAIR->toString()->equals(a0))
        return HAIR;
    if(MEDIUM->toString()->equals(a0))
        return MEDIUM;
    if(MEDIUM_DASHED->toString()->equals(a0))
        return MEDIUM_DASHED;
    if(MEDIUM_DASH_DOT->toString()->equals(a0))
        return MEDIUM_DASH_DOT;
    if(MEDIUM_DASH_DOT_DOT->toString()->equals(a0))
        return MEDIUM_DASH_DOT_DOT;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(SLANTED_DASH_DOT->toString()->equals(a0))
        return SLANTED_DASH_DOT;
    if(THICK->toString()->equals(a0))
        return THICK;
    if(THIN->toString()->equals(a0))
        return THIN;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::BorderStyleArray* org::apache::poi::ss::usermodel::BorderStyle::values()
{
    return new org::apache::poi::ss::usermodel::BorderStyleArray({
        DASHED,
        DASH_DOT,
        DASH_DOT_DOT,
        DOTTED,
        DOUBLE,
        HAIR,
        MEDIUM,
        MEDIUM_DASHED,
        MEDIUM_DASH_DOT,
        MEDIUM_DASH_DOT_DOT,
        NONE,
        SLANTED_DASH_DOT,
        THICK,
        THIN,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::BorderStyle::getClass0()
{
    return class_();
}

