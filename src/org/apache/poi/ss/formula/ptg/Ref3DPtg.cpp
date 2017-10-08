// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ref3DPtg.java
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/ptg/ExternSheetNameResolver.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::Ref3DPtg::Ref3DPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::Ref3DPtg::Ref3DPtg(::poi::util::LittleEndianInput* in) 
    : Ref3DPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::Ref3DPtg::Ref3DPtg(::java::lang::String* cellref, int32_t externIdx) 
    : Ref3DPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(cellref,externIdx);
}

poi::ss::formula::ptg::Ref3DPtg::Ref3DPtg(::poi::ss::util::CellReference* c, int32_t externIdx) 
    : Ref3DPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(c,externIdx);
}

constexpr int8_t poi::ss::formula::ptg::Ref3DPtg::sid;

constexpr int32_t poi::ss::formula::ptg::Ref3DPtg::SIZE;

void poi::ss::formula::ptg::Ref3DPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_index_extern_sheet = npc(in)->readShort();
    readCoordinates(in);
}

void poi::ss::formula::ptg::Ref3DPtg::ctor(::java::lang::String* cellref, int32_t externIdx)
{
    ctor(new ::poi::ss::util::CellReference(cellref), externIdx);
}

void poi::ss::formula::ptg::Ref3DPtg::ctor(::poi::ss::util::CellReference* c, int32_t externIdx)
{
    super::ctor(c);
    setExternSheetIndex(externIdx);
}

java::lang::String* poi::ss::formula::ptg::Ref3DPtg::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    npc(npc(sb)->append(u"sheetIx="_j))->append(getExternSheetIndex());
    npc(sb)->append(u" ! "_j);
    npc(sb)->append(formatReferenceAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

void poi::ss::formula::ptg::Ref3DPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(getExternSheetIndex());
    writeCoordinates(out);
}

int32_t poi::ss::formula::ptg::Ref3DPtg::getSize()
{
    return SIZE;
}

int32_t poi::ss::formula::ptg::Ref3DPtg::getExternSheetIndex()
{
    return field_1_index_extern_sheet;
}

void poi::ss::formula::ptg::Ref3DPtg::setExternSheetIndex(int32_t index)
{
    field_1_index_extern_sheet = index;
}

java::lang::String* poi::ss::formula::ptg::Ref3DPtg::format2DRefAsString()
{
    return formatReferenceAsString();
}

java::lang::String* poi::ss::formula::ptg::Ref3DPtg::toFormulaString(::poi::ss::formula::FormulaRenderingWorkbook* book)
{
    return ExternSheetNameResolver::prependSheetName(book, field_1_index_extern_sheet, formatReferenceAsString());
}

java::lang::String* poi::ss::formula::ptg::Ref3DPtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"3D references need a workbook to determine formula text"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::Ref3DPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.Ref3DPtg", 38);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::Ref3DPtg::getClass0()
{
    return class_();
}

