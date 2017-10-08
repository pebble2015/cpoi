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

class poi::poifs::property::NPropertyTable final
    : public PropertyTableBase
{

public:
    typedef PropertyTableBase super;

private:
    static ::poi::util::POILogger* _logger_;
    ::poi::poifs::common::POIFSBigBlockSize* _bigBigBlockSize {  };
protected:
    void ctor(::poi::poifs::storage::HeaderBlock* headerBlock);
    void ctor(::poi::poifs::storage::HeaderBlock* headerBlock, ::poi::poifs::filesystem::NPOIFSFileSystem* filesystem) /* throws(IOException) */;

private:
    static ::java::util::List* buildProperties(::java::util::Iterator* dataSource, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */;

public:
    int32_t countBlocks() override;
    void preWrite();
    void write(::poi::poifs::filesystem::NPOIFSStream* stream) /* throws(IOException) */;

    // Generated
    NPropertyTable(::poi::poifs::storage::HeaderBlock* headerBlock);
    NPropertyTable(::poi::poifs::storage::HeaderBlock* headerBlock, ::poi::poifs::filesystem::NPOIFSFileSystem* filesystem);
protected:
    NPropertyTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& _logger();
    virtual ::java::lang::Class* getClass0();
};
