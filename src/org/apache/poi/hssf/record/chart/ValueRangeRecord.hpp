// Generated from /POI/java/org/apache/poi/hssf/record/chart/ValueRangeRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::chart::ValueRangeRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4127) };

private:
    static ::poi::util::BitField* automaticMinimum_;
    static ::poi::util::BitField* automaticMaximum_;
    static ::poi::util::BitField* automaticMajor_;
    static ::poi::util::BitField* automaticMinor_;
    static ::poi::util::BitField* automaticCategoryCrossing_;
    static ::poi::util::BitField* logarithmicScale_;
    static ::poi::util::BitField* valuesInReverse_;
    static ::poi::util::BitField* crossCategoryAxisAtMaximum_;
    static ::poi::util::BitField* reserved_;
    double field_1_minimumAxisValue {  };
    double field_2_maximumAxisValue {  };
    double field_3_majorIncrement {  };
    double field_4_minorIncrement {  };
    double field_5_categoryAxisCross {  };
    int16_t field_6_options {  };
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
    double getMinimumAxisValue();
    void setMinimumAxisValue(double field_1_minimumAxisValue);
    double getMaximumAxisValue();
    void setMaximumAxisValue(double field_2_maximumAxisValue);
    double getMajorIncrement();
    void setMajorIncrement(double field_3_majorIncrement);
    double getMinorIncrement();
    void setMinorIncrement(double field_4_minorIncrement);
    double getCategoryAxisCross();
    void setCategoryAxisCross(double field_5_categoryAxisCross);
    int16_t getOptions();
    void setOptions(int16_t field_6_options);
    void setAutomaticMinimum(bool value);
    bool isAutomaticMinimum();
    void setAutomaticMaximum(bool value);
    bool isAutomaticMaximum();
    void setAutomaticMajor(bool value);
    bool isAutomaticMajor();
    void setAutomaticMinor(bool value);
    bool isAutomaticMinor();
    void setAutomaticCategoryCrossing(bool value);
    bool isAutomaticCategoryCrossing();
    void setLogarithmicScale(bool value);
    bool isLogarithmicScale();
    void setValuesInReverse(bool value);
    bool isValuesInReverse();
    void setCrossCategoryAxisAtMaximum(bool value);
    bool isCrossCategoryAxisAtMaximum();
    void setReserved(bool value);
    bool isReserved();

    // Generated
    ValueRangeRecord();
    ValueRangeRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ValueRangeRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& automaticMinimum();
    static ::poi::util::BitField*& automaticMaximum();
    static ::poi::util::BitField*& automaticMajor();
    static ::poi::util::BitField*& automaticMinor();
    static ::poi::util::BitField*& automaticCategoryCrossing();
    static ::poi::util::BitField*& logarithmicScale();
    static ::poi::util::BitField*& valuesInReverse();
    static ::poi::util::BitField*& crossCategoryAxisAtMaximum();
    static ::poi::util::BitField*& reserved();
    virtual ::java::lang::Class* getClass0();
};
