// Generated from /POI/java/org/apache/poi/poifs/storage/BlockList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

struct org::apache::poi::poifs::storage::BlockList
    : public virtual ::java::lang::Object
{
    virtual void zap(int32_t index) = 0;
    virtual ListManagedBlock* remove(int32_t index) /* throws(IOException) */ = 0;
    virtual ListManagedBlockArray* fetchBlocks(int32_t startBlock, int32_t headerPropertiesStartBlock) /* throws(IOException) */ = 0;
    virtual void setBAT(BlockAllocationTableReader* bat) /* throws(IOException) */ = 0;
    virtual int32_t blockCount() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
