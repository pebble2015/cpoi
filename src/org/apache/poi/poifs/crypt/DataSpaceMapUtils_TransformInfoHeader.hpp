// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

struct default_init_tag;

class poi::poifs::crypt::DataSpaceMapUtils_TransformInfoHeader
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t transformType {  };
    ::java::lang::String* transformerId {  };
    ::java::lang::String* transformerName {  };
    int32_t readerVersionMajor {  }, readerVersionMinor {  };
    int32_t updaterVersionMajor {  }, updaterVersionMinor {  };
    int32_t writerVersionMajor {  }, writerVersionMinor {  };
protected:
    void ctor(int32_t transformType, ::java::lang::String* transformerId, ::java::lang::String* transformerName, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor);
    void ctor(::poi::util::LittleEndianInput* is);

public:
    void write(::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    DataSpaceMapUtils_TransformInfoHeader(int32_t transformType, ::java::lang::String* transformerId, ::java::lang::String* transformerName, int32_t readerVersionMajor, int32_t readerVersionMinor, int32_t updaterVersionMajor, int32_t updaterVersionMinor, int32_t writerVersionMajor, int32_t writerVersionMinor);
    DataSpaceMapUtils_TransformInfoHeader(::poi::util::LittleEndianInput* is);
protected:
    DataSpaceMapUtils_TransformInfoHeader(const ::default_init_tag&);


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
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
