// Generated from /POI/java/org/apache/poi/hssf/record/chart/DefaultDataLabelTextPropertiesRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4132) };

private:
    int16_t field_1_categoryDataType {  };

public:
    static constexpr int16_t CATEGORY_DATA_TYPE_SHOW_LABELS_CHARACTERISTIC { int16_t(0) };
    static constexpr int16_t CATEGORY_DATA_TYPE_VALUE_AND_PERCENTAGE_CHARACTERISTIC { int16_t(1) };
    static constexpr int16_t CATEGORY_DATA_TYPE_ALL_TEXT_CHARACTERISTIC { int16_t(2) };
protected:
    void ctor();
    void ctor(::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DefaultDataLabelTextPropertiesRecord* clone() override;
    int16_t getCategoryDataType();
    void setCategoryDataType(int16_t field_1_categoryDataType);

    // Generated
    DefaultDataLabelTextPropertiesRecord();
    DefaultDataLabelTextPropertiesRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    DefaultDataLabelTextPropertiesRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
