// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.java
#include <org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::AbstractFunctionPtg::AbstractFunctionPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::AbstractFunctionPtg::AbstractFunctionPtg(int32_t functionIndex, int32_t pReturnClass, ::int8_tArray* paramTypes, int32_t nParams) 
    : AbstractFunctionPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionIndex,pReturnClass,paramTypes,nParams);
}

java::lang::String*& poi::ss::formula::ptg::AbstractFunctionPtg::FUNCTION_NAME_IF()
{
    clinit();
    return FUNCTION_NAME_IF_;
}
java::lang::String* poi::ss::formula::ptg::AbstractFunctionPtg::FUNCTION_NAME_IF_;

constexpr int16_t poi::ss::formula::ptg::AbstractFunctionPtg::FUNCTION_INDEX_EXTERNAL;

void poi::ss::formula::ptg::AbstractFunctionPtg::ctor(int32_t functionIndex, int32_t pReturnClass, ::int8_tArray* paramTypes, int32_t nParams)
{
    super::ctor();
    _numberOfArgs = nParams;
    if(functionIndex < ::java::lang::Short::MIN_VALUE || functionIndex > ::java::lang::Short::MAX_VALUE)
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"functionIndex "_j)->append(functionIndex)
            ->append(u" cannot be cast to short"_j)->toString());

    _functionIndex = static_cast< int16_t >(functionIndex);
    if(pReturnClass < ::java::lang::Byte::MIN_VALUE || pReturnClass > ::java::lang::Byte::MAX_VALUE)
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"pReturnClass "_j)->append(pReturnClass)
            ->append(u" cannot be cast to byte"_j)->toString());

    returnClass = static_cast< int8_t >(pReturnClass);
    paramClass = paramTypes;
}

bool poi::ss::formula::ptg::AbstractFunctionPtg::isBaseToken()
{
    return false;
}

java::lang::String* poi::ss::formula::ptg::AbstractFunctionPtg::toString()
{
    auto sb = new ::java::lang::StringBuilder(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(lookupName(_functionIndex));
    npc(npc(sb)->append(u" nArgs="_j))->append(_numberOfArgs);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

int16_t poi::ss::formula::ptg::AbstractFunctionPtg::getFunctionIndex()
{
    return _functionIndex;
}

int32_t poi::ss::formula::ptg::AbstractFunctionPtg::getNumberOfOperands()
{
    return _numberOfArgs;
}

java::lang::String* poi::ss::formula::ptg::AbstractFunctionPtg::getName()
{
    return lookupName(_functionIndex);
}

bool poi::ss::formula::ptg::AbstractFunctionPtg::isExternalFunction()
{
    return _functionIndex == FUNCTION_INDEX_EXTERNAL;
}

java::lang::String* poi::ss::formula::ptg::AbstractFunctionPtg::toFormulaString()
{
    return getName();
}

java::lang::String* poi::ss::formula::ptg::AbstractFunctionPtg::toFormulaString(::java::lang::StringArray* operands)
{
    auto buf = new ::java::lang::StringBuilder();
    if(isExternalFunction()) {
        npc(buf)->append((*operands)[int32_t(0)]);
        appendArgs(buf, 1, operands);
    } else {
        npc(buf)->append(getName());
        appendArgs(buf, 0, operands);
    }
    return npc(buf)->toString();
}

void poi::ss::formula::ptg::AbstractFunctionPtg::appendArgs(::java::lang::StringBuilder* buf, int32_t firstArgIx, ::java::lang::StringArray* operands)
{
    clinit();
    npc(buf)->append(u'(');
    for (auto i = firstArgIx; i < npc(operands)->length; i++) {
        if(i > firstArgIx) {
            npc(buf)->append(u',');
        }
        npc(buf)->append((*operands)[i]);
    }
    npc(buf)->append(u")"_j);
}

bool poi::ss::formula::ptg::AbstractFunctionPtg::isBuiltInFunctionName(::java::lang::String* name)
{
    clinit();
    auto ix = ::poi::ss::formula::function::FunctionMetadataRegistry::lookupIndexByName(npc(name)->toUpperCase(::java::util::Locale::ROOT()));
    return ix >= 0;
}

java::lang::String* poi::ss::formula::ptg::AbstractFunctionPtg::lookupName(int16_t index)
{
    if(index == ::poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_EXTERNAL) {
        return u"#external#"_j;
    }
    auto fm = ::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(index);
    if(fm == nullptr) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"bad function index ("_j)->append(index)
            ->append(u")"_j)->toString());
    }
    return npc(fm)->getName();
}

int16_t poi::ss::formula::ptg::AbstractFunctionPtg::lookupIndex(::java::lang::String* name)
{
    clinit();
    auto ix = ::poi::ss::formula::function::FunctionMetadataRegistry::lookupIndexByName(npc(name)->toUpperCase(::java::util::Locale::ROOT()));
    if(ix < 0) {
        return FUNCTION_INDEX_EXTERNAL;
    }
    return ix;
}

int8_t poi::ss::formula::ptg::AbstractFunctionPtg::getDefaultOperandClass()
{
    return returnClass;
}

int8_t poi::ss::formula::ptg::AbstractFunctionPtg::getParameterClass(int32_t index)
{
    if(index >= npc(paramClass)->length) {
        return (*paramClass)[npc(paramClass)->length - int32_t(1)];
    }
    return (*paramClass)[index];
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::AbstractFunctionPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AbstractFunctionPtg", 49);
    return c;
}

void poi::ss::formula::ptg::AbstractFunctionPtg::clinit()
{
struct string_init_ {
    string_init_() {
    FUNCTION_NAME_IF_ = u"IF"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::ss::formula::ptg::AbstractFunctionPtg::getClass0()
{
    return class_();
}

