// Generated from /POI/java/org/apache/poi/poifs/common/POIFSBigBlockSize.java
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>

#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>

org::apache::poi::poifs::common::POIFSBigBlockSize::POIFSBigBlockSize(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::common::POIFSBigBlockSize::POIFSBigBlockSize(int32_t bigBlockSize, int16_t headerValue) 
    : POIFSBigBlockSize(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize,headerValue);
}

void org::apache::poi::poifs::common::POIFSBigBlockSize::ctor(int32_t bigBlockSize, int16_t headerValue)
{
    super::ctor();
    this->bigBlockSize = bigBlockSize;
    this->headerValue = headerValue;
}

int32_t org::apache::poi::poifs::common::POIFSBigBlockSize::getBigBlockSize()
{
    return bigBlockSize;
}

int16_t org::apache::poi::poifs::common::POIFSBigBlockSize::getHeaderValue()
{
    return headerValue;
}

int32_t org::apache::poi::poifs::common::POIFSBigBlockSize::getPropertiesPerBlock()
{
    return bigBlockSize / POIFSConstants::PROPERTY_SIZE;
}

int32_t org::apache::poi::poifs::common::POIFSBigBlockSize::getBATEntriesPerBlock()
{
    return bigBlockSize / ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
}

int32_t org::apache::poi::poifs::common::POIFSBigBlockSize::getXBATEntriesPerBlock()
{
    return getBATEntriesPerBlock() - int32_t(1);
}

int32_t org::apache::poi::poifs::common::POIFSBigBlockSize::getNextXBATChainOffset()
{
    return getXBATEntriesPerBlock() * ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::common::POIFSBigBlockSize::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.common.POIFSBigBlockSize", 45);
    return c;
}

java::lang::Class* org::apache::poi::poifs::common::POIFSBigBlockSize::getClass0()
{
    return class_();
}

