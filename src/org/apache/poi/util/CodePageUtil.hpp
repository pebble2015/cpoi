// Generated from /POI/java/org/apache/poi/util/CodePageUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::CodePageUtil
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Set* DOUBLE_BYTE_CHARSETS_;

public:
    static constexpr int32_t CP_037 { int32_t(37) };
    static constexpr int32_t CP_SJIS { int32_t(932) };
    static constexpr int32_t CP_GBK { int32_t(936) };
    static constexpr int32_t CP_MS949 { int32_t(949) };
    static constexpr int32_t CP_UTF16 { int32_t(1200) };
    static constexpr int32_t CP_UTF16_BE { int32_t(1201) };
    static constexpr int32_t CP_WINDOWS_1250 { int32_t(1250) };
    static constexpr int32_t CP_WINDOWS_1251 { int32_t(1251) };
    static constexpr int32_t CP_WINDOWS_1252 { int32_t(1252) };
    static constexpr int32_t CP_WINDOWS_1252_BIFF23 { int32_t(32769) };
    static constexpr int32_t CP_WINDOWS_1253 { int32_t(1253) };
    static constexpr int32_t CP_WINDOWS_1254 { int32_t(1254) };
    static constexpr int32_t CP_WINDOWS_1255 { int32_t(1255) };
    static constexpr int32_t CP_WINDOWS_1256 { int32_t(1256) };
    static constexpr int32_t CP_WINDOWS_1257 { int32_t(1257) };
    static constexpr int32_t CP_WINDOWS_1258 { int32_t(1258) };
    static constexpr int32_t CP_JOHAB { int32_t(1361) };
    static constexpr int32_t CP_MAC_ROMAN { int32_t(10000) };
    static constexpr int32_t CP_MAC_ROMAN_BIFF23 { int32_t(32768) };
    static constexpr int32_t CP_MAC_JAPAN { int32_t(10001) };
    static constexpr int32_t CP_MAC_CHINESE_TRADITIONAL { int32_t(10002) };
    static constexpr int32_t CP_MAC_KOREAN { int32_t(10003) };
    static constexpr int32_t CP_MAC_ARABIC { int32_t(10004) };
    static constexpr int32_t CP_MAC_HEBREW { int32_t(10005) };
    static constexpr int32_t CP_MAC_GREEK { int32_t(10006) };
    static constexpr int32_t CP_MAC_CYRILLIC { int32_t(10007) };
    static constexpr int32_t CP_MAC_CHINESE_SIMPLE { int32_t(10008) };
    static constexpr int32_t CP_MAC_ROMANIA { int32_t(10010) };
    static constexpr int32_t CP_MAC_UKRAINE { int32_t(10017) };
    static constexpr int32_t CP_MAC_THAI { int32_t(10021) };
    static constexpr int32_t CP_MAC_CENTRAL_EUROPE { int32_t(10029) };
    static constexpr int32_t CP_MAC_ICELAND { int32_t(10079) };
    static constexpr int32_t CP_MAC_TURKISH { int32_t(10081) };
    static constexpr int32_t CP_MAC_CROATIAN { int32_t(10082) };
    static constexpr int32_t CP_US_ACSII { int32_t(20127) };
    static constexpr int32_t CP_KOI8_R { int32_t(20866) };
    static constexpr int32_t CP_ISO_8859_1 { int32_t(28591) };
    static constexpr int32_t CP_ISO_8859_2 { int32_t(28592) };
    static constexpr int32_t CP_ISO_8859_3 { int32_t(28593) };
    static constexpr int32_t CP_ISO_8859_4 { int32_t(28594) };
    static constexpr int32_t CP_ISO_8859_5 { int32_t(28595) };
    static constexpr int32_t CP_ISO_8859_6 { int32_t(28596) };
    static constexpr int32_t CP_ISO_8859_7 { int32_t(28597) };
    static constexpr int32_t CP_ISO_8859_8 { int32_t(28598) };
    static constexpr int32_t CP_ISO_8859_9 { int32_t(28599) };
    static constexpr int32_t CP_ISO_2022_JP1 { int32_t(50220) };
    static constexpr int32_t CP_ISO_2022_JP2 { int32_t(50221) };
    static constexpr int32_t CP_ISO_2022_JP3 { int32_t(50222) };
    static constexpr int32_t CP_ISO_2022_KR { int32_t(50225) };
    static constexpr int32_t CP_EUC_JP { int32_t(51932) };
    static constexpr int32_t CP_EUC_KR { int32_t(51949) };
    static constexpr int32_t CP_GB2312 { int32_t(52936) };
    static constexpr int32_t CP_GB18030 { int32_t(54936) };
    static constexpr int32_t CP_US_ASCII2 { int32_t(65000) };
    static constexpr int32_t CP_UTF8 { int32_t(65001) };
    static constexpr int32_t CP_UNICODE { int32_t(1200) };
    static ::int8_tArray* getBytesInCodePage(::java::lang::String* string, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    static ::java::lang::String* getStringFromCodePage(::int8_tArray* string, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    static ::java::lang::String* getStringFromCodePage(::int8_tArray* string, int32_t offset, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    static ::java::lang::String* codepageToEncoding(int32_t codepage) /* throws(UnsupportedEncodingException) */;
    static ::java::lang::String* codepageToEncoding(int32_t codepage, bool javaLangFormat) /* throws(UnsupportedEncodingException) */;
    static ::java::lang::String* cp950ToString(::int8_tArray* data, int32_t offset, int32_t lengthInBytes);

    // Generated
    CodePageUtil();
protected:
    CodePageUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::util::Set*& DOUBLE_BYTE_CHARSETS();

private:
    virtual ::java::lang::Class* getClass0();
};
