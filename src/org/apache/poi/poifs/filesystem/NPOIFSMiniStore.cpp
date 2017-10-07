// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSMiniStore.java
#include <org/apache/poi/poifs/filesystem/NPOIFSMiniStore.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore_ChainLoopDetector.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <org/apache/poi/poifs/property/NPropertyTable.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BATBlock_BATBlockAndIndex.hpp>
#include <org/apache/poi/poifs/storage/BATBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableWriter.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::filesystem::NPOIFSMiniStore::NPOIFSMiniStore(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::NPOIFSMiniStore::NPOIFSMiniStore(NPOIFSFileSystem* filesystem, ::org::apache::poi::poifs::property::RootProperty* root, ::java::util::List* sbats, ::org::apache::poi::poifs::storage::HeaderBlock* header) 
    : NPOIFSMiniStore(*static_cast< ::default_init_tag* >(0))
{
    ctor(filesystem,root,sbats,header);
}

void org::apache::poi::poifs::filesystem::NPOIFSMiniStore::ctor(NPOIFSFileSystem* filesystem, ::org::apache::poi::poifs::property::RootProperty* root, ::java::util::List* sbats, ::org::apache::poi::poifs::storage::HeaderBlock* header)
{
    super::ctor();
    this->_filesystem = filesystem;
    this->_sbat_blocks = sbats;
    this->_header = header;
    this->_root = root;
    this->_mini_stream = new NPOIFSStream(filesystem, npc(root)->getStartBlock());
}

java::nio::ByteBuffer* org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getBlockAt(int32_t offset) /* throws(IOException) */
{
    auto byteOffset = offset * ::org::apache::poi::poifs::common::POIFSConstants::SMALL_BLOCK_SIZE;
    auto bigBlockNumber = byteOffset / npc(_filesystem)->getBigBlockSize();
    auto bigBlockOffset = byteOffset % npc(_filesystem)->getBigBlockSize();
    auto it = npc(_mini_stream)->getBlockIterator();
    for (auto i = int32_t(0); i < bigBlockNumber; i++) {
        npc(it)->next();
    }
    auto dataBlock = java_cast< ::java::nio::ByteBuffer* >(npc(it)->next());
    if(dataBlock == nullptr) {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Big block "_j)->append(bigBlockNumber)
            ->append(u" outside stream"_j)->toString());
    }
    npc(dataBlock)->position(npc(dataBlock)->position() + bigBlockOffset);
    auto miniBuffer = npc(dataBlock)->slice();
    npc(miniBuffer)->limit(::org::apache::poi::poifs::common::POIFSConstants::SMALL_BLOCK_SIZE);
    return miniBuffer;
}

java::nio::ByteBuffer* org::apache::poi::poifs::filesystem::NPOIFSMiniStore::createBlockIfNeeded(int32_t offset) /* throws(IOException) */
{
    auto firstInStore = false;
    if(npc(_mini_stream)->getStartBlock() == ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
        firstInStore = true;
    }
    if(!firstInStore) {
        try {
            return getBlockAt(offset);
        } catch (::java::lang::IndexOutOfBoundsException* e) {
        }
    }
    auto newBigBlock = npc(_filesystem)->getFreeBlock();
    npc(_filesystem)->createBlockIfNeeded(newBigBlock);
    if(firstInStore) {
        npc(npc(npc(_filesystem)->_get_property_table())->getRoot())->setStartBlock(newBigBlock);
        _mini_stream = new NPOIFSStream(_filesystem, newBigBlock);
    } else {
        auto loopDetector = npc(_filesystem)->getChainLoopDetector();
        auto block = npc(_mini_stream)->getStartBlock();
        while (true) {
            npc(loopDetector)->claim(block);
            auto next = npc(_filesystem)->getNextBlock(block);
            if(next == ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
                break;
            }
            block = next;
        }
        npc(_filesystem)->setNextBlock(block, newBigBlock);
    }
    npc(_filesystem)->setNextBlock(newBigBlock, ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    return createBlockIfNeeded(offset);
}

org::apache::poi::poifs::storage::BATBlock_BATBlockAndIndex* org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getBATBlockAndIndex(int32_t offset)
{
    return ::org::apache::poi::poifs::storage::BATBlock::getSBATBlockAndIndex(offset, _header, _sbat_blocks);
}

int32_t org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getNextBlock(int32_t offset)
{
    auto bai = getBATBlockAndIndex(offset);
    return npc(npc(bai)->getBlock())->getValueAt(npc(bai)->getIndex());
}

void org::apache::poi::poifs::filesystem::NPOIFSMiniStore::setNextBlock(int32_t offset, int32_t nextBlock)
{
    auto bai = getBATBlockAndIndex(offset);
    npc(npc(bai)->getBlock())->setValueAt(npc(bai)->getIndex(), nextBlock);
}

int32_t org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getFreeBlock() /* throws(IOException) */
{
    auto sectorsPerSBAT = npc(npc(_filesystem)->getBigBlockSizeDetails())->getBATEntriesPerBlock();
    auto offset = int32_t(0);
    for (auto i = int32_t(0); i < npc(_sbat_blocks)->size(); i++) {
        auto sbat = java_cast< ::org::apache::poi::poifs::storage::BATBlock* >(npc(_sbat_blocks)->get(i));
        if(npc(sbat)->hasFreeSectors()) {
            for (auto j = int32_t(0); j < sectorsPerSBAT; j++) {
                auto sbatValue = npc(sbat)->getValueAt(j);
                if(sbatValue == ::org::apache::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
                    return offset + j;
                }
            }
        }
        offset += sectorsPerSBAT;
    }
    auto newSBAT = ::org::apache::poi::poifs::storage::BATBlock::createEmptyBATBlock(npc(_filesystem)->getBigBlockSizeDetails(), false);
    auto batForSBAT = npc(_filesystem)->getFreeBlock();
    npc(newSBAT)->setOurBlockIndex(batForSBAT);
    if(npc(_header)->getSBATCount() == 0) {
        npc(_header)->setSBATStart(batForSBAT);
        npc(_header)->setSBATBlockCount(1);
    } else {
        auto loopDetector = npc(_filesystem)->getChainLoopDetector();
        auto batOffset = npc(_header)->getSBATStart();
        while (true) {
            npc(loopDetector)->claim(batOffset);
            auto nextBat = npc(_filesystem)->getNextBlock(batOffset);
            if(nextBat == ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
                break;
            }
            batOffset = nextBat;
        }
        npc(_filesystem)->setNextBlock(batOffset, batForSBAT);
        npc(_header)->setSBATBlockCount(npc(_header)->getSBATCount() + int32_t(1));
    }
    npc(_filesystem)->setNextBlock(batForSBAT, ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    npc(_sbat_blocks)->add(static_cast< ::java::lang::Object* >(newSBAT));
    return offset;
}

org::apache::poi::poifs::filesystem::BlockStore_ChainLoopDetector* org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getChainLoopDetector() /* throws(IOException) */
{
    return new BlockStore_ChainLoopDetector(this, npc(_root)->getSize());
}

int32_t org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getBlockStoreBlockSize()
{
    return ::org::apache::poi::poifs::common::POIFSConstants::SMALL_BLOCK_SIZE;
}

void org::apache::poi::poifs::filesystem::NPOIFSMiniStore::syncWithDataSource() /* throws(IOException) */
{
    auto blocksUsed = int32_t(0);
    for (auto _i = npc(_sbat_blocks)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::poifs::storage::BATBlock* sbat = java_cast< ::org::apache::poi::poifs::storage::BATBlock* >(_i->next());
        {
            auto block = npc(_filesystem)->getBlockAt(npc(sbat)->getOurBlockIndex());
            ::org::apache::poi::poifs::storage::BlockAllocationTableWriter::writeBlock(sbat, block);
            if(!npc(sbat)->hasFreeSectors()) {
                blocksUsed += npc(npc(_filesystem)->getBigBlockSizeDetails())->getBATEntriesPerBlock();
            } else {
                blocksUsed += npc(sbat)->getUsedSectors(false);
            }
        }
    }
    npc(npc(npc(_filesystem)->_get_property_table())->getRoot())->setSize(blocksUsed);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::NPOIFSMiniStore::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NPOIFSMiniStore", 47);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::NPOIFSMiniStore::getClass0()
{
    return class_();
}

