// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/SharedValueManager.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::org::apache::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;

                    namespace aggregates
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::aggregates::RecordAggregate, ::org::apache::poi::hssf::record::RecordBaseArray > RecordAggregateArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate, RecordAggregateArray, ::org::apache::poi::hssf::record::CellValueRecordInterfaceArray > FormulaRecordAggregateArray;
                    } // aggregates
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::SharedValueManager_SharedFormulaGroup final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::hssf::record::SharedFormulaRecord* _sfr {  };
    FormulaRecordAggregateArray* _frAggs {  };
    int32_t _numberOfFormulas {  };
    ::org::apache::poi::ss::util::CellReference* _firstCell {  };
protected:
    void ctor(::org::apache::poi::hssf::record::SharedFormulaRecord* sfr, ::org::apache::poi::ss::util::CellReference* firstCell);

public:
    void add(FormulaRecordAggregate* agg);
    void unlinkSharedFormulas();
    ::org::apache::poi::hssf::record::SharedFormulaRecord* getSFR();
    ::java::lang::String* toString() override;

    // Generated
    SharedValueManager_SharedFormulaGroup(::org::apache::poi::hssf::record::SharedFormulaRecord* sfr, ::org::apache::poi::ss::util::CellReference* firstCell);
protected:
    SharedValueManager_SharedFormulaGroup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SharedValueManager;
};
