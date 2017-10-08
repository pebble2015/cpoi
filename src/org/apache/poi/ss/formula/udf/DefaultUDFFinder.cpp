// Generated from /POI/java/org/apache/poi/ss/formula/udf/DefaultUDFFinder.java
#include <org/apache/poi/ss/formula/udf/DefaultUDFFinder.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
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

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::FreeRefFunction, ::java::lang::ObjectArray > FreeRefFunctionArray;
            } // functions
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

poi::ss::formula::udf::DefaultUDFFinder::DefaultUDFFinder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::udf::DefaultUDFFinder::DefaultUDFFinder(::java::lang::StringArray* functionNames, ::poi::ss::formula::functions::FreeRefFunctionArray* functionImpls) 
    : DefaultUDFFinder(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionNames,functionImpls);
}

void poi::ss::formula::udf::DefaultUDFFinder::ctor(::java::lang::StringArray* functionNames, ::poi::ss::formula::functions::FreeRefFunctionArray* functionImpls)
{
    super::ctor();
    auto nFuncs = npc(functionNames)->length;
    if(npc(functionImpls)->length != nFuncs) {
        throw new ::java::lang::IllegalArgumentException(u"Mismatch in number of function names and implementations"_j);
    }
    auto m = new ::java::util::HashMap(nFuncs * int32_t(3) / int32_t(2));
    for (auto i = int32_t(0); i < npc(functionImpls)->length; i++) {
        npc(m)->put(static_cast< ::java::lang::Object* >(npc((*functionNames)[i])->toUpperCase(::java::util::Locale::ROOT())), static_cast< ::java::lang::Object* >((*functionImpls)[i]));
    }
    _functionsByName = m;
}

poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::udf::DefaultUDFFinder::findFunction(::java::lang::String* name)
{
    return java_cast< ::poi::ss::formula::functions::FreeRefFunction* >(npc(_functionsByName)->get(npc(name)->toUpperCase(::java::util::Locale::ROOT())));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::udf::DefaultUDFFinder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.udf.DefaultUDFFinder", 46);
    return c;
}

java::lang::Class* poi::ss::formula::udf::DefaultUDFFinder::getClass0()
{
    return class_();
}

