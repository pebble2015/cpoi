// Generated from /POI/java/org/apache/poi/poifs/storage/SmallBlockTableWriter.java
#include <org/apache/poi/poifs/storage/SmallBlockTableWriter.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableWriter.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace storage
                {
typedef ::SubArray< ::org::apache::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

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

org::apache::poi::poifs::storage::SmallBlockTableWriter::SmallBlockTableWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::SmallBlockTableWriter::SmallBlockTableWriter(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* documents, ::org::apache::poi::poifs::property::RootProperty* root) 
    : SmallBlockTableWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,documents,root);
}

void org::apache::poi::poifs::storage::SmallBlockTableWriter::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* documents, ::org::apache::poi::poifs::property::RootProperty* root)
{
    super::ctor();
    _sbat = new BlockAllocationTableWriter(bigBlockSize);
    _small_blocks = new ::java::util::ArrayList();
    _root = root;
    for (auto _i = npc(documents)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::poifs::filesystem::OPOIFSDocument* doc = java_cast< ::org::apache::poi::poifs::filesystem::OPOIFSDocument* >(_i->next());
        {
            auto blocks = npc(doc)->getSmallBlocks();
            if(npc(blocks)->length != 0) {
                npc(doc)->setStartBlock(npc(_sbat)->allocateSpace(npc(blocks)->length));
                for (auto j = int32_t(0); j < npc(blocks)->length; j++) {
                    npc(_small_blocks)->add(static_cast< ::java::lang::Object* >((*blocks)[j]));
                }
            } else {
                npc(doc)->setStartBlock(::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
            }
        }
    }
    npc(_sbat)->simpleCreateBlocks();
    npc(_root)->setSize(npc(_small_blocks)->size());
    _big_block_count = SmallDocumentBlock::fill(bigBlockSize, _small_blocks);
}

int32_t org::apache::poi::poifs::storage::SmallBlockTableWriter::getSBATBlockCount()
{
    return (_big_block_count + int32_t(15)) / int32_t(16);
}

org::apache::poi::poifs::storage::BlockAllocationTableWriter* org::apache::poi::poifs::storage::SmallBlockTableWriter::getSBAT()
{
    return _sbat;
}

int32_t org::apache::poi::poifs::storage::SmallBlockTableWriter::countBlocks()
{
    return _big_block_count;
}

void org::apache::poi::poifs::storage::SmallBlockTableWriter::setStartBlock(int32_t start_block)
{
    npc(_root)->setStartBlock(start_block);
}

void org::apache::poi::poifs::storage::SmallBlockTableWriter::writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */
{
    for (auto _i = npc(_small_blocks)->iterator(); _i->hasNext(); ) {
        BlockWritable* block = java_cast< BlockWritable* >(_i->next());
        {
            npc(block)->writeBlocks(stream);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::SmallBlockTableWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.SmallBlockTableWriter", 50);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::SmallBlockTableWriter::getClass0()
{
    return class_();
}

