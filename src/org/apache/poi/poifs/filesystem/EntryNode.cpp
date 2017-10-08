// Generated from /POI/java/org/apache/poi/poifs/filesystem/EntryNode.java
#include <org/apache/poi/poifs/filesystem/EntryNode.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::filesystem::EntryNode::EntryNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::EntryNode::EntryNode(::poi::poifs::property::Property* property, DirectoryNode* parent) 
    : EntryNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,parent);
}

void poi::poifs::filesystem::EntryNode::ctor(::poi::poifs::property::Property* property, DirectoryNode* parent)
{
    super::ctor();
    _property = property;
    _parent = parent;
}

poi::poifs::property::Property* poi::poifs::filesystem::EntryNode::getProperty()
{
    return _property;
}

bool poi::poifs::filesystem::EntryNode::isRoot()
{
    return (_parent == nullptr);
}

java::lang::String* poi::poifs::filesystem::EntryNode::getName()
{
    return npc(_property)->getName();
}

bool poi::poifs::filesystem::EntryNode::isDirectoryEntry()
{
    return false;
}

bool poi::poifs::filesystem::EntryNode::isDocumentEntry()
{
    return false;
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::EntryNode::getParent()
{
    return _parent;
}

bool poi::poifs::filesystem::EntryNode::delete_()
{
    auto rval = false;
    if((!isRoot()) && isDeleteOK()) {
        rval = npc(_parent)->deleteEntry(this);
    }
    return rval;
}

bool poi::poifs::filesystem::EntryNode::renameTo(::java::lang::String* newName)
{
    auto rval = false;
    if(!isRoot()) {
        rval = npc(_parent)->changeName(getName(), newName);
    }
    return rval;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::EntryNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.EntryNode", 41);
    return c;
}

java::lang::Class* poi::poifs::filesystem::EntryNode::getClass0()
{
    return class_();
}

