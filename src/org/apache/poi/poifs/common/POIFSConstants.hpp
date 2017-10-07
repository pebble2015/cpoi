// Generated from /POI/java/org/apache/poi/poifs/common/POIFSConstants.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::poifs::common::POIFSConstants
    : public virtual ::java::lang::Object
{
    static constexpr int32_t SMALLER_BIG_BLOCK_SIZE { int32_t(512) };

private:
    static POIFSBigBlockSize* SMALLER_BIG_BLOCK_SIZE_DETAILS_;

public:
    static constexpr int32_t LARGER_BIG_BLOCK_SIZE { int32_t(4096) };

private:
    static POIFSBigBlockSize* LARGER_BIG_BLOCK_SIZE_DETAILS_;

public:
    static constexpr int32_t SMALL_BLOCK_SIZE { int32_t(64) };
    static constexpr int32_t PROPERTY_SIZE { int32_t(128) };
    static constexpr int32_t BIG_BLOCK_MINIMUM_DOCUMENT_SIZE { int32_t(4096) };
    static constexpr int32_t LARGEST_REGULAR_SECTOR_NUMBER { int32_t(-5) };
    static constexpr int32_t DIFAT_SECTOR_BLOCK { int32_t(-4) };
    static constexpr int32_t FAT_SECTOR_BLOCK { int32_t(-3) };
    static constexpr int32_t END_OF_CHAIN { int32_t(-2) };
    static constexpr int32_t UNUSED_BLOCK { int32_t(-1) };

private:
    static ::int8_tArray* OOXML_FILE_HEADER_;
    static ::int8_tArray* RAW_XML_FILE_HEADER_;

    // Generated

public:
    static ::java::lang::Class *class_();
    static POIFSBigBlockSize*& SMALLER_BIG_BLOCK_SIZE_DETAILS();
    static POIFSBigBlockSize*& LARGER_BIG_BLOCK_SIZE_DETAILS();
    static ::int8_tArray*& OOXML_FILE_HEADER();
    static ::int8_tArray*& RAW_XML_FILE_HEADER();
};
