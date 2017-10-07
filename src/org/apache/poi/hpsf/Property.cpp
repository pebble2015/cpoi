// Generated from /POI/java/org/apache/poi/hpsf/Property.java
#include <org/apache/poi/hpsf/Property.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <java/util/Locale.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <javax/xml/bind/DatatypeConverter.hpp>
#include <org/apache/poi/hpsf/Filetime.hpp>
#include <org/apache/poi/hpsf/UnsupportedVariantTypeException.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/hpsf/VariantSupport.hpp>
#include <org/apache/poi/hpsf/WritingNotSupportedException.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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

org::apache::poi::hpsf::Property::Property(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Property::Property() 
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::Property::Property(Property* p) 
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor(p);
}

org::apache::poi::hpsf::Property::Property(int64_t id, int64_t type, ::java::lang::Object* value) 
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,type,value);
}

org::apache::poi::hpsf::Property::Property(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage)  /* throws(UnsupportedEncodingException) */
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,src,offset,length,codepage);
}

org::apache::poi::hpsf::Property::Property(int64_t id, ::org::apache::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage)  /* throws(UnsupportedEncodingException) */
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,leis,length,codepage);
}

constexpr int32_t org::apache::poi::hpsf::Property::DEFAULT_CODEPAGE;

org::apache::poi::util::POILogger*& org::apache::poi::hpsf::Property::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::hpsf::Property::LOG_;

void org::apache::poi::hpsf::Property::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::Property::ctor(Property* p)
{
    ctor(npc(p)->id, npc(p)->type, npc(p)->value);
}

void org::apache::poi::hpsf::Property::ctor(int64_t id, int64_t type, ::java::lang::Object* value)
{
    super::ctor();
    this->id = id;
    this->type = type;
    this->value = value;
}

void org::apache::poi::hpsf::Property::ctor(int64_t id, ::int8_tArray* src, int64_t offset, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    super::ctor();
    this->id = id;
    if(id == 0) {
        throw new ::java::io::UnsupportedEncodingException(u"Dictionary not allowed here"_j);
    }
    auto o = static_cast< int32_t >(offset);
    type = ::org::apache::poi::util::LittleEndian::getUInt(src, o);
    o += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    try {
        value = VariantSupport::read(src, o, length, static_cast< int32_t >(type), codepage);
    } catch (UnsupportedVariantTypeException* ex) {
        VariantSupport::writeUnsupportedTypeMessage(ex);
        value = npc(ex)->getValue();
    }
}

void org::apache::poi::hpsf::Property::ctor(int64_t id, ::org::apache::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    super::ctor();
    this->id = id;
    if(id == 0) {
        throw new ::java::io::UnsupportedEncodingException(u"Dictionary not allowed here"_j);
    }
    type = npc(leis)->readUInt();
    try {
        value = VariantSupport::read(leis, length, static_cast< int32_t >(type), codepage);
    } catch (UnsupportedVariantTypeException* ex) {
        VariantSupport::writeUnsupportedTypeMessage(ex);
        value = npc(ex)->getValue();
    }
}

int64_t org::apache::poi::hpsf::Property::getID()
{
    return id;
}

void org::apache::poi::hpsf::Property::setID(int64_t id)
{
    this->id = id;
}

int64_t org::apache::poi::hpsf::Property::getType()
{
    return type;
}

void org::apache::poi::hpsf::Property::setType(int64_t type)
{
    this->type = type;
}

java::lang::Object* org::apache::poi::hpsf::Property::getValue()
{
    return value;
}

void org::apache::poi::hpsf::Property::setValue(::java::lang::Object* value)
{
    this->value = value;
}

int32_t org::apache::poi::hpsf::Property::getSize(int32_t codepage) /* throws(WritingNotSupportedException) */
{
    auto length = Variant::getVariantLength(type);
    if(length >= 0 || type == Variant::VT_EMPTY) {
        return length;
    }
    if(length == -int32_t(2)) {
        throw new WritingNotSupportedException(type, nullptr);
    }
    if(type == Variant::VT_LPSTR || type == Variant::VT_LPWSTR) {
        auto bos = new ::java::io::ByteArrayOutputStream();
        try {
            length = write(bos, codepage) - int32_t(2) * ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
            length += (int32_t(4) - (length & int32_t(3))) & int32_t(3);
            return length;
        } catch (::java::io::IOException* e) {
            throw new WritingNotSupportedException(type, value);
        }
    }
    throw new WritingNotSupportedException(type, value);
}

bool org::apache::poi::hpsf::Property::equals(::java::lang::Object* o)
{
    if(!(dynamic_cast< Property* >(o) != nullptr)) {
        return false;
    }
    auto const p = java_cast< Property* >(o);
    auto const pValue = npc(p)->getValue();
    auto const pId = npc(p)->getID();
    if(id != pId || (id != 0 && !typesAreEqual(type, npc(p)->getType()))) {
        return false;
    }
    if(value == nullptr && pValue == nullptr) {
        return true;
    }
    if(value == nullptr || pValue == nullptr) {
        return false;
    }
    auto const valueClass = npc(value)->getClass();
    auto const pValueClass = npc(pValue)->getClass();
    if(!(npc(valueClass)->isAssignableFrom(pValueClass)) && !(npc(pValueClass)->isAssignableFrom(valueClass))) {
        return false;
    }
    if(dynamic_cast< ::int8_tArray* >(value) != nullptr) {
        auto thisVal = java_cast< ::int8_tArray* >(value);
        auto otherVal = java_cast< ::int8_tArray* >(pValue);
        auto len = unpaddedLength(thisVal);
        if(len != unpaddedLength(otherVal)) {
            return false;
        }
        for (auto i = int32_t(0); i < len; i++) {
            if((*thisVal)[i] != (*otherVal)[i]) {
                return false;
            }
        }
        return true;
    }
    return npc(value)->equals(pValue);
}

int32_t org::apache::poi::hpsf::Property::unpaddedLength(::int8_tArray* buf)
{
    clinit();
    int32_t len;
    for (len = npc(buf)->length; len > 0 && len > npc(buf)->length - int32_t(4) && (*buf)[len - int32_t(1)] == 0; len--) 
                ;

    return len;
}

bool org::apache::poi::hpsf::Property::typesAreEqual(int64_t t1, int64_t t2)
{
    return (t1 == t2 || (t1 == Variant::VT_LPSTR && t2 == Variant::VT_LPWSTR) || (t2 == Variant::VT_LPSTR && t1 == Variant::VT_LPWSTR));
}

int32_t org::apache::poi::hpsf::Property::hashCode()
{
    int64_t hashCode = int32_t(0);
    hashCode += id;
    hashCode += type;
    if(value != nullptr) {
        hashCode += npc(value)->hashCode();
    }
    return static_cast< int32_t >((hashCode & int64_t(4294967295LL)));
}

java::lang::String* org::apache::poi::hpsf::Property::toString()
{
    return toString(Property::DEFAULT_CODEPAGE, nullptr);
}

java::lang::String* org::apache::poi::hpsf::Property::toString(int32_t codepage, ::org::apache::poi::hpsf::wellknown::PropertyIDMap* idMap)
{
    auto const b = new ::java::lang::StringBuilder();
    npc(b)->append(u"Property["_j);
    npc(b)->append(u"id: "_j);
    npc(b)->append(id);
    auto idName = (idMap == nullptr) ? static_cast< ::java::lang::String* >(nullptr) : npc(idMap)->get(::java::lang::Long::valueOf(id));
    if(idName == nullptr) {
        idName = npc(::org::apache::poi::hpsf::wellknown::PropertyIDMap::getFallbackProperties())->get(::java::lang::Long::valueOf(id));
    }
    if(idName != nullptr) {
        npc(b)->append(u" ("_j);
        npc(b)->append(idName);
        npc(b)->append(u")"_j);
    }
    npc(b)->append(u", type: "_j);
    npc(b)->append(getType());
    npc(b)->append(u" ("_j);
    npc(b)->append(getVariantName());
    npc(b)->append(u") "_j);
    auto const value = getValue();
    npc(b)->append(u", value: "_j);
    if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
        npc(b)->append(java_cast< ::java::lang::String* >(value));
        npc(b)->append(u"\n"_j);
        auto bos = new ::java::io::ByteArrayOutputStream();
        try {
            write(bos, codepage);
        } catch (::java::lang::Exception* e) {
            npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"can't serialize string"_j), static_cast< ::java::lang::Object* >(e)}));
        }
        if(npc(bos)->size() > int32_t(2) * ::org::apache::poi::util::LittleEndianConsts::INT_SIZE) {
            auto const hex = ::org::apache::poi::util::HexDump::dump(npc(bos)->toByteArray_(), -int32_t(2) * ::org::apache::poi::util::LittleEndianConsts::INT_SIZE, int32_t(2) * ::org::apache::poi::util::LittleEndianConsts::INT_SIZE);
            npc(b)->append(hex);
        }
    } else if(dynamic_cast< ::int8_tArray* >(value) != nullptr) {
        npc(b)->append(u"\n"_j);
        auto bytes = java_cast< ::int8_tArray* >(value);
        if(npc(bytes)->length > 0) {
            auto hex = ::org::apache::poi::util::HexDump::dump(bytes, 0LL, 0);
            npc(b)->append(hex);
        }
    } else if(dynamic_cast< ::java::util::Date* >(value) != nullptr) {
        auto d = java_cast< ::java::util::Date* >(value);
        auto filetime = Filetime::dateToFileTime(d);
        if(Filetime::isUndefined(d)) {
            npc(b)->append(u"<undefined>"_j);
        } else if((static_cast<int64_t>(static_cast<uint64_t>(filetime) >> int32_t(32))) == 0) {
            auto l = filetime * int32_t(100);
            auto tu = ::java::util::concurrent::TimeUnit::NANOSECONDS;
            auto const hr = npc(tu)->toHours(l);
            l -= npc(::java::util::concurrent::TimeUnit::HOURS)->toNanos(hr);
            auto const min = npc(tu)->toMinutes(l);
            l -= npc(::java::util::concurrent::TimeUnit::MINUTES)->toNanos(min);
            auto const sec = npc(tu)->toSeconds(l);
            l -= npc(::java::util::concurrent::TimeUnit::SECONDS)->toNanos(sec);
            auto const ms = npc(tu)->toMillis(l);
            auto str = ::java::lang::String::format(::java::util::Locale::ROOT(), u"%02d:%02d:%02d.%03d"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(hr)), static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(min)), static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(sec)), static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(ms))}));
            npc(b)->append(str);
        } else {
            auto cal = ::java::util::Calendar::getInstance(::org::apache::poi::util::LocaleUtil::TIMEZONE_UTC(), ::java::util::Locale::ROOT());
            npc(cal)->setTime(d);
            npc(b)->append(::javax::xml::bind::DatatypeConverter::printDateTime(cal));
        }
    } else if(type == Variant::VT_EMPTY || type == Variant::VT_NULL || value == nullptr) {
        npc(b)->append(u"null"_j);
    } else {
        npc(b)->append(npc(value)->toString());
        auto decoded = decodeValueFromID();
        if(decoded != nullptr) {
            npc(b)->append(u" ("_j);
            npc(b)->append(decoded);
            npc(b)->append(u")"_j);
        }
    }
    npc(b)->append(u']');
    return npc(b)->toString();
}

java::lang::String* org::apache::poi::hpsf::Property::getVariantName()
{
    if(getID() == 0) {
        return u"dictionary"_j;
    }
    return Variant::getVariantName(getType());
}

java::lang::String* org::apache::poi::hpsf::Property::decodeValueFromID()
{
    try {
        switch (static_cast< int32_t >(getID())) {
        case ::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE:
            return ::org::apache::poi::util::CodePageUtil::codepageToEncoding(npc((java_cast< ::java::lang::Number* >(value)))->intValue());
        case ::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LOCALE:
            return ::org::apache::poi::util::LocaleUtil::getLocaleFromLCID(npc((java_cast< ::java::lang::Number* >(value)))->intValue());
        }

    } catch (::java::lang::Exception* e) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Can't decode id "_j)->append(getID())->toString())}));
    }
    return nullptr;
}

int32_t org::apache::poi::hpsf::Property::write(::java::io::OutputStream* out, int32_t codepage) /* throws(IOException, WritingNotSupportedException) */
{
    auto length = int32_t(0);
    auto variantType = getType();
    if(variantType == Variant::VT_LPSTR && codepage != ::org::apache::poi::util::CodePageUtil::CP_UTF16) {
        auto csStr = ::org::apache::poi::util::CodePageUtil::codepageToEncoding(codepage > 0 ? codepage : Property::DEFAULT_CODEPAGE);
        if(!npc(npc(::java::nio::charset::Charset::forName(csStr))->newEncoder())->canEncode(static_cast< ::java::lang::CharSequence* >(java_cast< ::java::lang::String* >(value)))) {
            variantType = Variant::VT_LPWSTR;
        }
    }
    ::org::apache::poi::util::LittleEndian::putUInt(variantType, out);
    length += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    length += VariantSupport::write(out, variantType, getValue(), codepage);
    return length;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Property::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Property", 28);
    return c;
}

void org::apache::poi::hpsf::Property::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(Property::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::Property::getClass0()
{
    return class_();
}

