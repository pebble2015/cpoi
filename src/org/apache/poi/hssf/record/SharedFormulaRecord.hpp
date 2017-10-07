// Generated from /POI/java/org/apache/poi/hssf/record/SharedFormulaRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>

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

class org::apache::poi::hssf::record::SharedFormulaRecord final
    : public SharedValueRecordBase
{

public:
    typedef SharedValueRecordBase super;
    static constexpr int16_t sid { int16_t(1212) };

private:
    int32_t field_5_reserved {  };
    ::org::apache::poi::ss::formula::Formula* field_7_parsed_expr {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range);
    void ctor(RecordInputStream* in);

public: /* protected */
    void serializeExtraData(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getExtraDataSize() override;

public:
    ::java::lang::String* toString() override;
    int16_t getSid() override;
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormulaTokens(FormulaRecord* formula);
    ::java::lang::Object* clone() override;
    bool isFormulaSame(SharedFormulaRecord* other);

    // Generated
    SharedFormulaRecord();

private:
    SharedFormulaRecord(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range);

public:
    SharedFormulaRecord(RecordInputStream* in);
protected:
    SharedFormulaRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
