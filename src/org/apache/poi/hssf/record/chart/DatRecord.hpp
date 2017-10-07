// Generated from /POI/java/org/apache/poi/hssf/record/chart/DatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::DatRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4195) };

private:
    static ::org::apache::poi::util::BitField* horizontalBorder_;
    static ::org::apache::poi::util::BitField* verticalBorder_;
    static ::org::apache::poi::util::BitField* border_;
    static ::org::apache::poi::util::BitField* showSeriesKey_;
    int16_t field_1_options {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DatRecord* clone() override;
    int16_t getOptions();
    void setOptions(int16_t field_1_options);
    void setHorizontalBorder(bool value);
    bool isHorizontalBorder();
    void setVerticalBorder(bool value);
    bool isVerticalBorder();
    void setBorder(bool value);
    bool isBorder();
    void setShowSeriesKey(bool value);
    bool isShowSeriesKey();

    // Generated
    DatRecord();
    DatRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    DatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& horizontalBorder();
    static ::org::apache::poi::util::BitField*& verticalBorder();
    static ::org::apache::poi::util::BitField*& border();
    static ::org::apache::poi::util::BitField*& showSeriesKey();
    virtual ::java::lang::Class* getClass0();
};