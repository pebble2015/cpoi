// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/standard/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::poifs::crypt::DataSpaceMapUtils
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void addDefaultDataSpace(::poi::poifs::filesystem::DirectoryEntry* dir) /* throws(IOException) */;
    static ::poi::poifs::filesystem::DocumentEntry* createEncryptionEntry(::poi::poifs::filesystem::DirectoryEntry* dir, ::java::lang::String* path, ::poi::poifs::crypt::standard::EncryptionRecord* out) /* throws(IOException) */;
    static ::java::lang::String* readUnicodeLPP4(::poi::util::LittleEndianInput* is);
    static void writeUnicodeLPP4(::poi::util::LittleEndianOutput* os, ::java::lang::String* string);
    static ::java::lang::String* readUtf8LPP4(::poi::util::LittleEndianInput* is);
    static void writeUtf8LPP4(::poi::util::LittleEndianOutput* os, ::java::lang::String* str);

    // Generated
    DataSpaceMapUtils();
protected:
    DataSpaceMapUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils_createEncryptionEntry_1;
    friend class DataSpaceMapUtils_DataSpaceMap;
    friend class DataSpaceMapUtils_DataSpaceMapEntry;
    friend class DataSpaceMapUtils_DataSpaceDefinition;
    friend class DataSpaceMapUtils_IRMDSTransformInfo;
    friend class DataSpaceMapUtils_TransformInfoHeader;
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
