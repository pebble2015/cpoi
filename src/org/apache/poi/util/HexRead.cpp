// Generated from /POI/java/org/apache/poi/util/HexRead.java
#include <org/apache/poi/util/HexRead.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Byte, NumberArray, ComparableArray > ByteArray;
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::util::HexRead::HexRead(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::HexRead::HexRead()
    : HexRead(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int8_tArray* poi::util::HexRead::readData(::java::lang::String* filename) /* throws(IOException) */
{
    clinit();
    auto file = new ::java::io::File(filename);
    ::java::io::InputStream* stream = new ::java::io::FileInputStream(file);
    {
        auto finally0 = finally([&] {
            npc(stream)->close();
        });
        {
            return readData(stream, -int32_t(1));
        }
    }

}

int8_tArray* poi::util::HexRead::readData(::java::io::InputStream* stream, ::java::lang::String* section) /* throws(IOException) */
{
    clinit();
    {
        auto finally1 = finally([&] {
            npc(stream)->close();
        });
        {
            auto sectionText = new ::java::lang::StringBuffer();
            auto inSection = false;
            auto c = npc(stream)->read();
            while (c != -int32_t(1)) {
                switch (c) {
                case u'[':
                    inSection = true;
                    break;
                case u'\u000a':
                case u'\u000d':
                    inSection = false;
                    sectionText = new ::java::lang::StringBuffer();
                    break;
                case u']':
                    inSection = false;
                    if(npc(npc(sectionText)->toString())->equals(static_cast< ::java::lang::Object* >(section)))
                        return readData(stream, static_cast< int32_t >(u'['));

                    sectionText = new ::java::lang::StringBuffer();
                    break;
                default:
                    if(inSection)
                        npc(sectionText)->append(static_cast< char16_t >(c));

                }

                c = npc(stream)->read();
            }
        }
    }

    throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Section '"_j)->append(section)
        ->append(u"' not found"_j)->toString());
}

int8_tArray* poi::util::HexRead::readData(::java::lang::String* filename, ::java::lang::String* section) /* throws(IOException) */
{
    clinit();
    return readData(static_cast< ::java::io::InputStream* >(new ::java::io::FileInputStream(filename)), section);
}

int8_tArray* poi::util::HexRead::readData(::java::io::InputStream* stream, int32_t eofChar) /* throws(IOException) */
{
    clinit();
    auto characterCount = int32_t(0);
    auto b = static_cast< int8_t >(int32_t(0));
    ::java::util::List* bytes = new ::java::util::ArrayList();
    char16_t const a = u'a' - int32_t(10);
    char16_t const A = u'A' - int32_t(10);
    while (true) {
        auto count = npc(stream)->read();
        auto digitValue = -int32_t(1);
        if(u'0' <= count && count <= u'9') {
            digitValue = count - u'0';
        } else if(u'A' <= count && count <= u'F') {
            digitValue = count - A;
        } else if(u'a' <= count && count <= u'f') {
            digitValue = count - a;
        } else if(u'#' == count) {
            readToEOL(stream);
        } else if(-int32_t(1) == count || eofChar == count) {
            break;
        }
        if(digitValue != -int32_t(1)) {
            b <<= 4;
            b += static_cast< int8_t >(digitValue);
            characterCount++;
            if(characterCount == 2) {
                npc(bytes)->add(static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(b)));
                characterCount = 0;
                b = static_cast< int8_t >(int32_t(0));
            }
        }
    }
    auto polished = java_cast< ::java::lang::ByteArray* >(npc(bytes)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::ByteArray(npc(bytes)->size()))));
    auto rval = new ::int8_tArray(npc(polished)->length);
    for (auto j = int32_t(0); j < npc(polished)->length; j++) {
        (*rval)[j] = npc((*polished)[j])->byteValue();
    }
    return rval;
}

int8_tArray* poi::util::HexRead::readFromString(::java::lang::String* data)
{
    clinit();
    try {
        return readData(static_cast< ::java::io::InputStream* >(new ::java::io::ByteArrayInputStream(npc(data)->getBytes(StringUtil::UTF8()))), -int32_t(1));
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::util::HexRead::readToEOL(::java::io::InputStream* stream) /* throws(IOException) */
{
    clinit();
    auto c = npc(stream)->read();
    while (c != -int32_t(1) && c != u'\u000a' && c != u'\u000d') {
        c = npc(stream)->read();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::HexRead::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.HexRead", 27);
    return c;
}

java::lang::Class* poi::util::HexRead::getClass0()
{
    return class_();
}

