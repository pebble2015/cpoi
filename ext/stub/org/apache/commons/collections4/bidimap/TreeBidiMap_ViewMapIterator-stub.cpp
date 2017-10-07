// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_ViewMapIterator.hpp>

#include <java/lang/Comparable.hpp>
#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::TreeBidiMap_ViewMapIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&)
    : super(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::TreeBidiMap_ViewMapIterator(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType)
    : TreeBidiMap_ViewMapIterator(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(orderType);
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::ctor(TreeBidiMap_DataElement* orderType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::ctor(TreeBidiMap_DataElement* orderType)");
}

java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::getKey()
{ /* stub */
    unimplemented_(u"java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::getKey()");
    return 0;
}

java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::getValue()
{ /* stub */
    unimplemented_(u"java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::getValue()");
    return 0;
}

java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::next()
{ /* stub */
    unimplemented_(u"java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::next()");
    return 0;
}

java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::previous()
{ /* stub */
    unimplemented_(u"java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::previous()");
    return 0;
}

java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::setValue(::java::lang::Comparable* obj)
{ /* stub */
    unimplemented_(u"java::lang::Comparable* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::setValue(::java::lang::Comparable* obj)");
    return 0;
}

java::lang::Object* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::setValue(::java::lang::Object* arg0)
{ 
    return setValue(dynamic_cast< ::java::lang::Comparable* >(arg0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.ViewMapIterator", 67);
    return c;
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::hasNext()
{
    return TreeBidiMap_ViewIterator::hasNext();
}

void org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::remove()
{
    TreeBidiMap_ViewIterator::remove();
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::hasPrevious()
{
    return TreeBidiMap_ViewIterator::hasPrevious();
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapIterator::getClass0()
{
    return class_();
}

