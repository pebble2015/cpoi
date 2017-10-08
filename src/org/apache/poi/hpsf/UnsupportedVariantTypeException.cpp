// Generated from /POI/java/org/apache/poi/hpsf/UnsupportedVariantTypeException.java
#include <org/apache/poi/hpsf/UnsupportedVariantTypeException.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/util/HexDump.hpp>

poi::hpsf::UnsupportedVariantTypeException::UnsupportedVariantTypeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::UnsupportedVariantTypeException::UnsupportedVariantTypeException(int64_t variantType, ::java::lang::Object* value) 
    : UnsupportedVariantTypeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(variantType,value);
}

void poi::hpsf::UnsupportedVariantTypeException::ctor(int64_t variantType, ::java::lang::Object* value)
{
    super::ctor(variantType, value, ::java::lang::StringBuilder().append(u"HPSF does not yet support the variant type "_j)->append(variantType)
        ->append(u" ("_j)
        ->append(Variant::getVariantName(variantType))
        ->append(u", "_j)
        ->append(::poi::util::HexDump::toHex(variantType))
        ->append(u"). If you want support for "_j)
        ->append(u"this variant type in one of the next POI releases please "_j)
        ->append(u"submit a request for enhancement (RFE) to "_j)
        ->append(u"<http://issues.apache.org/bugzilla/>! Thank you!"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::UnsupportedVariantTypeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.UnsupportedVariantTypeException", 51);
    return c;
}

java::lang::Class* poi::hpsf::UnsupportedVariantTypeException::getClass0()
{
    return class_();
}

