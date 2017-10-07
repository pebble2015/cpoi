// Generated from /POI/java/org/apache/poi/hpsf/VariantSupport.java
#include <org/apache/poi/hpsf/VariantSupport.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/math/BigInteger.hpp>
#include <java/util/Date.hpp>
#include <java/util/LinkedList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hpsf/ClipboardData.hpp>
#include <org/apache/poi/hpsf/CodePageString.hpp>
#include <org/apache/poi/hpsf/Filetime.hpp>
#include <org/apache/poi/hpsf/ReadingNotSupportedException.hpp>
#include <org/apache/poi/hpsf/TypedPropertyValue.hpp>
#include <org/apache/poi/hpsf/UnicodeString.hpp>
#include <org/apache/poi/hpsf/UnsupportedVariantTypeException.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/hpsf/VariantBool.hpp>
#include <org/apache/poi/hpsf/WritingNotSupportedException.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
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

org::apache::poi::hpsf::VariantSupport::VariantSupport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::VariantSupport::VariantSupport()
    : VariantSupport(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_tArray*& org::apache::poi::hpsf::VariantSupport::SUPPORTED_TYPES()
{
    clinit();
    return SUPPORTED_TYPES_;
}
int32_tArray* org::apache::poi::hpsf::VariantSupport::SUPPORTED_TYPES_;

org::apache::poi::util::POILogger*& org::apache::poi::hpsf::VariantSupport::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hpsf::VariantSupport::logger_;

bool& org::apache::poi::hpsf::VariantSupport::logUnsupportedTypes()
{
    clinit();
    return logUnsupportedTypes_;
}
bool org::apache::poi::hpsf::VariantSupport::logUnsupportedTypes_;

java::util::List*& org::apache::poi::hpsf::VariantSupport::unsupportedMessage()
{
    clinit();
    return unsupportedMessage_;
}
java::util::List* org::apache::poi::hpsf::VariantSupport::unsupportedMessage_;

int8_tArray*& org::apache::poi::hpsf::VariantSupport::paddingBytes()
{
    clinit();
    return paddingBytes_;
}
int8_tArray* org::apache::poi::hpsf::VariantSupport::paddingBytes_;

void org::apache::poi::hpsf::VariantSupport::setLogUnsupportedTypes(bool logUnsupportedTypes)
{
    clinit();
    VariantSupport::logUnsupportedTypes_ = logUnsupportedTypes;
}

bool org::apache::poi::hpsf::VariantSupport::isLogUnsupportedTypes()
{
    clinit();
    return logUnsupportedTypes_;
}

void org::apache::poi::hpsf::VariantSupport::writeUnsupportedTypeMessage(UnsupportedVariantTypeException* ex)
{
    clinit();
    if(isLogUnsupportedTypes()) {
        if(unsupportedMessage_ == nullptr) {
            unsupportedMessage_ = new ::java::util::LinkedList();
        }
        auto vt = ::java::lang::Long::valueOf(npc(ex)->getVariantType());
        if(!npc(unsupportedMessage_)->contains(static_cast< ::java::lang::Object* >(vt))) {
            npc(logger_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(npc(ex)->getMessage())}));
            npc(unsupportedMessage_)->add(static_cast< ::java::lang::Object* >(vt));
        }
    }
}

bool org::apache::poi::hpsf::VariantSupport::isSupportedType(int32_t variantType)
{
    for(auto st : *npc(SUPPORTED_TYPES_)) {
        if(variantType == st) {
            return true;
        }
    }
    return false;
}

java::lang::Object* org::apache::poi::hpsf::VariantSupport::read(::int8_tArray* src, int32_t offset, int32_t length, int64_t type, int32_t codepage) /* throws(ReadingNotSupportedException, UnsupportedEncodingException) */
{
    clinit();
    auto lei = new ::org::apache::poi::util::LittleEndianByteArrayInputStream(src, offset);
    return read(lei, length, type, codepage);
}

java::lang::Object* org::apache::poi::hpsf::VariantSupport::read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei, int32_t length, int64_t type, int32_t codepage) /* throws(ReadingNotSupportedException, UnsupportedEncodingException) */
{
    clinit();
    auto const offset = npc(lei)->getReadIndex();
    auto typedPropertyValue = new TypedPropertyValue(static_cast< int32_t >(type), nullptr);
    try {
        npc(typedPropertyValue)->readValue(lei);
    } catch (::java::lang::UnsupportedOperationException* exc) {
        auto propLength = ::java::lang::Math::min(length, npc(lei)->available());
        auto const v = new ::int8_tArray(propLength);
        npc(lei)->readFully(v, int32_t(0), propLength);
        throw new ReadingNotSupportedException(type, v);
    }
    {
        Filetime* filetime;
        CodePageString* cpString;
        UnicodeString* uniString;
        ClipboardData* clipboardData;
        VariantBool* bool_;
        int32_t unpadded;
        ::int8_tArray* v;
        switch (static_cast< int32_t >(type)) {
        case Variant::VT_EMPTY:
        case Variant::VT_I1:
        case Variant::VT_UI1:
        case Variant::VT_UI2:
        case Variant::VT_I4:
        case Variant::VT_UI4:
        case Variant::VT_I8:
        case Variant::VT_UI8:
        case Variant::VT_R4:
        case Variant::VT_R8:
            return npc(typedPropertyValue)->getValue();
        case Variant::VT_I2:
            return ::java::lang::Integer::valueOf(npc((java_cast< ::java::lang::Short* >(npc(typedPropertyValue)->getValue())))->intValue());
        case Variant::VT_FILETIME:
            filetime = java_cast< Filetime* >(npc(typedPropertyValue)->getValue());
            return npc(filetime)->getJavaValue();
        case Variant::VT_LPSTR:
            cpString = java_cast< CodePageString* >(npc(typedPropertyValue)->getValue());
            return npc(cpString)->getJavaValue(codepage);
        case Variant::VT_LPWSTR:
            uniString = java_cast< UnicodeString* >(npc(typedPropertyValue)->getValue());
            return npc(uniString)->toJavaString();
        case Variant::VT_CF:
            clipboardData = java_cast< ClipboardData* >(npc(typedPropertyValue)->getValue());
            return npc(clipboardData)->toByteArray_();
        case Variant::VT_BOOL:
            bool_ = java_cast< VariantBool* >(npc(typedPropertyValue)->getValue());
            return ::java::lang::Boolean::valueOf(npc(bool_)->getValue());
        default:
            unpadded = npc(lei)->getReadIndex() - offset;
            npc(lei)->setReadIndex(offset);
            v = new ::int8_tArray(unpadded);
            npc(lei)->readFully(v, int32_t(0), unpadded);
            throw new ReadingNotSupportedException(type, v);
        }
    }

}

java::lang::String* org::apache::poi::hpsf::VariantSupport::codepageToEncoding(int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    clinit();
    return ::org::apache::poi::util::CodePageUtil::codepageToEncoding(codepage);
}

int32_t org::apache::poi::hpsf::VariantSupport::write(::java::io::OutputStream* out, int64_t type, ::java::lang::Object* value, int32_t codepage) /* throws(IOException, WritingNotSupportedException) */
{
    clinit();
    auto length = -int32_t(1);
    {
        Filetime* filetimeValue;
        switch (static_cast< int32_t >(type)) {
        case Variant::VT_BOOL: {
                if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
                    auto bb = (npc((java_cast< ::java::lang::Boolean* >(value))))->booleanValue() ? int32_t(255) : int32_t(0);
                    npc(out)->write(bb);
                    npc(out)->write(bb);
                    length = 2;
                }
                break;
            }
        case Variant::VT_LPSTR:
            if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
                auto codePageString = new CodePageString();
                npc(codePageString)->setJavaValue(java_cast< ::java::lang::String* >(value), codepage);
                length = npc(codePageString)->write(out);
            }
            break;
        case Variant::VT_LPWSTR:
            if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
                auto uniString = new UnicodeString();
                npc(uniString)->setJavaValue(java_cast< ::java::lang::String* >(value));
                length = npc(uniString)->write(out);
            }
            break;
        case Variant::VT_CF:
            if(dynamic_cast< ::int8_tArray* >(value) != nullptr) {
                auto const cf = java_cast< ::int8_tArray* >(value);
                npc(out)->write(cf);
                length = npc(cf)->length;
            }
            break;
        case Variant::VT_EMPTY:
            ::org::apache::poi::util::LittleEndian::putUInt(Variant::VT_EMPTY, out);
            length = ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
            break;
        case Variant::VT_I2:
            if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                ::org::apache::poi::util::LittleEndian::putShort(out, npc((java_cast< ::java::lang::Number* >(value)))->shortValue());
                length = ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
            }
            break;
        case Variant::VT_UI2:
            if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                ::org::apache::poi::util::LittleEndian::putUShort(npc((java_cast< ::java::lang::Number* >(value)))->intValue(), out);
                length = ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
            }
            break;
        case Variant::VT_I4:
            if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                ::org::apache::poi::util::LittleEndian::putInt(npc((java_cast< ::java::lang::Number* >(value)))->intValue(), out);
                length = ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
            }
            break;
        case Variant::VT_UI4:
            if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                ::org::apache::poi::util::LittleEndian::putUInt(npc((java_cast< ::java::lang::Number* >(value)))->longValue(), out);
                length = ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
            }
            break;
        case Variant::VT_I8:
            if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                ::org::apache::poi::util::LittleEndian::putLong(npc((java_cast< ::java::lang::Number* >(value)))->longValue(), out);
                length = ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE;
            }
            break;
        case Variant::VT_UI8: {
                if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                    auto bi = (dynamic_cast< ::java::math::BigInteger* >(value) != nullptr) ? java_cast< ::java::math::BigInteger* >(value) : ::java::math::BigInteger::valueOf(npc((java_cast< ::java::lang::Number* >(value)))->longValue());
                    if(npc(bi)->bitLength() > 64) {
                        throw new WritingNotSupportedException(type, value);
                    }
                    auto biBytesBE = npc(bi)->toByteArray_();
                    auto biBytesLE = new ::int8_tArray(::org::apache::poi::util::LittleEndianConsts::LONG_SIZE);
                    auto i = npc(biBytesBE)->length;
                    for(auto b : *npc(biBytesBE)) {
                        if(i <= ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE) {
                            (*biBytesLE)[i - int32_t(1)] = b;
                        }
                        i--;
                    }
                    npc(out)->write(biBytesLE);
                    length = ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE;
                }
                break;
            }
        case Variant::VT_R4: {
                if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                    auto floatBits = ::java::lang::Float::floatToIntBits(npc((java_cast< ::java::lang::Number* >(value)))->floatValue());
                    ::org::apache::poi::util::LittleEndian::putInt(floatBits, out);
                    length = ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
                }
                break;
            }
        case Variant::VT_R8:
            if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
                ::org::apache::poi::util::LittleEndian::putDouble(npc((java_cast< ::java::lang::Number* >(value)))->doubleValue(), out);
                length = ::org::apache::poi::util::LittleEndianConsts::DOUBLE_SIZE;
            }
            break;
        case Variant::VT_FILETIME:
            filetimeValue = (dynamic_cast< ::java::util::Date* >(value) != nullptr) ? new Filetime(java_cast< ::java::util::Date* >(value)) : new Filetime();
            length = npc(filetimeValue)->write(out);
            break;
        default:
            break;
        }
    }

    if(length == -int32_t(1)) {
        if(dynamic_cast< ::int8_tArray* >(value) != nullptr) {
            auto const b = java_cast< ::int8_tArray* >(value);
            npc(out)->write(b);
            length = npc(b)->length;
            writeUnsupportedTypeMessage(new WritingNotSupportedException(type, value));
        } else {
            throw new WritingNotSupportedException(type, value);
        }
    }
    auto padding = (int32_t(4) - (length & int32_t(3))) & int32_t(3);
    npc(out)->write(paddingBytes_, 0, padding);
    return length + padding;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::VariantSupport::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.VariantSupport", 34);
    return c;
}

void org::apache::poi::hpsf::VariantSupport::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        SUPPORTED_TYPES_ = (new ::int32_tArray({
            Variant::VT_EMPTY
            , Variant::VT_I2
            , Variant::VT_I4
            , Variant::VT_I8
            , Variant::VT_R8
            , Variant::VT_FILETIME
            , Variant::VT_LPSTR
            , Variant::VT_LPWSTR
            , Variant::VT_CF
            , Variant::VT_BOOL
        }));
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(VariantSupport::class_()));
        paddingBytes_ = new ::int8_tArray(int32_t(3));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::VariantSupport::getClass0()
{
    return class_();
}

