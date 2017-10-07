// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_View.hpp>

#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_View::TreeBidiMap_View(TreeBidiMap *TreeBidiMap_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , TreeBidiMap_this(TreeBidiMap_this)
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_View::TreeBidiMap_View(TreeBidiMap *TreeBidiMap_this, TreeBidiMap_DataElement* orderType)
    : TreeBidiMap_View(TreeBidiMap_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(orderType);
}


void ::org::apache::commons::collections4::bidimap::TreeBidiMap_View::ctor(TreeBidiMap_DataElement* orderType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::org::apache::commons::collections4::bidimap::TreeBidiMap_View::ctor(TreeBidiMap_DataElement* orderType)");
}

void org::apache::commons::collections4::bidimap::TreeBidiMap_View::clear()
{ /* stub */
    unimplemented_(u"void org::apache::commons::collections4::bidimap::TreeBidiMap_View::clear()");
}

int32_t org::apache::commons::collections4::bidimap::TreeBidiMap_View::size()
{ /* stub */
    unimplemented_(u"int32_t org::apache::commons::collections4::bidimap::TreeBidiMap_View::size()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_View::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.View", 56);
    return c;
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_View::getClass0()
{
    return class_();
}

