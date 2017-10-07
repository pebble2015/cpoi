// Generated from /POI/java/org/apache/poi/hpsf/TypeWriter.java
#include <org/apache/poi/hpsf/TypeWriter.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/IllegalPropertySetDataException.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/VariantSupport.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hpsf
            {
typedef ::SubArray< ::org::apache::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
            } // hpsf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::TypeWriter::TypeWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::TypeWriter::TypeWriter()
    : TypeWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t org::apache::poi::hpsf::TypeWriter::writeToStream(::java::io::OutputStream* out, int16_t n) /* throws(IOException) */
{
    clinit();
    ::org::apache::poi::util::LittleEndian::putShort(out, n);
    return ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
}

int32_t org::apache::poi::hpsf::TypeWriter::writeToStream(::java::io::OutputStream* out, int32_t n) /* throws(IOException) */
{
    clinit();
    ::org::apache::poi::util::LittleEndian::putInt(n, out);
    return ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
}

int32_t org::apache::poi::hpsf::TypeWriter::writeToStream(::java::io::OutputStream* out, int64_t n) /* throws(IOException) */
{
    clinit();
    ::org::apache::poi::util::LittleEndian::putLong(n, out);
    return ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE;
}

void org::apache::poi::hpsf::TypeWriter::writeUShortToStream(::java::io::OutputStream* out, int32_t n) /* throws(IOException) */
{
    clinit();
    auto high = n & int32_t(-65536);
    if(high != 0) {
        throw new IllegalPropertySetDataException(::java::lang::StringBuilder().append(u"Value "_j)->append(n)
            ->append(u" cannot be represented by 2 bytes."_j)->toString());
    }
    ::org::apache::poi::util::LittleEndian::putUShort(n, out);
}

int32_t org::apache::poi::hpsf::TypeWriter::writeUIntToStream(::java::io::OutputStream* out, int64_t n) /* throws(IOException) */
{
    clinit();
    auto high = n & int64_t(-4294967296LL);
    if(high != 0 && high != -4294967296LL) {
        throw new IllegalPropertySetDataException(::java::lang::StringBuilder().append(u"Value "_j)->append(n)
            ->append(u" cannot be represented by 4 bytes."_j)->toString());
    }
    ::org::apache::poi::util::LittleEndian::putUInt(n, out);
    return ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
}

int32_t org::apache::poi::hpsf::TypeWriter::writeToStream(::java::io::OutputStream* out, ClassID* n) /* throws(IOException) */
{
    clinit();
    auto b = new ::int8_tArray(int32_t(16));
    npc(n)->write(b, 0);
    npc(out)->write(b, 0, npc(b)->length);
    return npc(b)->length;
}

void org::apache::poi::hpsf::TypeWriter::writeToStream(::java::io::OutputStream* out, PropertyArray* properties, int32_t codepage) /* throws(IOException, UnsupportedVariantTypeException) */
{
    clinit();
    if(properties == nullptr) {
        return;
    }
    for (auto i = int32_t(0); i < npc(properties)->length; i++) {
        auto const p = (*properties)[i];
        writeUIntToStream(out, npc(p)->getID());
        writeUIntToStream(out, npc(p)->getSize(codepage));
    }
    for (auto i = int32_t(0); i < npc(properties)->length; i++) {
        auto const p = (*properties)[i];
        auto type = npc(p)->getType();
        writeUIntToStream(out, type);
        VariantSupport::write(out, static_cast< int32_t >(type), npc(p)->getValue(), codepage);
    }
}

int32_t org::apache::poi::hpsf::TypeWriter::writeToStream(::java::io::OutputStream* out, double n) /* throws(IOException) */
{
    clinit();
    ::org::apache::poi::util::LittleEndian::putDouble(n, out);
    return ::org::apache::poi::util::LittleEndianConsts::DOUBLE_SIZE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::TypeWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.TypeWriter", 30);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::TypeWriter::getClass0()
{
    return class_();
}

