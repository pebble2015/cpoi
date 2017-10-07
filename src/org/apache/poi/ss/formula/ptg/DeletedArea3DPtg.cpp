// Generated from /POI/java/org/apache/poi/ss/formula/ptg/DeletedArea3DPtg.java
#include <org/apache/poi/ss/formula/ptg/DeletedArea3DPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ptg/ExternSheetNameResolver.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::DeletedArea3DPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::DeletedArea3DPtg(int32_t externSheetIndex) 
    : DeletedArea3DPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(externSheetIndex);
}

org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::DeletedArea3DPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : DeletedArea3DPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int8_t org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::sid;

void org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::ctor(int32_t externSheetIndex)
{
    super::ctor();
    field_1_index_extern_sheet = externSheetIndex;
    unused1 = 0;
    unused2 = 0;
}

void org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_index_extern_sheet = npc(in)->readUShort();
    unused1 = npc(in)->readInt();
    unused2 = npc(in)->readInt();
}

java::lang::String* org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::toFormulaString(::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book)
{
    return ExternSheetNameResolver::prependSheetName(book, field_1_index_extern_sheet, npc(::org::apache::poi::ss::usermodel::FormulaError::REF)->getString());
}

java::lang::String* org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::toFormulaString()
{
    throw new ::java::lang::RuntimeException(u"3D references need a workbook to determine formula text"_j);
}

int8_t org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

int32_t org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::getSize()
{
    return 11;
}

void org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(field_1_index_extern_sheet);
    npc(out)->writeInt(unused1);
    npc(out)->writeInt(unused2);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.DeletedArea3DPtg", 46);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::DeletedArea3DPtg::getClass0()
{
    return class_();
}

