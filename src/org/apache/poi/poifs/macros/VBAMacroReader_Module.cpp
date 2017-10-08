// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroReader.java
#include <org/apache/poi/poifs/macros/VBAMacroReader_Module.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::macros::VBAMacroReader_Module::VBAMacroReader_Module(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::macros::VBAMacroReader_Module::VBAMacroReader_Module()
    : VBAMacroReader_Module(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::macros::VBAMacroReader_Module::read(::java::io::InputStream* in) /* throws(IOException) */
{
    auto const out = new ::java::io::ByteArrayOutputStream();
    ::poi::util::IOUtils::copy(in, out);
    npc(out)->close();
    buf = npc(out)->toByteArray_();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::macros::VBAMacroReader_Module::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.macros.VBAMacroReader.Module", 49);
    return c;
}

java::lang::Class* poi::poifs::macros::VBAMacroReader_Module::getClass0()
{
    return class_();
}

