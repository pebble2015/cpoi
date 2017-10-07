// Generated from /POI/java/org/apache/poi/hssf/record/CFRuleRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::CFRuleRecord final
    : public CFRuleBase
    , public virtual ::java::lang::Cloneable
{

public:
    typedef CFRuleBase super;
    static constexpr int16_t sid { int16_t(433) };
protected:
    void ctor(int8_t conditionType, int8_t comparisonOperation);
    void ctor(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2);

private:
    void setDefaults();

public:
    static CFRuleRecord* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, ::java::lang::String* formulaText);
    static CFRuleRecord* create(::org::apache::poi::hssf::usermodel::HSSFSheet* sheet, int8_t comparisonOperation, ::java::lang::String* formulaText1, ::java::lang::String* formulaText2);
protected:
    void ctor(RecordInputStream* in);

public:
    int16_t getSid() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::java::lang::String* toString() override;
    CFRuleRecord* clone() override;

    // Generated

private:
    CFRuleRecord(int8_t conditionType, int8_t comparisonOperation);
    CFRuleRecord(int8_t conditionType, int8_t comparisonOperation, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2);

public:
    CFRuleRecord(RecordInputStream* in);
protected:
    CFRuleRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
