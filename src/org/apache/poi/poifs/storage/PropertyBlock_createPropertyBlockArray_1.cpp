// Generated from /POI/java/org/apache/poi/poifs/storage/PropertyBlock.java
#include <org/apache/poi/poifs/storage/PropertyBlock_createPropertyBlockArray_1.hpp>

org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1::PropertyBlock_createPropertyBlockArray_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1::PropertyBlock_createPropertyBlockArray_1(int32_t index, ::int8_tArray* array, int32_t offset)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(index, array, offset);
}

void org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1::preWrite()
{
}

bool org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1::isDirectory()
{
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1::getClass0()
{
    return class_();
}

