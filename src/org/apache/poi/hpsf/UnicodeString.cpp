// Generated from /POI/java/org/apache/poi/hpsf/UnicodeString.java
#include <org/apache/poi/hpsf/UnicodeString.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hpsf/IllegalPropertySetDataException.hpp>
#include <org/apache/poi/hpsf/TypedPropertyValue.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::UnicodeString::UnicodeString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::UnicodeString::UnicodeString() 
    : UnicodeString(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::hpsf::UnicodeString::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::hpsf::UnicodeString::LOG_;

void org::apache::poi::hpsf::UnicodeString::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::UnicodeString::read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei)
{
    auto const length = npc(lei)->readInt();
    auto const unicodeBytes = length * int32_t(2);
    _value = new ::int8_tArray(unicodeBytes);
    if(length == 0) {
        return;
    }
    auto const offset = npc(lei)->getReadIndex();
    npc(lei)->readFully(_value);
    if((*_value)[unicodeBytes - int32_t(2)] != 0 || (*_value)[unicodeBytes - int32_t(1)] != 0) {
        auto msg = ::java::lang::StringBuilder().append(u"UnicodeString started at offset #"_j)->append(offset)
            ->append(u" is not NULL-terminated"_j)->toString();
        throw new IllegalPropertySetDataException(msg);
    }
    TypedPropertyValue::skipPadding(lei);
}

int8_tArray* org::apache::poi::hpsf::UnicodeString::getValue()
{
    return _value;
}

java::lang::String* org::apache::poi::hpsf::UnicodeString::toJavaString()
{
    if(npc(_value)->length == 0) {
        return nullptr;
    }
    auto result = ::org::apache::poi::util::StringUtil::getFromUnicodeLE(_value, 0, npc(_value)->length >> int32_t(1));
    auto const terminator = npc(result)->indexOf(static_cast< int32_t >(char16_t(0x0000)));
    if(terminator == -int32_t(1)) {
        auto msg = ::java::lang::StringBuilder().append(u"String terminator (\\0) for UnicodeString property value not found."_j)->append(u"Continue without trimming and hope for the best."_j)->toString();
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
        return result;
    }
    if(terminator != npc(result)->length() - int32_t(1)) {
        auto msg = ::java::lang::StringBuilder().append(u"String terminator (\\0) for UnicodeString property value occured before the end of string. "_j)->append(u"Trimming and hope for the best."_j)->toString();
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
    }
    return npc(result)->substring(0, terminator);
}

void org::apache::poi::hpsf::UnicodeString::setJavaValue(::java::lang::String* string) /* throws(UnsupportedEncodingException) */
{
    _value = ::org::apache::poi::util::CodePageUtil::getBytesInCodePage(::java::lang::StringBuilder().append(string)->append(u"\0"_j)->toString(), ::org::apache::poi::util::CodePageUtil::CP_UNICODE);
}

int32_t org::apache::poi::hpsf::UnicodeString::write(::java::io::OutputStream* out) /* throws(IOException) */
{
    ::org::apache::poi::util::LittleEndian::putUInt(npc(_value)->length / int32_t(2), out);
    npc(out)->write(_value);
    return ::org::apache::poi::util::LittleEndianConsts::INT_SIZE + npc(_value)->length;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::UnicodeString::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.UnicodeString", 33);
    return c;
}

void org::apache::poi::hpsf::UnicodeString::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(UnicodeString::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::UnicodeString::getClass0()
{
    return class_();
}

