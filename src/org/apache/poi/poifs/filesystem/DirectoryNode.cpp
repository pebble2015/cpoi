// Generated from /POI/java/org/apache/poi/poifs/filesystem/DirectoryNode.java
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>

#include <java/io/FileNotFoundException.hpp>
#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/EntryNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
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

poi::poifs::filesystem::DirectoryNode::DirectoryNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::DirectoryNode::DirectoryNode(::poi::poifs::property::DirectoryProperty* property, OPOIFSFileSystem* filesystem, DirectoryNode* parent) 
    : DirectoryNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,filesystem,parent);
}

poi::poifs::filesystem::DirectoryNode::DirectoryNode(::poi::poifs::property::DirectoryProperty* property, NPOIFSFileSystem* nfilesystem, DirectoryNode* parent) 
    : DirectoryNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,nfilesystem,parent);
}

poi::poifs::filesystem::DirectoryNode::DirectoryNode(::poi::poifs::property::DirectoryProperty* property, DirectoryNode* parent, OPOIFSFileSystem* ofilesystem, NPOIFSFileSystem* nfilesystem) 
    : DirectoryNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,parent,ofilesystem,nfilesystem);
}

void poi::poifs::filesystem::DirectoryNode::ctor(::poi::poifs::property::DirectoryProperty* property, OPOIFSFileSystem* filesystem, DirectoryNode* parent)
{
    ctor(property, parent, filesystem, static_cast< NPOIFSFileSystem* >(nullptr));
}

void poi::poifs::filesystem::DirectoryNode::ctor(::poi::poifs::property::DirectoryProperty* property, NPOIFSFileSystem* nfilesystem, DirectoryNode* parent)
{
    ctor(property, parent, static_cast< OPOIFSFileSystem* >(nullptr), nfilesystem);
}

void poi::poifs::filesystem::DirectoryNode::ctor(::poi::poifs::property::DirectoryProperty* property, DirectoryNode* parent, OPOIFSFileSystem* ofilesystem, NPOIFSFileSystem* nfilesystem)
{
    super::ctor(property, parent);
    this->_ofilesystem = ofilesystem;
    this->_nfilesystem = nfilesystem;
    if(parent == nullptr) {
        _path = new POIFSDocumentPath();
    } else {
        _path = new POIFSDocumentPath(npc(parent)->_path, new ::java::lang::StringArray({npc(property)->getName()}));
    }
    _byname = new ::java::util::HashMap();
    _entries = new ::java::util::ArrayList();
    auto iter = npc(property)->getChildren();
    while (npc(iter)->hasNext()) {
        auto child = java_cast< ::poi::poifs::property::Property* >(npc(iter)->next());
        Entry* childNode = nullptr;
        if(npc(child)->isDirectory()) {
            auto childDir = java_cast< ::poi::poifs::property::DirectoryProperty* >(child);
            if(_ofilesystem != nullptr) {
                childNode = new DirectoryNode(childDir, _ofilesystem, this);
            } else {
                childNode = new DirectoryNode(childDir, _nfilesystem, this);
            }
        } else {
            childNode = new DocumentNode(java_cast< ::poi::poifs::property::DocumentProperty* >(child), this);
        }
        npc(_entries)->add(static_cast< ::java::lang::Object* >(childNode));
        npc(_byname)->put(npc(childNode)->getName(), childNode);
    }
}

poi::poifs::filesystem::POIFSDocumentPath* poi::poifs::filesystem::DirectoryNode::getPath()
{
    return _path;
}

poi::poifs::filesystem::NPOIFSFileSystem* poi::poifs::filesystem::DirectoryNode::getFileSystem()
{
    return _nfilesystem;
}

poi::poifs::filesystem::OPOIFSFileSystem* poi::poifs::filesystem::DirectoryNode::getOFileSystem()
{
    return _ofilesystem;
}

poi::poifs::filesystem::NPOIFSFileSystem* poi::poifs::filesystem::DirectoryNode::getNFileSystem()
{
    return _nfilesystem;
}

poi::poifs::filesystem::DocumentInputStream* poi::poifs::filesystem::DirectoryNode::createDocumentInputStream(::java::lang::String* documentName) /* throws(IOException) */
{
    return createDocumentInputStream(getEntry(documentName));
}

poi::poifs::filesystem::DocumentInputStream* poi::poifs::filesystem::DirectoryNode::createDocumentInputStream(Entry* document) /* throws(IOException) */
{
    if(!npc(document)->isDocumentEntry()) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Entry '"_j)->append(npc(document)->getName())
            ->append(u"' is not a DocumentEntry"_j)->toString());
    }
    auto entry = java_cast< DocumentEntry* >(document);
    return new DocumentInputStream(entry);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::DirectoryNode::createDocument(OPOIFSDocument* document) /* throws(IOException) */
{
    auto property = npc(document)->getDocumentProperty();
    auto rval = new DocumentNode(property, this);
    npc((java_cast< ::poi::poifs::property::DirectoryProperty* >(getProperty())))->addChild(static_cast< ::poi::poifs::property::Property* >(property));
    npc(_ofilesystem)->addDocument(document);
    npc(_entries)->add(static_cast< ::java::lang::Object* >(rval));
    npc(_byname)->put(npc(property)->getName(), rval);
    return rval;
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::DirectoryNode::createDocument(NPOIFSDocument* document) /* throws(IOException) */
{
    auto property = npc(document)->getDocumentProperty();
    auto rval = new DocumentNode(property, this);
    npc((java_cast< ::poi::poifs::property::DirectoryProperty* >(getProperty())))->addChild(static_cast< ::poi::poifs::property::Property* >(property));
    npc(_nfilesystem)->addDocument(document);
    npc(_entries)->add(static_cast< ::java::lang::Object* >(rval));
    npc(_byname)->put(npc(property)->getName(), rval);
    return rval;
}

bool poi::poifs::filesystem::DirectoryNode::changeName(::java::lang::String* oldName, ::java::lang::String* newName)
{
    auto rval = false;
    auto child = java_cast< EntryNode* >(java_cast< Entry* >(npc(_byname)->get(oldName)));
    if(child != nullptr) {
        rval = npc((java_cast< ::poi::poifs::property::DirectoryProperty* >(getProperty())))->changeName(npc(child)->getProperty(), newName);
        if(rval) {
            npc(_byname)->remove(oldName);
            npc(_byname)->put(npc(npc(child)->getProperty())->getName(), child);
        }
    }
    return rval;
}

bool poi::poifs::filesystem::DirectoryNode::deleteEntry(EntryNode* entry)
{
    auto rval = npc((java_cast< ::poi::poifs::property::DirectoryProperty* >(getProperty())))->deleteChild(npc(entry)->getProperty());
    if(rval) {
        npc(_entries)->remove(static_cast< ::java::lang::Object* >(entry));
        npc(_byname)->remove(npc(entry)->getName());
        if(_ofilesystem != nullptr) {
            npc(_ofilesystem)->remove(entry);
        } else {
            try {
                npc(_nfilesystem)->remove(entry);
            } catch (::java::io::IOException* e) {
            }
        }
    }
    return rval;
}

java::util::Iterator* poi::poifs::filesystem::DirectoryNode::getEntries()
{
    return npc(_entries)->iterator();
}

java::util::Set* poi::poifs::filesystem::DirectoryNode::getEntryNames()
{
    return npc(_byname)->keySet();
}

bool poi::poifs::filesystem::DirectoryNode::isEmpty()
{
    return npc(_entries)->isEmpty();
}

int32_t poi::poifs::filesystem::DirectoryNode::getEntryCount()
{
    return npc(_entries)->size();
}

bool poi::poifs::filesystem::DirectoryNode::hasEntry(::java::lang::String* name)
{
    return name != nullptr && npc(_byname)->containsKey(name);
}

poi::poifs::filesystem::Entry* poi::poifs::filesystem::DirectoryNode::getEntry(::java::lang::String* name) /* throws(FileNotFoundException) */
{
    Entry* rval = nullptr;
    if(name != nullptr) {
        rval = java_cast< Entry* >(npc(_byname)->get(name));
    }
    if(rval == nullptr) {
        throw new ::java::io::FileNotFoundException(::java::lang::StringBuilder().append(u"no such entry: \""_j)->append(name)
            ->append(u"\", had: "_j)
            ->append(static_cast< ::java::lang::Object* >(npc(_byname)->keySet()))->toString());
    }
    return rval;
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::DirectoryNode::createDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */
{
    if(_nfilesystem != nullptr) {
        return createDocument(new NPOIFSDocument(name, _nfilesystem, stream));
    } else {
        return createDocument(new OPOIFSDocument(name, stream));
    }
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::DirectoryNode::createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */
{
    if(_nfilesystem != nullptr) {
        return createDocument(new NPOIFSDocument(name, size, _nfilesystem, writer));
    } else {
        return createDocument(new OPOIFSDocument(name, size, _path, writer));
    }
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::DirectoryNode::createDirectory(::java::lang::String* name) /* throws(IOException) */
{
    DirectoryNode* rval;
    auto property = new ::poi::poifs::property::DirectoryProperty(name);
    if(_ofilesystem != nullptr) {
        rval = new DirectoryNode(property, _ofilesystem, this);
        npc(_ofilesystem)->addDirectory(property);
    } else {
        rval = new DirectoryNode(property, _nfilesystem, this);
        npc(_nfilesystem)->addDirectory(property);
    }
    npc((java_cast< ::poi::poifs::property::DirectoryProperty* >(getProperty())))->addChild(static_cast< ::poi::poifs::property::Property* >(property));
    npc(_entries)->add(static_cast< ::java::lang::Object* >(rval));
    npc(_byname)->put(name, rval);
    return rval;
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::DirectoryNode::createOrUpdateDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */
{
    if(!hasEntry(name)) {
        return createDocument(name, stream);
    } else {
        auto existing = java_cast< DocumentNode* >(getEntry(name));
        if(_nfilesystem != nullptr) {
            auto nDoc = new NPOIFSDocument(existing);
            npc(nDoc)->replaceContents(stream);
            return existing;
        } else {
            deleteEntry(existing);
            return createDocument(name, stream);
        }
    }
}

poi::hpsf::ClassID* poi::poifs::filesystem::DirectoryNode::getStorageClsid()
{
    return npc(getProperty())->getStorageClsid();
}

void poi::poifs::filesystem::DirectoryNode::setStorageClsid(::poi::hpsf::ClassID* clsidStorage)
{
    npc(getProperty())->setStorageClsid(clsidStorage);
}

bool poi::poifs::filesystem::DirectoryNode::isDirectoryEntry()
{
    return true;
}

bool poi::poifs::filesystem::DirectoryNode::isDeleteOK()
{
    return isEmpty();
}

java::lang::ObjectArray* poi::poifs::filesystem::DirectoryNode::getViewableArray_()
{
    return new ::java::lang::ObjectArray(int32_t(0));
}

java::util::Iterator* poi::poifs::filesystem::DirectoryNode::getViewableIterator()
{
    ::java::util::List* components = new ::java::util::ArrayList();
    npc(components)->add(static_cast< ::java::lang::Object* >(getProperty()));
    auto iter = npc(_entries)->iterator();
    while (npc(iter)->hasNext()) {
        npc(components)->add(static_cast< ::java::lang::Object* >(java_cast< Entry* >(npc(iter)->next())));
    }
    return npc(components)->iterator();
}

bool poi::poifs::filesystem::DirectoryNode::preferArray_()
{
    return false;
}

java::lang::String* poi::poifs::filesystem::DirectoryNode::getShortDescription()
{
    return getName();
}

java::util::Iterator* poi::poifs::filesystem::DirectoryNode::iterator()
{
    return getEntries();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::DirectoryNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.DirectoryNode", 45);
    return c;
}

bool poi::poifs::filesystem::DirectoryNode::delete_()
{
    return EntryNode::delete_();
}

java::lang::String* poi::poifs::filesystem::DirectoryNode::getName()
{
    return EntryNode::getName();
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::DirectoryNode::getParent()
{
    return EntryNode::getParent();
}

bool poi::poifs::filesystem::DirectoryNode::isDocumentEntry()
{
    return EntryNode::isDocumentEntry();
}

bool poi::poifs::filesystem::DirectoryNode::renameTo(::java::lang::String* newName)
{
    return EntryNode::renameTo(newName);
}

java::lang::Class* poi::poifs::filesystem::DirectoryNode::getClass0()
{
    return class_();
}

