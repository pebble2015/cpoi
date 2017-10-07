// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_ViewMapEntryIterator.hpp>

#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::TreeBidiMap_ViewMapEntryIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&)
    : super(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::TreeBidiMap_ViewMapEntryIterator(TreeBidiMap *TreeBidiMap_this)
    : TreeBidiMap_ViewMapEntryIterator(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::ctor()");
}

java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::next()");
    return 0;
}

java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::previous()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::previous()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.ViewMapEntryIterator", 72);
    return c;
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::hasNext()
{
    return TreeBidiMap_ViewIterator::hasNext();
}

void org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::remove()
{
    TreeBidiMap_ViewIterator::remove();
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::hasPrevious()
{
    return TreeBidiMap_ViewIterator::hasPrevious();
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ViewMapEntryIterator::getClass0()
{
    return class_();
}

