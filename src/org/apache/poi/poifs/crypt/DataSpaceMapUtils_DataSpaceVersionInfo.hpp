// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceVersionInfo
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* featureIdentifier {  };
    int32_t readerVersionMajor {  }, readerVersionMinor {  };
    int32_t updaterVersionMajor {  }, updaterVersionMinor {  };
    int32_t writerVersionMajor {  }, writerVersionMinor {  };
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* is);
    void ctor(::java::lang::String* featureIdentifier, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor);

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    DataSpaceMapUtils_DataSpaceVersionInfo(::org::apache::poi::util::LittleEndianInput* is);
    DataSpaceMapUtils_DataSpaceVersionInfo(::java::lang::String* featureIdentifier, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor);
protected:
    DataSpaceMapUtils_DataSpaceVersionInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils;
    friend class DataSpaceMapUtils_createEncryptionEntry_1;
    friend class DataSpaceMapUtils_DataSpaceMap;
    friend class DataSpaceMapUtils_DataSpaceMapEntry;
    friend class DataSpaceMapUtils_DataSpaceDefinition;
    friend class DataSpaceMapUtils_IRMDSTransformInfo;
    friend class DataSpaceMapUtils_TransformInfoHeader;
};
