// Generated from /POI/java/org/apache/poi/util/StringUtil.java
#include <org/apache/poi/util/StringUtil.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::StringUtil::StringUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::StringUtil::StringUtil() 
    : StringUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::util::StringUtil::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::util::StringUtil::logger_;

java::nio::charset::Charset*& org::apache::poi::util::StringUtil::ISO_8859_1()
{
    clinit();
    return ISO_8859_1_;
}
java::nio::charset::Charset* org::apache::poi::util::StringUtil::ISO_8859_1_;

java::nio::charset::Charset*& org::apache::poi::util::StringUtil::UTF16LE()
{
    clinit();
    return UTF16LE_;
}
java::nio::charset::Charset* org::apache::poi::util::StringUtil::UTF16LE_;

java::nio::charset::Charset*& org::apache::poi::util::StringUtil::UTF8()
{
    clinit();
    return UTF8_;
}
java::nio::charset::Charset* org::apache::poi::util::StringUtil::UTF8_;

java::nio::charset::Charset*& org::apache::poi::util::StringUtil::WIN_1252()
{
    clinit();
    return WIN_1252_;
}
java::nio::charset::Charset* org::apache::poi::util::StringUtil::WIN_1252_;

java::nio::charset::Charset*& org::apache::poi::util::StringUtil::BIG5()
{
    clinit();
    return BIG5_;
}
java::nio::charset::Charset* org::apache::poi::util::StringUtil::BIG5_;

java::util::Map*& org::apache::poi::util::StringUtil::msCodepointToUnicode()
{
    clinit();
    return msCodepointToUnicode_;
}
java::util::Map* org::apache::poi::util::StringUtil::msCodepointToUnicode_;

void org::apache::poi::util::StringUtil::ctor()
{
    super::ctor();
}

java::lang::String* org::apache::poi::util::StringUtil::getFromUnicodeLE(::int8_tArray* string, int32_t offset, int32_t len) /* throws(ArrayIndexOutOfBoundsException, IllegalArgumentException) */
{
    clinit();
    if((offset < 0) || (offset >= npc(string)->length)) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Illegal offset "_j)->append(offset)
            ->append(u" (String data is of length "_j)
            ->append(npc(string)->length)
            ->append(u")"_j)->toString());
    }
    if((len < 0) || (((npc(string)->length - offset) / int32_t(2)) < len)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Illegal length "_j)->append(len)->toString());
    }
    return new ::java::lang::String(string, offset, len * int32_t(2), UTF16LE_);
}

java::lang::String* org::apache::poi::util::StringUtil::getFromUnicodeLE(::int8_tArray* string)
{
    clinit();
    if(npc(string)->length == 0) {
        return u""_j;
    }
    return getFromUnicodeLE(string, 0, npc(string)->length / int32_t(2));
}

int8_tArray* org::apache::poi::util::StringUtil::getToUnicodeLE(::java::lang::String* string)
{
    clinit();
    return npc(string)->getBytes(UTF16LE_);
}

java::lang::String* org::apache::poi::util::StringUtil::getFromCompressedUnicode(::int8_tArray* string, int32_t offset, int32_t len)
{
    clinit();
    auto len_to_use = ::java::lang::Math::min(len, npc(string)->length - offset);
    return new ::java::lang::String(string, offset, len_to_use, ISO_8859_1_);
}

java::lang::String* org::apache::poi::util::StringUtil::readCompressedUnicode(LittleEndianInput* in, int32_t nChars)
{
    clinit();
    auto buf = new ::int8_tArray(nChars);
    npc(in)->readFully(buf);
    return new ::java::lang::String(buf, ISO_8859_1_);
}

java::lang::String* org::apache::poi::util::StringUtil::readUnicodeString(LittleEndianInput* in)
{
    clinit();
    auto nChars = npc(in)->readUShort();
    auto flag = npc(in)->readByte();
    if((flag & int32_t(1)) == 0) {
        return readCompressedUnicode(in, nChars);
    }
    return readUnicodeLE(in, nChars);
}

java::lang::String* org::apache::poi::util::StringUtil::readUnicodeString(LittleEndianInput* in, int32_t nChars)
{
    clinit();
    auto is16Bit = npc(in)->readByte();
    if((is16Bit & int32_t(1)) == 0) {
        return readCompressedUnicode(in, nChars);
    }
    return readUnicodeLE(in, nChars);
}

void org::apache::poi::util::StringUtil::writeUnicodeString(LittleEndianOutput* out, ::java::lang::String* value)
{
    clinit();
    auto nChars = npc(value)->length();
    npc(out)->writeShort(nChars);
    auto is16Bit = hasMultibyte(value);
    npc(out)->writeByte(is16Bit ? int32_t(1) : int32_t(0));
    if(is16Bit) {
        putUnicodeLE(value, out);
    } else {
        putCompressedUnicode(value, out);
    }
}

void org::apache::poi::util::StringUtil::writeUnicodeStringFlagAndData(LittleEndianOutput* out, ::java::lang::String* value)
{
    clinit();
    auto is16Bit = hasMultibyte(value);
    npc(out)->writeByte(is16Bit ? int32_t(1) : int32_t(0));
    if(is16Bit) {
        putUnicodeLE(value, out);
    } else {
        putCompressedUnicode(value, out);
    }
}

int32_t org::apache::poi::util::StringUtil::getEncodedSize(::java::lang::String* value)
{
    clinit();
    auto result = int32_t(2) + int32_t(1);
    result += npc(value)->length() * (StringUtil::hasMultibyte(value) ? int32_t(2) : int32_t(1));
    return result;
}

void org::apache::poi::util::StringUtil::putCompressedUnicode(::java::lang::String* input, ::int8_tArray* output, int32_t offset)
{
    clinit();
    auto bytes = npc(input)->getBytes(ISO_8859_1_);
    ::java::lang::System::arraycopy(bytes, 0, output, offset, npc(bytes)->length);
}

void org::apache::poi::util::StringUtil::putCompressedUnicode(::java::lang::String* input, LittleEndianOutput* out)
{
    clinit();
    auto bytes = npc(input)->getBytes(ISO_8859_1_);
    npc(out)->write(bytes);
}

void org::apache::poi::util::StringUtil::putUnicodeLE(::java::lang::String* input, ::int8_tArray* output, int32_t offset)
{
    clinit();
    auto bytes = npc(input)->getBytes(UTF16LE_);
    ::java::lang::System::arraycopy(bytes, 0, output, offset, npc(bytes)->length);
}

void org::apache::poi::util::StringUtil::putUnicodeLE(::java::lang::String* input, LittleEndianOutput* out)
{
    clinit();
    auto bytes = npc(input)->getBytes(UTF16LE_);
    npc(out)->write(bytes);
}

java::lang::String* org::apache::poi::util::StringUtil::readUnicodeLE(LittleEndianInput* in, int32_t nChars)
{
    clinit();
    auto bytes = new ::int8_tArray(nChars * int32_t(2));
    npc(in)->readFully(bytes);
    return new ::java::lang::String(bytes, UTF16LE_);
}

java::lang::String* org::apache::poi::util::StringUtil::getPreferredEncoding()
{
    clinit();
    return npc(ISO_8859_1_)->name();
}

bool org::apache::poi::util::StringUtil::hasMultibyte(::java::lang::String* value)
{
    clinit();
    if(value == nullptr)
        return false;

    for(auto c : *npc(npc(value)->toCharArray_())) {
        if(c > 255) {
            return true;
        }
    }
    return false;
}

bool org::apache::poi::util::StringUtil::isUnicodeString(::java::lang::String* value)
{
    clinit();
    return !npc(value)->equals(static_cast< ::java::lang::Object* >(new ::java::lang::String(npc(value)->getBytes(ISO_8859_1_), ISO_8859_1_)));
}

bool org::apache::poi::util::StringUtil::startsWithIgnoreCase(::java::lang::String* haystack, ::java::lang::String* prefix)
{
    clinit();
    return npc(haystack)->regionMatches(true, 0, prefix, 0, npc(prefix)->length());
}

bool org::apache::poi::util::StringUtil::endsWithIgnoreCase(::java::lang::String* haystack, ::java::lang::String* suffix)
{
    clinit();
    auto length = npc(suffix)->length();
    auto start = npc(haystack)->length() - length;
    return npc(haystack)->regionMatches(true, start, suffix, 0, length);
}

java::lang::String* org::apache::poi::util::StringUtil::mapMsCodepointString(::java::lang::String* string)
{
    clinit();
    if(string == nullptr || npc(u""_j)->equals(static_cast< ::java::lang::Object* >(string)))
        return string;

    initMsCodepointMap();
    auto sb = new ::java::lang::StringBuilder();
    auto const length = npc(string)->length();
    for (auto offset = int32_t(0); offset < length; ) {
        ::java::lang::Integer* msCodepoint = ::java::lang::Integer::valueOf(npc(string)->codePointAt(offset));
        auto uniCodepoint = java_cast< ::java::lang::Integer* >(npc(msCodepointToUnicode_)->get(msCodepoint));
        npc(sb)->appendCodePoint((npc(uniCodepoint == nullptr ? msCodepoint : uniCodepoint))->intValue());
        offset += ::java::lang::Character::charCount((npc(msCodepoint))->intValue());
    }
    return npc(sb)->toString();
}

void org::apache::poi::util::StringUtil::mapMsCodepoint(int32_t msCodepoint, int32_t unicodeCodepoint)
{
    clinit();
    initMsCodepointMap();
    npc(msCodepointToUnicode_)->put(::java::lang::Integer::valueOf(msCodepoint), ::java::lang::Integer::valueOf(unicodeCodepoint));
}

void org::apache::poi::util::StringUtil::initMsCodepointMap()
{
    clinit();
    if(msCodepointToUnicode_ != nullptr)
        return;

    msCodepointToUnicode_ = new ::java::util::HashMap();
    auto i = int32_t(61472);
    for(auto ch : *npc(symbolMap_f020_)) {
        npc(msCodepointToUnicode_)->put(::java::lang::Integer::valueOf(i++), ::java::lang::Integer::valueOf(ch));
    }
    i = 61600;
    for(auto ch : *npc(symbolMap_f0a0_)) {
        npc(msCodepointToUnicode_)->put(::java::lang::Integer::valueOf(i++), ::java::lang::Integer::valueOf(ch));
    }
}

int32_tArray*& org::apache::poi::util::StringUtil::symbolMap_f020()
{
    clinit();
    return symbolMap_f020_;
}
int32_tArray* org::apache::poi::util::StringUtil::symbolMap_f020_;

int32_tArray*& org::apache::poi::util::StringUtil::symbolMap_f0a0()
{
    clinit();
    return symbolMap_f0a0_;
}
int32_tArray* org::apache::poi::util::StringUtil::symbolMap_f0a0_;

java::lang::String* org::apache::poi::util::StringUtil::join(::java::lang::ObjectArray* array, ::java::lang::String* separator)
{
    clinit();
    if(array == nullptr || npc(array)->length == 0)
        return u""_j;

    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append((*array)[int32_t(0)]);
    for (auto i = int32_t(1); i < npc(array)->length; i++) {
        npc(npc(sb)->append(separator))->append((*array)[i]);
    }
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::StringUtil::join(::java::lang::ObjectArray* array)
{
    clinit();
    if(array == nullptr)
        return u""_j;

    auto sb = new ::java::lang::StringBuilder();
    for(auto o : *npc(array)) {
        npc(sb)->append(o);
    }
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::StringUtil::join(::java::lang::String* separator, ::java::lang::ObjectArray*/*...*/ array)
{
    clinit();
    return join(array, separator);
}

int32_t org::apache::poi::util::StringUtil::countMatches(::java::lang::CharSequence* haystack, char16_t needle)
{
    clinit();
    if(haystack == nullptr)
        return 0;

    auto count = int32_t(0);
    auto const length = npc(haystack)->length();
    for (auto i = int32_t(0); i < length; i++) {
        if(npc(haystack)->charAt(i) == needle) {
            count++;
        }
    }
    return count;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::StringUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.StringUtil", 30);
    return c;
}

void org::apache::poi::util::StringUtil::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(StringUtil::class_()));
        ISO_8859_1_ = ::java::nio::charset::Charset::forName(u"ISO-8859-1"_j);
        UTF16LE_ = ::java::nio::charset::Charset::forName(u"UTF-16LE"_j);
        UTF8_ = ::java::nio::charset::Charset::forName(u"UTF-8"_j);
        WIN_1252_ = ::java::nio::charset::Charset::forName(u"cp1252"_j);
        BIG5_ = ::java::nio::charset::Charset::forName(u"Big5"_j);
        symbolMap_f020_ = (new ::int32_tArray({
            static_cast< int32_t >(u' ')
            , static_cast< int32_t >(u'!')
            , int32_t(8704)
            , static_cast< int32_t >(u'#')
            , int32_t(8707)
            , static_cast< int32_t >(u'%')
            , static_cast< int32_t >(u'&')
            , int32_t(8717)
            , static_cast< int32_t >(u'(')
            , static_cast< int32_t >(u')')
            , int32_t(8727)
            , static_cast< int32_t >(u'+')
            , static_cast< int32_t >(u',')
            , int32_t(8722)
            , static_cast< int32_t >(u'.')
            , static_cast< int32_t >(u'/')
            , static_cast< int32_t >(u'0')
            , static_cast< int32_t >(u'1')
            , static_cast< int32_t >(u'2')
            , static_cast< int32_t >(u'3')
            , static_cast< int32_t >(u'4')
            , static_cast< int32_t >(u'5')
            , static_cast< int32_t >(u'6')
            , static_cast< int32_t >(u'7')
            , static_cast< int32_t >(u'8')
            , static_cast< int32_t >(u'9')
            , static_cast< int32_t >(u':')
            , static_cast< int32_t >(u';')
            , static_cast< int32_t >(u'<')
            , static_cast< int32_t >(u'=')
            , static_cast< int32_t >(u'>')
            , static_cast< int32_t >(u'?')
            , int32_t(8773)
            , int32_t(913)
            , int32_t(914)
            , int32_t(935)
            , int32_t(916)
            , int32_t(917)
            , int32_t(934)
            , int32_t(915)
            , int32_t(919)
            , int32_t(921)
            , int32_t(977)
            , int32_t(922)
            , int32_t(923)
            , int32_t(924)
            , int32_t(925)
            , int32_t(927)
            , int32_t(928)
            , int32_t(920)
            , int32_t(929)
            , int32_t(931)
            , int32_t(932)
            , int32_t(933)
            , int32_t(962)
            , int32_t(937)
            , int32_t(926)
            , int32_t(936)
            , int32_t(918)
            , static_cast< int32_t >(u'[')
            , int32_t(8765)
            , static_cast< int32_t >(u']')
            , int32_t(8869)
            , static_cast< int32_t >(u'_')
            , static_cast< int32_t >(u' ')
            , int32_t(945)
            , int32_t(946)
            , int32_t(967)
            , int32_t(948)
            , int32_t(949)
            , int32_t(966)
            , int32_t(947)
            , int32_t(951)
            , int32_t(953)
            , int32_t(981)
            , int32_t(954)
            , int32_t(955)
            , int32_t(956)
            , int32_t(957)
            , int32_t(959)
            , int32_t(960)
            , int32_t(952)
            , int32_t(961)
            , int32_t(963)
            , int32_t(964)
            , int32_t(965)
            , int32_t(982)
            , int32_t(969)
            , int32_t(958)
            , int32_t(968)
            , int32_t(950)
            , static_cast< int32_t >(u'{')
            , static_cast< int32_t >(u'|')
            , static_cast< int32_t >(u'}')
            , int32_t(8764)
            , static_cast< int32_t >(u' ')
        }));
        symbolMap_f0a0_ = (new ::int32_tArray({
            int32_t(8364)
            , int32_t(978)
            , int32_t(8242)
            , int32_t(8804)
            , int32_t(8260)
            , int32_t(8734)
            , int32_t(402)
            , int32_t(9827)
            , int32_t(9830)
            , int32_t(9829)
            , int32_t(9824)
            , int32_t(8596)
            , int32_t(8591)
            , int32_t(8593)
            , int32_t(8594)
            , int32_t(8595)
            , int32_t(176)
            , int32_t(177)
            , int32_t(8243)
            , int32_t(8805)
            , int32_t(215)
            , int32_t(181)
            , int32_t(8706)
            , int32_t(8729)
            , int32_t(247)
            , int32_t(8800)
            , int32_t(8801)
            , int32_t(8776)
            , int32_t(8230)
            , int32_t(9168)
            , int32_t(9135)
            , int32_t(8629)
            , int32_t(8501)
            , int32_t(8475)
            , int32_t(8476)
            , int32_t(8472)
            , int32_t(8855)
            , int32_t(8853)
            , int32_t(8709)
            , int32_t(8745)
            , int32_t(8746)
            , int32_t(8835)
            , int32_t(8839)
            , int32_t(8836)
            , int32_t(8834)
            , int32_t(8838)
            , int32_t(8712)
            , int32_t(8713)
            , int32_t(8736)
            , int32_t(8711)
            , int32_t(174)
            , int32_t(169)
            , int32_t(8482)
            , int32_t(8719)
            , int32_t(8730)
            , int32_t(8901)
            , int32_t(172)
            , int32_t(8743)
            , int32_t(8744)
            , int32_t(8660)
            , int32_t(8656)
            , int32_t(8657)
            , int32_t(8658)
            , int32_t(8659)
            , int32_t(9674)
            , int32_t(9001)
            , int32_t(174)
            , int32_t(169)
            , int32_t(8482)
            , int32_t(8721)
            , int32_t(9115)
            , int32_t(9116)
            , int32_t(9117)
            , int32_t(9121)
            , int32_t(9122)
            , int32_t(9123)
            , int32_t(9127)
            , int32_t(9128)
            , int32_t(9129)
            , int32_t(9130)
            , static_cast< int32_t >(u' ')
            , int32_t(9002)
            , int32_t(8747)
            , int32_t(8992)
            , int32_t(9134)
            , int32_t(8993)
            , int32_t(9118)
            , int32_t(9119)
            , int32_t(9120)
            , int32_t(9124)
            , int32_t(9125)
            , int32_t(9126)
            , int32_t(9131)
            , int32_t(9132)
            , int32_t(9133)
            , static_cast< int32_t >(u' ')
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::StringUtil::getClass0()
{
    return class_();
}

