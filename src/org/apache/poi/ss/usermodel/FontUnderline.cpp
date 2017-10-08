// Generated from /POI/java/org/apache/poi/ss/usermodel/FontUnderline.java
#include <org/apache/poi/ss/usermodel/FontUnderline.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>
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
typedef ::SubArray< ::poi::ss::usermodel::FontUnderline, ::java::lang::EnumArray > FontUnderlineArray;
        } // usermodel
    } // ss
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::FontUnderline::FontUnderline(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::FontUnderline::FontUnderline(::java::lang::String* name, int ordinal, int32_t val) 
    : FontUnderline(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, val);
}

poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::SINGLE = new ::poi::ss::usermodel::FontUnderline(u"SINGLE"_j, 0, int32_t(1));
poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::DOUBLE = new ::poi::ss::usermodel::FontUnderline(u"DOUBLE"_j, 1, int32_t(2));
poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::SINGLE_ACCOUNTING = new ::poi::ss::usermodel::FontUnderline(u"SINGLE_ACCOUNTING"_j, 2, int32_t(3));
poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::DOUBLE_ACCOUNTING = new ::poi::ss::usermodel::FontUnderline(u"DOUBLE_ACCOUNTING"_j, 3, int32_t(4));
poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::NONE = new ::poi::ss::usermodel::FontUnderline(u"NONE"_j, 4, int32_t(5));
void poi::ss::usermodel::FontUnderline::ctor(::java::lang::String* name, int ordinal, int32_t val)
{
    super::ctor(name, ordinal);
    value = val;
}

int32_t poi::ss::usermodel::FontUnderline::getValue()
{
    return value;
}

int8_t poi::ss::usermodel::FontUnderline::getByteValue()
{
    {
        auto v = this;
        if((v == DOUBLE)) {
            return Font::U_DOUBLE;
        }
        if((v == DOUBLE_ACCOUNTING)) {
            return Font::U_DOUBLE_ACCOUNTING;
        }
        if((v == SINGLE_ACCOUNTING)) {
            return Font::U_SINGLE_ACCOUNTING;
        }
        if((v == NONE)) {
            return Font::U_NONE;
        }
        if((v == SINGLE)) {
            return Font::U_SINGLE;
        }
        if((((v != DOUBLE) && (v != DOUBLE_ACCOUNTING) && (v != SINGLE_ACCOUNTING) && (v != NONE) && (v != SINGLE)))) {
            return Font::U_SINGLE;
        }
end_switch0:;
    }

}

poi::ss::usermodel::FontUnderlineArray*& poi::ss::usermodel::FontUnderline::_table()
{
    clinit();
    return _table_;
}
poi::ss::usermodel::FontUnderlineArray* poi::ss::usermodel::FontUnderline::_table_;

poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::valueOf(int32_t value)
{
    clinit();
    return (*_table_)[value];
}

poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::valueOf(int8_t value)
{
    clinit();
    FontUnderline* val;
    switch (value) {
    case Font::U_DOUBLE:
        val = FontUnderline::DOUBLE;
        break;
    case Font::U_DOUBLE_ACCOUNTING:
        val = FontUnderline::DOUBLE_ACCOUNTING;
        break;
    case Font::U_SINGLE_ACCOUNTING:
        val = FontUnderline::SINGLE_ACCOUNTING;
        break;
    case Font::U_SINGLE:
        val = FontUnderline::SINGLE;
        break;
    default:
        val = FontUnderline::NONE;
        break;
    }

    return val;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::FontUnderline::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FontUnderline", 41);
    return c;
}

void poi::ss::usermodel::FontUnderline::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new FontUnderlineArray(int32_t(6));
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

java::lang::Enum* poi::ss::usermodel::FontUnderline::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::ss::usermodel::FontUnderline* poi::ss::usermodel::FontUnderline::valueOf(::java::lang::String* a0)
{
    if(DOUBLE->toString()->equals(a0))
        return DOUBLE;
    if(DOUBLE_ACCOUNTING->toString()->equals(a0))
        return DOUBLE_ACCOUNTING;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(SINGLE->toString()->equals(a0))
        return SINGLE;
    if(SINGLE_ACCOUNTING->toString()->equals(a0))
        return SINGLE_ACCOUNTING;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::FontUnderlineArray* poi::ss::usermodel::FontUnderline::values()
{
    return new poi::ss::usermodel::FontUnderlineArray({
        DOUBLE,
        DOUBLE_ACCOUNTING,
        NONE,
        SINGLE,
        SINGLE_ACCOUNTING,
    });
}

java::lang::Class* poi::ss::usermodel::FontUnderline::getClass0()
{
    return class_();
}

