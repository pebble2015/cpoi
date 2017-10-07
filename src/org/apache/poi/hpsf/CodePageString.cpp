// Generated from /POI/java/org/apache/poi/hpsf/CodePageString.java
#include <org/apache/poi/hpsf/CodePageString.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/TypedPropertyValue.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::CodePageString::CodePageString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::CodePageString::CodePageString() 
    : CodePageString(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::hpsf::CodePageString::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::hpsf::CodePageString::LOG_;

void org::apache::poi::hpsf::CodePageString::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::CodePageString::read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei)
{
    auto offset = npc(lei)->getReadIndex();
    auto size = npc(lei)->readInt();
    _value = new ::int8_tArray(size);
    if(size == 0) {
        return;
    }
    npc(lei)->readFully(_value);
    if((*_value)[size - int32_t(1)] != 0) {
        auto msg = ::java::lang::StringBuilder().append(u"CodePageString started at offset #"_j)->append(offset)
            ->append(u" is not NULL-terminated"_j)->toString();
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
    }
    TypedPropertyValue::skipPadding(lei);
}

java::lang::String* org::apache::poi::hpsf::CodePageString::getJavaValue(int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    auto cp = (codepage == -int32_t(1)) ? Property::DEFAULT_CODEPAGE : codepage;
    auto result = ::org::apache::poi::util::CodePageUtil::getStringFromCodePage(_value, cp);
    auto const terminator = npc(result)->indexOf(static_cast< int32_t >(char16_t(0x0000)));
    if(terminator == -int32_t(1)) {
        auto msg = ::java::lang::StringBuilder().append(u"String terminator (\\0) for CodePageString property value not found."_j)->append(u"Continue without trimming and hope for the best."_j)->toString();
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
        return result;
    }
    if(terminator != npc(result)->length() - int32_t(1)) {
        auto msg = ::java::lang::StringBuilder().append(u"String terminator (\\0) for CodePageString property value occured before the end of string. "_j)->append(u"Trimming and hope for the best."_j)->toString();
        npc(LOG_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
    }
    return npc(result)->substring(0, terminator);
}

int32_t org::apache::poi::hpsf::CodePageString::getSize()
{
    return ::org::apache::poi::util::LittleEndianConsts::INT_SIZE + npc(_value)->length;
}

void org::apache::poi::hpsf::CodePageString::setJavaValue(::java::lang::String* string, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    auto cp = (codepage == -int32_t(1)) ? Property::DEFAULT_CODEPAGE : codepage;
    _value = ::org::apache::poi::util::CodePageUtil::getBytesInCodePage(::java::lang::StringBuilder().append(string)->append(u"\0"_j)->toString(), cp);
}

int32_t org::apache::poi::hpsf::CodePageString::write(::java::io::OutputStream* out) /* throws(IOException) */
{
    ::org::apache::poi::util::LittleEndian::putUInt(npc(_value)->length, out);
    npc(out)->write(_value);
    return ::org::apache::poi::util::LittleEndianConsts::INT_SIZE + npc(_value)->length;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::CodePageString::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.CodePageString", 34);
    return c;
}

void org::apache::poi::hpsf::CodePageString::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(CodePageString::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::CodePageString::getClass0()
{
    return class_();
}

