// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionMetadata.java
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::function::FunctionMetadata::FunctionMetadata(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::function::FunctionMetadata::FunctionMetadata(int32_t index, ::java::lang::String* name, int32_t minParams, int32_t maxParams, int8_t returnClassCode, ::int8_tArray* parameterClassCodes) 
    : FunctionMetadata(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,name,minParams,maxParams,returnClassCode,parameterClassCodes);
}

constexpr int16_t org::apache::poi::ss::formula::function::FunctionMetadata::FUNCTION_MAX_PARAMS;

void org::apache::poi::ss::formula::function::FunctionMetadata::ctor(int32_t index, ::java::lang::String* name, int32_t minParams, int32_t maxParams, int8_t returnClassCode, ::int8_tArray* parameterClassCodes)
{
    super::ctor();
    _index = index;
    _name = name;
    _minParams = minParams;
    _maxParams = maxParams;
    _returnClassCode = returnClassCode;
    _parameterClassCodes = (parameterClassCodes == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(parameterClassCodes)->clone();
}

int32_t org::apache::poi::ss::formula::function::FunctionMetadata::getIndex()
{
    return _index;
}

java::lang::String* org::apache::poi::ss::formula::function::FunctionMetadata::getName()
{
    return _name;
}

int32_t org::apache::poi::ss::formula::function::FunctionMetadata::getMinParams()
{
    return _minParams;
}

int32_t org::apache::poi::ss::formula::function::FunctionMetadata::getMaxParams()
{
    return _maxParams;
}

bool org::apache::poi::ss::formula::function::FunctionMetadata::hasFixedArgsLength()
{
    return _minParams == _maxParams;
}

int8_t org::apache::poi::ss::formula::function::FunctionMetadata::getReturnClassCode()
{
    return _returnClassCode;
}

int8_tArray* org::apache::poi::ss::formula::function::FunctionMetadata::getParameterClassCodes()
{
    return npc(_parameterClassCodes)->clone();
}

bool org::apache::poi::ss::formula::function::FunctionMetadata::hasUnlimitedVarags()
{
    return FUNCTION_MAX_PARAMS == _maxParams;
}

java::lang::String* org::apache::poi::ss::formula::function::FunctionMetadata::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(npc(npc(sb)->append(_index))->append(u" "_j))->append(_name);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::function::FunctionMetadata::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.function.FunctionMetadata", 51);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::function::FunctionMetadata::getClass0()
{
    return class_();
}

