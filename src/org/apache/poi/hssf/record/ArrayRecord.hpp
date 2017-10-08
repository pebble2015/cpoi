// Generated from /POI/java/org/apache/poi/hssf/record/ArrayRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::record::ArrayRecord final
    : public SharedValueRecordBase
    , public ::java::lang::Cloneable
{

public:
    typedef SharedValueRecordBase super;
    static constexpr int16_t sid { int16_t(545) };

private:
    static constexpr int32_t OPT_ALWAYS_RECALCULATE { int32_t(1) };
    static constexpr int32_t OPT_CALCULATE_ON_OPEN { int32_t(2) };
    int32_t _options {  };
    int32_t _field3notUsed {  };
    ::poi::ss::formula::Formula* _formula {  };
protected:
    void ctor(RecordInputStream* in);
    void ctor(::poi::ss::formula::Formula* formula, ::poi::hssf::util::CellRangeAddress8Bit* range);

public:
    bool isAlwaysRecalculate();
    bool isCalculateOnOpen();
    ::poi::ss::formula::ptg::PtgArray* getFormulaTokens();

public: /* protected */
    int32_t getExtraDataSize() override;
    void serializeExtraData(::poi::util::LittleEndianOutput* out) override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    ArrayRecord* clone() override;

    // Generated
    ArrayRecord(RecordInputStream* in);
    ArrayRecord(::poi::ss::formula::Formula* formula, ::poi::hssf::util::CellRangeAddress8Bit* range);
protected:
    ArrayRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
