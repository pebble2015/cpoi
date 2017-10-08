// Generated from /POI/java/org/apache/poi/poifs/filesystem/EntryUtils.java
#include <org/apache/poi/poifs/filesystem/EntryUtils.hpp>

#include <java/io/FileNotFoundException.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>

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
poi::poifs::filesystem::EntryUtils::EntryUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::EntryUtils::EntryUtils()
    : EntryUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::filesystem::EntryUtils::copyNodeRecursively(Entry* entry, DirectoryEntry* target) /* throws(IOException) */
{
    clinit();
    DirectoryEntry* newTarget = nullptr;
    if(npc(entry)->isDirectoryEntry()) {
        auto dirEntry = java_cast< DirectoryEntry* >(entry);
        newTarget = npc(target)->createDirectory(npc(entry)->getName());
        npc(newTarget)->setStorageClsid(npc(dirEntry)->getStorageClsid());
        auto entries = npc(dirEntry)->getEntries();
        while (npc(entries)->hasNext()) {
            copyNodeRecursively(java_cast< Entry* >(npc(entries)->next()), newTarget);
        }
    } else {
        auto dentry = java_cast< DocumentEntry* >(entry);
        auto dstream = new DocumentInputStream(dentry);
        npc(target)->createDocument(npc(dentry)->getName(), dstream);
        npc(dstream)->close();
    }
}

void poi::poifs::filesystem::EntryUtils::copyNodes(DirectoryEntry* sourceRoot, DirectoryEntry* targetRoot) /* throws(IOException) */
{
    clinit();
    for (auto _i = npc(sourceRoot)->iterator(); _i->hasNext(); ) {
        Entry* entry = java_cast< Entry* >(_i->next());
        {
            copyNodeRecursively(entry, targetRoot);
        }
    }
}

void poi::poifs::filesystem::EntryUtils::copyNodes(FilteringDirectoryNode* filteredSource, FilteringDirectoryNode* filteredTarget) /* throws(IOException) */
{
    clinit();
    copyNodes(java_cast< DirectoryEntry* >(filteredSource), java_cast< DirectoryEntry* >(filteredTarget));
}

void poi::poifs::filesystem::EntryUtils::copyNodes(OPOIFSFileSystem* source, OPOIFSFileSystem* target) /* throws(IOException) */
{
    clinit();
    copyNodes(static_cast< DirectoryEntry* >(npc(source)->getRoot()), static_cast< DirectoryEntry* >(npc(target)->getRoot()));
}

void poi::poifs::filesystem::EntryUtils::copyNodes(NPOIFSFileSystem* source, NPOIFSFileSystem* target) /* throws(IOException) */
{
    clinit();
    copyNodes(static_cast< DirectoryEntry* >(npc(source)->getRoot()), static_cast< DirectoryEntry* >(npc(target)->getRoot()));
}

void poi::poifs::filesystem::EntryUtils::copyNodes(OPOIFSFileSystem* source, OPOIFSFileSystem* target, ::java::util::List* excepts) /* throws(IOException) */
{
    clinit();
    copyNodes(new FilteringDirectoryNode(npc(source)->getRoot(), excepts), new FilteringDirectoryNode(npc(target)->getRoot(), excepts));
}

void poi::poifs::filesystem::EntryUtils::copyNodes(NPOIFSFileSystem* source, NPOIFSFileSystem* target, ::java::util::List* excepts) /* throws(IOException) */
{
    clinit();
    copyNodes(new FilteringDirectoryNode(npc(source)->getRoot(), excepts), new FilteringDirectoryNode(npc(target)->getRoot(), excepts));
}

bool poi::poifs::filesystem::EntryUtils::areDirectoriesIdentical(DirectoryEntry* dirA, DirectoryEntry* dirB)
{
    clinit();
    if(!npc(npc(dirA)->getName())->equals(static_cast< ::java::lang::Object* >(npc(dirB)->getName()))) {
        return false;
    }
    if(npc(dirA)->getEntryCount() != npc(dirB)->getEntryCount()) {
        return false;
    }
    ::java::util::Map* aSizes = new ::java::util::HashMap();
    auto const isDirectory = -int32_t(12345);
    for (auto _i = npc(dirA)->iterator(); _i->hasNext(); ) {
        Entry* a = java_cast< Entry* >(_i->next());
        {
            auto aName = npc(a)->getName();
            if(npc(a)->isDirectoryEntry()) {
                npc(aSizes)->put(aName, ::java::lang::Integer::valueOf(isDirectory));
            } else {
                npc(aSizes)->put(aName, ::java::lang::Integer::valueOf(npc((java_cast< DocumentNode* >(a)))->getSize()));
            }
        }
    }
    for (auto _i = npc(dirB)->iterator(); _i->hasNext(); ) {
        Entry* b = java_cast< Entry* >(_i->next());
        {
            auto bName = npc(b)->getName();
            if(!npc(aSizes)->containsKey(bName)) {
                return false;
            }
            int32_t size;
            if(npc(b)->isDirectoryEntry()) {
                size = isDirectory;
            } else {
                size = npc((java_cast< DocumentNode* >(b)))->getSize();
            }
            if(size != (npc(java_cast< ::java::lang::Integer* >(npc(aSizes)->get(bName))))->intValue()) {
                return false;
            }
            npc(aSizes)->remove(bName);
        }
    }
    if(!npc(aSizes)->isEmpty()) {
        return false;
    }
    for (auto _i = npc(dirA)->iterator(); _i->hasNext(); ) {
        Entry* a = java_cast< Entry* >(_i->next());
        {
            try {
                auto b = npc(dirB)->getEntry(npc(a)->getName());
                bool match;
                if(npc(a)->isDirectoryEntry()) {
                    match = areDirectoriesIdentical(java_cast< DirectoryEntry* >(a), java_cast< DirectoryEntry* >(b));
                } else {
                    match = areDocumentsIdentical(java_cast< DocumentEntry* >(a), java_cast< DocumentEntry* >(b));
                }
                if(!match)
                    return false;

            } catch (::java::io::FileNotFoundException* e) {
                return false;
            } catch (::java::io::IOException* e) {
                return false;
            }
        }
    }
    return true;
}

bool poi::poifs::filesystem::EntryUtils::areDocumentsIdentical(DocumentEntry* docA, DocumentEntry* docB) /* throws(IOException) */
{
    clinit();
    if(!npc(npc(docA)->getName())->equals(static_cast< ::java::lang::Object* >(npc(docB)->getName()))) {
        return false;
    }
    if(npc(docA)->getSize() != npc(docB)->getSize()) {
        return false;
    }
    auto matches = true;
    DocumentInputStream* inpA = nullptr;
    DocumentInputStream* inpB = nullptr;
    {
        auto finally0 = finally([&] {
            if(inpA != nullptr)
                npc(inpA)->close();

            if(inpB != nullptr)
                npc(inpB)->close();

        });
        {
            inpA = new DocumentInputStream(docA);
            inpB = new DocumentInputStream(docB);
            int32_t readA, readB;
            do {
                readA = npc(inpA)->read();
                readB = npc(inpB)->read();
                if(readA != readB) {
                    matches = false;
                    break;
                }
            } while (readA != -int32_t(1) && readB != -int32_t(1));
        }
    }

    return matches;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::EntryUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.EntryUtils", 42);
    return c;
}

java::lang::Class* poi::poifs::filesystem::EntryUtils::getClass0()
{
    return class_();
}

