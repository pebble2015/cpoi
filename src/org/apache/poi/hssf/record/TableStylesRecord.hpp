// Generated from /POI/java/org/apache/poi/hssf/record/TableStylesRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::TableStylesRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(2190) };

private:
    int32_t rt {  };
    int32_t grbitFrt {  };
    ::int8_tArray* unused {  };
    int32_t cts {  };
    ::java::lang::String* rgchDefListStyle {  };
    ::java::lang::String* rgchDefPivotStyle {  };
protected:
    void ctor(RecordInputStream* in);

public: /* protected */
    void serialize(::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    TableStylesRecord(RecordInputStream* in);
protected:
    TableStylesRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
