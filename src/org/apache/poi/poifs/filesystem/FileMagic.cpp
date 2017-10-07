// Generated from /POI/java/org/apache/poi/poifs/filesystem/FileMagic.java
#include <org/apache/poi/poifs/filesystem/FileMagic.hpp>

#include <java/io/BufferedInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockConstants.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace filesystem
                {
typedef ::SubArray< ::org::apache::poi::poifs::filesystem::FileMagic, ::java::lang::EnumArray > FileMagicArray;
                } // filesystem
            } // poifs
        } // poi
    } // apache
} // org

namespace 
{
typedef ::SubArray< ::int8_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int8_tArrayArray;
} // 

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::filesystem::FileMagic::FileMagic(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::FileMagic::FileMagic(::java::lang::String* name, int ordinal, int64_t magic) 
    : FileMagic(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, magic);
}

org::apache::poi::poifs::filesystem::FileMagic::FileMagic(::java::lang::String* name, int ordinal, ::int8_tArrayArray*/*...*/ magic) 
    : FileMagic(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, magic);
}

org::apache::poi::poifs::filesystem::FileMagic::FileMagic(::java::lang::String* name, int ordinal, ::java::lang::String* magic) 
    : FileMagic(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, magic);
}

org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::OLE2 = new ::org::apache::poi::poifs::filesystem::FileMagic(u"OLE2"_j, 0, ::org::apache::poi::poifs::storage::HeaderBlockConstants::_signature);
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::OOXML = new ::org::apache::poi::poifs::filesystem::FileMagic(u"OOXML"_j, 1, new ::int8_tArrayArray({::org::apache::poi::poifs::common::POIFSConstants::OOXML_FILE_HEADER()}));
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::XML = new ::org::apache::poi::poifs::filesystem::FileMagic(u"XML"_j, 2, new ::int8_tArrayArray({::org::apache::poi::poifs::common::POIFSConstants::RAW_XML_FILE_HEADER()}));
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::BIFF2 = new ::org::apache::poi::poifs::filesystem::FileMagic(u"BIFF2"_j, 3, new ::int8_tArrayArray({new ::int8_tArray({
    static_cast< int8_t >(int32_t(9))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(4))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(112))
    , static_cast< int8_t >(int32_t(0))
})}));
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::BIFF3 = new ::org::apache::poi::poifs::filesystem::FileMagic(u"BIFF3"_j, 4, new ::int8_tArrayArray({new ::int8_tArray({
    static_cast< int8_t >(int32_t(9))
    , static_cast< int8_t >(int32_t(2))
    , static_cast< int8_t >(int32_t(6))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(112))
    , static_cast< int8_t >(int32_t(0))
})}));
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::BIFF4 = new ::org::apache::poi::poifs::filesystem::FileMagic(u"BIFF4"_j, 5, new ::int8_tArrayArray({new ::int8_tArray({
    static_cast< int8_t >(int32_t(9))
    , static_cast< int8_t >(int32_t(4))
    , static_cast< int8_t >(int32_t(6))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(112))
    , static_cast< int8_t >(int32_t(0))
}), new ::int8_tArray({
    static_cast< int8_t >(int32_t(9))
    , static_cast< int8_t >(int32_t(4))
    , static_cast< int8_t >(int32_t(6))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(1))
})}));
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::MSWRITE = new ::org::apache::poi::poifs::filesystem::FileMagic(u"MSWRITE"_j, 6, new ::int8_tArrayArray({new ::int8_tArray({
    static_cast< int8_t >(int32_t(49))
    , static_cast< int8_t >(int32_t(190))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
}), new ::int8_tArray({
    static_cast< int8_t >(int32_t(50))
    , static_cast< int8_t >(int32_t(190))
    , static_cast< int8_t >(int32_t(0))
    , static_cast< int8_t >(int32_t(0))
})}));
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::RTF = new ::org::apache::poi::poifs::filesystem::FileMagic(u"RTF"_j, 7, u"{\\rtf"_j);
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::PDF = new ::org::apache::poi::poifs::filesystem::FileMagic(u"PDF"_j, 8, u"%PDF"_j);
org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::UNKNOWN = new ::org::apache::poi::poifs::filesystem::FileMagic(u"UNKNOWN"_j, 9, new ::int8_tArrayArray({new ::int8_tArray(int32_t(0))}));
void org::apache::poi::poifs::filesystem::FileMagic::ctor(::java::lang::String* name, int ordinal, int64_t magic)
{
    super::ctor(name, ordinal);
    this->magic = new ::int8_tArrayArray(int32_t(1));
    ::org::apache::poi::util::LittleEndian::putLong((*this->magic)[int32_t(0)], 0, magic);
}

void org::apache::poi::poifs::filesystem::FileMagic::ctor(::java::lang::String* name, int ordinal, ::int8_tArrayArray*/*...*/ magic)
{
    super::ctor(name, ordinal);
    this->magic = magic;
}

void org::apache::poi::poifs::filesystem::FileMagic::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* magic)
{
    ctor(name, ordinal, new ::int8_tArrayArray({npc(magic)->getBytes(::org::apache::poi::util::LocaleUtil::CHARSET_1252())}));
}

org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::valueOf(::int8_tArray* magic)
{
    clinit();
    for(auto fm : *npc(values())) {
        auto i = int32_t(0);
        auto found = true;
        for(auto ma : *npc(npc(fm)->magic)) {
            for(auto m : *npc(ma)) {
                auto d = (*magic)[i++];
                if(!(d == m || (m == 112 && (d == 16 || d == 32 || d == 64)))) {
                    found = false;
                    break;
                }
            }
            if(found) {
                return fm;
            }
        }
    }
    return UNKNOWN;
}

org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::valueOf(::java::io::InputStream* inp) /* throws(IOException) */
{
    clinit();
    if(!npc(inp)->markSupported()) {
        throw new ::java::io::IOException(u"getFileMagic() only operates on streams which support mark(int)"_j);
    }
    auto data = ::org::apache::poi::util::IOUtils::peekFirst8Bytes(inp);
    return FileMagic::valueOf(data);
}

java::io::InputStream* org::apache::poi::poifs::filesystem::FileMagic::prepareToCheckMagic(::java::io::InputStream* stream)
{
    clinit();
    if(npc(stream)->markSupported()) {
        return stream;
    }
    return new ::java::io::BufferedInputStream(stream);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::FileMagic::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.FileMagic", 41);
    return c;
}

java::lang::Enum* org::apache::poi::poifs::filesystem::FileMagic::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

org::apache::poi::poifs::filesystem::FileMagic* org::apache::poi::poifs::filesystem::FileMagic::valueOf(::java::lang::String* a0)
{
    if(BIFF2->toString()->equals(a0))
        return BIFF2;
    if(BIFF3->toString()->equals(a0))
        return BIFF3;
    if(BIFF4->toString()->equals(a0))
        return BIFF4;
    if(MSWRITE->toString()->equals(a0))
        return MSWRITE;
    if(OLE2->toString()->equals(a0))
        return OLE2;
    if(OOXML->toString()->equals(a0))
        return OOXML;
    if(PDF->toString()->equals(a0))
        return PDF;
    if(RTF->toString()->equals(a0))
        return RTF;
    if(UNKNOWN->toString()->equals(a0))
        return UNKNOWN;
    if(XML->toString()->equals(a0))
        return XML;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::poifs::filesystem::FileMagicArray* org::apache::poi::poifs::filesystem::FileMagic::values()
{
    return new org::apache::poi::poifs::filesystem::FileMagicArray({
        BIFF2,
        BIFF3,
        BIFF4,
        MSWRITE,
        OLE2,
        OOXML,
        PDF,
        RTF,
        UNKNOWN,
        XML,
    });
}

java::lang::Class* org::apache::poi::poifs::filesystem::FileMagic::getClass0()
{
    return class_();
}

