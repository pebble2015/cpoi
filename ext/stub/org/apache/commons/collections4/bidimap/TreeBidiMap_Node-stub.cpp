// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_Node.hpp>

#include <java/lang/Comparable.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_Node::TreeBidiMap_Node(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_Node::TreeBidiMap_Node(::java::lang::Comparable* key, ::java::lang::Comparable* value)
    : TreeBidiMap_Node(*static_cast< ::default_init_tag* >(0))
{
    ctor(key, value);
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_Node::ctor(::java::lang::Comparable* key, ::java::lang::Comparable* value)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_Node::ctor(::java::lang::Comparable* key, ::java::lang::Comparable* value)");
}

/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::copyColor(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement) */
bool org::apache::commons::collections4::bidimap::TreeBidiMap_Node::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool org::apache::commons::collections4::bidimap::TreeBidiMap_Node::equals(::java::lang::Object* obj)");
    return 0;
}

/* private: java::lang::Object* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getData(TreeBidiMap_DataElement* dataElement) */
java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getKey()
{ /* stub */
return key ; /* getter */
}

/* private: org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getLeft(TreeBidiMap_DataElement* dataElement) */
/* private: org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getParent(TreeBidiMap_DataElement* dataElement) */
/* private: org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getRight(TreeBidiMap_DataElement* dataElement) */
java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getValue()
{ /* stub */
return value ; /* getter */
}

int32_t org::apache::commons::collections4::bidimap::TreeBidiMap_Node::hashCode()
{ /* stub */
    unimplemented_(u"int32_t org::apache::commons::collections4::bidimap::TreeBidiMap_Node::hashCode()");
    return 0;
}

/* private: bool org::apache::commons::collections4::bidimap::TreeBidiMap_Node::isBlack(TreeBidiMap_DataElement* dataElement) */
/* private: bool org::apache::commons::collections4::bidimap::TreeBidiMap_Node::isLeftChild(TreeBidiMap_DataElement* dataElement) */
/* private: bool org::apache::commons::collections4::bidimap::TreeBidiMap_Node::isRed(TreeBidiMap_DataElement* dataElement) */
/* private: bool org::apache::commons::collections4::bidimap::TreeBidiMap_Node::isRightChild(TreeBidiMap_DataElement* dataElement) */
/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setBlack(TreeBidiMap_DataElement* dataElement) */
/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setLeft(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement) */
/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setParent(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement) */
/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setRed(TreeBidiMap_DataElement* dataElement) */
/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setRight(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement) */
java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setValue(::java::lang::Comparable* ignored)
{ /* stub */
}

java::lang::Object* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::setValue(::java::lang::Object* value)
{ 
    return setValue(dynamic_cast< ::java::lang::Comparable* >(value));
}

/* private: void org::apache::commons::collections4::bidimap::TreeBidiMap_Node::swapColors(TreeBidiMap_Node* node, TreeBidiMap_DataElement* dataElement) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.Node", 56);
    return c;
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_Node::getClass0()
{
    return class_();
}

