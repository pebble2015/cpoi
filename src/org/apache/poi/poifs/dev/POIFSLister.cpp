// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSLister.java
#include <org/apache/poi/poifs/dev/POIFSLister.hpp>

#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
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

poi::poifs::dev::POIFSLister::POIFSLister(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::dev::POIFSLister::POIFSLister()
    : POIFSLister(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::dev::POIFSLister::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length == 0) {
        npc(::java::lang::System::err())->println(u"Must specify at least one file to view"_j);
        ::java::lang::System::exit(1);
    }
    auto withSizes = false;
    auto newPOIFS = true;
    for (auto j = int32_t(0); j < npc(args)->length; j++) {
        if(npc((*args)[j])->equalsIgnoreCase(u"-size"_j) || npc((*args)[j])->equalsIgnoreCase(u"-sizes"_j)) {
            withSizes = true;
        } else if(npc((*args)[j])->equalsIgnoreCase(u"-old"_j) || npc((*args)[j])->equalsIgnoreCase(u"-old-poifs"_j)) {
            newPOIFS = false;
        } else {
            if(newPOIFS) {
                viewFile((*args)[j], withSizes);
            } else {
                viewFileOld((*args)[j], withSizes);
            }
        }
    }
}

void poi::poifs::dev::POIFSLister::viewFile(::java::lang::String* filename, bool withSizes) /* throws(IOException) */
{
    clinit();
    auto fs = new ::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File(filename));
    displayDirectory(npc(fs)->getRoot(), u""_j, withSizes);
    npc(fs)->close();
}

void poi::poifs::dev::POIFSLister::viewFileOld(::java::lang::String* filename, bool withSizes) /* throws(IOException) */
{
    clinit();
    auto fs = new ::poi::poifs::filesystem::POIFSFileSystem(static_cast< ::java::io::InputStream* >(new ::java::io::FileInputStream(filename)));
    displayDirectory(npc(fs)->getRoot(), u""_j, withSizes);
    npc(fs)->close();
}

void poi::poifs::dev::POIFSLister::displayDirectory(::poi::poifs::filesystem::DirectoryNode* dir, ::java::lang::String* indent, bool withSizes)
{
    clinit();
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(indent)->append(npc(dir)->getName())
        ->append(u" -"_j)->toString());
    auto newIndent = ::java::lang::StringBuilder().append(indent)->append(u"  "_j)->toString();
    auto hadChildren = false;
    for (auto *it = npc(dir)->getEntries(); npc(it)->hasNext(); ) {
        hadChildren = true;
        auto entry = java_cast< ::poi::poifs::filesystem::Entry* >(npc(it)->next());
        if(dynamic_cast< ::poi::poifs::filesystem::DirectoryNode* >(entry) != nullptr) {
            displayDirectory(java_cast< ::poi::poifs::filesystem::DirectoryNode* >(entry), newIndent, withSizes);
        } else {
            auto doc = java_cast< ::poi::poifs::filesystem::DocumentNode* >(entry);
            auto name = npc(doc)->getName();
            auto size = u""_j;
            if(npc(name)->charAt(int32_t(0)) < 10) {
                auto altname = ::java::lang::StringBuilder().append(u"(0x0"_j)->append(static_cast< int32_t >(npc(name)->charAt(int32_t(0))))
                    ->append(u")"_j)
                    ->append(npc(name)->substring(1))->toString();
                name = ::java::lang::StringBuilder().append(npc(name)->substring(1))->append(u" <"_j)
                    ->append(altname)
                    ->append(u">"_j)->toString();
            }
            if(withSizes) {
                size = ::java::lang::StringBuilder().append(u" ["_j)->append(npc(doc)->getSize())
                    ->append(u" / 0x"_j)
                    ->append(::java::lang::Integer::toHexString(npc(doc)->getSize()))
                    ->append(u"]"_j)->toString();
            }
            npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(newIndent)->append(name)
                ->append(size)->toString());
        }
    }
    if(!hadChildren) {
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(newIndent)->append(u"(no children)"_j)->toString());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::dev::POIFSLister::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.dev.POIFSLister", 36);
    return c;
}

java::lang::Class* poi::poifs::dev::POIFSLister::getClass0()
{
    return class_();
}

