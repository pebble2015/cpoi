// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFIconMultiStateFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/IconMultiStateFormatting.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingThreshold, ::java::lang::ObjectArray > ConditionalFormattingThresholdArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFConditionalFormattingThreshold, ::java::lang::ObjectArray, ::poi::ss::usermodel::ConditionalFormattingThresholdArray > HSSFConditionalFormattingThresholdArray;
        } // usermodel
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::usermodel::HSSFIconMultiStateFormatting final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::IconMultiStateFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* sheet {  };
    ::poi::hssf::record::CFRule12Record* cfRule12Record {  };
    ::poi::hssf::record::cf::IconMultiStateFormatting* iconFormatting {  };
protected:
    void ctor(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet);

public:
    ::poi::ss::usermodel::IconMultiStateFormatting_IconSet* getIconSet() override;
    void setIconSet(::poi::ss::usermodel::IconMultiStateFormatting_IconSet* set) override;
    bool isIconOnly() override;
    void setIconOnly(bool only) override;
    bool isReversed() override;
    void setReversed(bool reversed) override;
    HSSFConditionalFormattingThresholdArray* getThresholds() override;
    void setThresholds(::poi::ss::usermodel::ConditionalFormattingThresholdArray* thresholds) override;
    HSSFConditionalFormattingThreshold* createThreshold() override;

    // Generated

public: /* protected */
    HSSFIconMultiStateFormatting(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet);
protected:
    HSSFIconMultiStateFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
