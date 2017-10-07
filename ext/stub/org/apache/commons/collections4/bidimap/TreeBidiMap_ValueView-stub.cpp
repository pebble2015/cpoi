// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_ValueView.hpp>

#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::TreeBidiMap_ValueView(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&)
    : super(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::TreeBidiMap_ValueView(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType)
    : TreeBidiMap_ValueView(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(orderType);
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::ctor(TreeBidiMap_DataElement* orderType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::ctor(TreeBidiMap_DataElement* orderType)");
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::contains(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::contains(::java::lang::Object* obj)");
    return 0;
}

java::util::Iterator* org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::iterator()
{ /* stub */
    unimplemented_(u"java::util::Iterator* org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::iterator()");
    return 0;
}

bool org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::remove(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::remove(::java::lang::Object* o)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.ValueView", 61);
    return c;
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_ValueView::getClass0()
{
    return class_();
}

