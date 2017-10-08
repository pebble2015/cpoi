// Generated from /POI/java/org/apache/poi/poifs/filesystem/FilteringDirectoryNode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>

struct default_init_tag;

class poi::poifs::filesystem::FilteringDirectoryNode
    : public virtual ::java::lang::Object
    , public virtual DirectoryEntry
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Set* excludes {  };
    ::java::util::Map* childExcludes {  };
    DirectoryEntry* directory {  };
protected:
    void ctor(DirectoryEntry* directory, ::java::util::Collection* excludes);

public:
    DirectoryEntry* createDirectory(::java::lang::String* name) /* throws(IOException) */ override;
    DocumentEntry* createDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */ override;
    DocumentEntry* createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */ override;
    ::java::util::Iterator* getEntries() override;
    ::java::util::Iterator* iterator() override;
    int32_t getEntryCount() override;
    ::java::util::Set* getEntryNames() override;
    bool isEmpty() override;
    bool hasEntry(::java::lang::String* name) override;
    Entry* getEntry(::java::lang::String* name) /* throws(FileNotFoundException) */ override;

private:
    Entry* wrapEntry(Entry* entry);

public:
    ::poi::hpsf::ClassID* getStorageClsid() override;
    void setStorageClsid(::poi::hpsf::ClassID* clsidStorage) override;
    bool delete_() override;
    bool renameTo(::java::lang::String* newName) override;
    ::java::lang::String* getName() override;
    DirectoryEntry* getParent() override;
    bool isDirectoryEntry() override;
    bool isDocumentEntry() override;

    // Generated
    FilteringDirectoryNode(DirectoryEntry* directory, ::java::util::Collection* excludes);
protected:
    FilteringDirectoryNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FilteringDirectoryNode_FilteringIterator;
};
