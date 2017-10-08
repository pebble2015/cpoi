// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSFileSystem.java
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>

#include <java/io/FileOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/util/CloseIgnoringInputStream.hpp>

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
poi::poifs::filesystem::POIFSFileSystem::POIFSFileSystem(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::POIFSFileSystem::POIFSFileSystem() 
    : POIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::poifs::filesystem::POIFSFileSystem::POIFSFileSystem(::java::io::InputStream* stream)  /* throws(IOException) */
    : POIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

poi::poifs::filesystem::POIFSFileSystem::POIFSFileSystem(::java::io::File* file, bool readOnly)  /* throws(IOException) */
    : POIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(file,readOnly);
}

poi::poifs::filesystem::POIFSFileSystem::POIFSFileSystem(::java::io::File* file)  /* throws(IOException) */
    : POIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

java::io::InputStream* poi::poifs::filesystem::POIFSFileSystem::createNonClosingInputStream(::java::io::InputStream* is)
{
    clinit();
    return new ::poi::util::CloseIgnoringInputStream(is);
}

void poi::poifs::filesystem::POIFSFileSystem::ctor()
{
    super::ctor();
}

void poi::poifs::filesystem::POIFSFileSystem::ctor(::java::io::InputStream* stream) /* throws(IOException) */
{
    super::ctor(stream);
}

void poi::poifs::filesystem::POIFSFileSystem::ctor(::java::io::File* file, bool readOnly) /* throws(IOException) */
{
    super::ctor(file, readOnly);
}

void poi::poifs::filesystem::POIFSFileSystem::ctor(::java::io::File* file) /* throws(IOException) */
{
    super::ctor(file);
}

poi::poifs::filesystem::POIFSFileSystem* poi::poifs::filesystem::POIFSFileSystem::create(::java::io::File* file) /* throws(IOException) */
{
    clinit();
    auto tmp = new POIFSFileSystem();
    {
        auto finally0 = finally([&] {
            npc(tmp)->close();
        });
        {
            ::java::io::OutputStream* out = new ::java::io::FileOutputStream(file);
            {
                auto finally1 = finally([&] {
                    npc(out)->close();
                });
                {
                    npc(tmp)->writeFilesystem(out);
                }
            }

        }
    }

    return new POIFSFileSystem(file, false);
}

void poi::poifs::filesystem::POIFSFileSystem::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    OPOIFSFileSystem::main(args);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::POIFSFileSystem::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.POIFSFileSystem", 47);
    return c;
}

java::lang::String* poi::poifs::filesystem::POIFSFileSystem::getShortDescription()
{
    return NPOIFSFileSystem::getShortDescription();
}

java::lang::ObjectArray* poi::poifs::filesystem::POIFSFileSystem::getViewableArray_()
{
    return NPOIFSFileSystem::getViewableArray_();
}

java::util::Iterator* poi::poifs::filesystem::POIFSFileSystem::getViewableIterator()
{
    return java_cast< ::java::util::Iterator* >(NPOIFSFileSystem::getViewableIterator());
}

bool poi::poifs::filesystem::POIFSFileSystem::preferArray_()
{
    return NPOIFSFileSystem::preferArray_();
}

java::lang::Class* poi::poifs::filesystem::POIFSFileSystem::getClass0()
{
    return class_();
}

