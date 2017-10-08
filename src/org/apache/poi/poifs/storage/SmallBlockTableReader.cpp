// Generated from /POI/java/org/apache/poi/poifs/storage/SmallBlockTableReader.java
#include <org/apache/poi/poifs/storage/SmallBlockTableReader.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>
#include <org/apache/poi/poifs/storage/BlockList.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlockList.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlockList.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
        } // storage
    } // poifs
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::storage::SmallBlockTableReader::SmallBlockTableReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::SmallBlockTableReader::SmallBlockTableReader()
    : SmallBlockTableReader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::poifs::storage::BlockList* poi::poifs::storage::SmallBlockTableReader::prepareSmallDocumentBlocks(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, ::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */
{
    clinit();
    auto smallBlockBlocks = npc(blockList)->fetchBlocks(npc(root)->getStartBlock(), -int32_t(1));
    BlockList* list = new SmallDocumentBlockList(SmallDocumentBlock::extract(bigBlockSize, smallBlockBlocks));
    return list;
}

poi::poifs::storage::BlockAllocationTableReader* poi::poifs::storage::SmallBlockTableReader::prepareReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, BlockList* list, ::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */
{
    clinit();
    return new BlockAllocationTableReader(bigBlockSize, npc(blockList)->fetchBlocks(sbatStart, -int32_t(1)), list);
}

poi::poifs::storage::BlockAllocationTableReader* poi::poifs::storage::SmallBlockTableReader::_getSmallDocumentBlockReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, ::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */
{
    clinit();
    auto list = prepareSmallDocumentBlocks(bigBlockSize, blockList, root, sbatStart);
    return prepareReader(bigBlockSize, blockList, list, root, sbatStart);
}

poi::poifs::storage::BlockList* poi::poifs::storage::SmallBlockTableReader::getSmallDocumentBlocks(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, ::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */
{
    clinit();
    auto list = prepareSmallDocumentBlocks(bigBlockSize, blockList, root, sbatStart);
    prepareReader(bigBlockSize, blockList, list, root, sbatStart);
    return list;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::SmallBlockTableReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.SmallBlockTableReader", 50);
    return c;
}

java::lang::Class* poi::poifs::storage::SmallBlockTableReader::getClass0()
{
    return class_();
}

