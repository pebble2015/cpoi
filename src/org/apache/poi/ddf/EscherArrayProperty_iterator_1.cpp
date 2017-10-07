// Generated from /POI/java/org/apache/poi/ddf/EscherArrayProperty.java
#include <org/apache/poi/ddf/EscherArrayProperty_iterator_1.hpp>

#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/NoSuchElementException.hpp>
#include <org/apache/poi/ddf/EscherArrayProperty.hpp>
#include <Array.hpp>

org::apache::poi::ddf::EscherArrayProperty_iterator_1::EscherArrayProperty_iterator_1(EscherArrayProperty *EscherArrayProperty_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , EscherArrayProperty_this(EscherArrayProperty_this)
{
    clinit();
    ctor();
}

bool org::apache::poi::ddf::EscherArrayProperty_iterator_1::hasNext()
{
    return (idx < EscherArrayProperty_this->getNumberOfElementsInArray_());
}

int8_tArray* org::apache::poi::ddf::EscherArrayProperty_iterator_1::next()
{
    if(!hasNext()) {
        throw new ::java::util::NoSuchElementException();
    }
    return EscherArrayProperty_this->getElement(idx++);
}

void org::apache::poi::ddf::EscherArrayProperty_iterator_1::remove()
{
    throw new ::java::lang::UnsupportedOperationException(u"not yet implemented"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherArrayProperty_iterator_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherArrayProperty_iterator_1::getClass0()
{
    return class_();
}

