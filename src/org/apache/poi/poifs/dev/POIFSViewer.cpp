// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSViewer.java
#include <org/apache/poi/poifs/dev/POIFSViewer.hpp>

#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewEngine.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
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

poi::poifs::dev::POIFSViewer::POIFSViewer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::dev::POIFSViewer::POIFSViewer()
    : POIFSViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::dev::POIFSViewer::main(::java::lang::StringArray* args)
{
    clinit();
    if(npc(args)->length == 0) {
        npc(::java::lang::System::err())->println(u"Must specify at least one file to view"_j);
        ::java::lang::System::exit(1);
    }
    auto printNames = (npc(args)->length > 1);
    for (auto j = int32_t(0); j < npc(args)->length; j++) {
        viewFile((*args)[j], printNames);
    }
}

void poi::poifs::dev::POIFSViewer::viewFile(::java::lang::String* filename, bool printName)
{
    clinit();
    if(printName) {
        auto flowerbox = new ::java::lang::StringBuffer();
        npc(flowerbox)->append(u"."_j);
        for (auto j = int32_t(0); j < npc(filename)->length(); j++) {
            npc(flowerbox)->append(u"-"_j);
        }
        npc(flowerbox)->append(u"."_j);
        npc(::java::lang::System::out())->println(static_cast< ::java::lang::Object* >(flowerbox));
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"|"_j)->append(filename)
            ->append(u"|"_j)->toString());
        npc(::java::lang::System::out())->println(static_cast< ::java::lang::Object* >(flowerbox));
    }
    try {
        auto fs = new ::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File(filename));
        auto strings = POIFSViewEngine::inspectViewable(fs, true, 0, u"  "_j);
        for (auto _i = npc(strings)->iterator(); _i->hasNext(); ) {
            ::java::lang::String* s = java_cast< ::java::lang::String* >(_i->next());
            {
                npc(::java::lang::System::out())->print(s);
            }
        }
        npc(fs)->close();
    } catch (::java::io::IOException* e) {
        npc(::java::lang::System::out())->println(npc(e)->getMessage());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::dev::POIFSViewer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.dev.POIFSViewer", 36);
    return c;
}

java::lang::Class* poi::poifs::dev::POIFSViewer::getClass0()
{
    return class_();
}

