// Generated from /POI/java/org/apache/poi/poifs/property/PropertyTable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/PropertyTableBase.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::property::PropertyTable final
    : public PropertyTableBase
    , public ::poi::poifs::storage::BlockWritable
{

public:
    typedef PropertyTableBase super;

private:
    ::poi::poifs::common::POIFSBigBlockSize* _bigBigBlockSize {  };
    ::poi::poifs::storage::BlockWritableArray* _blocks {  };
protected:
    void ctor(::poi::poifs::storage::HeaderBlock* headerBlock);
    void ctor(::poi::poifs::storage::HeaderBlock* headerBlock, ::poi::poifs::storage::RawDataBlockList* blockList) /* throws(IOException) */;

public:
    void preWrite();
    int32_t countBlocks() override;
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;

    // Generated
    PropertyTable(::poi::poifs::storage::HeaderBlock* headerBlock);
    PropertyTable(::poi::poifs::storage::HeaderBlock* headerBlock, ::poi::poifs::storage::RawDataBlockList* blockList);
protected:
    PropertyTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
