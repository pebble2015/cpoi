// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/CFRecordsAggregate.java
#include <org/apache/poi/hssf/record/aggregates/CFRecordsAggregate.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/CFHeader12Record.hpp>
#include <org/apache/poi/hssf/record/CFHeaderBase.hpp>
#include <org/apache/poi/hssf/record/CFHeaderRecord.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/CFRuleRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/ss/formula/FormulaShifter.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula

                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::CFRecordsAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::CFRecordsAggregate(::org::apache::poi::hssf::record::CFHeaderBase* pHeader, ::org::apache::poi::hssf::record::CFRuleBaseArray* pRules) 
    : CFRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(pHeader,pRules);
}

org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::CFRecordsAggregate(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::hssf::record::CFRuleBaseArray* rules) 
    : CFRecordsAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,rules);
}

constexpr int32_t org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::MAX_97_2003_CONDTIONAL_FORMAT_RULES;

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::logger_;

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::ctor(::org::apache::poi::hssf::record::CFHeaderBase* pHeader, ::org::apache::poi::hssf::record::CFRuleBaseArray* pRules)
{
    super::ctor();
    if(pHeader == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"header must not be null"_j);
    }
    if(pRules == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"rules must not be null"_j);
    }
    if(npc(pRules)->length > MAX_97_2003_CONDTIONAL_FORMAT_RULES) {
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"Excel versions before 2007 require that "_j)->append(u"No more than "_j)->toString())->append(MAX_97_2003_CONDTIONAL_FORMAT_RULES)
            ->append(u" rules may be specified, "_j)
            ->append(npc(pRules)->length)
            ->append(u" were found,"_j)
            ->append(u" this file will cause problems with old Excel versions"_j)->toString())}));
    }
    if(npc(pRules)->length != npc(pHeader)->getNumberOfConditionalFormats()) {
        throw new ::org::apache::poi::util::RecordFormatException(u"Mismatch number of rules"_j);
    }
    header = pHeader;
    rules = new ::java::util::ArrayList(npc(pRules)->length);
    for(auto pRule : *npc(pRules)) {
        checkRuleType(pRule);
        npc(rules)->add(static_cast< ::java::lang::Object* >(pRule));
    }
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::ctor(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::hssf::record::CFRuleBaseArray* rules)
{
    ctor(createHeader(regions, rules), rules);
}

org::apache::poi::hssf::record::CFHeaderBase* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::createHeader(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::hssf::record::CFRuleBaseArray* rules)
{
    clinit();
    ::org::apache::poi::hssf::record::CFHeaderBase* header;
    if(npc(rules)->length == 0 || dynamic_cast< ::org::apache::poi::hssf::record::CFRuleRecord* >((*rules)[int32_t(0)]) != nullptr) {
        header = new ::org::apache::poi::hssf::record::CFHeaderRecord(regions, npc(rules)->length);
    } else {
        header = new ::org::apache::poi::hssf::record::CFHeader12Record(regions, npc(rules)->length);
    }
    npc(header)->setNeedRecalculation(true);
    return header;
}

org::apache::poi::hssf::record::aggregates::CFRecordsAggregate* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::createCFAggregate(::org::apache::poi::hssf::model::RecordStream* rs)
{
    clinit();
    auto rec = npc(rs)->getNext();
    if(npc(rec)->getSid() != ::org::apache::poi::hssf::record::CFHeaderRecord::sid && npc(rec)->getSid() != ::org::apache::poi::hssf::record::CFHeader12Record::sid) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"next record sid was "_j)->append(npc(rec)->getSid())
            ->append(u" instead of "_j)
            ->append(::org::apache::poi::hssf::record::CFHeaderRecord::sid)
            ->append(u" or "_j)
            ->append(::org::apache::poi::hssf::record::CFHeader12Record::sid)
            ->append(u" as expected"_j)->toString());
    }
    auto header = java_cast< ::org::apache::poi::hssf::record::CFHeaderBase* >(rec);
    auto nRules = npc(header)->getNumberOfConditionalFormats();
    auto rules = new ::org::apache::poi::hssf::record::CFRuleBaseArray(nRules);
    for (auto i = int32_t(0); i < npc(rules)->length; i++) {
        rules->set(i, java_cast< ::org::apache::poi::hssf::record::CFRuleBase* >(npc(rs)->getNext()));
    }
    return new CFRecordsAggregate(header, rules);
}

org::apache::poi::hssf::record::aggregates::CFRecordsAggregate* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::cloneCFAggregate()
{
    auto newRecs = new ::org::apache::poi::hssf::record::CFRuleBaseArray(npc(rules)->size());
    for (auto i = int32_t(0); i < npc(newRecs)->length; i++) {
        newRecs->set(i, npc(getRule(i))->clone());
    }
    return new CFRecordsAggregate(npc(header)->clone(), newRecs);
}

org::apache::poi::hssf::record::CFHeaderBase* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::getHeader()
{
    return header;
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::checkRuleIndex(int32_t idx)
{
    if(idx < 0 || idx >= npc(rules)->size()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad rule record index ("_j)->append(idx)
            ->append(u") nRules="_j)
            ->append(npc(rules)->size())->toString());
    }
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::checkRuleType(::org::apache::poi::hssf::record::CFRuleBase* r)
{
    if(dynamic_cast< ::org::apache::poi::hssf::record::CFHeaderRecord* >(header) != nullptr && dynamic_cast< ::org::apache::poi::hssf::record::CFRuleRecord* >(r) != nullptr) {
        return;
    }
    if(dynamic_cast< ::org::apache::poi::hssf::record::CFHeader12Record* >(header) != nullptr && dynamic_cast< ::org::apache::poi::hssf::record::CFRule12Record* >(r) != nullptr) {
        return;
    }
    throw new ::java::lang::IllegalArgumentException(u"Header and Rule must both be CF or both be CF12, can't mix"_j);
}

org::apache::poi::hssf::record::CFRuleBase* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::getRule(int32_t idx)
{
    checkRuleIndex(idx);
    return java_cast< ::org::apache::poi::hssf::record::CFRuleBase* >(npc(rules)->get(idx));
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::setRule(int32_t idx, ::org::apache::poi::hssf::record::CFRuleBase* r)
{
    if(r == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"r must not be null"_j);
    }
    checkRuleIndex(idx);
    checkRuleType(r);
    npc(rules)->set(idx, r);
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::addRule(::org::apache::poi::hssf::record::CFRuleBase* r)
{
    if(r == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"r must not be null"_j);
    }
    if(npc(rules)->size() >= MAX_97_2003_CONDTIONAL_FORMAT_RULES) {
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"Excel versions before 2007 cannot cope with"_j)->append(u" any more than "_j)->toString())->append(MAX_97_2003_CONDTIONAL_FORMAT_RULES)
            ->append(u" - this file will cause problems with old Excel versions"_j)->toString())}));
    }
    checkRuleType(r);
    npc(rules)->add(static_cast< ::java::lang::Object* >(r));
    npc(header)->setNumberOfConditionalFormats(npc(rules)->size());
}

int32_t org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::getNumberOfRules()
{
    return npc(rules)->size();
}

java::lang::String* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::toString()
{
    auto buffer = new ::java::lang::StringBuilder();
    auto type = u"CF"_j;
    if(dynamic_cast< ::org::apache::poi::hssf::record::CFHeader12Record* >(header) != nullptr) {
        type = u"CF12"_j;
    }
    npc(npc(npc(buffer)->append(u"["_j))->append(type))->append(u"]\n"_j);
    if(header != nullptr) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(header));
    }
    for (auto _i = npc(rules)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::CFRuleBase* cfRule = java_cast< ::org::apache::poi::hssf::record::CFRuleBase* >(_i->next());
        {
            npc(buffer)->append(static_cast< ::java::lang::Object* >(cfRule));
        }
    }
    npc(npc(npc(buffer)->append(u"[/"_j))->append(type))->append(u"]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    npc(rv)->visitRecord(header);
    for (auto _i = npc(rules)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::CFRuleBase* rule = java_cast< ::org::apache::poi::hssf::record::CFRuleBase* >(_i->next());
        {
            npc(rv)->visitRecord(rule);
        }
    }
}

bool org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::updateFormulasAfterCellShift(::org::apache::poi::ss::formula::FormulaShifter* shifter, int32_t currentExternSheetIx)
{
    auto cellRanges = npc(header)->getCellRanges();
    auto changed = false;
    ::java::util::List* temp = new ::java::util::ArrayList();
    for(auto craOld : *npc(cellRanges)) {
        auto craNew = shiftRange(shifter, craOld, currentExternSheetIx);
        if(craNew == nullptr) {
            changed = true;
            continue;
        }
        npc(temp)->add(static_cast< ::java::lang::Object* >(craNew));
        if(craNew != craOld) {
            changed = true;
        }
    }
    if(changed) {
        auto nRanges = npc(temp)->size();
        if(nRanges == 0) {
            return false;
        }
        auto newRanges = new ::org::apache::poi::ss::util::CellRangeAddressArray(nRanges);
        npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(newRanges));
        npc(header)->setCellRanges(newRanges);
    }
    for (auto _i = npc(rules)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::CFRuleBase* rule = java_cast< ::org::apache::poi::hssf::record::CFRuleBase* >(_i->next());
        {
            ::org::apache::poi::ss::formula::ptg::PtgArray* ptgs;
            ptgs = npc(rule)->getParsedExpression1();
            if(ptgs != nullptr && npc(shifter)->adjustFormula(ptgs, currentExternSheetIx)) {
                npc(rule)->setParsedExpression1(ptgs);
            }
            ptgs = npc(rule)->getParsedExpression2();
            if(ptgs != nullptr && npc(shifter)->adjustFormula(ptgs, currentExternSheetIx)) {
                npc(rule)->setParsedExpression2(ptgs);
            }
            if(dynamic_cast< ::org::apache::poi::hssf::record::CFRule12Record* >(rule) != nullptr) {
                auto rule12 = java_cast< ::org::apache::poi::hssf::record::CFRule12Record* >(rule);
                ptgs = npc(rule12)->getParsedExpressionScale();
                if(ptgs != nullptr && npc(shifter)->adjustFormula(ptgs, currentExternSheetIx)) {
                    npc(rule12)->setParsedExpressionScale(ptgs);
                }
            }
        }
    }
    return true;
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::shiftRange(::org::apache::poi::ss::formula::FormulaShifter* shifter, ::org::apache::poi::ss::util::CellRangeAddress* cra, int32_t currentExternSheetIx)
{
    clinit();
    auto aptg = new ::org::apache::poi::ss::formula::ptg::AreaPtg(npc(cra)->getFirstRow(), npc(cra)->getLastRow(), npc(cra)->getFirstColumn(), npc(cra)->getLastColumn(), false, false, false, false);
    auto ptgs = (new ::org::apache::poi::ss::formula::ptg::PtgArray({static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(aptg)}));
    if(!npc(shifter)->adjustFormula(ptgs, currentExternSheetIx)) {
        return cra;
    }
    auto ptg0 = (*ptgs)[int32_t(0)];
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AreaPtg* >(ptg0) != nullptr) {
        auto bptg = java_cast< ::org::apache::poi::ss::formula::ptg::AreaPtg* >(ptg0);
        return new ::org::apache::poi::ss::util::CellRangeAddress(npc(bptg)->getFirstRow(), npc(bptg)->getLastRow(), npc(bptg)->getFirstColumn(), npc(bptg)->getLastColumn());
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::AreaErrPtg* >(ptg0) != nullptr) {
        return nullptr;
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected shifted ptg class ("_j)->append(npc(npc(ptg0)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.CFRecordsAggregate", 56);
    return c;
}

void org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(CFRecordsAggregate::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::CFRecordsAggregate::getClass0()
{
    return class_();
}

