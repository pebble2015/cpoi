// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentNode.java
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::filesystem::DocumentNode::DocumentNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::DocumentNode::DocumentNode(::org::apache::poi::poifs::property::DocumentProperty* property, DirectoryNode* parent) 
    : DocumentNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,parent);
}

void org::apache::poi::poifs::filesystem::DocumentNode::ctor(::org::apache::poi::poifs::property::DocumentProperty* property, DirectoryNode* parent)
{
    super::ctor(property, parent);
    _document = npc(property)->getDocument();
}

org::apache::poi::poifs::filesystem::OPOIFSDocument* org::apache::poi::poifs::filesystem::DocumentNode::getDocument()
{
    return _document;
}

int32_t org::apache::poi::poifs::filesystem::DocumentNode::getSize()
{
    return npc(getProperty())->getSize();
}

bool org::apache::poi::poifs::filesystem::DocumentNode::isDocumentEntry()
{
    return true;
}

bool org::apache::poi::poifs::filesystem::DocumentNode::isDeleteOK()
{
    return true;
}

java::lang::ObjectArray* org::apache::poi::poifs::filesystem::DocumentNode::getViewableArray_()
{
    return new ::java::lang::ObjectArray(int32_t(0));
}

java::util::Iterator* org::apache::poi::poifs::filesystem::DocumentNode::getViewableIterator()
{
    ::java::util::List* components = new ::java::util::ArrayList();
    npc(components)->add(static_cast< ::java::lang::Object* >(getProperty()));
    if(_document != nullptr) {
        npc(components)->add(static_cast< ::java::lang::Object* >(_document));
    }
    return npc(components)->iterator();
}

bool org::apache::poi::poifs::filesystem::DocumentNode::preferArray_()
{
    return false;
}

java::lang::String* org::apache::poi::poifs::filesystem::DocumentNode::getShortDescription()
{
    return getName();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.DocumentNode", 44);
    return c;
}

bool org::apache::poi::poifs::filesystem::DocumentNode::delete_()
{
    return EntryNode::delete_();
}

java::lang::String* org::apache::poi::poifs::filesystem::DocumentNode::getName()
{
    return EntryNode::getName();
}

org::apache::poi::poifs::filesystem::DirectoryEntry* org::apache::poi::poifs::filesystem::DocumentNode::getParent()
{
    return EntryNode::getParent();
}

bool org::apache::poi::poifs::filesystem::DocumentNode::isDirectoryEntry()
{
    return EntryNode::isDirectoryEntry();
}

bool org::apache::poi::poifs::filesystem::DocumentNode::renameTo(::java::lang::String* newName)
{
    return EntryNode::renameTo(newName);
}

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentNode::getClass0()
{
    return class_();
}

