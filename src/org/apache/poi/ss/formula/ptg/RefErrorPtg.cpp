// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefErrorPtg.java
#include <org/apache/poi/ss/formula/ptg/RefErrorPtg.hpp>

#include <java/lang/Class.hpp>
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

poi::ss::formula::ptg::RefErrorPtg::RefErrorPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::RefErrorPtg::RefErrorPtg() 
    : RefErrorPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::ptg::RefErrorPtg::RefErrorPtg(::poi::util::LittleEndianInput* in) 
    : RefErrorPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::ss::formula::ptg::RefErrorPtg::SIZE;

constexpr int8_t poi::ss::formula::ptg::RefErrorPtg::sid;

void poi::ss::formula::ptg::RefErrorPtg::ctor()
{
    super::ctor();
    field_1_reserved = 0;
}

void poi::ss::formula::ptg::RefErrorPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_1_reserved = npc(in)->readInt();
}

java::lang::String* poi::ss::formula::ptg::RefErrorPtg::toString()
{
    return npc(getClass())->getName();
}

void poi::ss::formula::ptg::RefErrorPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeInt(field_1_reserved);
}

int32_t poi::ss::formula::ptg::RefErrorPtg::getSize()
{
    return SIZE;
}

java::lang::String* poi::ss::formula::ptg::RefErrorPtg::toFormulaString()
{
    return npc(::poi::ss::usermodel::FormulaError::REF)->getString();
}

int8_t poi::ss::formula::ptg::RefErrorPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_REF;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::RefErrorPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.RefErrorPtg", 41);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::RefErrorPtg::getClass0()
{
    return class_();
}

