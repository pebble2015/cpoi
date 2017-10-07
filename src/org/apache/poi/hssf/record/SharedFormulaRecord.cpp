// Generated from /POI/java/org/apache/poi/hssf/record/SharedFormulaRecord.java
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/SharedFormula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::SharedFormulaRecord::SharedFormulaRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::SharedFormulaRecord::SharedFormulaRecord() 
    : SharedFormulaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::SharedFormulaRecord::SharedFormulaRecord(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range) 
    : SharedFormulaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(range);
}

org::apache::poi::hssf::record::SharedFormulaRecord::SharedFormulaRecord(RecordInputStream* in) 
    : SharedFormulaRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::SharedFormulaRecord::sid;

void org::apache::poi::hssf::record::SharedFormulaRecord::ctor()
{
    ctor(new ::org::apache::poi::hssf::util::CellRangeAddress8Bit(int32_t(0), int32_t(0), int32_t(0), int32_t(0)));
}

void org::apache::poi::hssf::record::SharedFormulaRecord::ctor(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range)
{
    super::ctor(range);
    field_7_parsed_expr = ::org::apache::poi::ss::formula::Formula::create(::org::apache::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY());
}

void org::apache::poi::hssf::record::SharedFormulaRecord::ctor(RecordInputStream* in)
{
    super::ctor(static_cast< ::org::apache::poi::util::LittleEndianInput* >(in));
    field_5_reserved = npc(in)->readShort();
    int32_t field_6_expression_len = npc(in)->readShort();
    auto nAvailableBytes = npc(in)->available();
    field_7_parsed_expr = ::org::apache::poi::ss::formula::Formula::read(field_6_expression_len, in, nAvailableBytes);
}

void org::apache::poi::hssf::record::SharedFormulaRecord::serializeExtraData(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_5_reserved);
    npc(field_7_parsed_expr)->serialize(out);
}

int32_t org::apache::poi::hssf::record::SharedFormulaRecord::getExtraDataSize()
{
    return int32_t(2) + npc(field_7_parsed_expr)->getEncodedSize();
}

java::lang::String* org::apache::poi::hssf::record::SharedFormulaRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(npc(npc(buffer)->append(u"[SHARED FORMULA ("_j))->append(::org::apache::poi::util::HexDump::intToHex(sid)))->append(u"]\n"_j);
    npc(npc(npc(buffer)->append(u"    .range      = "_j))->append(static_cast< ::java::lang::Object* >(getRange())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .reserved    = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_5_reserved)))->append(u"\n"_j);
    auto ptgs = npc(field_7_parsed_expr)->getTokens();
    for (auto k = int32_t(0); k < npc(ptgs)->length; k++) {
        npc(npc(npc(buffer)->append(u"Formula["_j))->append(k))->append(u"]"_j);
        auto ptg = (*ptgs)[k];
        npc(npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(ptg)))->append(npc(ptg)->getRVAType()))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/SHARED FORMULA]\n"_j);
    return npc(buffer)->toString();
}

int16_t org::apache::poi::hssf::record::SharedFormulaRecord::getSid()
{
    return sid;
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::SharedFormulaRecord::getFormulaTokens(FormulaRecord* formula)
{
    auto formulaRow = npc(formula)->getRow();
    int32_t formulaColumn = npc(formula)->getColumn();
    if(!isInRange(formulaRow, formulaColumn)) {
        throw new ::java::lang::RuntimeException(u"Shared Formula Conversion: Coding Error"_j);
    }
    auto sf = new ::org::apache::poi::ss::formula::SharedFormula(::org::apache::poi::ss::SpreadsheetVersion::EXCEL97);
    return npc(sf)->convertSharedFormulas(npc(field_7_parsed_expr)->getTokens(), formulaRow, formulaColumn);
}

java::lang::Object* org::apache::poi::hssf::record::SharedFormulaRecord::clone()
{
    auto result = new SharedFormulaRecord(getRange());
    npc(result)->field_5_reserved = field_5_reserved;
    npc(result)->field_7_parsed_expr = npc(field_7_parsed_expr)->copy();
    return result;
}

bool org::apache::poi::hssf::record::SharedFormulaRecord::isFormulaSame(SharedFormulaRecord* other)
{
    return npc(field_7_parsed_expr)->isSame(npc(other)->field_7_parsed_expr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::SharedFormulaRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SharedFormulaRecord", 46);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::SharedFormulaRecord::getClass0()
{
    return class_();
}

