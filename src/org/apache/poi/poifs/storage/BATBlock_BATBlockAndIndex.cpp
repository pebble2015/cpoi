// Generated from /POI/java/org/apache/poi/poifs/storage/BATBlock.java
#include <org/apache/poi/poifs/storage/BATBlock_BATBlockAndIndex.hpp>

#include <org/apache/poi/poifs/storage/BATBlock.hpp>

poi::poifs::storage::BATBlock_BATBlockAndIndex::BATBlock_BATBlockAndIndex(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::BATBlock_BATBlockAndIndex::BATBlock_BATBlockAndIndex(int32_t index, BATBlock* block) 
    : BATBlock_BATBlockAndIndex(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,block);
}

void poi::poifs::storage::BATBlock_BATBlockAndIndex::ctor(int32_t index, BATBlock* block)
{
    super::ctor();
    this->index = index;
    this->block = block;
}

int32_t poi::poifs::storage::BATBlock_BATBlockAndIndex::getIndex()
{
    return index;
}

poi::poifs::storage::BATBlock* poi::poifs::storage::BATBlock_BATBlockAndIndex::getBlock()
{
    return block;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::BATBlock_BATBlockAndIndex::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.BATBlock.BATBlockAndIndex", 54);
    return c;
}

java::lang::Class* poi::poifs::storage::BATBlock_BATBlockAndIndex::getClass0()
{
    return class_();
}

