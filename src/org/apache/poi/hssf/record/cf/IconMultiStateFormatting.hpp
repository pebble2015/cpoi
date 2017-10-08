// Generated from /POI/java/org/apache/poi/hssf/record/cf/IconMultiStateFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace cf
            {
typedef ::SubArray< ::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
            } // cf
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::cf::IconMultiStateFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* log_;
    ::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet {  };
    int8_t options {  };
    ThresholdArray* thresholds {  };
    static ::poi::util::BitField* iconOnly_;
    static ::poi::util::BitField* reversed_;
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in);

public:
    ::poi::ss::usermodel::IconMultiStateFormatting_IconSet* getIconSet();
    void setIconSet(::poi::ss::usermodel::IconMultiStateFormatting_IconSet* set);
    ThresholdArray* getThresholds();
    void setThresholds(ThresholdArray* thresholds);
    bool isIconOnly();
    void setIconOnly(bool only);
    bool isReversed();
    void setReversed(bool rev);

private:
    bool getOptionFlag(::poi::util::BitField* field);
    void setOptionFlag(bool option, ::poi::util::BitField* field);

public:
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;
    int32_t getDataLength();
    void serialize(::poi::util::LittleEndianOutput* out);

    // Generated
    IconMultiStateFormatting();
    IconMultiStateFormatting(::poi::util::LittleEndianInput* in);
protected:
    IconMultiStateFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& log();
    static ::poi::util::BitField*& iconOnly();
    static ::poi::util::BitField*& reversed();
    virtual ::java::lang::Class* getClass0();
};
