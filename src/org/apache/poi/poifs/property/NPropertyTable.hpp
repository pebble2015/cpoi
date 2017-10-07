// Generated from /POI/java/org/apache/poi/poifs/property/NPropertyTable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/PropertyTableBase.hpp>

struct default_init_tag;

class org::apache::poi::poifs::property::NPropertyTable final
    : public PropertyTableBase
{

public:
    typedef PropertyTableBase super;

private:
    static ::org::apache::poi::util::POILogger* _logger_;
    ::org::apache::poi::poifs::common::POIFSBigBlockSize* _bigBigBlockSize {  };
protected:
    void ctor(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock);
    void ctor(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock, ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* filesystem) /* throws(IOException) */;

private:
    static ::java::util::List* buildProperties(::java::util::Iterator* dataSource, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */;

public:
    int32_t countBlocks() override;
    void preWrite();
    void write(::org::apache::poi::poifs::filesystem::NPOIFSStream* stream) /* throws(IOException) */;

    // Generated
    NPropertyTable(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock);
    NPropertyTable(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock, ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* filesystem);
protected:
    NPropertyTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& _logger();
    virtual ::java::lang::Class* getClass0();
};
