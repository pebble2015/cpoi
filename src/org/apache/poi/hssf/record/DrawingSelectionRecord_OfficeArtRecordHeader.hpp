// Generated from /POI/java/org/apache/poi/hssf/record/DrawingSelectionRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DrawingSelectionRecord_OfficeArtRecordHeader final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(8) };

private:
    int32_t _verAndInstance {  };
    int32_t _type {  };
    int32_t _length {  };
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);
    ::java::lang::String* debugFormatAsString();

    // Generated
    DrawingSelectionRecord_OfficeArtRecordHeader(::org::apache::poi::util::LittleEndianInput* in);
protected:
    DrawingSelectionRecord_OfficeArtRecordHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawingSelectionRecord;
};
