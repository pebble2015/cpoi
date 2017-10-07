// Generated from /POI/java/org/apache/poi/poifs/filesystem/BlockStore.java
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>

org::apache::poi::poifs::filesystem::BlockStore::BlockStore(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::BlockStore::BlockStore()
    : BlockStore(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::BlockStore::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.BlockStore", 42);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::BlockStore::getClass0()
{
    return class_();
}

