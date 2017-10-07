// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/xml/bind/JAXBElement.hpp>

extern void unimplemented_(const char16_t* name);
javax::xml::bind::JAXBElement::JAXBElement(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::xml::bind::JAXBElement::JAXBElement(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Object* value)
    : JAXBElement(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, declaredType, value);
}

javax::xml::bind::JAXBElement::JAXBElement(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Class* scope, ::java::lang::Object* value)
    : JAXBElement(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, declaredType, scope, value);
}

constexpr int64_t javax::xml::bind::JAXBElement::serialVersionUID;

void ::javax::xml::bind::JAXBElement::ctor(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Object* value)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBElement::ctor(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Object* value)");
}

void ::javax::xml::bind::JAXBElement::ctor(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Class* scope, ::java::lang::Object* value)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBElement::ctor(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Class* scope, ::java::lang::Object* value)");
}

java::lang::Class* javax::xml::bind::JAXBElement::getDeclaredType()
{ /* stub */
return declaredType ; /* getter */
}

javax::xml::namespace_::QName* javax::xml::bind::JAXBElement::getName()
{ /* stub */
return name ; /* getter */
}

java::lang::Class* javax::xml::bind::JAXBElement::getScope()
{ /* stub */
return scope ; /* getter */
}

java::lang::Object* javax::xml::bind::JAXBElement::getValue()
{ /* stub */
return value ; /* getter */
}

bool javax::xml::bind::JAXBElement::isGlobalScope()
{ /* stub */
    unimplemented_(u"bool javax::xml::bind::JAXBElement::isGlobalScope()");
    return 0;
}

bool javax::xml::bind::JAXBElement::isNil()
{ /* stub */
    unimplemented_(u"bool javax::xml::bind::JAXBElement::isNil()");
    return 0;
}

bool javax::xml::bind::JAXBElement::isTypeSubstituted()
{ /* stub */
    unimplemented_(u"bool javax::xml::bind::JAXBElement::isTypeSubstituted()");
    return 0;
}

void javax::xml::bind::JAXBElement::setNil(bool value)
{ /* stub */
    this->nil = value; /* setter */
}

void javax::xml::bind::JAXBElement::setValue(::java::lang::Object* t)
{ /* stub */
    this->value = t; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::xml::bind::JAXBElement::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.xml.bind.JAXBElement", 26);
    return c;
}

java::lang::Class* javax::xml::bind::JAXBElement::getClass0()
{
    return class_();
}

