// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageIO_CacheInfo.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageIO_CacheInfo::ImageIO_CacheInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageIO_CacheInfo::ImageIO_CacheInfo()
    : ImageIO_CacheInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::javax::imageio::ImageIO_CacheInfo::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::ImageIO_CacheInfo::ctor()");
}

java::io::File* javax::imageio::ImageIO_CacheInfo::getCacheDirectory()
{ /* stub */
return cacheDirectory ; /* getter */
}

java::lang::Boolean* javax::imageio::ImageIO_CacheInfo::getHasPermission()
{ /* stub */
return hasPermission ; /* getter */
}

bool javax::imageio::ImageIO_CacheInfo::getUseCache()
{ /* stub */
return useCache ; /* getter */
}

void javax::imageio::ImageIO_CacheInfo::setCacheDirectory(::java::io::File* cacheDirectory)
{ /* stub */
    this->cacheDirectory = cacheDirectory; /* setter */
}

void javax::imageio::ImageIO_CacheInfo::setHasPermission(::java::lang::Boolean* hasPermission)
{ /* stub */
    this->hasPermission = hasPermission; /* setter */
}

void javax::imageio::ImageIO_CacheInfo::setUseCache(bool useCache)
{ /* stub */
    this->useCache = useCache; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageIO_CacheInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageIO.CacheInfo", 31);
    return c;
}

java::lang::Class* javax::imageio::ImageIO_CacheInfo::getClass0()
{
    return class_();
}

