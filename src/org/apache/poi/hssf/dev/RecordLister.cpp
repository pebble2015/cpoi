// Generated from /POI/java/org/apache/poi/hssf/dev/RecordLister.java
#include <org/apache/poi/hssf/dev/RecordLister.hpp>

#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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
poi::hssf::dev::RecordLister::RecordLister(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::dev::RecordLister::RecordLister() 
    : RecordLister(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::dev::RecordLister::ctor()
{
    super::ctor();
}

void poi::hssf::dev::RecordLister::run() /* throws(IOException) */
{
    auto fs = new ::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File(file), true);
    {
        auto finally0 = finally([&] {
            npc(fs)->close();
        });
        {
            auto din = BiffViewer::getPOIFSInputStream(fs);
            {
                auto finally1 = finally([&] {
                    npc(din)->close();
                });
                {
                    auto rinp = new ::poi::hssf::record::RecordInputStream(din);
                    while (npc(rinp)->hasNextRecord()) {
                        auto sid = npc(rinp)->getNextSid();
                        npc(rinp)->nextRecord();
                        auto size = npc(rinp)->available();
                        auto clz = ::poi::hssf::record::RecordFactory::getRecordClass(sid);
                        npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(formatSID(sid))->append(u" - "_j)
                            ->append(formatSize(size))
                            ->append(u" bytes"_j)->toString());
                        if(clz != nullptr) {
                            npc(::java::lang::System::out())->print(u"  \t"_j);
                            npc(::java::lang::System::out())->print(npc(npc(clz)->getName())->replace(static_cast< ::java::lang::CharSequence* >(u"org.apache.poi.hssf.record."_j), static_cast< ::java::lang::CharSequence* >(u""_j)));
                        }
                        npc(::java::lang::System::out())->println();
                        auto data = npc(rinp)->readRemainder();
                        if(npc(data)->length > 0) {
                            npc(::java::lang::System::out())->print(u"   "_j);
                            npc(::java::lang::System::out())->println(formatData(data));
                        }
                    }
                }
            }

        }
    }

}

java::lang::String* poi::hssf::dev::RecordLister::formatSID(int32_t sid)
{
    clinit();
    auto hex = ::java::lang::Integer::toHexString(sid);
    auto dec = ::java::lang::Integer::toString(sid);
    auto s = new ::java::lang::StringBuffer();
    npc(s)->append(u"0x"_j);
    for (auto i = npc(hex)->length(); i < 4; i++) {
        npc(s)->append(u'0');
    }
    npc(s)->append(hex);
    npc(s)->append(u" ("_j);
    for (auto i = npc(dec)->length(); i < 4; i++) {
        npc(s)->append(u'0');
    }
    npc(s)->append(dec);
    npc(s)->append(u")"_j);
    return npc(s)->toString();
}

java::lang::String* poi::hssf::dev::RecordLister::formatSize(int32_t size)
{
    clinit();
    auto hex = ::java::lang::Integer::toHexString(size);
    auto dec = ::java::lang::Integer::toString(size);
    auto s = new ::java::lang::StringBuffer();
    for (auto i = npc(hex)->length(); i < 3; i++) {
        npc(s)->append(u'0');
    }
    npc(s)->append(hex);
    npc(s)->append(u" ("_j);
    for (auto i = npc(dec)->length(); i < 3; i++) {
        npc(s)->append(u'0');
    }
    npc(s)->append(dec);
    npc(s)->append(u")"_j);
    return npc(s)->toString();
}

java::lang::String* poi::hssf::dev::RecordLister::formatData(::int8_tArray* data)
{
    clinit();
    if(data == nullptr || npc(data)->length == 0)
        return u""_j;

    auto s = new ::java::lang::StringBuffer();
    if(npc(data)->length > 9) {
        npc(s)->append(byteToHex((*data)[int32_t(0)]));
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[int32_t(1)]));
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[int32_t(2)]));
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[int32_t(3)]));
        npc(s)->append(u' ');
        npc(s)->append(u" .... "_j);
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[npc(data)->length - int32_t(4)]));
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[npc(data)->length - int32_t(3)]));
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[npc(data)->length - int32_t(2)]));
        npc(s)->append(u' ');
        npc(s)->append(byteToHex((*data)[npc(data)->length - int32_t(1)]));
    } else {
        for (auto i = int32_t(0); i < npc(data)->length; i++) {
            npc(s)->append(byteToHex((*data)[i]));
            npc(s)->append(u' ');
        }
    }
    return npc(s)->toString();
}

java::lang::String* poi::hssf::dev::RecordLister::byteToHex(int8_t b)
{
    clinit();
    int32_t i = b;
    if(i < 0) {
        i += 256;
    }
    auto s = ::java::lang::Integer::toHexString(i);
    if(i < 16) {
        return ::java::lang::StringBuilder().append(u"0"_j)->append(s)->toString();
    }
    return s;
}

void poi::hssf::dev::RecordLister::setFile(::java::lang::String* file)
{
    this->file = file;
}

void poi::hssf::dev::RecordLister::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if((npc(args)->length == 1) && !npc((*args)[int32_t(0)])->equals(static_cast< ::java::lang::Object* >(u"--help"_j))) {
        auto viewer = new RecordLister();
        npc(viewer)->setFile((*args)[int32_t(0)]);
        npc(viewer)->run();
    } else {
        npc(::java::lang::System::out())->println(u"RecordLister"_j);
        npc(::java::lang::System::out())->println(u"Outputs the summary of the records in file order"_j);
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"usage: java org.apache.poi.hssf.dev.RecordLister "_j)->append(u"filename"_j)->toString());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::dev::RecordLister::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.RecordLister", 36);
    return c;
}

java::lang::Class* poi::hssf::dev::RecordLister::getClass0()
{
    return class_();
}

