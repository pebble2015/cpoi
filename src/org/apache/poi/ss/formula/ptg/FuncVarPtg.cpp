// Generated from /POI/java/org/apache/poi/ss/formula/ptg/FuncVarPtg.java
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::FuncVarPtg::FuncVarPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::FuncVarPtg::FuncVarPtg(int32_t functionIndex, int32_t returnClass, ::int8_tArray* paramClasses, int32_t numArgs) 
    : FuncVarPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionIndex,returnClass,paramClasses,numArgs);
}

constexpr int8_t poi::ss::formula::ptg::FuncVarPtg::sid;

constexpr int32_t poi::ss::formula::ptg::FuncVarPtg::SIZE;

poi::ss::formula::ptg::OperationPtg*& poi::ss::formula::ptg::FuncVarPtg::SUM()
{
    clinit();
    return SUM_;
}
poi::ss::formula::ptg::OperationPtg* poi::ss::formula::ptg::FuncVarPtg::SUM_;

void poi::ss::formula::ptg::FuncVarPtg::ctor(int32_t functionIndex, int32_t returnClass, ::int8_tArray* paramClasses, int32_t numArgs)
{
    super::ctor(functionIndex, returnClass, paramClasses, numArgs);
}

poi::ss::formula::ptg::FuncVarPtg* poi::ss::formula::ptg::FuncVarPtg::create(::poi::util::LittleEndianInput* in)
{
    clinit();
    return create(static_cast< int32_t >(npc(in)->readByte()), static_cast< int32_t >(npc(in)->readShort()));
}

poi::ss::formula::ptg::FuncVarPtg* poi::ss::formula::ptg::FuncVarPtg::create(::java::lang::String* pName, int32_t numArgs)
{
    clinit();
    return create(numArgs, static_cast< int32_t >(lookupIndex(pName)));
}

poi::ss::formula::ptg::FuncVarPtg* poi::ss::formula::ptg::FuncVarPtg::create(int32_t numArgs, int32_t functionIndex)
{
    clinit();
    auto fm = ::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(functionIndex);
    if(fm == nullptr) {
        return new FuncVarPtg(functionIndex, Ptg::CLASS_VALUE, new ::int8_tArray({Ptg::CLASS_VALUE}), numArgs);
    }
    return new FuncVarPtg(functionIndex, npc(fm)->getReturnClassCode(), npc(fm)->getParameterClassCodes(), numArgs);
}

void poi::ss::formula::ptg::FuncVarPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeByte(getNumberOfOperands());
    npc(out)->writeShort(getFunctionIndex());
}

int32_t poi::ss::formula::ptg::FuncVarPtg::getSize()
{
    return SIZE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::FuncVarPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.FuncVarPtg", 40);
    return c;
}

void poi::ss::formula::ptg::FuncVarPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        SUM_ = FuncVarPtg::create(u"SUM"_j, int32_t(1));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::ptg::FuncVarPtg::getClass0()
{
    return class_();
}

