// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/standard/EncryptionRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::poifs::crypt::DataSpaceMapUtils_DataSpaceMapEntry
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::int32_tArray* referenceComponentType {  };
    ::java::lang::StringArray* referenceComponent {  };
    ::java::lang::String* dataSpaceName {  };
protected:
    void ctor(::int32_tArray* referenceComponentType, ::java::lang::StringArray* referenceComponent, ::java::lang::String* dataSpaceName);
    void ctor(::poi::util::LittleEndianInput* is);

public:
    void write(::poi::util::LittleEndianByteArrayOutputStream* os) override;

    // Generated
    DataSpaceMapUtils_DataSpaceMapEntry(::int32_tArray* referenceComponentType, ::java::lang::StringArray* referenceComponent, ::java::lang::String* dataSpaceName);
    DataSpaceMapUtils_DataSpaceMapEntry(::poi::util::LittleEndianInput* is);
protected:
    DataSpaceMapUtils_DataSpaceMapEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils;
    friend class DataSpaceMapUtils_createEncryptionEntry_1;
    friend class DataSpaceMapUtils_DataSpaceMap;
    friend class DataSpaceMapUtils_DataSpaceDefinition;
    friend class DataSpaceMapUtils_IRMDSTransformInfo;
    friend class DataSpaceMapUtils_TransformInfoHeader;
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
