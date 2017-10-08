// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ExtendedPivotTableViewFieldsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(256) };

private:
    static constexpr int32_t STRING_NOT_PRESENT_LEN { int32_t(65535) };
    int32_t _grbit1 {  };
    int32_t _grbit2 {  };
    int32_t _citmShow {  };
    int32_t _isxdiSort {  };
    int32_t _isxdiShow {  };
    int32_t _reserved1 {  };
    int32_t _reserved2 {  };
    ::java::lang::String* _subtotalName {  };
protected:
    void ctor(::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    void serialize(::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    ExtendedPivotTableViewFieldsRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ExtendedPivotTableViewFieldsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
