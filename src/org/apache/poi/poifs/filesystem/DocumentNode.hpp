// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentNode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/EntryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::DocumentNode
    : public EntryNode
    , public virtual DocumentEntry
    , public virtual ::org::apache::poi::poifs::dev::POIFSViewable
{

public:
    typedef EntryNode super;

private:
    OPOIFSDocument* _document {  };
protected:
    void ctor(::org::apache::poi::poifs::property::DocumentProperty* property, DirectoryNode* parent);

public: /* package */
    virtual OPOIFSDocument* getDocument();

public:
    int32_t getSize() override;
    bool isDocumentEntry() override;

public: /* protected */
    bool isDeleteOK() override;

public:
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;

    // Generated

public: /* package */
    DocumentNode(::org::apache::poi::poifs::property::DocumentProperty* property, DirectoryNode* parent);
protected:
    DocumentNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool delete_();
    virtual ::java::lang::String* getName();
    virtual DirectoryEntry* getParent();
    virtual bool isDirectoryEntry();
    virtual bool renameTo(::java::lang::String* newName);

private:
    virtual ::java::lang::Class* getClass0();
};
