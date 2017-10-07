// Generated from /POI/java/org/apache/poi/hpsf/IllegalVariantTypeException.java
#include <org/apache/poi/hpsf/IllegalVariantTypeException.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/util/HexDump.hpp>

org::apache::poi::hpsf::IllegalVariantTypeException::IllegalVariantTypeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::IllegalVariantTypeException::IllegalVariantTypeException(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg) 
    : IllegalVariantTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(variantType,value,msg);
}

org::apache::poi::hpsf::IllegalVariantTypeException::IllegalVariantTypeException(int64_t variantType, ::java::lang::Object* value) 
    : IllegalVariantTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(variantType,value);
}

void org::apache::poi::hpsf::IllegalVariantTypeException::ctor(int64_t variantType, ::java::lang::Object* value, ::java::lang::String* msg)
{
    super::ctor(variantType, value, msg);
}

void org::apache::poi::hpsf::IllegalVariantTypeException::ctor(int64_t variantType, ::java::lang::Object* value)
{
    ctor(variantType, value, ::java::lang::StringBuilder().append(u"The variant type "_j)->append(variantType)
        ->append(u" ("_j)
        ->append(Variant::getVariantName(variantType))
        ->append(u", "_j)
        ->append(::org::apache::poi::util::HexDump::toHex(variantType))
        ->append(u") is illegal in this context."_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::IllegalVariantTypeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.IllegalVariantTypeException", 47);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::IllegalVariantTypeException::getClass0()
{
    return class_();
}

