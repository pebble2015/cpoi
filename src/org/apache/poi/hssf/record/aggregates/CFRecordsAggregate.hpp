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

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::CFRuleBase, StandardRecordArray, ::java::lang::CloneableArray > CFRuleBaseArray;
        } // record
    } // hssf

    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::record::aggregates::CFRecordsAggregate final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    static constexpr int32_t MAX_97_2003_CONDTIONAL_FORMAT_RULES { int32_t(3) };
    static ::poi::util::POILogger* logger_;
    ::poi::hssf::record::CFHeaderBase* header {  };
    ::java::util::List* rules {  };
protected:
    void ctor(::poi::hssf::record::CFHeaderBase* pHeader, ::poi::hssf::record::CFRuleBaseArray* pRules);
    void ctor(::poi::ss::util::CellRangeAddressArray* regions, ::poi::hssf::record::CFRuleBaseArray* rules);

private:
    static ::poi::hssf::record::CFHeaderBase* createHeader(::poi::ss::util::CellRangeAddressArray* regions, ::poi::hssf::record::CFRuleBaseArray* rules);

public:
    static CFRecordsAggregate* createCFAggregate(::poi::hssf::model::RecordStream* rs);
    CFRecordsAggregate* cloneCFAggregate();
    ::poi::hssf::record::CFHeaderBase* getHeader();

private:
    void checkRuleIndex(int32_t idx);
    void checkRuleType(::poi::hssf::record::CFRuleBase* r);

public:
    ::poi::hssf::record::CFRuleBase* getRule(int32_t idx);
    void setRule(int32_t idx, ::poi::hssf::record::CFRuleBase* r);
    void addRule(::poi::hssf::record::CFRuleBase* r);
    int32_t getNumberOfRules();
    ::java::lang::String* toString() override;
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    bool updateFormulasAfterCellShift(::poi::ss::formula::FormulaShifter* shifter, int32_t currentExternSheetIx);

private:
    static ::poi::ss::util::CellRangeAddress* shiftRange(::poi::ss::formula::FormulaShifter* shifter, ::poi::ss::util::CellRangeAddress* cra, int32_t currentExternSheetIx);

    // Generated
    CFRecordsAggregate(::poi::hssf::record::CFHeaderBase* pHeader, ::poi::hssf::record::CFRuleBaseArray* pRules);

public:
    CFRecordsAggregate(::poi::ss::util::CellRangeAddressArray* regions, ::poi::hssf::record::CFRuleBaseArray* rules);
protected:
    CFRecordsAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
