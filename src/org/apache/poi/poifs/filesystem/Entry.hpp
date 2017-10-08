// Generated from /POI/java/org/apache/poi/poifs/filesystem/Entry.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::filesystem::Entry
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getName() = 0;
    virtual bool isDirectoryEntry() = 0;
    virtual bool isDocumentEntry() = 0;
    virtual DirectoryEntry* getParent() = 0;
    virtual bool delete_() = 0;
    virtual bool renameTo(::java::lang::String* newName) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
