// Generated from /POI/java/org/apache/poi/poifs/filesystem/FilteringDirectoryNode.java
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode.hpp>

#include <java/io/FileNotFoundException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode_FilteringIterator.hpp>

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

poi::poifs::filesystem::FilteringDirectoryNode::FilteringDirectoryNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::FilteringDirectoryNode::FilteringDirectoryNode(DirectoryEntry* directory, ::java::util::Collection* excludes) 
    : FilteringDirectoryNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(directory,excludes);
}

void poi::poifs::filesystem::FilteringDirectoryNode::ctor(DirectoryEntry* directory, ::java::util::Collection* excludes)
{
    super::ctor();
    this->directory = directory;
    this->excludes = new ::java::util::HashSet();
    this->childExcludes = new ::java::util::HashMap();
    for (auto _i = npc(excludes)->iterator(); _i->hasNext(); ) {
        ::java::lang::String* excl = java_cast< ::java::lang::String* >(_i->next());
        {
            auto splitAt = npc(excl)->indexOf(static_cast< int32_t >(u'/'));
            if(splitAt == -int32_t(1)) {
                npc(java_cast< ::java::util::Set* >(this->excludes))->add(static_cast< ::java::lang::Object* >(excl));
            } else {
                auto child = npc(excl)->substring(0, splitAt);
                auto childExcl = npc(excl)->substring(splitAt + int32_t(1));
                if(!npc(java_cast< ::java::util::Map* >(this->childExcludes))->containsKey(child)) {
                    npc(java_cast< ::java::util::Map* >(this->childExcludes))->put(child, new ::java::util::ArrayList());
                }
                npc(java_cast< ::java::util::List* >(npc(java_cast< ::java::util::Map* >(this->childExcludes))->get(child)))->add(static_cast< ::java::lang::Object* >(childExcl));
            }
        }
    }
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::FilteringDirectoryNode::createDirectory(::java::lang::String* name) /* throws(IOException) */
{
    return npc(directory)->createDirectory(name);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::FilteringDirectoryNode::createDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */
{
    return npc(directory)->createDocument(name, stream);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::FilteringDirectoryNode::createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */
{
    return npc(directory)->createDocument(name, size, writer);
}

java::util::Iterator* poi::poifs::filesystem::FilteringDirectoryNode::getEntries()
{
    return new FilteringDirectoryNode_FilteringIterator(this);
}

java::util::Iterator* poi::poifs::filesystem::FilteringDirectoryNode::iterator()
{
    return getEntries();
}

int32_t poi::poifs::filesystem::FilteringDirectoryNode::getEntryCount()
{
    auto size = npc(directory)->getEntryCount();
    for (auto _i = npc(excludes)->iterator(); _i->hasNext(); ) {
        ::java::lang::String* excl = java_cast< ::java::lang::String* >(_i->next());
        {
            if(npc(directory)->hasEntry(excl)) {
                size--;
            }
        }
    }
    return size;
}

java::util::Set* poi::poifs::filesystem::FilteringDirectoryNode::getEntryNames()
{
    ::java::util::Set* names = new ::java::util::HashSet();
    for (auto _i = npc(npc(directory)->getEntryNames())->iterator(); _i->hasNext(); ) {
        ::java::lang::String* name = java_cast< ::java::lang::String* >(_i->next());
        {
            if(!npc(excludes)->contains(static_cast< ::java::lang::Object* >(name))) {
                npc(names)->add(static_cast< ::java::lang::Object* >(name));
            }
        }
    }
    return names;
}

bool poi::poifs::filesystem::FilteringDirectoryNode::isEmpty()
{
    return (getEntryCount() == 0);
}

bool poi::poifs::filesystem::FilteringDirectoryNode::hasEntry(::java::lang::String* name)
{
    if(npc(excludes)->contains(static_cast< ::java::lang::Object* >(name))) {
        return false;
    }
    return npc(directory)->hasEntry(name);
}

poi::poifs::filesystem::Entry* poi::poifs::filesystem::FilteringDirectoryNode::getEntry(::java::lang::String* name) /* throws(FileNotFoundException) */
{
    if(npc(excludes)->contains(static_cast< ::java::lang::Object* >(name))) {
        throw new ::java::io::FileNotFoundException(name);
    }
    auto entry = npc(directory)->getEntry(name);
    return wrapEntry(entry);
}

poi::poifs::filesystem::Entry* poi::poifs::filesystem::FilteringDirectoryNode::wrapEntry(Entry* entry)
{
    auto name = npc(entry)->getName();
    if(npc(childExcludes)->containsKey(name) && dynamic_cast< DirectoryEntry* >(entry) != nullptr) {
        return new FilteringDirectoryNode(java_cast< DirectoryEntry* >(entry), java_cast< ::java::util::List* >(npc(childExcludes)->get(name)));
    }
    return entry;
}

poi::hpsf::ClassID* poi::poifs::filesystem::FilteringDirectoryNode::getStorageClsid()
{
    return npc(directory)->getStorageClsid();
}

void poi::poifs::filesystem::FilteringDirectoryNode::setStorageClsid(::poi::hpsf::ClassID* clsidStorage)
{
    npc(directory)->setStorageClsid(clsidStorage);
}

bool poi::poifs::filesystem::FilteringDirectoryNode::delete_()
{
    return npc(directory)->delete_();
}

bool poi::poifs::filesystem::FilteringDirectoryNode::renameTo(::java::lang::String* newName)
{
    return npc(directory)->renameTo(newName);
}

java::lang::String* poi::poifs::filesystem::FilteringDirectoryNode::getName()
{
    return npc(directory)->getName();
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::FilteringDirectoryNode::getParent()
{
    return npc(directory)->getParent();
}

bool poi::poifs::filesystem::FilteringDirectoryNode::isDirectoryEntry()
{
    return true;
}

bool poi::poifs::filesystem::FilteringDirectoryNode::isDocumentEntry()
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::FilteringDirectoryNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.FilteringDirectoryNode", 54);
    return c;
}

java::lang::Class* poi::poifs::filesystem::FilteringDirectoryNode::getClass0()
{
    return class_();
}

