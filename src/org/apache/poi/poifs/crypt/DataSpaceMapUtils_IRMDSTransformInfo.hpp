// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::DataSpaceMapUtils_IRMDSTransformInfo
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    DataSpaceMapUtils_TransformInfoHeader* transformInfoHeader {  };
    int32_t extensibilityHeader {  };
    ::java::lang::String* xrMLLicense {  };
protected:
    void ctor(DataSpaceMapUtils_TransformInfoHeader* transformInfoHeader, int32_t extensibilityHeader, ::java::lang::String* xrMLLicense);
    void ctor(::org::apache::poi::util::LittleEndianInput* is);

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    DataSpaceMapUtils_IRMDSTransformInfo(DataSpaceMapUtils_TransformInfoHeader* transformInfoHeader, int32_t extensibilityHeader, ::java::lang::String* xrMLLicense);
    DataSpaceMapUtils_IRMDSTransformInfo(::org::apache::poi::util::LittleEndianInput* is);
protected:
    DataSpaceMapUtils_IRMDSTransformInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils;
    friend class DataSpaceMapUtils_createEncryptionEntry_1;
    friend class DataSpaceMapUtils_DataSpaceMap;
    friend class DataSpaceMapUtils_DataSpaceMapEntry;
    friend class DataSpaceMapUtils_DataSpaceDefinition;
    friend class DataSpaceMapUtils_TransformInfoHeader;
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
