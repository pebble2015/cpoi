// Generated from /POI/java/org/apache/poi/poifs/storage/RawDataBlockList.java
#include <org/apache/poi/poifs/storage/RawDataBlockList.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlock.hpp>
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
typedef ::SubArray< ::org::apache::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::RawDataBlock, ::java::lang::ObjectArray, ListManagedBlockArray > RawDataBlockArray;
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

org::apache::poi::poifs::storage::RawDataBlockList::RawDataBlockList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::RawDataBlockList::RawDataBlockList(::java::io::InputStream* stream, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)  /* throws(IOException) */
    : RawDataBlockList(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,bigBlockSize);
}

void org::apache::poi::poifs::storage::RawDataBlockList::ctor(::java::io::InputStream* stream, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */
{
    super::ctor();
    ::java::util::List* blocks = new ::java::util::ArrayList();
    while (true) {
        auto block = new RawDataBlock(stream, npc(bigBlockSize)->getBigBlockSize());
        if(npc(block)->hasData()) {
            npc(blocks)->add(static_cast< ::java::lang::Object* >(block));
        }
        if(npc(block)->eof()) {
            break;
        }
    }
    setBlocks(java_cast< RawDataBlockArray* >(npc(blocks)->toArray_(static_cast< ::java::lang::ObjectArray* >(new RawDataBlockArray(npc(blocks)->size())))));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::RawDataBlockList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.RawDataBlockList", 45);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::RawDataBlockList::getClass0()
{
    return class_();
}

