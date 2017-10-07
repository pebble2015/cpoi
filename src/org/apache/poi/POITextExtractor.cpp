// Generated from /POI/java/org/apache/poi/POITextExtractor.java
#include <org/apache/poi/POITextExtractor.hpp>

#include <java/io/Closeable.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::POITextExtractor::POITextExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::POITextExtractor::POITextExtractor()
    : POITextExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::POITextExtractor::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::POITextExtractor::init()
{
    fsToClose = nullptr;
}

void org::apache::poi::POITextExtractor::setFilesystem(::java::io::Closeable* fs)
{
    fsToClose = fs;
}

void org::apache::poi::POITextExtractor::close() /* throws(IOException) */
{
    if(fsToClose != nullptr) {
        npc(fsToClose)->close();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::POITextExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.POITextExtractor", 31);
    return c;
}

java::lang::Class* org::apache::poi::POITextExtractor::getClass0()
{
    return class_();
}

