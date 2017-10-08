// Generated from /POI/java/org/apache/poi/util/StringUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::StringUtil
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static POILogger* logger_;
    static ::java::nio::charset::Charset* ISO_8859_1_;
    static ::java::nio::charset::Charset* UTF16LE_;
    static ::java::nio::charset::Charset* UTF8_;
    static ::java::nio::charset::Charset* WIN_1252_;
    static ::java::nio::charset::Charset* BIG5_;
    static ::java::util::Map* msCodepointToUnicode_;
protected:
    void ctor();

public:
    static ::java::lang::String* getFromUnicodeLE(::int8_tArray* string, int32_t offset, int32_t len) /* throws(ArrayIndexOutOfBoundsException, IllegalArgumentException) */;
    static ::java::lang::String* getFromUnicodeLE(::int8_tArray* string);
    static ::int8_tArray* getToUnicodeLE(::java::lang::String* string);
    static ::java::lang::String* getFromCompressedUnicode(::int8_tArray* string, int32_t offset, int32_t len);
    static ::java::lang::String* readCompressedUnicode(LittleEndianInput* in, int32_t nChars);
    static ::java::lang::String* readUnicodeString(LittleEndianInput* in);
    static ::java::lang::String* readUnicodeString(LittleEndianInput* in, int32_t nChars);
    static void writeUnicodeString(LittleEndianOutput* out, ::java::lang::String* value);
    static void writeUnicodeStringFlagAndData(LittleEndianOutput* out, ::java::lang::String* value);
    static int32_t getEncodedSize(::java::lang::String* value);
    static void putCompressedUnicode(::java::lang::String* input, ::int8_tArray* output, int32_t offset);
    static void putCompressedUnicode(::java::lang::String* input, LittleEndianOutput* out);
    static void putUnicodeLE(::java::lang::String* input, ::int8_tArray* output, int32_t offset);
    static void putUnicodeLE(::java::lang::String* input, LittleEndianOutput* out);
    static ::java::lang::String* readUnicodeLE(LittleEndianInput* in, int32_t nChars);
    static ::java::lang::String* getPreferredEncoding();
    static bool hasMultibyte(::java::lang::String* value);
    static bool isUnicodeString(::java::lang::String* value);
    static bool startsWithIgnoreCase(::java::lang::String* haystack, ::java::lang::String* prefix);
    static bool endsWithIgnoreCase(::java::lang::String* haystack, ::java::lang::String* suffix);
    static ::java::lang::String* mapMsCodepointString(::java::lang::String* string);
    static void mapMsCodepoint(int32_t msCodepoint, int32_t unicodeCodepoint);

private:
    static void initMsCodepointMap();
    static ::int32_tArray* symbolMap_f020_;
    static ::int32_tArray* symbolMap_f0a0_;

public:
    static ::java::lang::String* join(::java::lang::ObjectArray* array, ::java::lang::String* separator);
    static ::java::lang::String* join(::java::lang::ObjectArray* array);
    static ::java::lang::String* join(::java::lang::String* separator, ::java::lang::ObjectArray*/*...*/ array);
    static int32_t countMatches(::java::lang::CharSequence* haystack, char16_t needle);

    // Generated

private:
    StringUtil();
protected:
    StringUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static POILogger*& logger();

public: /* protected */
    static ::java::nio::charset::Charset*& ISO_8859_1();

public:
    static ::java::nio::charset::Charset*& UTF16LE();
    static ::java::nio::charset::Charset*& UTF8();
    static ::java::nio::charset::Charset*& WIN_1252();
    static ::java::nio::charset::Charset*& BIG5();

private:
    static ::java::util::Map*& msCodepointToUnicode();
    static ::int32_tArray*& symbolMap_f020();
    static ::int32_tArray*& symbolMap_f0a0();
    virtual ::java::lang::Class* getClass0();
    friend class StringUtil_StringsIterator;
};
