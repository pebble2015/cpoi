// Generated from /POI/java/org/apache/poi/hssf/record/BottomMarginRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/Margin.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::BottomMarginRecord final
    : public StandardRecord
    , public Margin
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(41) };

private:
    double field_1_margin {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    double getMargin() override;
    void setMargin(double field_1_margin) override;
    BottomMarginRecord* clone() override;

    // Generated
    BottomMarginRecord();
    BottomMarginRecord(RecordInputStream* in);
protected:
    BottomMarginRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
