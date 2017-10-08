// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace crypt
        {
            namespace standard
            {
typedef ::SubArray< ::poi::poifs::crypt::standard::EncryptionRecord, ::java::lang::ObjectArray > EncryptionRecordArray;
            } // standard
typedef ::SubArray< ::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry, ::java::lang::ObjectArray, ::poi::poifs::crypt::standard::EncryptionRecordArray > DataSpaceMapUtils_DataSpaceMapEntryArray;
        } // crypt
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMap
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    DataSpaceMapUtils_DataSpaceMapEntryArray* entries {  };
protected:
    void ctor(DataSpaceMapUtils_DataSpaceMapEntryArray* entries);
    void ctor(::poi::util::LittleEndianInput* is);

public:
    void write(::poi::util::LittleEndianByteArrayOutputStream* os) override;

    // Generated
    DataSpaceMapUtils_DataSpaceMap(DataSpaceMapUtils_DataSpaceMapEntryArray* entries);
    DataSpaceMapUtils_DataSpaceMap(::poi::util::LittleEndianInput* is);
protected:
    DataSpaceMapUtils_DataSpaceMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils;
    friend class DataSpaceMapUtils_createEncryptionEntry_1;
    friend class DataSpaceMapUtils_DataSpaceMapEntry;
    friend class DataSpaceMapUtils_DataSpaceDefinition;
    friend class DataSpaceMapUtils_IRMDSTransformInfo;
    friend class DataSpaceMapUtils_TransformInfoHeader;
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
