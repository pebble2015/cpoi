// Generated from /POI/java/org/apache/poi/hssf/record/chart/AreaRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::AreaRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4122) };

private:
    int16_t field_1_formatFlags {  };
    static ::org::apache::poi::util::BitField* stacked_;
    static ::org::apache::poi::util::BitField* displayAsPercentage_;
    static ::org::apache::poi::util::BitField* shadow_;
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
    AreaRecord* clone() override;
    int16_t getFormatFlags();
    void setFormatFlags(int16_t field_1_formatFlags);
    void setStacked(bool value);
    bool isStacked();
    void setDisplayAsPercentage(bool value);
    bool isDisplayAsPercentage();
    void setShadow(bool value);
    bool isShadow();

    // Generated
    AreaRecord();
    AreaRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    AreaRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& stacked();
    static ::org::apache::poi::util::BitField*& displayAsPercentage();
    static ::org::apache::poi::util::BitField*& shadow();
    virtual ::java::lang::Class* getClass0();
};
