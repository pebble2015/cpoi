// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_IRMDSTransformInfo.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_TransformInfoHeader.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::DataSpaceMapUtils_IRMDSTransformInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::DataSpaceMapUtils_IRMDSTransformInfo(DataSpaceMapUtils_TransformInfoHeader* transformInfoHeader, int32_t extensibilityHeader, ::java::lang::String* xrMLLicense) 
    : DataSpaceMapUtils_IRMDSTransformInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(transformInfoHeader,extensibilityHeader,xrMLLicense);
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::DataSpaceMapUtils_IRMDSTransformInfo(::org::apache::poi::util::LittleEndianInput* is) 
    : DataSpaceMapUtils_IRMDSTransformInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::ctor(DataSpaceMapUtils_TransformInfoHeader* transformInfoHeader, int32_t extensibilityHeader, ::java::lang::String* xrMLLicense)
{
    super::ctor();
    this->transformInfoHeader = transformInfoHeader;
    this->extensibilityHeader = extensibilityHeader;
    this->xrMLLicense = xrMLLicense;
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::ctor(::org::apache::poi::util::LittleEndianInput* is)
{
    super::ctor();
    transformInfoHeader = new DataSpaceMapUtils_TransformInfoHeader(is);
    extensibilityHeader = npc(is)->readInt();
    xrMLLicense = DataSpaceMapUtils::readUtf8LPP4(is);
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    npc(transformInfoHeader)->write(bos);
    npc(bos)->writeInt(extensibilityHeader);
    DataSpaceMapUtils::writeUtf8LPP4(bos, xrMLLicense);
    npc(bos)->writeInt(int32_t(4));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils.IRMDSTransformInfo", 63);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo::getClass0()
{
    return class_();
}

