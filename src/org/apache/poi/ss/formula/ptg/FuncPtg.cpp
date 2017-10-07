// Generated from /POI/java/org/apache/poi/ss/formula/ptg/FuncPtg.java
#include <org/apache/poi/ss/formula/ptg/FuncPtg.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::FuncPtg::FuncPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::FuncPtg::FuncPtg(int32_t funcIndex, ::org::apache::poi::ss::formula::function::FunctionMetadata* fm) 
    : FuncPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(funcIndex,fm);
}

constexpr int8_t org::apache::poi::ss::formula::ptg::FuncPtg::sid;

constexpr int32_t org::apache::poi::ss::formula::ptg::FuncPtg::SIZE;

org::apache::poi::ss::formula::ptg::FuncPtg* org::apache::poi::ss::formula::ptg::FuncPtg::create(::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    return create(npc(in)->readUShort());
}

void org::apache::poi::ss::formula::ptg::FuncPtg::ctor(int32_t funcIndex, ::org::apache::poi::ss::formula::function::FunctionMetadata* fm)
{
    super::ctor(funcIndex, npc(fm)->getReturnClassCode(), npc(fm)->getParameterClassCodes(), npc(fm)->getMinParams());
}

org::apache::poi::ss::formula::ptg::FuncPtg* org::apache::poi::ss::formula::ptg::FuncPtg::create(int32_t functionIndex)
{
    clinit();
    auto fm = ::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(functionIndex);
    if(fm == nullptr) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid built-in function index ("_j)->append(functionIndex)
            ->append(u")"_j)->toString());
    }
    return new FuncPtg(functionIndex, fm);
}

void org::apache::poi::ss::formula::ptg::FuncPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeShort(getFunctionIndex());
}

int32_t org::apache::poi::ss::formula::ptg::FuncPtg::getSize()
{
    return SIZE;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::FuncPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.FuncPtg", 37);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::FuncPtg::getClass0()
{
    return class_();
}

