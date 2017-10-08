// Generated from /POI/java/org/apache/poi/hssf/record/ArrayRecord.java
#include <org/apache/poi/hssf/record/ArrayRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/CellRangeAddress8Bit.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::ArrayRecord::ArrayRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ArrayRecord::ArrayRecord(RecordInputStream* in) 
    : ArrayRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::hssf::record::ArrayRecord::ArrayRecord(::poi::ss::formula::Formula* formula, ::poi::hssf::util::CellRangeAddress8Bit* range) 
    : ArrayRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(formula,range);
}

constexpr int16_t poi::hssf::record::ArrayRecord::sid;

constexpr int32_t poi::hssf::record::ArrayRecord::OPT_ALWAYS_RECALCULATE;

constexpr int32_t poi::hssf::record::ArrayRecord::OPT_CALCULATE_ON_OPEN;

void poi::hssf::record::ArrayRecord::ctor(RecordInputStream* in)
{
    super::ctor(static_cast< ::poi::util::LittleEndianInput* >(in));
    _options = npc(in)->readUShort();
    _field3notUsed = npc(in)->readInt();
    auto formulaTokenLen = npc(in)->readUShort();
    auto totalFormulaLen = npc(in)->available();
    _formula = ::poi::ss::formula::Formula::read(formulaTokenLen, in, totalFormulaLen);
}

void poi::hssf::record::ArrayRecord::ctor(::poi::ss::formula::Formula* formula, ::poi::hssf::util::CellRangeAddress8Bit* range)
{
    super::ctor(range);
    _options = 0;
    _field3notUsed = 0;
    _formula = formula;
}

bool poi::hssf::record::ArrayRecord::isAlwaysRecalculate()
{
    return (_options & OPT_ALWAYS_RECALCULATE) != 0;
}

bool poi::hssf::record::ArrayRecord::isCalculateOnOpen()
{
    return (_options & OPT_CALCULATE_ON_OPEN) != 0;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::ArrayRecord::getFormulaTokens()
{
    return npc(_formula)->getTokens();
}

int32_t poi::hssf::record::ArrayRecord::getExtraDataSize()
{
    return int32_t(2) + int32_t(4) + npc(_formula)->getEncodedSize();
}

void poi::hssf::record::ArrayRecord::serializeExtraData(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
    npc(out)->writeInt(_field3notUsed);
    npc(_formula)->serialize(out);
}

int16_t poi::hssf::record::ArrayRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::ArrayRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" [ARRAY]\n"_j);
    npc(npc(npc(sb)->append(u" range="_j))->append(static_cast< ::java::lang::Object* >(getRange())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u" options="_j))->append(::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u" notUsed="_j))->append(::poi::util::HexDump::intToHex(_field3notUsed)))->append(u"\n"_j);
    npc(npc(sb)->append(u" formula:"_j))->append(u"\n"_j);
    auto ptgs = npc(_formula)->getTokens();
    for (auto i = int32_t(0); i < npc(ptgs)->length; i++) {
        auto ptg = (*ptgs)[i];
        npc(npc(npc(sb)->append(static_cast< ::java::lang::Object* >(ptg)))->append(npc(ptg)->getRVAType()))->append(u"\n"_j);
    }
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

poi::hssf::record::ArrayRecord* poi::hssf::record::ArrayRecord::clone()
{
    auto rec = new ArrayRecord(npc(_formula)->copy(), getRange());
    npc(rec)->_options = _options;
    npc(rec)->_field3notUsed = _field3notUsed;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ArrayRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ArrayRecord", 38);
    return c;
}

java::lang::Class* poi::hssf::record::ArrayRecord::getClass0()
{
    return class_();
}

