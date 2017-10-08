// Generated from /POI/java/org/apache/poi/poifs/storage/BlockListImpl.java
#include <org/apache/poi/poifs/storage/BlockListImpl.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
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

poi::poifs::storage::BlockListImpl::BlockListImpl(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::BlockListImpl::BlockListImpl() 
    : BlockListImpl(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::storage::BlockListImpl::ctor()
{
    super::ctor();
    _blocks = new ListManagedBlockArray(int32_t(0));
    _bat = nullptr;
}

void poi::poifs::storage::BlockListImpl::setBlocks(ListManagedBlockArray* blocks)
{
    _blocks = npc(blocks)->clone();
}

void poi::poifs::storage::BlockListImpl::zap(int32_t index)
{
    if((index >= 0) && (index < npc(_blocks)->length)) {
        _blocks->set(index, nullptr);
    }
}

poi::poifs::storage::ListManagedBlock* poi::poifs::storage::BlockListImpl::get(int32_t index)
{
    return (*_blocks)[index];
}

poi::poifs::storage::ListManagedBlock* poi::poifs::storage::BlockListImpl::remove(int32_t index) /* throws(IOException) */
{
    ListManagedBlock* result = nullptr;
    try {
        result = (*_blocks)[index];
        if(result == nullptr) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"block[ "_j)->append(index)
                ->append(u" ] already removed - "_j)
                ->append(u"does your POIFS have circular or duplicate block references?"_j)->toString());
        }
        _blocks->set(index, nullptr);
    } catch (::java::lang::ArrayIndexOutOfBoundsException* ignored) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Cannot remove block[ "_j)->append(index)
            ->append(u" ]; out of range[ 0 - "_j)
            ->append((npc(_blocks)->length - int32_t(1)))
            ->append(u" ]"_j)->toString());
    }
    return result;
}

poi::poifs::storage::ListManagedBlockArray* poi::poifs::storage::BlockListImpl::fetchBlocks(int32_t startBlock, int32_t headerPropertiesStartBlock) /* throws(IOException) */
{
    if(_bat == nullptr) {
        throw new ::java::io::IOException(u"Improperly initialized list: no block allocation table provided"_j);
    }
    return npc(_bat)->fetchBlocks(startBlock, headerPropertiesStartBlock, this);
}

void poi::poifs::storage::BlockListImpl::setBAT(BlockAllocationTableReader* bat) /* throws(IOException) */
{
    if(_bat != nullptr) {
        throw new ::java::io::IOException(u"Attempt to replace existing BlockAllocationTable"_j);
    }
    _bat = bat;
}

int32_t poi::poifs::storage::BlockListImpl::blockCount()
{
    return npc(_blocks)->length;
}

int32_t poi::poifs::storage::BlockListImpl::remainingBlocks()
{
    auto c = int32_t(0);
    for (auto i = int32_t(0); i < npc(_blocks)->length; i++) {
        if((*_blocks)[i] != nullptr)
            c++;

    }
    return c;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::BlockListImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.BlockListImpl", 42);
    return c;
}

java::lang::Class* poi::poifs::storage::BlockListImpl::getClass0()
{
    return class_();
}

