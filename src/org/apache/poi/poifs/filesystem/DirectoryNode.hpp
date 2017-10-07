// Generated from /POI/java/org/apache/poi/poifs/filesystem/DirectoryNode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/EntryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <java/lang/Iterable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::DirectoryNode
    : public EntryNode
    , public virtual DirectoryEntry
    , public virtual ::org::apache::poi::poifs::dev::POIFSViewable
    , public virtual ::java::lang::Iterable
{

public:
    typedef EntryNode super;

private:
    ::java::util::Map* _byname {  };
    ::java::util::ArrayList* _entries {  };
    OPOIFSFileSystem* _ofilesystem {  };
    NPOIFSFileSystem* _nfilesystem {  };
    POIFSDocumentPath* _path {  };
protected:
    void ctor(::org::apache::poi::poifs::property::DirectoryProperty* property, OPOIFSFileSystem* filesystem, DirectoryNode* parent);
    void ctor(::org::apache::poi::poifs::property::DirectoryProperty* property, NPOIFSFileSystem* nfilesystem, DirectoryNode* parent);
    void ctor(::org::apache::poi::poifs::property::DirectoryProperty* property, DirectoryNode* parent, OPOIFSFileSystem* ofilesystem, NPOIFSFileSystem* nfilesystem);

public:
    virtual POIFSDocumentPath* getPath();
    virtual NPOIFSFileSystem* getFileSystem();
    virtual OPOIFSFileSystem* getOFileSystem();
    virtual NPOIFSFileSystem* getNFileSystem();
    virtual DocumentInputStream* createDocumentInputStream(::java::lang::String* documentName) /* throws(IOException) */;
    virtual DocumentInputStream* createDocumentInputStream(Entry* document) /* throws(IOException) */;

public: /* package */
    virtual DocumentEntry* createDocument(OPOIFSDocument* document) /* throws(IOException) */;
    virtual DocumentEntry* createDocument(NPOIFSDocument* document) /* throws(IOException) */;
    virtual bool changeName(::java::lang::String* oldName, ::java::lang::String* newName);
    virtual bool deleteEntry(EntryNode* entry);

public:
    ::java::util::Iterator* getEntries() override;
    ::java::util::Set* getEntryNames() override;
    bool isEmpty() override;
    int32_t getEntryCount() override;
    bool hasEntry(::java::lang::String* name) override;
    Entry* getEntry(::java::lang::String* name) /* throws(FileNotFoundException) */ override;
    DocumentEntry* createDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */ override;
    DocumentEntry* createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */ override;
    DirectoryEntry* createDirectory(::java::lang::String* name) /* throws(IOException) */ override;
    virtual DocumentEntry* createOrUpdateDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */;
    ::org::apache::poi::hpsf::ClassID* getStorageClsid() override;
    void setStorageClsid(::org::apache::poi::hpsf::ClassID* clsidStorage) override;
    bool isDirectoryEntry() override;

public: /* protected */
    bool isDeleteOK() override;

public:
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;
    ::java::util::Iterator* iterator() override;

    // Generated

public: /* package */
    DirectoryNode(::org::apache::poi::poifs::property::DirectoryProperty* property, OPOIFSFileSystem* filesystem, DirectoryNode* parent);
    DirectoryNode(::org::apache::poi::poifs::property::DirectoryProperty* property, NPOIFSFileSystem* nfilesystem, DirectoryNode* parent);

private:
    DirectoryNode(::org::apache::poi::poifs::property::DirectoryProperty* property, DirectoryNode* parent, OPOIFSFileSystem* ofilesystem, NPOIFSFileSystem* nfilesystem);
protected:
    DirectoryNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool delete_();
    virtual ::java::lang::String* getName();
    virtual DirectoryEntry* getParent();
    virtual bool isDocumentEntry();
    virtual bool renameTo(::java::lang::String* newName);

private:
    virtual ::java::lang::Class* getClass0();
};
