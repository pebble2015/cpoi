// Generated from /POI/java/org/apache/poi/poifs/storage/HeaderBlockWriter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockConstants.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>

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
typedef ::SubArray< ::org::apache::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::BATBlock, BigBlockArray > BATBlockArray;
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::poifs::storage::HeaderBlockWriter
    : public virtual ::java::lang::Object
    , public virtual HeaderBlockConstants
    , public virtual BlockWritable
{

public:
    typedef ::java::lang::Object super;

private:
    HeaderBlock* _header_block {  };
protected:
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
    void ctor(HeaderBlock* headerBlock);

public:
    virtual BATBlockArray* setBATBlocks(int32_t blockCount, int32_t startBlock);
    virtual void setPropertyStart(int32_t startBlock);
    virtual void setSBATStart(int32_t startBlock);
    virtual void setSBATBlockCount(int32_t count);

public: /* package */
    static int32_t calculateXBATStorageRequirements(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t blockCount);

public:
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    virtual void writeBlock(::java::nio::ByteBuffer* block) /* throws(IOException) */;

    // Generated
    HeaderBlockWriter(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
    HeaderBlockWriter(HeaderBlock* headerBlock);
protected:
    HeaderBlockWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
