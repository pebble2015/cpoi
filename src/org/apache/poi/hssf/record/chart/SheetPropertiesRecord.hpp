// Generated from /POI/java/org/apache/poi/hssf/record/chart/SheetPropertiesRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::SheetPropertiesRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4164) };

private:
    static ::org::apache::poi::util::BitField* chartTypeManuallyFormatted_;
    static ::org::apache::poi::util::BitField* plotVisibleOnly_;
    static ::org::apache::poi::util::BitField* doNotSizeWithWindow_;
    static ::org::apache::poi::util::BitField* defaultPlotDimensions_;
    static ::org::apache::poi::util::BitField* autoPlotArea_;
    int32_t field_1_flags {  };
    int32_t field_2_empty {  };

public:
    static constexpr int8_t EMPTY_NOT_PLOTTED { int8_t(0) };
    static constexpr int8_t EMPTY_ZERO { int8_t(1) };
    static constexpr int8_t EMPTY_INTERPOLATED { int8_t(2) };
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
    ::java::lang::Object* clone() override;
    int32_t getFlags();
    int32_t getEmpty();
    void setEmpty(int8_t empty);
    void setChartTypeManuallyFormatted(bool value);
    bool isChartTypeManuallyFormatted();
    void setPlotVisibleOnly(bool value);
    bool isPlotVisibleOnly();
    void setDoNotSizeWithWindow(bool value);
    bool isDoNotSizeWithWindow();
    void setDefaultPlotDimensions(bool value);
    bool isDefaultPlotDimensions();
    void setAutoPlotArea(bool value);
    bool isAutoPlotArea();

    // Generated
    SheetPropertiesRecord();
    SheetPropertiesRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    SheetPropertiesRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& chartTypeManuallyFormatted();
    static ::org::apache::poi::util::BitField*& plotVisibleOnly();
    static ::org::apache::poi::util::BitField*& doNotSizeWithWindow();
    static ::org::apache::poi::util::BitField*& defaultPlotDimensions();
    static ::org::apache::poi::util::BitField*& autoPlotArea();
    virtual ::java::lang::Class* getClass0();
};
