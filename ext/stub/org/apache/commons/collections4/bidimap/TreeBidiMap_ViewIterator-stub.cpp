// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_ViewIterator.hpp>

#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::TreeBidiMap_ViewIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeBidiMap_this(TreeBidiMap_this)
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::TreeBidiMap_ViewIterator(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType)
    : TreeBidiMap_ViewIterator(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(orderType);
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::ctor(TreeBidiMap_DataElement* orderType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::ctor(TreeBidiMap_DataElement* orderType)");
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::hasNext()
{ /* stub */
    unimplemented_(u"bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::hasNext()");
    return 0;
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::hasPrevious()
{ /* stub */
    unimplemented_(u"bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::hasPrevious()");
    return 0;
}

org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::navigateNext()
{ /* stub */
    unimplemented_(u"org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::navigateNext()");
    return 0;
}

org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::navigatePrevious()
{ /* stub */
    unimplemented_(u"org::apache::commons::collections4::bidimap::TreeBidiMap_Node* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::navigatePrevious()");
    return 0;
}

void org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::remove()
{ /* stub */
    unimplemented_(u"void org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::remove()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.ViewIterator", 64);
    return c;
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewIterator::getClass0()
{
    return class_();
}

