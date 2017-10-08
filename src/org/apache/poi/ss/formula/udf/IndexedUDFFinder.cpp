// Generated from /POI/java/org/apache/poi/ss/formula/udf/IndexedUDFFinder.java
#include <org/apache/poi/ss/formula/udf/IndexedUDFFinder.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace udf
            {
typedef ::SubArray< ::poi::ss::formula::udf::UDFFinder, ::java::lang::ObjectArray > UDFFinderArray;
            } // udf
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

poi::ss::formula::udf::IndexedUDFFinder::IndexedUDFFinder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::udf::IndexedUDFFinder::IndexedUDFFinder(UDFFinderArray*/*...*/ usedToolPacks) 
    : IndexedUDFFinder(*static_cast< ::default_init_tag* >(0))
{
    ctor(usedToolPacks);
}

void poi::ss::formula::udf::IndexedUDFFinder::ctor(UDFFinderArray*/*...*/ usedToolPacks)
{
    super::ctor(usedToolPacks);
    _funcMap = new ::java::util::HashMap();
}

poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::udf::IndexedUDFFinder::findFunction(::java::lang::String* name)
{
    auto func = super::findFunction(name);
    if(func != nullptr) {
        auto idx = getFunctionIndex(name);
        npc(_funcMap)->put(::java::lang::Integer::valueOf(idx), static_cast< ::java::lang::Object* >(name));
    }
    return func;
}

java::lang::String* poi::ss::formula::udf::IndexedUDFFinder::getFunctionName(int32_t idx)
{
    return java_cast< ::java::lang::String* >(npc(_funcMap)->get(::java::lang::Integer::valueOf(idx)));
}

int32_t poi::ss::formula::udf::IndexedUDFFinder::getFunctionIndex(::java::lang::String* name)
{
    return npc(name)->hashCode();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::udf::IndexedUDFFinder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.udf.IndexedUDFFinder", 46);
    return c;
}

java::lang::Class* poi::ss::formula::udf::IndexedUDFFinder::getClass0()
{
    return class_();
}

