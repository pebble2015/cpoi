// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java

#pragma once

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

class org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::crypt::standard::EncryptionRecord
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::StringArray* transformer {  };
protected:
    void ctor(::java::lang::StringArray* transformer);
    void ctor(::org::apache::poi::util::LittleEndianInput* is);

public:
    void write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos) override;

    // Generated
    DataSpaceMapUtils_DataSpaceDefinition(::java::lang::StringArray* transformer);
    DataSpaceMapUtils_DataSpaceDefinition(::org::apache::poi::util::LittleEndianInput* is);
protected:
    DataSpaceMapUtils_DataSpaceDefinition(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSpaceMapUtils;
    friend class DataSpaceMapUtils_createEncryptionEntry_1;
    friend class DataSpaceMapUtils_DataSpaceMap;
    friend class DataSpaceMapUtils_DataSpaceMapEntry;
    friend class DataSpaceMapUtils_IRMDSTransformInfo;
    friend class DataSpaceMapUtils_TransformInfoHeader;
    friend class DataSpaceMapUtils_DataSpaceVersionInfo;
};
