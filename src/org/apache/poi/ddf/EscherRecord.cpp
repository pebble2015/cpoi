// Generated from /POI/java/org/apache/poi/ddf/EscherRecord.java
#include <org/apache/poi/ddf/EscherRecord.hpp>

#include <java/io/PrintWriter.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Collections.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/NullEscherSerializationListener.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

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

org::apache::poi::ddf::EscherRecord::EscherRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherRecord::EscherRecord() 
    : EscherRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::BitField*& org::apache::poi::ddf::EscherRecord::fInstance()
{
    clinit();
    return fInstance_;
}
org::apache::poi::util::BitField* org::apache::poi::ddf::EscherRecord::fInstance_;

org::apache::poi::util::BitField*& org::apache::poi::ddf::EscherRecord::fVersion()
{
    clinit();
    return fVersion_;
}
org::apache::poi::util::BitField* org::apache::poi::ddf::EscherRecord::fVersion_;

void org::apache::poi::ddf::EscherRecord::ctor()
{
    super::ctor();
}

int32_t org::apache::poi::ddf::EscherRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return fillFields(data, 0, f);
}

int32_t org::apache::poi::ddf::EscherRecord::readHeader(::int8_tArray* data, int32_t offset)
{
    _options = ::org::apache::poi::util::LittleEndian::getShort(data, offset);
    _recordId = ::org::apache::poi::util::LittleEndian::getShort(data, offset + int32_t(2));
    return ::org::apache::poi::util::LittleEndian::getInt(data, offset + int32_t(4));
}

int16_t org::apache::poi::ddf::EscherRecord::readInstance(::int8_tArray* data, int32_t offset)
{
    clinit();
    auto const options = ::org::apache::poi::util::LittleEndian::getShort(data, offset);
    return npc(fInstance_)->getShortValue(options);
}

bool org::apache::poi::ddf::EscherRecord::isContainerRecord()
{
    return getVersion() == static_cast< int16_t >(int32_t(15));
}

int16_t org::apache::poi::ddf::EscherRecord::getOptions()
{
    return _options;
}

void org::apache::poi::ddf::EscherRecord::setOptions(int16_t options)
{
    setVersion(npc(fVersion_)->getShortValue(options));
    setInstance(npc(fInstance_)->getShortValue(options));
    _options = options;
}

int8_tArray* org::apache::poi::ddf::EscherRecord::serialize()
{
    auto retval = new ::int8_tArray(getRecordSize());
    serialize(0, retval);
    return retval;
}

int32_t org::apache::poi::ddf::EscherRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return serialize(offset, data, new NullEscherSerializationListener());
}

int16_t org::apache::poi::ddf::EscherRecord::getRecordId()
{
    return _recordId;
}

void org::apache::poi::ddf::EscherRecord::setRecordId(int16_t recordId)
{
    _recordId = recordId;
}

java::util::List* org::apache::poi::ddf::EscherRecord::getChildRecords()
{
    return ::java::util::Collections::emptyList();
}

void org::apache::poi::ddf::EscherRecord::setChildRecords(::java::util::List* childRecords)
{
    throw new ::java::lang::UnsupportedOperationException(u"This record does not support child records."_j);
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::ddf::EscherRecord::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< EscherRecord* >(super::clone());
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::ddf::EscherRecord::getChild(int32_t index)
{
    return java_cast< EscherRecord* >(npc(getChildRecords())->get(index));
}

void org::apache::poi::ddf::EscherRecord::display(::java::io::PrintWriter* w, int32_t indent)
{
    for (auto i = int32_t(0); i < indent * int32_t(4); i++) {
        npc(w)->print(u' ');
    }
    npc(w)->println(getRecordName());
}

int16_t org::apache::poi::ddf::EscherRecord::getInstance()
{
    return npc(fInstance_)->getShortValue(_options);
}

void org::apache::poi::ddf::EscherRecord::setInstance(int16_t value)
{
    _options = npc(fInstance_)->setShortValue(_options, value);
}

int16_t org::apache::poi::ddf::EscherRecord::getVersion()
{
    return npc(fVersion_)->getShortValue(_options);
}

void org::apache::poi::ddf::EscherRecord::setVersion(int16_t value)
{
    _options = npc(fVersion_)->setShortValue(_options, value);
}

java::lang::String* org::apache::poi::ddf::EscherRecord::toXml()
{
    return toXml(u""_j);
}

java::lang::String* org::apache::poi::ddf::EscherRecord::toXml(::java::lang::String* tab)
{
    auto const nl = ::java::lang::System::getProperty(u"line.separator"_j);
    auto clsNm = npc(getClass())->getSimpleName();
    auto sb = new ::java::lang::StringBuilder(int32_t(1000));
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(sb)->append(tab))->append(u"<"_j))->append(clsNm))->append(u" recordId=\"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getRecordId())))->append(u"\" version=\"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getVersion())))->append(u"\" instance=\"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getInstance())))->append(u"\" options=\"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(u"\" recordSize=\""_j))->append(getRecordSize());
    auto attrList = getAttributeMap();
    if(attrList == nullptr || npc(attrList)->length == 0) {
        npc(npc(sb)->append(u"\" />"_j))->append(nl);
    } else {
        npc(npc(sb)->append(u"\">"_j))->append(nl);
        auto childTab = ::java::lang::StringBuilder().append(tab)->append(u"   "_j)->toString();
        for(auto attrs : *npc(attrList)) {
            auto tagName = capitalizeAndTrim(java_cast< ::java::lang::String* >((*attrs)[int32_t(0)]));
            auto hasValue = false;
            auto lastChildComplex = false;
            for (auto i = int32_t(0); i < npc(attrs)->length; i += 2) {
                auto value = (*attrs)[i + int32_t(1)];
                if(value == nullptr) {
                    continue;
                }
                if(!hasValue) {
                    npc(npc(npc(npc(sb)->append(childTab))->append(u"<"_j))->append(tagName))->append(u">"_j);
                }
                auto optName = capitalizeAndTrim(java_cast< ::java::lang::String* >((*attrs)[i + int32_t(0)]));
                if(i > 0) {
                    npc(npc(npc(npc(npc(sb)->append(nl))->append(childTab))->append(u"  <"_j))->append(optName))->append(u">"_j);
                }
                lastChildComplex = appendValue(sb, value, true, childTab);
                if(i > 0) {
                    npc(npc(npc(npc(npc(sb)->append(nl))->append(childTab))->append(u"  </"_j))->append(optName))->append(u">"_j);
                }
                hasValue = true;
            }
            if(hasValue) {
                if(lastChildComplex) {
                    npc(npc(sb)->append(nl))->append(childTab);
                }
                npc(npc(npc(npc(sb)->append(u"</"_j))->append(tagName))->append(u">"_j))->append(nl);
            }
        }
        npc(npc(npc(npc(sb)->append(tab))->append(u"</"_j))->append(clsNm))->append(u">"_j);
    }
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ddf::EscherRecord::toString()
{
    auto const nl = ::java::lang::System::getProperty(u"line.separator"_j);
    auto sb = new ::java::lang::StringBuilder(int32_t(1000));
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ("_j))->append(getRecordName()))->append(u"):"_j))->append(nl))->append(u"  RecordId: 0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getRecordId())))->append(nl))->append(u"  Version: 0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getVersion())))->append(nl))->append(u"  Instance: 0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getInstance())))->append(nl))->append(u"  Options: 0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(nl))->append(u"  Record Size: "_j))->append(getRecordSize());
    auto attrList = getAttributeMap();
    if(attrList != nullptr && npc(attrList)->length > 0) {
        auto childTab = u"  "_j;
        for(auto attrs : *npc(attrList)) {
            for (auto i = int32_t(0); i < npc(attrs)->length; i += 2) {
                auto value = (*attrs)[i + int32_t(1)];
                if(value == nullptr) {
                    continue;
                }
                auto name = java_cast< ::java::lang::String* >((*attrs)[i + int32_t(0)]);
                npc(npc(npc(npc(sb)->append(nl))->append(childTab))->append(name))->append(u": "_j);
                appendValue(sb, value, false, childTab);
            }
        }
    }
    return npc(sb)->toString();
}

bool org::apache::poi::ddf::EscherRecord::appendValue(::java::lang::StringBuilder* sb, ::java::lang::Object* value, bool toXML, ::java::lang::String* childTab)
{
    clinit();
    auto const nl = ::java::lang::System::getProperty(u"line.separator"_j);
    auto isComplex = false;
    if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
        if(toXML) {
            escapeXML(java_cast< ::java::lang::String* >(value), sb);
        } else {
            npc(sb)->append(java_cast< ::java::lang::String* >(value));
        }
    } else if(dynamic_cast< ::java::lang::Byte* >(value) != nullptr) {
        npc(npc(sb)->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex((npc(java_cast< ::java::lang::Byte* >(value)))->byteValue()));
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        npc(npc(sb)->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex((npc(java_cast< ::java::lang::Short* >(value)))->shortValue()));
    } else if(dynamic_cast< ::java::lang::Integer* >(value) != nullptr) {
        npc(npc(sb)->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex((npc(java_cast< ::java::lang::Integer* >(value)))->intValue()));
    } else if(dynamic_cast< ::int8_tArray* >(value) != nullptr) {
        npc(npc(sb)->append(nl))->append(npc(::org::apache::poi::util::HexDump::toHex(java_cast< ::int8_tArray* >(value), 32))->replaceAll(u"(?m)^"_j, ::java::lang::StringBuilder().append(childTab)->append(u"   "_j)->toString()));
    } else if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
        npc(sb)->append(npc((java_cast< ::java::lang::Boolean* >(value)))->booleanValue());
    } else if(dynamic_cast< EscherRecord* >(value) != nullptr) {
        auto er = java_cast< EscherRecord* >(value);
        if(toXML) {
            npc(npc(sb)->append(nl))->append(npc(er)->toXml(::java::lang::StringBuilder().append(childTab)->append(u"    "_j)->toString()));
        } else {
            npc(sb)->append(npc(npc(er)->toString())->replaceAll(u"(?m)^"_j, childTab));
        }
        isComplex = true;
    } else if(dynamic_cast< EscherProperty* >(value) != nullptr) {
        auto ep = java_cast< EscherProperty* >(value);
        if(toXML) {
            npc(npc(sb)->append(nl))->append(npc(ep)->toXml(::java::lang::StringBuilder().append(childTab)->append(u"  "_j)->toString()));
        } else {
            npc(sb)->append(npc(npc(ep)->toString())->replaceAll(u"(?m)^"_j, childTab));
        }
        isComplex = true;
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"unknown attribute type "_j)->append(npc(npc(value)->getClass())->getSimpleName())->toString());
    }
    return isComplex;
}

java::lang::String* org::apache::poi::ddf::EscherRecord::capitalizeAndTrim(::java::lang::String* str)
{
    clinit();
    if(str == nullptr || npc(str)->length() == 0) {
        return str;
    }
    auto sb = new ::java::lang::StringBuilder(npc(str)->length());
    auto capitalizeNext = true;
    for(auto ch : *npc(npc(str)->toCharArray_())) {
        if(!::java::lang::Character::isLetterOrDigit(ch)) {
            capitalizeNext = true;
            continue;
        }
        if(capitalizeNext) {
            if(!::java::lang::Character::isLetter(ch)) {
                npc(sb)->append(u'_');
            } else {
                ch = ::java::lang::Character::toTitleCase(ch);
            }
            capitalizeNext = false;
        }
        npc(sb)->append(ch);
    }
    return npc(sb)->toString();
}

void org::apache::poi::ddf::EscherRecord::escapeXML(::java::lang::String* s, ::java::lang::StringBuilder* out)
{
    clinit();
    if(s == nullptr || npc(s)->isEmpty()) {
        return;
    }
    for(auto c : *npc(npc(s)->toCharArray_())) {
        if(c > 127 || c == u'"' || c == u'<' || c == u'>' || c == u'&') {
            npc(out)->append(u"&#"_j);
            npc(out)->append(static_cast< int32_t >(c));
            npc(out)->append(u';');
        } else {
            npc(out)->append(c);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherRecord", 31);
    return c;
}

void org::apache::poi::ddf::EscherRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        fInstance_ = ::org::apache::poi::util::BitFieldFactory::getInstance(65520);
        fVersion_ = ::org::apache::poi::util::BitFieldFactory::getInstance(15);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ddf::EscherRecord::getClass0()
{
    return class_();
}

