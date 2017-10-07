// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_InverseViewMapEntryIterator.hpp>

#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::TreeBidiMap_InverseViewMapEntryIterator(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&)
    : super(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::TreeBidiMap_InverseViewMapEntryIterator(TreeBidiMap *TreeBidiMap_this)
    : TreeBidiMap_InverseViewMapEntryIterator(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::ctor()");
}

/* private: java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::createEntry(TreeBidiMap_Node* node) */
java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::next()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::next()");
    return 0;
}

java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::previous()
{ /* stub */
    unimplemented_(u"java::util::Map_Entry* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::previous()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.InverseViewMapEntryIterator", 79);
    return c;
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::hasNext()
{
    return TreeBidiMap_ViewIterator::hasNext();
}

void org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::remove()
{
    TreeBidiMap_ViewIterator::remove();
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::hasPrevious()
{
    return TreeBidiMap_ViewIterator::hasPrevious();
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_InverseViewMapEntryIterator::getClass0()
{
    return class_();
}

