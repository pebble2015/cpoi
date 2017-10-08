// Generated from /POI/java/org/apache/poi/hssf/record/chart/AreaFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::AreaFormatRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4106) };

private:
    static ::poi::util::BitField* automatic_;
    static ::poi::util::BitField* invert_;
    int32_t field_1_foregroundColor {  };
    int32_t field_2_backgroundColor {  };
    int16_t field_3_pattern {  };
    int16_t field_4_formatFlags {  };
    int16_t field_5_forecolorIndex {  };
    int16_t field_6_backcolorIndex {  };
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
    AreaFormatRecord* clone() override;
    int32_t getForegroundColor();
    void setForegroundColor(int32_t field_1_foregroundColor);
    int32_t getBackgroundColor();
    void setBackgroundColor(int32_t field_2_backgroundColor);
    int16_t getPattern();
    void setPattern(int16_t field_3_pattern);
    int16_t getFormatFlags();
    void setFormatFlags(int16_t field_4_formatFlags);
    int16_t getForecolorIndex();
    void setForecolorIndex(int16_t field_5_forecolorIndex);
    int16_t getBackcolorIndex();
    void setBackcolorIndex(int16_t field_6_backcolorIndex);
    void setAutomatic(bool value);
    bool isAutomatic();
    void setInvert(bool value);
    bool isInvert();

    // Generated
    AreaFormatRecord();
    AreaFormatRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    AreaFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& automatic();
    static ::poi::util::BitField*& invert();
    virtual ::java::lang::Class* getClass0();
};
