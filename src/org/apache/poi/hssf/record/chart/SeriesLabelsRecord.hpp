// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesLabelsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::chart::SeriesLabelsRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4108) };

private:
    static ::poi::util::BitField* showActual_;
    static ::poi::util::BitField* showPercent_;
    static ::poi::util::BitField* labelAsPercentage_;
    static ::poi::util::BitField* smoothedLine_;
    static ::poi::util::BitField* showLabel_;
    static ::poi::util::BitField* showBubbleSizes_;
    int16_t field_1_formatFlags {  };
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
    ::java::lang::Object* clone() override;
    int16_t getFormatFlags();
    void setFormatFlags(int16_t field_1_formatFlags);
    void setShowActual(bool value);
    bool isShowActual();
    void setShowPercent(bool value);
    bool isShowPercent();
    void setLabelAsPercentage(bool value);
    bool isLabelAsPercentage();
    void setSmoothedLine(bool value);
    bool isSmoothedLine();
    void setShowLabel(bool value);
    bool isShowLabel();
    void setShowBubbleSizes(bool value);
    bool isShowBubbleSizes();

    // Generated
    SeriesLabelsRecord();
    SeriesLabelsRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    SeriesLabelsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& showActual();
    static ::poi::util::BitField*& showPercent();
    static ::poi::util::BitField*& labelAsPercentage();
    static ::poi::util::BitField*& smoothedLine();
    static ::poi::util::BitField*& showLabel();
    static ::poi::util::BitField*& showBubbleSizes();
    virtual ::java::lang::Class* getClass0();
};
