// Generated from /POI/java/org/apache/poi/util/HexDump.java
#include <org/apache/poi/util/HexDump.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/nio/charset/Charset.hpp>
#include <org/apache/commons/codec/CharEncoding.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::HexDump::HexDump(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::HexDump::HexDump() 
    : HexDump(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& org::apache::poi::util::HexDump::EOL()
{
    clinit();
    return EOL_;
}
java::lang::String* org::apache::poi::util::HexDump::EOL_;

java::nio::charset::Charset*& org::apache::poi::util::HexDump::UTF8()
{
    clinit();
    return UTF8_;
}
java::nio::charset::Charset* org::apache::poi::util::HexDump::UTF8_;

void org::apache::poi::util::HexDump::ctor()
{
    super::ctor();
}

void org::apache::poi::util::HexDump::dump(::int8_tArray* data, int64_t offset, ::java::io::OutputStream* stream, int32_t index, int32_t length) /* throws(IOException, ArrayIndexOutOfBoundsException, IllegalArgumentException) */
{
    clinit();
    if(stream == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cannot write to nullstream"_j);
    }
    auto osw = new ::java::io::OutputStreamWriter(stream, UTF8_);
    npc(osw)->write(dump(data, offset, index, length));
    npc(osw)->flush();
}

void org::apache::poi::util::HexDump::dump(::int8_tArray* data, int64_t offset, ::java::io::OutputStream* stream, int32_t index) /* throws(IOException, ArrayIndexOutOfBoundsException, IllegalArgumentException) */
{
    clinit();
    dump(data, offset, stream, index, ::java::lang::Integer::MAX_VALUE);
}

java::lang::String* org::apache::poi::util::HexDump::dump(::int8_tArray* data, int64_t offset, int32_t index)
{
    clinit();
    return dump(data, offset, index, ::java::lang::Integer::MAX_VALUE);
}

java::lang::String* org::apache::poi::util::HexDump::dump(::int8_tArray* data, int64_t offset, int32_t index, int32_t length)
{
    clinit();
    if(data == nullptr || npc(data)->length == 0) {
        return ::java::lang::StringBuilder().append(u"No Data"_j)->append(EOL_)->toString();
    }
    auto data_length = (length == ::java::lang::Integer::MAX_VALUE || length < 0 || index + length < 0) ? npc(data)->length : ::java::lang::Math::min(npc(data)->length, index + length);
    if((index < 0) || (index >= npc(data)->length)) {
        auto err = ::java::lang::StringBuilder().append(u"illegal index: "_j)->append(index)
            ->append(u" into array of length "_j)
            ->append(npc(data)->length)->toString();
        throw new ::java::lang::ArrayIndexOutOfBoundsException(err);
    }
    auto display_offset = offset + index;
    auto buffer = new ::java::lang::StringBuilder(int32_t(74));
    for (auto j = index; j < data_length; j += 16) {
        auto chars_read = data_length - j;
        if(chars_read > 16) {
            chars_read = 16;
        }
        writeHex(buffer, display_offset, 8, u""_j);
        for (auto k = int32_t(0); k < 16; k++) {
            if(k < chars_read) {
                writeHex(buffer, (*data)[k + j], 2, u" "_j);
            } else {
                npc(buffer)->append(u"   "_j);
            }
        }
        npc(buffer)->append(u' ');
        for (auto k = int32_t(0); k < chars_read; k++) {
            npc(buffer)->append(toAscii((*data)[k + j]));
        }
        npc(buffer)->append(EOL_);
        display_offset += chars_read;
    }
    return npc(buffer)->toString();
}

char16_t org::apache::poi::util::HexDump::toAscii(int32_t dataB)
{
    clinit();
    auto charB = static_cast< char16_t >((dataB & int32_t(255)));
    if(::java::lang::Character::isISOControl(charB)) {
        return u'.';
    }
    switch (charB) {
    case int32_t(255):
    case int32_t(221):
        charB = u'.';
        break;
    default:
        break;
    }

    return charB;
}

java::lang::String* org::apache::poi::util::HexDump::toHex(::int8_tArray* value)
{
    clinit();
    auto retVal = new ::java::lang::StringBuilder();
    npc(retVal)->append(u'[');
    if(value != nullptr && npc(value)->length > 0) {
        for (auto x = int32_t(0); x < npc(value)->length; x++) {
            if(x > 0) {
                npc(retVal)->append(u", "_j);
            }
            npc(retVal)->append(toHex((*value)[x]));
        }
    }
    npc(retVal)->append(u']');
    return npc(retVal)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(::int16_tArray* value)
{
    clinit();
    auto retVal = new ::java::lang::StringBuilder();
    npc(retVal)->append(u'[');
    for (auto x = int32_t(0); x < npc(value)->length; x++) {
        if(x > 0) {
            npc(retVal)->append(u", "_j);
        }
        npc(retVal)->append(toHex((*value)[x]));
    }
    npc(retVal)->append(u']');
    return npc(retVal)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(::int8_tArray* value, int32_t bytesPerLine)
{
    clinit();
    if(npc(value)->length == 0) {
        return u": 0"_j;
    }
    auto const digits = static_cast< int32_t >(::java::lang::Math::round(::java::lang::Math::log(npc(value)->length) / ::java::lang::Math::log(10) + 0.5));
    auto retVal = new ::java::lang::StringBuilder();
    writeHex(retVal, 0, digits, u""_j);
    npc(retVal)->append(u": "_j);
    for (int32_t x = int32_t(0), i = -int32_t(1); x < npc(value)->length; x++) {
        if(++i == bytesPerLine) {
            npc(retVal)->append(u'\u000a');
            writeHex(retVal, x, digits, u""_j);
            npc(retVal)->append(u": "_j);
            i = 0;
        } else if(x > 0) {
            npc(retVal)->append(u", "_j);
        }
        npc(retVal)->append(toHex((*value)[x]));
    }
    return npc(retVal)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(int16_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(4));
    writeHex(sb, value & int32_t(65535), 4, u""_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(int8_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(2));
    writeHex(sb, value & int32_t(255), 2, u""_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(int32_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(8));
    writeHex(sb, value & int64_t(4294967295LL), 8, u""_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(int64_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(16));
    writeHex(sb, value, 16, u""_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::toHex(::java::lang::String* value)
{
    clinit();
    return (value == nullptr || npc(value)->length() == 0) ? u"[]"_j : toHex(npc(value)->getBytes(LocaleUtil::CHARSET_1252()));
}

void org::apache::poi::util::HexDump::dump(::java::io::InputStream* in, ::java::io::PrintStream* out, int32_t start, int32_t bytesToDump) /* throws(IOException) */
{
    clinit();
    auto buf = new ::java::io::ByteArrayOutputStream();
    if(bytesToDump == -int32_t(1)) {
        auto c = npc(in)->read();
        while (c != -int32_t(1)) {
            npc(buf)->write(c);
            c = npc(in)->read();
        }
    } else {
        auto bytesRemaining = bytesToDump;
        while (bytesRemaining-- > 0) {
            auto c = npc(in)->read();
            if(c == -int32_t(1)) {
                break;
            }
            npc(buf)->write(c);
        }
    }
    auto data = npc(buf)->toByteArray_();
    dump(data, 0, out, start, npc(data)->length);
}

java::lang::String* org::apache::poi::util::HexDump::longToHex(int64_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(18));
    writeHex(sb, value, 16, u"0x"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::intToHex(int32_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(10));
    writeHex(sb, value & int64_t(4294967295LL), 8, u"0x"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::shortToHex(int32_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(6));
    writeHex(sb, value & int64_t(65535LL), 4, u"0x"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::util::HexDump::byteToHex(int32_t value)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(4));
    writeHex(sb, value & int64_t(255LL), 2, u"0x"_j);
    return npc(sb)->toString();
}

void org::apache::poi::util::HexDump::writeHex(::java::lang::StringBuilder* sb, int64_t value, int32_t nDigits, ::java::lang::String* prefix)
{
    clinit();
    npc(sb)->append(prefix);
    auto buf = new ::char16_tArray(nDigits);
    auto acc = value;
    for (auto i = nDigits - int32_t(1); i >= 0; i--) {
        auto digit = static_cast< int32_t >((acc & int32_t(15)));
        (*buf)[i] = static_cast< char16_t >((digit < 10 ? (u'0' + digit) : (u'A' + digit - int32_t(10))));
        acc = static_cast<uint64_t>(acc) >> 4;
    }
    npc(sb)->append(buf);
}

void org::apache::poi::util::HexDump::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    ::java::io::InputStream* in = new ::java::io::FileInputStream((*args)[int32_t(0)]);
    auto b = IOUtils::toByteArray_(in);
    npc(in)->close();
    npc(::java::lang::System::out())->println(HexDump::dump(b, 0, 0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::HexDump::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.HexDump", 27);
    return c;
}

void org::apache::poi::util::HexDump::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EOL_ = ::java::lang::System::getProperty(u"line.separator"_j);
        UTF8_ = ::java::nio::charset::Charset::forName(::org::apache::commons::codec::CharEncoding::UTF_8());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::HexDump::getClass0()
{
    return class_();
}

