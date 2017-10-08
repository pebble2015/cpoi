// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaErrPtg.java
#include <org/apache/poi/ss/formula/ptg/AreaErrPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
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

poi::ss::formula::ptg::AreaErrPtg::AreaErrPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::AreaErrPtg::AreaErrPtg() 
    : AreaErrPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::ptg::AreaErrPtg::AreaErrPtg(::poi::util::LittleEndianInput* in) 
    : AreaErrPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int8_t poi::ss::formula::ptg::AreaErrPtg::sid;

void poi::ss::formula::ptg::AreaErrPtg::ctor()
{
    super::ctor();
    unused1 = 0;
    unused2 = 0;
}

void poi::ss::formula::ptg::AreaErrPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    unused1 = npc(in)->readInt();
    unused2 = npc(in)->readInt();
}

void poi::ss::formula::ptg::AreaErrPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeInt(unused1);
    npc(out)->writeInt(unused2);
}

java::lang::String* poi::ss::formula::ptg::AreaErrPtg::toFormulaString()
{
    return npc(::poi::ss::usermodel::FormulaError::REF)->getString();
}

int8_t poi::ss::formula::ptg::AreaErrPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

int32_t poi::ss::formula::ptg::AreaErrPtg::getSize()
{
    return 9;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::AreaErrPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AreaErrPtg", 40);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::AreaErrPtg::getClass0()
{
    return class_();
}

