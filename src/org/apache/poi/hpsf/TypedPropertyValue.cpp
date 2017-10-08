// Generated from /POI/java/org/apache/poi/hpsf/TypedPropertyValue.java
#include <org/apache/poi/hpsf/TypedPropertyValue.hpp>

#include <java/lang/Byte.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/math/BigInteger.hpp>
#include <org/apache/poi/hpsf/Array_.hpp>
#include <org/apache/poi/hpsf/Blob.hpp>
#include <org/apache/poi/hpsf/ClipboardData.hpp>
#include <org/apache/poi/hpsf/CodePageString.hpp>
#include <org/apache/poi/hpsf/Currency.hpp>
#include <org/apache/poi/hpsf/Date.hpp>
#include <org/apache/poi/hpsf/Decimal.hpp>
#include <org/apache/poi/hpsf/Filetime.hpp>
#include <org/apache/poi/hpsf/GUID.hpp>
#include <org/apache/poi/hpsf/IndirectPropertyName.hpp>
#include <org/apache/poi/hpsf/UnicodeString.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/hpsf/VariantBool.hpp>
#include <org/apache/poi/hpsf/Vector.hpp>
#include <org/apache/poi/hpsf/VersionedStream.hpp>
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

poi::hpsf::TypedPropertyValue::TypedPropertyValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::TypedPropertyValue::TypedPropertyValue(int32_t type, ::java::lang::Object* value) 
    : TypedPropertyValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(type,value);
}

poi::util::POILogger*& poi::hpsf::TypedPropertyValue::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::hpsf::TypedPropertyValue::LOG_;

void poi::hpsf::TypedPropertyValue::ctor(int32_t type, ::java::lang::Object* value)
{
    super::ctor();
    _type = type;
    _value = value;
}

java::lang::Object* poi::hpsf::TypedPropertyValue::getValue()
{
    return _value;
}

void poi::hpsf::TypedPropertyValue::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    _type = npc(lei)->readShort();
    auto padding = npc(lei)->readShort();
    if(padding != 0) {
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"TypedPropertyValue padding at offset "_j)->append(npc(lei)->getReadIndex())
            ->append(u" MUST be 0, but it's value is "_j)
            ->append(padding)->toString())}));
    }
    readValue(lei);
}

void poi::hpsf::TypedPropertyValue::readValue(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    {
        Currency* cur;
        Date* date;
        CodePageString* cps;
        VariantBool* vb;
        Decimal* dec;
        UnicodeString* us;
        Filetime* ft;
        Blob* blob;
        IndirectPropertyName* ipn;
        ClipboardData* cd;
        GUID* guid;
        VersionedStream* vs;
        Vector* vec;
        Array_* arr;
        ::java::lang::String* msg;
        switch (_type) {
        case Variant::VT_EMPTY:
        case Variant::VT_NULL:
            _value = nullptr;
            break;
        case Variant::VT_I1:
            _value = ::java::lang::Byte::valueOf(npc(lei)->readByte());
            break;
        case Variant::VT_UI1:
            _value = ::java::lang::Integer::valueOf(npc(lei)->readUByte());
            break;
        case Variant::VT_I2:
            _value = ::java::lang::Short::valueOf(npc(lei)->readShort());
            break;
        case Variant::VT_UI2:
            _value = ::java::lang::Integer::valueOf(npc(lei)->readUShort());
            break;
        case Variant::VT_INT:
        case Variant::VT_I4:
            _value = ::java::lang::Integer::valueOf(npc(lei)->readInt());
            break;
        case Variant::VT_UINT:
        case Variant::VT_UI4:
        case Variant::VT_ERROR:
            _value = ::java::lang::Long::valueOf(npc(lei)->readUInt());
            break;
        case Variant::VT_I8:
            _value = ::java::lang::Long::valueOf(npc(lei)->readLong());
            break;
        case Variant::VT_UI8: {
                auto biBytesLE = new ::int8_tArray(::poi::util::LittleEndianConsts::LONG_SIZE);
                npc(lei)->readFully(biBytesLE);
                auto biBytesBE = new ::int8_tArray(int32_t(9));
                auto i = npc(biBytesLE)->length;
                for(auto b : *npc(biBytesLE)) {
                    if(i <= 8) {
                        (*biBytesBE)[i] = b;
                    }
                    i--;
                }
                _value = new ::java::math::BigInteger(biBytesBE);
                break;
            }
        case Variant::VT_R4:
            _value = ::java::lang::Float::valueOf(::java::lang::Float::intBitsToFloat(npc(lei)->readInt()));
            break;
        case Variant::VT_R8:
            _value = ::java::lang::Double::valueOf(npc(lei)->readDouble());
            break;
        case Variant::VT_CY:
            cur = new Currency();
            npc(cur)->read(lei);
            _value = cur;
            break;
        case Variant::VT_DATE:
            date = new Date();
            npc(date)->read(lei);
            _value = date;
            break;
        case Variant::VT_BSTR:
        case Variant::VT_LPSTR:
            cps = new CodePageString();
            npc(cps)->read(lei);
            _value = cps;
            break;
        case Variant::VT_BOOL:
            vb = new VariantBool();
            npc(vb)->read(lei);
            _value = vb;
            break;
        case Variant::VT_DECIMAL:
            dec = new Decimal();
            npc(dec)->read(lei);
            _value = dec;
            break;
        case Variant::VT_LPWSTR:
            us = new UnicodeString();
            npc(us)->read(lei);
            _value = us;
            break;
        case Variant::VT_FILETIME:
            ft = new Filetime();
            npc(ft)->read(lei);
            _value = ft;
            break;
        case Variant::VT_BLOB:
        case Variant::VT_BLOB_OBJECT:
            blob = new Blob();
            npc(blob)->read(lei);
            _value = blob;
            break;
        case Variant::VT_STREAM:
        case Variant::VT_STORAGE:
        case Variant::VT_STREAMED_OBJECT:
        case Variant::VT_STORED_OBJECT:
            ipn = new IndirectPropertyName();
            npc(ipn)->read(lei);
            _value = ipn;
            break;
        case Variant::VT_CF:
            cd = new ClipboardData();
            npc(cd)->read(lei);
            _value = cd;
            break;
        case Variant::VT_CLSID:
            guid = new GUID();
            npc(guid)->read(lei);
            _value = lei;
            break;
        case Variant::VT_VERSIONED_STREAM:
            vs = new VersionedStream();
            npc(vs)->read(lei);
            _value = vs;
            break;
        case Variant::VT_VECTOR | Variant::VT_I2:
        case Variant::VT_VECTOR | Variant::VT_I4:
        case Variant::VT_VECTOR | Variant::VT_R4:
        case Variant::VT_VECTOR | Variant::VT_R8:
        case Variant::VT_VECTOR | Variant::VT_CY:
        case Variant::VT_VECTOR | Variant::VT_DATE:
        case Variant::VT_VECTOR | Variant::VT_BSTR:
        case Variant::VT_VECTOR | Variant::VT_ERROR:
        case Variant::VT_VECTOR | Variant::VT_BOOL:
        case Variant::VT_VECTOR | Variant::VT_VARIANT:
        case Variant::VT_VECTOR | Variant::VT_I1:
        case Variant::VT_VECTOR | Variant::VT_UI1:
        case Variant::VT_VECTOR | Variant::VT_UI2:
        case Variant::VT_VECTOR | Variant::VT_UI4:
        case Variant::VT_VECTOR | Variant::VT_I8:
        case Variant::VT_VECTOR | Variant::VT_UI8:
        case Variant::VT_VECTOR | Variant::VT_LPSTR:
        case Variant::VT_VECTOR | Variant::VT_LPWSTR:
        case Variant::VT_VECTOR | Variant::VT_FILETIME:
        case Variant::VT_VECTOR | Variant::VT_CF:
        case Variant::VT_VECTOR | Variant::VT_CLSID:
            vec = new Vector(static_cast< int16_t >((_type & int32_t(4095))));
            npc(vec)->read(lei);
            _value = vec;
            break;
        case Variant::VT_ARRAY | Variant::VT_I2:
        case Variant::VT_ARRAY | Variant::VT_I4:
        case Variant::VT_ARRAY | Variant::VT_R4:
        case Variant::VT_ARRAY | Variant::VT_R8:
        case Variant::VT_ARRAY | Variant::VT_CY:
        case Variant::VT_ARRAY | Variant::VT_DATE:
        case Variant::VT_ARRAY | Variant::VT_BSTR:
        case Variant::VT_ARRAY | Variant::VT_ERROR:
        case Variant::VT_ARRAY | Variant::VT_BOOL:
        case Variant::VT_ARRAY | Variant::VT_VARIANT:
        case Variant::VT_ARRAY | Variant::VT_DECIMAL:
        case Variant::VT_ARRAY | Variant::VT_I1:
        case Variant::VT_ARRAY | Variant::VT_UI1:
        case Variant::VT_ARRAY | Variant::VT_UI2:
        case Variant::VT_ARRAY | Variant::VT_UI4:
        case Variant::VT_ARRAY | Variant::VT_INT:
        case Variant::VT_ARRAY | Variant::VT_UINT:
            arr = new Array_();
            npc(arr)->read(lei);
            _value = arr;
            break;
        default:
            msg = ::java::lang::StringBuilder().append(u"Unknown (possibly, incorrect) TypedPropertyValue type: "_j)->append(_type)->toString();
            throw new ::java::lang::UnsupportedOperationException(msg);
        }
    }

}

void poi::hpsf::TypedPropertyValue::skipPadding(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    clinit();
    auto const offset = npc(lei)->getReadIndex();
    auto skipBytes = (int32_t(4) - (offset & int32_t(3))) & int32_t(3);
    for (auto i = int32_t(0); i < skipBytes; i++) {
        npc(lei)->mark(int32_t(1));
        auto b = npc(lei)->read();
        if(b == -int32_t(1) || b != 0) {
            npc(lei)->reset();
            break;
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::TypedPropertyValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.TypedPropertyValue", 38);
    return c;
}

void poi::hpsf::TypedPropertyValue::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(TypedPropertyValue::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hpsf::TypedPropertyValue::getClass0()
{
    return class_();
}

