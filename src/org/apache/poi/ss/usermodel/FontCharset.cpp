// Generated from /POI/java/org/apache/poi/ss/usermodel/FontCharset.java
#include <org/apache/poi/ss/usermodel/FontCharset.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FontCharset, ::java::lang::EnumArray > FontCharsetArray;
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

org::apache::poi::ss::usermodel::FontCharset::FontCharset(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::FontCharset::FontCharset(::java::lang::String* name, int ordinal, int32_t value) 
    : FontCharset(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, value);
}

org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::ANSI = new ::org::apache::poi::ss::usermodel::FontCharset(u"ANSI"_j, 0, int32_t(0));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::DEFAULT = new ::org::apache::poi::ss::usermodel::FontCharset(u"DEFAULT"_j, 1, int32_t(1));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::SYMBOL = new ::org::apache::poi::ss::usermodel::FontCharset(u"SYMBOL"_j, 2, int32_t(2));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::MAC = new ::org::apache::poi::ss::usermodel::FontCharset(u"MAC"_j, 3, int32_t(77));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::SHIFTJIS = new ::org::apache::poi::ss::usermodel::FontCharset(u"SHIFTJIS"_j, 4, int32_t(128));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::HANGEUL = new ::org::apache::poi::ss::usermodel::FontCharset(u"HANGEUL"_j, 5, int32_t(129));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::JOHAB = new ::org::apache::poi::ss::usermodel::FontCharset(u"JOHAB"_j, 6, int32_t(130));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::GB2312 = new ::org::apache::poi::ss::usermodel::FontCharset(u"GB2312"_j, 7, int32_t(134));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::CHINESEBIG5 = new ::org::apache::poi::ss::usermodel::FontCharset(u"CHINESEBIG5"_j, 8, int32_t(136));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::GREEK = new ::org::apache::poi::ss::usermodel::FontCharset(u"GREEK"_j, 9, int32_t(161));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::TURKISH = new ::org::apache::poi::ss::usermodel::FontCharset(u"TURKISH"_j, 10, int32_t(162));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::VIETNAMESE = new ::org::apache::poi::ss::usermodel::FontCharset(u"VIETNAMESE"_j, 11, int32_t(163));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::HEBREW = new ::org::apache::poi::ss::usermodel::FontCharset(u"HEBREW"_j, 12, int32_t(177));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::ARABIC = new ::org::apache::poi::ss::usermodel::FontCharset(u"ARABIC"_j, 13, int32_t(178));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::BALTIC = new ::org::apache::poi::ss::usermodel::FontCharset(u"BALTIC"_j, 14, int32_t(186));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::RUSSIAN = new ::org::apache::poi::ss::usermodel::FontCharset(u"RUSSIAN"_j, 15, int32_t(204));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::THAI = new ::org::apache::poi::ss::usermodel::FontCharset(u"THAI"_j, 16, int32_t(222));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::EASTEUROPE = new ::org::apache::poi::ss::usermodel::FontCharset(u"EASTEUROPE"_j, 17, int32_t(238));
org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::OEM = new ::org::apache::poi::ss::usermodel::FontCharset(u"OEM"_j, 18, int32_t(255));
void org::apache::poi::ss::usermodel::FontCharset::ctor(::java::lang::String* name, int ordinal, int32_t value)
{
    super::ctor(name, ordinal);
    charset = value;
}

int32_t org::apache::poi::ss::usermodel::FontCharset::getValue()
{
    return charset;
}

org::apache::poi::ss::usermodel::FontCharsetArray*& org::apache::poi::ss::usermodel::FontCharset::_table()
{
    clinit();
    return _table_;
}
org::apache::poi::ss::usermodel::FontCharsetArray* org::apache::poi::ss::usermodel::FontCharset::_table_;

org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::valueOf(int32_t value)
{
    clinit();
    if(value >= npc(_table_)->length)
        return nullptr;

    return (*_table_)[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::FontCharset::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.FontCharset", 39);
    return c;
}

void org::apache::poi::ss::usermodel::FontCharset::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new FontCharsetArray(int32_t(256));
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

java::lang::Enum* org::apache::poi::ss::usermodel::FontCharset::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

org::apache::poi::ss::usermodel::FontCharset* org::apache::poi::ss::usermodel::FontCharset::valueOf(::java::lang::String* a0)
{
    if(ANSI->toString()->equals(a0))
        return ANSI;
    if(ARABIC->toString()->equals(a0))
        return ARABIC;
    if(BALTIC->toString()->equals(a0))
        return BALTIC;
    if(CHINESEBIG5->toString()->equals(a0))
        return CHINESEBIG5;
    if(DEFAULT->toString()->equals(a0))
        return DEFAULT;
    if(EASTEUROPE->toString()->equals(a0))
        return EASTEUROPE;
    if(GB2312->toString()->equals(a0))
        return GB2312;
    if(GREEK->toString()->equals(a0))
        return GREEK;
    if(HANGEUL->toString()->equals(a0))
        return HANGEUL;
    if(HEBREW->toString()->equals(a0))
        return HEBREW;
    if(JOHAB->toString()->equals(a0))
        return JOHAB;
    if(MAC->toString()->equals(a0))
        return MAC;
    if(OEM->toString()->equals(a0))
        return OEM;
    if(RUSSIAN->toString()->equals(a0))
        return RUSSIAN;
    if(SHIFTJIS->toString()->equals(a0))
        return SHIFTJIS;
    if(SYMBOL->toString()->equals(a0))
        return SYMBOL;
    if(THAI->toString()->equals(a0))
        return THAI;
    if(TURKISH->toString()->equals(a0))
        return TURKISH;
    if(VIETNAMESE->toString()->equals(a0))
        return VIETNAMESE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::FontCharsetArray* org::apache::poi::ss::usermodel::FontCharset::values()
{
    return new org::apache::poi::ss::usermodel::FontCharsetArray({
        ANSI,
        ARABIC,
        BALTIC,
        CHINESEBIG5,
        DEFAULT,
        EASTEUROPE,
        GB2312,
        GREEK,
        HANGEUL,
        HEBREW,
        JOHAB,
        MAC,
        OEM,
        RUSSIAN,
        SHIFTJIS,
        SYMBOL,
        THAI,
        TURKISH,
        VIETNAMESE,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::FontCharset::getClass0()
{
    return class_();
}

