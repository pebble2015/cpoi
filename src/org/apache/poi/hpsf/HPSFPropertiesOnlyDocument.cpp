// Generated from /POI/java/org/apache/poi/hpsf/HPSFPropertiesOnlyDocument.java
#include <org/apache/poi/hpsf/HPSFPropertiesOnlyDocument.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/EntryUtils.hpp>
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>

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
org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::HPSFPropertiesOnlyDocument(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::HPSFPropertiesOnlyDocument(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) 
    : HPSFPropertiesOnlyDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::HPSFPropertiesOnlyDocument(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs) 
    : HPSFPropertiesOnlyDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::HPSFPropertiesOnlyDocument(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) 
    : HPSFPropertiesOnlyDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    super::ctor(npc(fs)->getRoot());
}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::ctor(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    super::ctor(fs);
}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::ctor(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    super::ctor(fs);
}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::write() /* throws(IOException) */
{
    auto fs = npc(getDirectory())->getFileSystem();
    validateInPlaceWritePossible();
    writeProperties(fs, nullptr);
    npc(fs)->writeFilesystem();
}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::write(::java::io::File* newFile) /* throws(IOException) */
{
    auto fs = ::org::apache::poi::poifs::filesystem::POIFSFileSystem::create(newFile);
    {
        auto finally0 = finally([&] {
            npc(fs)->close();
        });
        {
            write(static_cast< ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* >(fs));
            npc(fs)->writeFilesystem();
        }
    }

}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::write(::java::io::OutputStream* out) /* throws(IOException) */
{
    auto fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem();
    {
        auto finally1 = finally([&] {
            npc(fs)->close();
        });
        {
            write(fs);
            npc(fs)->writeFilesystem(out);
        }
    }

}

void org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::write(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    ::java::util::List* excepts = new ::java::util::ArrayList(int32_t(2));
    writeProperties(fs, excepts);
    auto src = new ::org::apache::poi::poifs::filesystem::FilteringDirectoryNode(getDirectory(), excepts);
    auto dest = new ::org::apache::poi::poifs::filesystem::FilteringDirectoryNode(npc(fs)->getRoot(), excepts);
    ::org::apache::poi::poifs::filesystem::EntryUtils::copyNodes(src, dest);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.HPSFPropertiesOnlyDocument", 46);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::HPSFPropertiesOnlyDocument::getClass0()
{
    return class_();
}

