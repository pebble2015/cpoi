// Generated from /POI/java/org/apache/poi/poifs/storage/BlockListImpl.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/BlockList.hpp>

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

struct default_init_tag;

class poi::poifs::storage::BlockListImpl
    : public virtual ::java::lang::Object
    , public virtual BlockList
{

public:
    typedef ::java::lang::Object super;

private:
    ListManagedBlockArray* _blocks {  };
    BlockAllocationTableReader* _bat {  };
protected:
    void ctor();

public: /* protected */
    virtual void setBlocks(ListManagedBlockArray* blocks);

public:
    void zap(int32_t index) override;
    virtual ListManagedBlock* get(int32_t index);
    ListManagedBlock* remove(int32_t index) /* throws(IOException) */ override;
    ListManagedBlockArray* fetchBlocks(int32_t startBlock, int32_t headerPropertiesStartBlock) /* throws(IOException) */ override;
    void setBAT(BlockAllocationTableReader* bat) /* throws(IOException) */ override;
    int32_t blockCount() override;

public: /* protected */
    virtual int32_t remainingBlocks();

    // Generated
    BlockListImpl();
protected:
    BlockListImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
