// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/CFRecordsAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

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
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::CFRuleBase, StandardRecordArray, ::java::lang::CloneableArray > CFRuleBaseArray;
                } // record
            } // hssf

            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::CFRecordsAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    static constexpr int32_t MAX_97_2003_CONDTIONAL_FORMAT_RULES { int32_t(3) };
    static ::org::apache::poi::util::POILogger* logger_;
    ::org::apache::poi::hssf::record::CFHeaderBase* header {  };
    ::java::util::List* rules {  };
protected:
    void ctor(::org::apache::poi::hssf::record::CFHeaderBase* pHeader, ::org::apache::poi::hssf::record::CFRuleBaseArray* pRules);
    void ctor(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::hssf::record::CFRuleBaseArray* rules);

private:
    static ::org::apache::poi::hssf::record::CFHeaderBase* createHeader(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::hssf::record::CFRuleBaseArray* rules);

public:
    static CFRecordsAggregate* createCFAggregate(::org::apache::poi::hssf::model::RecordStream* rs);
    CFRecordsAggregate* cloneCFAggregate();
    ::org::apache::poi::hssf::record::CFHeaderBase* getHeader();

private:
    void checkRuleIndex(int32_t idx);
    void checkRuleType(::org::apache::poi::hssf::record::CFRuleBase* r);

public:
    ::org::apache::poi::hssf::record::CFRuleBase* getRule(int32_t idx);
    void setRule(int32_t idx, ::org::apache::poi::hssf::record::CFRuleBase* r);
    void addRule(::org::apache::poi::hssf::record::CFRuleBase* r);
    int32_t getNumberOfRules();
    ::java::lang::String* toString() override;
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    bool updateFormulasAfterCellShift(::org::apache::poi::ss::formula::FormulaShifter* shifter, int32_t currentExternSheetIx);

private:
    static ::org::apache::poi::ss::util::CellRangeAddress* shiftRange(::org::apache::poi::ss::formula::FormulaShifter* shifter, ::org::apache::poi::ss::util::CellRangeAddress* cra, int32_t currentExternSheetIx);

    // Generated
    CFRecordsAggregate(::org::apache::poi::hssf::record::CFHeaderBase* pHeader, ::org::apache::poi::hssf::record::CFRuleBaseArray* pRules);

public:
    CFRecordsAggregate(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::hssf::record::CFRuleBaseArray* rules);
protected:
    CFRecordsAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
