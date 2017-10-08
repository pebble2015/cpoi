// Generated from /POI/java/org/apache/poi/hssf/record/HyperlinkRecord.java
#include <org/apache/poi/hssf/record/HyperlinkRecord_GUID.hpp>

#include <java/lang/Byte.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

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

poi::hssf::record::HyperlinkRecord_GUID::HyperlinkRecord_GUID(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::HyperlinkRecord_GUID::HyperlinkRecord_GUID(::poi::util::LittleEndianInput* in) 
    : HyperlinkRecord_GUID(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::hssf::record::HyperlinkRecord_GUID::HyperlinkRecord_GUID(int32_t d1, int32_t d2, int32_t d3, int64_t d4) 
    : HyperlinkRecord_GUID(*static_cast< ::default_init_tag* >(0))
{
    ctor(d1,d2,d3,d4);
}

constexpr int32_t poi::hssf::record::HyperlinkRecord_GUID::TEXT_FORMAT_LENGTH;

constexpr int32_t poi::hssf::record::HyperlinkRecord_GUID::ENCODED_SIZE;

void poi::hssf::record::HyperlinkRecord_GUID::ctor(::poi::util::LittleEndianInput* in)
{
    ctor(npc(in)->readInt(), npc(in)->readUShort(), npc(in)->readUShort(), npc(in)->readLong());
}

void poi::hssf::record::HyperlinkRecord_GUID::ctor(int32_t d1, int32_t d2, int32_t d3, int64_t d4)
{
    super::ctor();
    _d1 = d1;
    _d2 = d2;
    _d3 = d3;
    _d4 = d4;
}

void poi::hssf::record::HyperlinkRecord_GUID::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(_d1);
    npc(out)->writeShort(_d2);
    npc(out)->writeShort(_d3);
    npc(out)->writeLong(_d4);
}

bool poi::hssf::record::HyperlinkRecord_GUID::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< HyperlinkRecord_GUID* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< HyperlinkRecord_GUID* >(obj);
    return _d1 == npc(other)->_d1 && _d2 == npc(other)->_d2 && _d3 == npc(other)->_d3 && _d4 == npc(other)->_d4;
}

int32_t poi::hssf::record::HyperlinkRecord_GUID::hashCode()
{
    /* assert(false : u"hashCode not designed"_j) */ ;
    return 42;
}

int32_t poi::hssf::record::HyperlinkRecord_GUID::getD1()
{
    return _d1;
}

int32_t poi::hssf::record::HyperlinkRecord_GUID::getD2()
{
    return _d2;
}

int32_t poi::hssf::record::HyperlinkRecord_GUID::getD3()
{
    return _d3;
}

int64_t poi::hssf::record::HyperlinkRecord_GUID::getD4()
{
    auto result = new ::int8_tArray(::java::lang::Long::SIZE / ::java::lang::Byte::SIZE);
    auto l = _d4;
    for (auto i = npc(result)->length - int32_t(1); i >= 0; i--) {
        (*result)[i] = static_cast< int8_t >((l & int32_t(255)));
        l >>= 8;
    }
    return ::poi::util::LittleEndian::getLong(result, 0);
}

java::lang::String* poi::hssf::record::HyperlinkRecord_GUID::formatAsString()
{
    auto sb = new ::java::lang::StringBuilder(int32_t(36));
    auto PREFIX_LEN = npc(u"0x"_j)->length();
    npc(sb)->append(npc(::poi::util::HexDump::intToHex(_d1))->substring(PREFIX_LEN));
    npc(sb)->append(u"-"_j);
    npc(sb)->append(npc(::poi::util::HexDump::shortToHex(_d2))->substring(PREFIX_LEN));
    npc(sb)->append(u"-"_j);
    npc(sb)->append(npc(::poi::util::HexDump::shortToHex(_d3))->substring(PREFIX_LEN));
    npc(sb)->append(u"-"_j);
    auto d4Chars = ::poi::util::HexDump::longToHex(getD4());
    npc(sb)->append(npc(d4Chars)->substring(PREFIX_LEN, PREFIX_LEN + int32_t(4)));
    npc(sb)->append(u"-"_j);
    npc(sb)->append(npc(d4Chars)->substring(PREFIX_LEN + int32_t(4)));
    return npc(sb)->toString();
}

java::lang::String* poi::hssf::record::HyperlinkRecord_GUID::toString()
{
    auto sb = new ::java::lang::StringBuilder(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(formatAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

poi::hssf::record::HyperlinkRecord_GUID* poi::hssf::record::HyperlinkRecord_GUID::parse(::java::lang::String* rep)
{
    clinit();
    auto cc = npc(rep)->toCharArray_();
    if(npc(cc)->length != TEXT_FORMAT_LENGTH) {
        throw new ::poi::util::RecordFormatException(u"supplied text is the wrong length for a GUID"_j);
    }
    auto d0 = (parseShort(cc, 0) << int32_t(16)) + (parseShort(cc, 4) << int32_t(0));
    auto d1 = parseShort(cc, 9);
    auto d2 = parseShort(cc, 14);
    for (auto i = int32_t(23); i > 19; i--) {
        (*cc)[i] = (*cc)[i - int32_t(1)];
    }
    auto d3 = parseLELong(cc, 20);
    return new HyperlinkRecord_GUID(d0, d1, d2, d3);
}

int64_t poi::hssf::record::HyperlinkRecord_GUID::parseLELong(::char16_tArray* cc, int32_t startIndex)
{
    clinit();
    int64_t acc = int32_t(0);
    for (auto i = startIndex + int32_t(14); i >= startIndex; i -= 2) {
        acc <<= 4;
        acc += parseHexChar((*cc)[i + int32_t(0)]);
        acc <<= 4;
        acc += parseHexChar((*cc)[i + int32_t(1)]);
    }
    return acc;
}

int32_t poi::hssf::record::HyperlinkRecord_GUID::parseShort(::char16_tArray* cc, int32_t startIndex)
{
    clinit();
    auto acc = int32_t(0);
    for (auto i = int32_t(0); i < 4; i++) {
        acc <<= 4;
        acc += parseHexChar((*cc)[startIndex + i]);
    }
    return acc;
}

int32_t poi::hssf::record::HyperlinkRecord_GUID::parseHexChar(char16_t c)
{
    clinit();
    if(c >= u'0' && c <= u'9') {
        return c - u'0';
    }
    if(c >= u'A' && c <= u'F') {
        return c - u'A' + int32_t(10);
    }
    if(c >= u'a' && c <= u'f') {
        return c - u'a' + int32_t(10);
    }
    throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Bad hex char '"_j)->append(c)
        ->append(u"'"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::HyperlinkRecord_GUID::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HyperlinkRecord.GUID", 47);
    return c;
}

java::lang::Class* poi::hssf::record::HyperlinkRecord_GUID::getClass0()
{
    return class_();
}

