// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontCharset.java
#include <org/apache/poi/common/usermodel/fonts/FontCharset.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/UnsupportedCharsetException.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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
typedef ::SubArray< ::poi::common::usermodel::fonts::FontCharset, ::java::lang::EnumArray > FontCharsetArray;
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

poi::common::usermodel::fonts::FontCharset::FontCharset(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::common::usermodel::fonts::FontCharset::FontCharset(::java::lang::String* name, int ordinal, int32_t flag, ::java::lang::String* javaCharsetName) 
    : FontCharset(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, flag,javaCharsetName);
}

poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::ANSI = new ::poi::common::usermodel::fonts::FontCharset(u"ANSI"_j, 0, int32_t(0), u"Cp1252"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::DEFAULT = new ::poi::common::usermodel::fonts::FontCharset(u"DEFAULT"_j, 1, int32_t(1), u"Cp1252"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::SYMBOL = new ::poi::common::usermodel::fonts::FontCharset(u"SYMBOL"_j, 2, int32_t(2), u""_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::MAC = new ::poi::common::usermodel::fonts::FontCharset(u"MAC"_j, 3, int32_t(77), u"MacRoman"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::SHIFTJIS = new ::poi::common::usermodel::fonts::FontCharset(u"SHIFTJIS"_j, 4, int32_t(128), u"Shift_JIS"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::HANGUL = new ::poi::common::usermodel::fonts::FontCharset(u"HANGUL"_j, 5, int32_t(129), u"cp949"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::JOHAB = new ::poi::common::usermodel::fonts::FontCharset(u"JOHAB"_j, 6, int32_t(130), u"x-Johab"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::GB2312 = new ::poi::common::usermodel::fonts::FontCharset(u"GB2312"_j, 7, int32_t(134), u"GB2312"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::CHINESEBIG5 = new ::poi::common::usermodel::fonts::FontCharset(u"CHINESEBIG5"_j, 8, int32_t(136), u"Big5"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::GREEK = new ::poi::common::usermodel::fonts::FontCharset(u"GREEK"_j, 9, int32_t(161), u"Cp1253"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::TURKISH = new ::poi::common::usermodel::fonts::FontCharset(u"TURKISH"_j, 10, int32_t(162), u"Cp1254"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::VIETNAMESE = new ::poi::common::usermodel::fonts::FontCharset(u"VIETNAMESE"_j, 11, int32_t(163), u"Cp1258"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::HEBREW = new ::poi::common::usermodel::fonts::FontCharset(u"HEBREW"_j, 12, int32_t(177), u"Cp1255"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::ARABIC = new ::poi::common::usermodel::fonts::FontCharset(u"ARABIC"_j, 13, int32_t(178), u"Cp1256"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::BALTIC = new ::poi::common::usermodel::fonts::FontCharset(u"BALTIC"_j, 14, int32_t(186), u"Cp1257"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::RUSSIAN = new ::poi::common::usermodel::fonts::FontCharset(u"RUSSIAN"_j, 15, int32_t(204), u"Cp1251"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::THAI_ = new ::poi::common::usermodel::fonts::FontCharset(u"THAI_"_j, 16, int32_t(222), u"x-windows-874"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::EASTEUROPE = new ::poi::common::usermodel::fonts::FontCharset(u"EASTEUROPE"_j, 17, int32_t(238), u"Cp1250"_j);
poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::OEM = new ::poi::common::usermodel::fonts::FontCharset(u"OEM"_j, 18, int32_t(255), u"Cp1252"_j);
poi::common::usermodel::fonts::FontCharsetArray*& poi::common::usermodel::fonts::FontCharset::_table()
{
    clinit();
    return _table_;
}
poi::common::usermodel::fonts::FontCharsetArray* poi::common::usermodel::fonts::FontCharset::_table_;

void poi::common::usermodel::fonts::FontCharset::ctor(::java::lang::String* name, int ordinal, int32_t flag, ::java::lang::String* javaCharsetName)
{
    super::ctor(name, ordinal);
    this->nativeId = flag;
    if(npc(javaCharsetName)->length() > 0) {
        try {
            charset = ::java::nio::charset::Charset::forName(javaCharsetName);
            return;
        } catch (::java::nio::charset::UnsupportedCharsetException* e) {
            auto logger = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FontCharset::class_()));
            npc(logger)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unsupported charset: "_j)->append(javaCharsetName)->toString())}));
        }
    }
    charset = nullptr;
}

java::nio::charset::Charset* poi::common::usermodel::fonts::FontCharset::getCharset()
{
    return charset;
}

int32_t poi::common::usermodel::fonts::FontCharset::getNativeId()
{
    return nativeId;
}

poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::valueOf(int32_t value)
{
    clinit();
    return (value < 0 || value >= npc(_table_)->length) ? static_cast< FontCharset* >(nullptr) : (*_table_)[value];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::common::usermodel::fonts::FontCharset::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontCharset", 49);
    return c;
}

void poi::common::usermodel::fonts::FontCharset::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _table_ = new FontCharsetArray(int32_t(256));
        {
            for(auto c : *npc(values())) {
                _table_->set(npc(c)->getNativeId(), c);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Enum* poi::common::usermodel::fonts::FontCharset::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

poi::common::usermodel::fonts::FontCharset* poi::common::usermodel::fonts::FontCharset::valueOf(::java::lang::String* a0)
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
    if(HANGUL->toString()->equals(a0))
        return HANGUL;
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
    if(THAI_->toString()->equals(a0))
        return THAI_;
    if(TURKISH->toString()->equals(a0))
        return TURKISH;
    if(VIETNAMESE->toString()->equals(a0))
        return VIETNAMESE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::common::usermodel::fonts::FontCharsetArray* poi::common::usermodel::fonts::FontCharset::values()
{
    return new poi::common::usermodel::fonts::FontCharsetArray({
        ANSI,
        ARABIC,
        BALTIC,
        CHINESEBIG5,
        DEFAULT,
        EASTEUROPE,
        GB2312,
        GREEK,
        HANGUL,
        HEBREW,
        JOHAB,
        MAC,
        OEM,
        RUSSIAN,
        SHIFTJIS,
        SYMBOL,
        THAI_,
        TURKISH,
        VIETNAMESE,
    });
}

java::lang::Class* poi::common::usermodel::fonts::FontCharset::getClass0()
{
    return class_();
}

