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
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
                    namespace cf
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
                    } // cf
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::cf::IconMultiStateFormatting final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* log_;
    ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet {  };
    int8_t options {  };
    ThresholdArray* thresholds {  };
    static ::org::apache::poi::util::BitField* iconOnly_;
    static ::org::apache::poi::util::BitField* reversed_;
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    ::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* getIconSet();
    void setIconSet(::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* set);
    ThresholdArray* getThresholds();
    void setThresholds(ThresholdArray* thresholds);
    bool isIconOnly();
    void setIconOnly(bool only);
    bool isReversed();
    void setReversed(bool rev);

private:
    bool getOptionFlag(::org::apache::poi::util::BitField* field);
    void setOptionFlag(bool option, ::org::apache::poi::util::BitField* field);

public:
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;
    int32_t getDataLength();
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    IconMultiStateFormatting();
    IconMultiStateFormatting(::org::apache::poi::util::LittleEndianInput* in);
protected:
    IconMultiStateFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& log();
    static ::org::apache::poi::util::BitField*& iconOnly();
    static ::org::apache::poi::util::BitField*& reversed();
    virtual ::java::lang::Class* getClass0();
};
