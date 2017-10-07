// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentFactoryHelper.java
#include <org/apache/poi/poifs/filesystem/DocumentFactoryHelper_getDecryptedStream_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::filesystem::DocumentFactoryHelper_getDecryptedStream_1::DocumentFactoryHelper_getDecryptedStream_1(NPOIFSFileSystem* fs, ::java::io::InputStream* in)
    : super(*static_cast< ::default_init_tag* >(0))
    , fs(fs)
{
    clinit();
    ctor(in);
}

void org::apache::poi::poifs::filesystem::DocumentFactoryHelper_getDecryptedStream_1::close() /* throws(IOException) */
{
    npc(fs)->close();
    super::close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentFactoryHelper_getDecryptedStream_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentFactoryHelper_getDecryptedStream_1::getClass0()
{
    return class_();
}

