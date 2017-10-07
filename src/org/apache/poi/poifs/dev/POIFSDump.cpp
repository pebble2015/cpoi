// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSDump.java
#include <org/apache/poi/poifs/dev/POIFSDump.hpp>

#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <org/apache/poi/poifs/property/NPropertyTable.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
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
org::apache::poi::poifs::dev::POIFSDump::POIFSDump(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::dev::POIFSDump::POIFSDump()
    : POIFSDump(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::dev::POIFSDump::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length == 0) {
        npc(::java::lang::System::err())->println(u"Must specify at least one file to dump"_j);
        ::java::lang::System::exit(1);
    }
    bool dumpProps = false, dumpMini = false;
    for(auto filename : *npc(args)) {
        if(npc(filename)->equalsIgnoreCase(u"-dumprops"_j) || npc(filename)->equalsIgnoreCase(u"-dump-props"_j) || npc(filename)->equalsIgnoreCase(u"-dump-properties"_j)) {
            dumpProps = true;
            continue;
        }
        if(npc(filename)->equalsIgnoreCase(u"-dumpmini"_j) || npc(filename)->equalsIgnoreCase(u"-dump-mini"_j) || npc(filename)->equalsIgnoreCase(u"-dump-ministream"_j)|| npc(filename)->equalsIgnoreCase(u"-dump-mini-stream"_j)) {
            dumpMini = true;
            continue;
        }
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Dumping "_j)->append(filename)->toString());
        auto is = new ::java::io::FileInputStream(filename);
        ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs;
        {
            auto finally0 = finally([&] {
                npc(is)->close();
            });
            {
                fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(static_cast< ::java::io::InputStream* >(is));
            }
        }

        {
            auto finally1 = finally([&] {
                npc(fs)->close();
            });
            {
                ::org::apache::poi::poifs::filesystem::DirectoryEntry* root = npc(fs)->getRoot();
                auto filenameWithoutPath = (new ::java::io::File(filename))->getName();
                auto dumpDir = new ::java::io::File(::java::lang::StringBuilder().append(filenameWithoutPath)->append(u"_dump"_j)->toString());
                auto file = new ::java::io::File(dumpDir, npc(root)->getName());
                if(!npc(file)->exists() && !npc(file)->mkdirs()) {
                    throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Could not create directory "_j)->append(static_cast< ::java::lang::Object* >(file))->toString());
                }
                dump(root, file);
                if(dumpProps) {
                    auto header = npc(fs)->getHeaderBlock();
                    dump(fs, npc(header)->getPropertyStart(), u"properties"_j, file);
                }
                if(dumpMini) {
                    auto props = npc(fs)->getPropertyTable();
                    auto startBlock = npc(npc(props)->getRoot())->getStartBlock();
                    if(startBlock == ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
                        npc(::java::lang::System::err())->println(u"No Mini Stream in file"_j);
                    } else {
                        dump(fs, startBlock, u"mini-stream"_j, file);
                    }
                }
            }
        }

    }
}

void org::apache::poi::poifs::dev::POIFSDump::dump(::org::apache::poi::poifs::filesystem::DirectoryEntry* root, ::java::io::File* parent) /* throws(IOException) */
{
    clinit();
    for (auto *it = npc(root)->getEntries(); npc(it)->hasNext(); ) {
        auto entry = java_cast< ::org::apache::poi::poifs::filesystem::Entry* >(npc(it)->next());
        if(dynamic_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(entry) != nullptr) {
            auto node = java_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(entry);
            auto is = new ::org::apache::poi::poifs::filesystem::DocumentInputStream(static_cast< ::org::apache::poi::poifs::filesystem::DocumentEntry* >(node));
            auto bytes = ::org::apache::poi::util::IOUtils::toByteArray_(is);
            npc(is)->close();
            ::java::io::OutputStream* out = new ::java::io::FileOutputStream(new ::java::io::File(parent, npc(npc(node)->getName())->trim()));
            {
                auto finally2 = finally([&] {
                    npc(out)->close();
                });
                {
                    npc(out)->write(bytes);
                }
            }

        } else if(dynamic_cast< ::org::apache::poi::poifs::filesystem::DirectoryEntry* >(entry) != nullptr) {
            auto dir = java_cast< ::org::apache::poi::poifs::filesystem::DirectoryEntry* >(entry);
            auto file = new ::java::io::File(parent, npc(entry)->getName());
            if(!npc(file)->exists() && !npc(file)->mkdirs()) {
                throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Could not create directory "_j)->append(static_cast< ::java::lang::Object* >(file))->toString());
            }
            dump(dir, file);
        } else {
            npc(::java::lang::System::err())->println(::java::lang::StringBuilder().append(u"Skipping unsupported POIFS entry: "_j)->append(static_cast< ::java::lang::Object* >(entry))->toString());
        }
    }
}

void org::apache::poi::poifs::dev::POIFSDump::dump(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs, int32_t startBlock, ::java::lang::String* name, ::java::io::File* parent) /* throws(IOException) */
{
    clinit();
    auto file = new ::java::io::File(parent, name);
    auto out = new ::java::io::FileOutputStream(file);
    {
        auto finally3 = finally([&] {
            npc(out)->close();
        });
        {
            auto stream = new ::org::apache::poi::poifs::filesystem::NPOIFSStream(fs, startBlock);
            auto b = new ::int8_tArray(npc(fs)->getBigBlockSize());
            for (auto _i = npc(stream)->iterator(); _i->hasNext(); ) {
                ::java::nio::ByteBuffer* bb = java_cast< ::java::nio::ByteBuffer* >(_i->next());
                {
                    auto len = npc(bb)->remaining();
                    npc(bb)->get(b);
                    npc(out)->write(b, int32_t(0), len);
                }
            }
        }
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::dev::POIFSDump::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.dev.POIFSDump", 34);
    return c;
}

java::lang::Class* org::apache::poi::poifs::dev::POIFSDump::getClass0()
{
    return class_();
}

