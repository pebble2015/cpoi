// Generated from /POI/java/org/apache/poi/poifs/filesystem/DirectoryEntry.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <java/lang/Iterable.hpp>

struct poi::poifs::filesystem::DirectoryEntry
    : public virtual Entry
    , public virtual ::java::lang::Iterable
{
    virtual ::java::util::Iterator* getEntries() = 0;
    virtual ::java::util::Set* getEntryNames() = 0;
    virtual bool isEmpty() = 0;
    virtual int32_t getEntryCount() = 0;
    virtual bool hasEntry(::java::lang::String* name) = 0;
    virtual Entry* getEntry(::java::lang::String* name) /* throws(FileNotFoundException) */ = 0;
    virtual DocumentEntry* createDocument(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */ = 0;
    virtual DocumentEntry* createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */ = 0;
    virtual DirectoryEntry* createDirectory(::java::lang::String* name) /* throws(IOException) */ = 0;
    virtual ::poi::hpsf::ClassID* getStorageClsid() = 0;
    virtual void setStorageClsid(::poi::hpsf::ClassID* clsidStorage) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
