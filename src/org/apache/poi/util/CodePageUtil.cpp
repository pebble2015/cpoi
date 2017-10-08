// Generated from /POI/java/org/apache/poi/util/CodePageUtil.java
#include <org/apache/poi/util/CodePageUtil.hpp>

#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/Collections.hpp>
#include <org/apache/poi/util/LittleEndianCP950Reader.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::CodePageUtil::CodePageUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::CodePageUtil::CodePageUtil()
    : CodePageUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Set*& poi::util::CodePageUtil::DOUBLE_BYTE_CHARSETS()
{
    clinit();
    return DOUBLE_BYTE_CHARSETS_;
}
java::util::Set* poi::util::CodePageUtil::DOUBLE_BYTE_CHARSETS_;

constexpr int32_t poi::util::CodePageUtil::CP_037;

constexpr int32_t poi::util::CodePageUtil::CP_SJIS;

constexpr int32_t poi::util::CodePageUtil::CP_GBK;

constexpr int32_t poi::util::CodePageUtil::CP_MS949;

constexpr int32_t poi::util::CodePageUtil::CP_UTF16;

constexpr int32_t poi::util::CodePageUtil::CP_UTF16_BE;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1250;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1251;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1252;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1252_BIFF23;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1253;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1254;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1255;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1256;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1257;

constexpr int32_t poi::util::CodePageUtil::CP_WINDOWS_1258;

constexpr int32_t poi::util::CodePageUtil::CP_JOHAB;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_ROMAN;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_ROMAN_BIFF23;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_JAPAN;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_CHINESE_TRADITIONAL;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_KOREAN;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_ARABIC;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_HEBREW;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_GREEK;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_CYRILLIC;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_CHINESE_SIMPLE;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_ROMANIA;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_UKRAINE;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_THAI;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_CENTRAL_EUROPE;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_ICELAND;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_TURKISH;

constexpr int32_t poi::util::CodePageUtil::CP_MAC_CROATIAN;

constexpr int32_t poi::util::CodePageUtil::CP_US_ACSII;

constexpr int32_t poi::util::CodePageUtil::CP_KOI8_R;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_1;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_2;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_3;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_4;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_5;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_6;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_7;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_8;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_8859_9;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_2022_JP1;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_2022_JP2;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_2022_JP3;

constexpr int32_t poi::util::CodePageUtil::CP_ISO_2022_KR;

constexpr int32_t poi::util::CodePageUtil::CP_EUC_JP;

constexpr int32_t poi::util::CodePageUtil::CP_EUC_KR;

constexpr int32_t poi::util::CodePageUtil::CP_GB2312;

constexpr int32_t poi::util::CodePageUtil::CP_GB18030;

constexpr int32_t poi::util::CodePageUtil::CP_US_ASCII2;

constexpr int32_t poi::util::CodePageUtil::CP_UTF8;

constexpr int32_t poi::util::CodePageUtil::CP_UNICODE;

int8_tArray* poi::util::CodePageUtil::getBytesInCodePage(::java::lang::String* string, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    clinit();
    auto encoding = codepageToEncoding(codepage);
    return npc(string)->getBytes(encoding);
}

java::lang::String* poi::util::CodePageUtil::getStringFromCodePage(::int8_tArray* string, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    clinit();
    return getStringFromCodePage(string, 0, npc(string)->length, codepage);
}

java::lang::String* poi::util::CodePageUtil::getStringFromCodePage(::int8_tArray* string, int32_t offset, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    clinit();
    auto encoding = codepageToEncoding(codepage);
    return new ::java::lang::String(string, offset, length, encoding);
}

java::lang::String* poi::util::CodePageUtil::codepageToEncoding(int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    clinit();
    return codepageToEncoding(codepage, false);
}

java::lang::String* poi::util::CodePageUtil::codepageToEncoding(int32_t codepage, bool javaLangFormat) /* throws(UnsupportedEncodingException) */
{
    clinit();
    if(codepage <= 0)
        throw new ::java::io::UnsupportedEncodingException(::java::lang::StringBuilder().append(u"Codepage number may not be "_j)->append(codepage)->toString());

    switch (codepage) {
    case CP_UTF16:
        return u"UTF-16LE"_j;
    case CP_UTF16_BE:
        return u"UTF-16BE"_j;
    case CP_UTF8:
        return u"UTF-8"_j;
    case CP_037:
        return u"cp037"_j;
    case CP_GBK:
        return u"GBK"_j;
    case CP_MS949:
        return u"ms949"_j;
    case CP_WINDOWS_1250:
        if(javaLangFormat)
            return u"Cp1250"_j;
        else
            return u"windows-1250"_j;
    case CP_WINDOWS_1251:
        if(javaLangFormat)
            return u"Cp1251"_j;
        else
            return u"windows-1251"_j;
    case CP_WINDOWS_1252:
    case CP_WINDOWS_1252_BIFF23:
        if(javaLangFormat)
            return u"Cp1252"_j;
        else
            return u"windows-1252"_j;
    case CP_WINDOWS_1253:
        if(javaLangFormat)
            return u"Cp1253"_j;
        else
            return u"windows-1253"_j;
    case CP_WINDOWS_1254:
        if(javaLangFormat)
            return u"Cp1254"_j;
        else
            return u"windows-1254"_j;
    case CP_WINDOWS_1255:
        if(javaLangFormat)
            return u"Cp1255"_j;
        else
            return u"windows-1255"_j;
    case CP_WINDOWS_1256:
        if(javaLangFormat)
            return u"Cp1255"_j;
        else
            return u"windows-1256"_j;
    case CP_WINDOWS_1257:
        if(javaLangFormat)
            return u"Cp1257"_j;
        else
            return u"windows-1257"_j;
    case CP_WINDOWS_1258:
        if(javaLangFormat)
            return u"Cp1258"_j;
        else
            return u"windows-1258"_j;
    case CP_JOHAB:
        return u"johab"_j;
    case CP_MAC_ROMAN:
    case CP_MAC_ROMAN_BIFF23:
        return u"MacRoman"_j;
    case CP_MAC_JAPAN:
        return u"SJIS"_j;
    case CP_MAC_CHINESE_TRADITIONAL:
        return u"Big5"_j;
    case CP_MAC_KOREAN:
        return u"EUC-KR"_j;
    case CP_MAC_ARABIC:
        return u"MacArabic"_j;
    case CP_MAC_HEBREW:
        return u"MacHebrew"_j;
    case CP_MAC_GREEK:
        return u"MacGreek"_j;
    case CP_MAC_CYRILLIC:
        return u"MacCyrillic"_j;
    case CP_MAC_CHINESE_SIMPLE:
        return u"EUC_CN"_j;
    case CP_MAC_ROMANIA:
        return u"MacRomania"_j;
    case CP_MAC_UKRAINE:
        return u"MacUkraine"_j;
    case CP_MAC_THAI:
        return u"MacThai"_j;
    case CP_MAC_CENTRAL_EUROPE:
        return u"MacCentralEurope"_j;
    case CP_MAC_ICELAND:
        return u"MacIceland"_j;
    case CP_MAC_TURKISH:
        return u"MacTurkish"_j;
    case CP_MAC_CROATIAN:
        return u"MacCroatian"_j;
    case CP_US_ACSII:
    case CP_US_ASCII2:
        return u"US-ASCII"_j;
    case CP_KOI8_R:
        return u"KOI8-R"_j;
    case CP_ISO_8859_1:
        if(javaLangFormat)
            return u"ISO8859_1"_j;
        else
            return u"ISO-8859-1"_j;
    case CP_ISO_8859_2:
        if(javaLangFormat)
            return u"ISO8859_2"_j;
        else
            return u"ISO-8859-2"_j;
    case CP_ISO_8859_3:
        if(javaLangFormat)
            return u"ISO8859_3"_j;
        else
            return u"ISO-8859-3"_j;
    case CP_ISO_8859_4:
        if(javaLangFormat)
            return u"ISO8859_4"_j;
        else
            return u"ISO-8859-4"_j;
    case CP_ISO_8859_5:
        if(javaLangFormat)
            return u"ISO8859_5"_j;
        else
            return u"ISO-8859-5"_j;
    case CP_ISO_8859_6:
        if(javaLangFormat)
            return u"ISO8859_6"_j;
        else
            return u"ISO-8859-6"_j;
    case CP_ISO_8859_7:
        if(javaLangFormat)
            return u"ISO8859_7"_j;
        else
            return u"ISO-8859-7"_j;
    case CP_ISO_8859_8:
        if(javaLangFormat)
            return u"ISO8859_8"_j;
        else
            return u"ISO-8859-8"_j;
    case CP_ISO_8859_9:
        if(javaLangFormat)
            return u"ISO8859_9"_j;
        else
            return u"ISO-8859-9"_j;
    case CP_ISO_2022_JP1:
    case CP_ISO_2022_JP2:
    case CP_ISO_2022_JP3:
        return u"ISO-2022-JP"_j;
    case CP_ISO_2022_KR:
        return u"ISO-2022-KR"_j;
    case CP_EUC_JP:
        return u"EUC-JP"_j;
    case CP_EUC_KR:
        return u"EUC-KR"_j;
    case CP_GB2312:
        return u"GB2312"_j;
    case CP_GB18030:
        return u"GB18030"_j;
    case CP_SJIS:
        return u"SJIS"_j;
    default:
        return ::java::lang::StringBuilder().append(u"cp"_j)->append(codepage)->toString();
    }

}

java::lang::String* poi::util::CodePageUtil::cp950ToString(::int8_tArray* data, int32_t offset, int32_t lengthInBytes)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    auto reader = new LittleEndianCP950Reader(data, offset, lengthInBytes);
    auto c = npc(reader)->read();
    while (c != -int32_t(1)) {
        npc(sb)->append(static_cast< char16_t >(c));
        c = npc(reader)->read();
    }
    npc(reader)->close();
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::CodePageUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.CodePageUtil", 32);
    return c;
}

void poi::util::CodePageUtil::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DOUBLE_BYTE_CHARSETS_ = ::java::util::Collections::singleton(StringUtil::BIG5());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::CodePageUtil::getClass0()
{
    return class_();
}

