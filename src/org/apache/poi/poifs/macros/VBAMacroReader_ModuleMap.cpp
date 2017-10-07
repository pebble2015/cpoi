// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroReader.java
#include <org/apache/poi/poifs/macros/VBAMacroReader_ModuleMap.hpp>

#include <java/lang/String.hpp>
#include <java/nio/charset/Charset.hpp>

org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap::VBAMacroReader_ModuleMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap::VBAMacroReader_ModuleMap()
    : VBAMacroReader_ModuleMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap::init()
{
    charset = ::java::nio::charset::Charset::forName(u"Cp1252"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.macros.VBAMacroReader.ModuleMap", 52);
    return c;
}

java::lang::Class* org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap::getClass0()
{
    return class_();
}

