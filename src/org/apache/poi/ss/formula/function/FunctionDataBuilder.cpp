// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionDataBuilder.java
#include <org/apache/poi/ss/formula/function/FunctionDataBuilder.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace function
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::function::FunctionMetadata, ::java::lang::ObjectArray > FunctionMetadataArray;
                    } // function
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::formula::function::FunctionDataBuilder::FunctionDataBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::function::FunctionDataBuilder::FunctionDataBuilder(int32_t sizeEstimate) 
    : FunctionDataBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor(sizeEstimate);
}

void org::apache::poi::ss::formula::function::FunctionDataBuilder::ctor(int32_t sizeEstimate)
{
    super::ctor();
    _maxFunctionIndex = -int32_t(1);
    _functionDataByName = new ::java::util::HashMap(sizeEstimate * int32_t(3) / int32_t(2));
    _functionDataByIndex = new ::java::util::HashMap(sizeEstimate * int32_t(3) / int32_t(2));
    _mutatingFunctionIndexes = new ::java::util::HashSet();
}

void org::apache::poi::ss::formula::function::FunctionDataBuilder::add(int32_t functionIndex, ::java::lang::String* functionName, int32_t minParams, int32_t maxParams, int8_t returnClassCode, ::int8_tArray* parameterClassCodes, bool hasFootnote)
{
    auto fm = new FunctionMetadata(functionIndex, functionName, minParams, maxParams, returnClassCode, parameterClassCodes);
    auto indexKey = ::java::lang::Integer::valueOf(functionIndex);
    if(functionIndex > _maxFunctionIndex) {
        _maxFunctionIndex = functionIndex;
    }
    FunctionMetadata* prevFM;
    prevFM = java_cast< FunctionMetadata* >(npc(_functionDataByName)->get(functionName));
    if(prevFM != nullptr) {
        if(!hasFootnote || !npc(_mutatingFunctionIndexes)->contains(static_cast< ::java::lang::Object* >(indexKey))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Multiple entries for function name '"_j)->append(functionName)
                ->append(u"'"_j)->toString());
        }
        npc(_functionDataByIndex)->remove(::java::lang::Integer::valueOf(npc(prevFM)->getIndex()));
    }
    prevFM = java_cast< FunctionMetadata* >(npc(_functionDataByIndex)->get(indexKey));
    if(prevFM != nullptr) {
        if(!hasFootnote || !npc(_mutatingFunctionIndexes)->contains(static_cast< ::java::lang::Object* >(indexKey))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Multiple entries for function index ("_j)->append(functionIndex)
                ->append(u")"_j)->toString());
        }
        npc(_functionDataByName)->remove(npc(prevFM)->getName());
    }
    if(hasFootnote) {
        npc(_mutatingFunctionIndexes)->add(static_cast< ::java::lang::Object* >(indexKey));
    }
    npc(_functionDataByIndex)->put(indexKey, fm);
    npc(_functionDataByName)->put(functionName, fm);
}

org::apache::poi::ss::formula::function::FunctionMetadataRegistry* org::apache::poi::ss::formula::function::FunctionDataBuilder::build()
{
    auto jumbledArray_ = new FunctionMetadataArray(npc(_functionDataByName)->size());
    npc(npc(_functionDataByName)->values())->toArray_(jumbledArray_);
    auto fdIndexArray_ = new FunctionMetadataArray(_maxFunctionIndex + int32_t(1));
    for (auto i = int32_t(0); i < npc(jumbledArray_)->length; i++) {
        auto fd = (*jumbledArray_)[i];
        fdIndexArray_->set(npc(fd)->getIndex(), fd);
    }
    return new FunctionMetadataRegistry(fdIndexArray_, _functionDataByName);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::function::FunctionDataBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.function.FunctionDataBuilder", 54);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::function::FunctionDataBuilder::getClass0()
{
    return class_();
}

