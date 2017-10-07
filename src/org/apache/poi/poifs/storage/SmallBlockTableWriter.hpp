// Generated from /POI/java/org/apache/poi/poifs/storage/SmallBlockTableWriter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/filesystem/BATManaged.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::SmallBlockTableWriter
    : public virtual ::java::lang::Object
    , public virtual BlockWritable
    , public virtual ::org::apache::poi::poifs::filesystem::BATManaged
{

public:
    typedef ::java::lang::Object super;

private:
    BlockAllocationTableWriter* _sbat {  };
    ::java::util::List* _small_blocks {  };
    int32_t _big_block_count {  };
    ::org::apache::poi::poifs::property::RootProperty* _root {  };
protected:
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* documents, ::org::apache::poi::poifs::property::RootProperty* root);

public:
    virtual int32_t getSBATBlockCount();
    virtual BlockAllocationTableWriter* getSBAT();
    int32_t countBlocks() override;
    void setStartBlock(int32_t start_block) override;
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;

    // Generated
    SmallBlockTableWriter(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* documents, ::org::apache::poi::poifs::property::RootProperty* root);
protected:
    SmallBlockTableWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
