// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisOptionsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::AxisOptionsRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4194) };

private:
    static ::org::apache::poi::util::BitField* defaultMinimum_;
    static ::org::apache::poi::util::BitField* defaultMaximum_;
    static ::org::apache::poi::util::BitField* defaultMajor_;
    static ::org::apache::poi::util::BitField* defaultMinorUnit_;
    static ::org::apache::poi::util::BitField* isDate_;
    static ::org::apache::poi::util::BitField* defaultBase_;
    static ::org::apache::poi::util::BitField* defaultCross_;
    static ::org::apache::poi::util::BitField* defaultDateSettings_;
    int16_t field_1_minimumCategory {  };
    int16_t field_2_maximumCategory {  };
    int16_t field_3_majorUnitValue {  };
    int16_t field_4_majorUnit {  };
    int16_t field_5_minorUnitValue {  };
    int16_t field_6_minorUnit {  };
    int16_t field_7_baseUnit {  };
    int16_t field_8_crossingPoint {  };
    int16_t field_9_options {  };
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
    AxisOptionsRecord* clone() override;
    int16_t getMinimumCategory();
    void setMinimumCategory(int16_t field_1_minimumCategory);
    int16_t getMaximumCategory();
    void setMaximumCategory(int16_t field_2_maximumCategory);
    int16_t getMajorUnitValue();
    void setMajorUnitValue(int16_t field_3_majorUnitValue);
    int16_t getMajorUnit();
    void setMajorUnit(int16_t field_4_majorUnit);
    int16_t getMinorUnitValue();
    void setMinorUnitValue(int16_t field_5_minorUnitValue);
    int16_t getMinorUnit();
    void setMinorUnit(int16_t field_6_minorUnit);
    int16_t getBaseUnit();
    void setBaseUnit(int16_t field_7_baseUnit);
    int16_t getCrossingPoint();
    void setCrossingPoint(int16_t field_8_crossingPoint);
    int16_t getOptions();
    void setOptions(int16_t field_9_options);
    void setDefaultMinimum(bool value);
    bool isDefaultMinimum();
    void setDefaultMaximum(bool value);
    bool isDefaultMaximum();
    void setDefaultMajor(bool value);
    bool isDefaultMajor();
    void setDefaultMinorUnit(bool value);
    bool isDefaultMinorUnit();
    void setIsDate(bool value);
    bool isIsDate();
    void setDefaultBase(bool value);
    bool isDefaultBase();
    void setDefaultCross(bool value);
    bool isDefaultCross();
    void setDefaultDateSettings(bool value);
    bool isDefaultDateSettings();

    // Generated
    AxisOptionsRecord();
    AxisOptionsRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    AxisOptionsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& defaultMinimum();
    static ::org::apache::poi::util::BitField*& defaultMaximum();
    static ::org::apache::poi::util::BitField*& defaultMajor();
    static ::org::apache::poi::util::BitField*& defaultMinorUnit();
    static ::org::apache::poi::util::BitField*& isDate();
    static ::org::apache::poi::util::BitField*& defaultBase();
    static ::org::apache::poi::util::BitField*& defaultCross();
    static ::org::apache::poi::util::BitField*& defaultDateSettings();
    virtual ::java::lang::Class* getClass0();
};
