// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionMetadataRegistry.java
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataReader.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace function
            {
typedef ::SubArray< ::poi::ss::formula::function::FunctionMetadata, ::java::lang::ObjectArray > FunctionMetadataArray;
            } // function
        } // formula
    } // ss
} // poi

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::function::FunctionMetadataRegistry::FunctionMetadataRegistry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::function::FunctionMetadataRegistry::FunctionMetadataRegistry(FunctionMetadataArray* functionDataByIndex, ::java::util::Map* functionDataByName) 
    : FunctionMetadataRegistry(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionDataByIndex,functionDataByName);
}

java::lang::String*& poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_NAME_IF()
{
    clinit();
    return FUNCTION_NAME_IF_;
}
java::lang::String* poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_NAME_IF_;

constexpr int32_t poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_IF;

constexpr int16_t poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_SUM;

constexpr int32_t poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_CHOOSE;

constexpr int16_t poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_INDIRECT;

constexpr int16_t poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_EXTERNAL;

poi::ss::formula::function::FunctionMetadataRegistry*& poi::ss::formula::function::FunctionMetadataRegistry::_instance()
{
    clinit();
    return _instance_;
}
poi::ss::formula::function::FunctionMetadataRegistry* poi::ss::formula::function::FunctionMetadataRegistry::_instance_;

poi::ss::formula::function::FunctionMetadataRegistry* poi::ss::formula::function::FunctionMetadataRegistry::getInstance()
{
    clinit();
    if(_instance_ == nullptr) {
        _instance_ = FunctionMetadataReader::createRegistry();
    }
    return _instance_;
}

void poi::ss::formula::function::FunctionMetadataRegistry::ctor(FunctionMetadataArray* functionDataByIndex, ::java::util::Map* functionDataByName)
{
    super::ctor();
    _functionDataByIndex = (functionDataByIndex == nullptr) ? static_cast< FunctionMetadataArray* >(nullptr) : npc(functionDataByIndex)->clone();
    _functionDataByName = functionDataByName;
}

java::util::Set* poi::ss::formula::function::FunctionMetadataRegistry::getAllFunctionNames()
{
    return npc(_functionDataByName)->keySet();
}

poi::ss::formula::function::FunctionMetadata* poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(int32_t index)
{
    clinit();
    return npc(getInstance())->getFunctionByIndexInternal(index);
}

poi::ss::formula::function::FunctionMetadata* poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndexInternal(int32_t index)
{
    return (*_functionDataByIndex)[index];
}

int16_t poi::ss::formula::function::FunctionMetadataRegistry::lookupIndexByName(::java::lang::String* name)
{
    clinit();
    auto fd = npc(getInstance())->getFunctionByNameInternal(name);
    if(fd == nullptr) {
        return -int32_t(1);
    }
    return static_cast< int16_t >(npc(fd)->getIndex());
}

poi::ss::formula::function::FunctionMetadata* poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByNameInternal(::java::lang::String* name)
{
    return java_cast< FunctionMetadata* >(npc(_functionDataByName)->get(name));
}

poi::ss::formula::function::FunctionMetadata* poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByName(::java::lang::String* name)
{
    clinit();
    return npc(getInstance())->getFunctionByNameInternal(name);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::function::FunctionMetadataRegistry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.function.FunctionMetadataRegistry", 59);
    return c;
}

void poi::ss::formula::function::FunctionMetadataRegistry::clinit()
{
struct string_init_ {
    string_init_() {
    FUNCTION_NAME_IF_ = u"IF"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::ss::formula::function::FunctionMetadataRegistry::getClass0()
{
    return class_();
}

