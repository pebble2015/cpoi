// Generated from /POI/java/org/apache/poi/poifs/storage/SmallBlockTableReader.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::SmallBlockTableReader final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static BlockList* prepareSmallDocumentBlocks(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, ::org::apache::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */;
    static BlockAllocationTableReader* prepareReader(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, BlockList* list, ::org::apache::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */;

public:
    static BlockAllocationTableReader* _getSmallDocumentBlockReader(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, ::org::apache::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */;
    static BlockList* getSmallDocumentBlocks(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, RawDataBlockList* blockList, ::org::apache::poi::poifs::property::RootProperty* root, int32_t sbatStart) /* throws(IOException) */;

    // Generated
    SmallBlockTableReader();
protected:
    SmallBlockTableReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
