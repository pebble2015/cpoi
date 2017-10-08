// Generated from /POI/java/org/apache/poi/hssf/record/SSTSerializer.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::SSTSerializer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _numStrings {  };
    int32_t _numUniqueStrings {  };
    ::poi::util::IntMapper* strings {  };
    ::int32_tArray* bucketAbsoluteOffsets {  };
    ::int32_tArray* bucketRelativeOffsets {  };
protected:
    void ctor(::poi::util::IntMapper* strings, int32_t numStrings, int32_t numUniqueStrings);

public:
    void serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out);

private:
    ::poi::hssf::record::common::UnicodeString* getUnicodeString(int32_t index);
    static ::poi::hssf::record::common::UnicodeString* getUnicodeString(::poi::util::IntMapper* strings, int32_t index);

public:
    ::int32_tArray* getBucketAbsoluteOffsets();
    ::int32_tArray* getBucketRelativeOffsets();

    // Generated
    SSTSerializer(::poi::util::IntMapper* strings, int32_t numStrings, int32_t numUniqueStrings);
protected:
    SSTSerializer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
