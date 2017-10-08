// Generated from /POI/java/org/apache/poi/hssf/record/DrawingSelectionRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::DrawingSelectionRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(237) };

private:
    DrawingSelectionRecord_OfficeArtRecordHeader* _header {  };
    int32_t _cpsp {  };
    int32_t _dgslk {  };
    int32_t _spidFocus {  };
    ::int32_tArray* _shapeIds {  };
protected:
    void ctor(RecordInputStream* in);

public:
    int16_t getSid() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    DrawingSelectionRecord* clone() override;
    ::java::lang::String* toString() override;

    // Generated
    DrawingSelectionRecord(RecordInputStream* in);
protected:
    DrawingSelectionRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawingSelectionRecord_OfficeArtRecordHeader;
};
