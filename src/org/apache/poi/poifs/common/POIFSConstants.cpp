// Generated from /POI/java/org/apache/poi/poifs/common/POIFSConstants.java
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>

#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <Array.hpp>

constexpr int32_t poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE;

poi::poifs::common::POIFSBigBlockSize*& poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS()
{
    clinit();
    return SMALLER_BIG_BLOCK_SIZE_DETAILS_;
}
poi::poifs::common::POIFSBigBlockSize* poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS_;

constexpr int32_t poi::poifs::common::POIFSConstants::LARGER_BIG_BLOCK_SIZE;

poi::poifs::common::POIFSBigBlockSize*& poi::poifs::common::POIFSConstants::LARGER_BIG_BLOCK_SIZE_DETAILS()
{
    clinit();
    return LARGER_BIG_BLOCK_SIZE_DETAILS_;
}
poi::poifs::common::POIFSBigBlockSize* poi::poifs::common::POIFSConstants::LARGER_BIG_BLOCK_SIZE_DETAILS_;

constexpr int32_t poi::poifs::common::POIFSConstants::SMALL_BLOCK_SIZE;

constexpr int32_t poi::poifs::common::POIFSConstants::PROPERTY_SIZE;

constexpr int32_t poi::poifs::common::POIFSConstants::BIG_BLOCK_MINIMUM_DOCUMENT_SIZE;

constexpr int32_t poi::poifs::common::POIFSConstants::LARGEST_REGULAR_SECTOR_NUMBER;

constexpr int32_t poi::poifs::common::POIFSConstants::DIFAT_SECTOR_BLOCK;

constexpr int32_t poi::poifs::common::POIFSConstants::FAT_SECTOR_BLOCK;

constexpr int32_t poi::poifs::common::POIFSConstants::END_OF_CHAIN;

constexpr int32_t poi::poifs::common::POIFSConstants::UNUSED_BLOCK;

int8_tArray*& poi::poifs::common::POIFSConstants::OOXML_FILE_HEADER()
{
    clinit();
    return OOXML_FILE_HEADER_;
}
int8_tArray* poi::poifs::common::POIFSConstants::OOXML_FILE_HEADER_;

int8_tArray*& poi::poifs::common::POIFSConstants::RAW_XML_FILE_HEADER()
{
    clinit();
    return RAW_XML_FILE_HEADER_;
}
int8_tArray* poi::poifs::common::POIFSConstants::RAW_XML_FILE_HEADER_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::common::POIFSConstants::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.common.POIFSConstants", 42);
    return c;
}

