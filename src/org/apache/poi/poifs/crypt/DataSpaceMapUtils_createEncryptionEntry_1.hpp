// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>

struct default_init_tag;

class poi::poifs::crypt::DataSpaceMapUtils_createEncryptionEntry_1
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::filesystem::POIFSWriterListener
{

public:
    typedef ::java::lang::Object super;
    void processPOIFSWriterEvent(::poi::poifs::filesystem::POIFSWriterEvent* event) override;

    // Generated
    DataSpaceMapUtils_createEncryptionEntry_1(::int8_tArray* buf);
    static ::java::lang::Class *class_();
    ::int8_tArray* buf;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils;
    friend class DataSpaceMapUtils_DataSpaceMap;
    friend class DataSpaceMapUtils_DataSpaceMapEntry;
    friend class DataSpaceMapUtils_DataSpaceDefinition;
    friend class DataSpaceMapUtils_IRMDSTransformInfo;
    friend class DataSpaceMapUtils_TransformInfoHeader;
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
