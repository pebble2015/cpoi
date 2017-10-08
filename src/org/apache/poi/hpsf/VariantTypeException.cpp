// Generated from /POI/java/org/apache/poi/hpsf/VariantTypeException.java
#include <org/apache/poi/hpsf/VariantTypeException.hpp>

#include <java/lang/Object.hpp>

poi::hpsf::VariantTypeException::VariantTypeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::VariantTypeException::VariantTypeException(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg) 
    : VariantTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(variantType,value,msg);
}

void poi::hpsf::VariantTypeException::ctor(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg)
{
    super::ctor(msg);
    this->variantType = variantType;
    this->value = value;
}

int64_t poi::hpsf::VariantTypeException::getVariantType()
{
    return variantType;
}

java::lang::Object* poi::hpsf::VariantTypeException::getValue()
{
    return value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::VariantTypeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.VariantTypeException", 40);
    return c;
}

java::lang::Class* poi::hpsf::VariantTypeException::getClass0()
{
    return class_();
}

