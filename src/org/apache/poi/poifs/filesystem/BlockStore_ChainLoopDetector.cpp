// Generated from /POI/java/org/apache/poi/poifs/filesystem/BlockStore.java
#include <org/apache/poi/poifs/filesystem/BlockStore_ChainLoopDetector.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::filesystem::BlockStore_ChainLoopDetector::BlockStore_ChainLoopDetector(BlockStore *BlockStore_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , BlockStore_this(BlockStore_this)
{
    clinit();
}

poi::poifs::filesystem::BlockStore_ChainLoopDetector::BlockStore_ChainLoopDetector(BlockStore *BlockStore_this, int64_t rawSize) 
    : BlockStore_ChainLoopDetector(BlockStore_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(rawSize);
}

void poi::poifs::filesystem::BlockStore_ChainLoopDetector::ctor(int64_t rawSize)
{
    super::ctor();
    auto blkSize = BlockStore_this->getBlockStoreBlockSize();
    auto numBlocks = static_cast< int32_t >((rawSize / blkSize));
    if((rawSize % blkSize) != 0) {
        numBlocks++;
    }
    used_blocks = new ::boolArray(numBlocks);
}

void poi::poifs::filesystem::BlockStore_ChainLoopDetector::claim(int32_t offset)
{
    if(offset >= npc(used_blocks)->length) {
        return;
    }
    if((*used_blocks)[offset]) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Potential loop detected - Block "_j)->append(offset)
            ->append(u" was already claimed but was just requested again"_j)->toString());
    }
    (*used_blocks)[offset] = true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::BlockStore_ChainLoopDetector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.BlockStore.ChainLoopDetector", 60);
    return c;
}

java::lang::Class* poi::poifs::filesystem::BlockStore_ChainLoopDetector::getClass0()
{
    return class_();
}

