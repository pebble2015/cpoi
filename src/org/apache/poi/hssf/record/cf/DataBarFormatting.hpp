// Generated from /POI/java/org/apache/poi/hssf/record/cf/DataBarFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cf::DataBarFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* log_;
    int8_t options {  };
    int8_t percentMin {  };
    int8_t percentMax {  };
    ::org::apache::poi::hssf::record::common::ExtendedColor* color {  };
    DataBarThreshold* thresholdMin {  };
    DataBarThreshold* thresholdMax {  };
    static ::org::apache::poi::util::BitField* iconOnly_;
    static ::org::apache::poi::util::BitField* reversed_;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    bool isIconOnly();
    void setIconOnly(bool only);
    bool isReversed();
    void setReversed(bool rev);

private:
    bool getOptionFlag(::org::apache::poi::util::BitField* field);
    void setOptionFlag(bool option, ::org::apache::poi::util::BitField* field);

public:
    int8_t getPercentMin();
    void setPercentMin(int8_t percentMin);
    int8_t getPercentMax();
    void setPercentMax(int8_t percentMax);
    ::org::apache::poi::hssf::record::common::ExtendedColor* getColor();
    void setColor(::org::apache::poi::hssf::record::common::ExtendedColor* color);
    DataBarThreshold* getThresholdMin();
    void setThresholdMin(DataBarThreshold* thresholdMin);
    DataBarThreshold* getThresholdMax();
    void setThresholdMax(DataBarThreshold* thresholdMax);
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;
    int32_t getDataLength();
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    DataBarFormatting();
    DataBarFormatting(::org::apache::poi::util::LittleEndianInput* in);
protected:
    DataBarFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& log();
    static ::org::apache::poi::util::BitField*& iconOnly();
    static ::org::apache::poi::util::BitField*& reversed();
    virtual ::java::lang::Class* getClass0();
};
