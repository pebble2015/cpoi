// Generated from /POI/java/org/apache/poi/poifs/filesystem/EntryUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::EntryUtils
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void copyNodeRecursively(Entry* entry, DirectoryEntry* target) /* throws(IOException) */;
    static void copyNodes(DirectoryEntry* sourceRoot, DirectoryEntry* targetRoot) /* throws(IOException) */;
    static void copyNodes(FilteringDirectoryNode* filteredSource, FilteringDirectoryNode* filteredTarget) /* throws(IOException) */;
    static void copyNodes(OPOIFSFileSystem* source, OPOIFSFileSystem* target) /* throws(IOException) */;
    static void copyNodes(NPOIFSFileSystem* source, NPOIFSFileSystem* target) /* throws(IOException) */;
    static void copyNodes(OPOIFSFileSystem* source, OPOIFSFileSystem* target, ::java::util::List* excepts) /* throws(IOException) */;
    static void copyNodes(NPOIFSFileSystem* source, NPOIFSFileSystem* target, ::java::util::List* excepts) /* throws(IOException) */;
    static bool areDirectoriesIdentical(DirectoryEntry* dirA, DirectoryEntry* dirB);
    static bool areDocumentsIdentical(DocumentEntry* docA, DocumentEntry* docB) /* throws(IOException) */;

    // Generated
    EntryUtils();
protected:
    EntryUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
