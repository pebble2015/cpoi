// Generated from /POI/java/org/apache/poi/poifs/filesystem/EntryNode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::EntryNode
    : public virtual ::java::lang::Object
    , public virtual Entry
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::poifs::property::Property* _property {  };
    DirectoryNode* _parent {  };
protected:
    void ctor(::org::apache::poi::poifs::property::Property* property, DirectoryNode* parent);

public: /* protected */
    virtual ::org::apache::poi::poifs::property::Property* getProperty();
    virtual bool isRoot();
    virtual bool isDeleteOK() = 0;

public:
    ::java::lang::String* getName() override;
    bool isDirectoryEntry() override;
    bool isDocumentEntry() override;
    DirectoryEntry* getParent() override;
    bool delete_() override;
    bool renameTo(::java::lang::String* newName) override;

    // Generated

public: /* protected */
    EntryNode(::org::apache::poi::poifs::property::Property* property, DirectoryNode* parent);
protected:
    EntryNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
