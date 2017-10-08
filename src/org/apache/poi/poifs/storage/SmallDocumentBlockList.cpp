// Generated from /POI/java/org/apache/poi/poifs/storage/SmallDocumentBlockList.java
#include <org/apache/poi/poifs/storage/SmallDocumentBlockList.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/SmallDocumentBlock.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
        } // storage
    } // poifs
} // poi

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

poi::poifs::storage::SmallDocumentBlockList::SmallDocumentBlockList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::SmallDocumentBlockList::SmallDocumentBlockList(::java::util::List* blocks) 
    : SmallDocumentBlockList(*static_cast< ::default_init_tag* >(0))
{
    ctor(blocks);
}

void poi::poifs::storage::SmallDocumentBlockList::ctor(::java::util::List* blocks)
{
    super::ctor();
    setBlocks(java_cast< SmallDocumentBlockArray* >(npc(blocks)->toArray_(static_cast< ::java::lang::ObjectArray* >(new SmallDocumentBlockArray(npc(blocks)->size())))));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::SmallDocumentBlockList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.SmallDocumentBlockList", 51);
    return c;
}

java::lang::Class* poi::poifs::storage::SmallDocumentBlockList::getClass0()
{
    return class_();
}

