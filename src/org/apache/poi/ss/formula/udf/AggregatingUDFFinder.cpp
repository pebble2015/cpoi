// Generated from /POI/java/org/apache/poi/ss/formula/udf/AggregatingUDFFinder.java
#include <org/apache/poi/ss/formula/udf/AggregatingUDFFinder.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

poi::ss::formula::udf::AggregatingUDFFinder::AggregatingUDFFinder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::udf::AggregatingUDFFinder::AggregatingUDFFinder(UDFFinderArray*/*...*/ usedToolPacks) 
    : AggregatingUDFFinder(*static_cast< ::default_init_tag* >(0))
{
    ctor(usedToolPacks);
}

poi::ss::formula::udf::UDFFinder*& poi::ss::formula::udf::AggregatingUDFFinder::DEFAULT()
{
    clinit();
    return DEFAULT_;
}
poi::ss::formula::udf::UDFFinder* poi::ss::formula::udf::AggregatingUDFFinder::DEFAULT_;

void poi::ss::formula::udf::AggregatingUDFFinder::ctor(UDFFinderArray*/*...*/ usedToolPacks)
{
    super::ctor();
    _usedToolPacks = new ::java::util::ArrayList(npc(usedToolPacks)->length);
    npc(_usedToolPacks)->addAll(::java::util::Arrays::asList(usedToolPacks));
}

poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::udf::AggregatingUDFFinder::findFunction(::java::lang::String* name)
{
    ::poi::ss::formula::functions::FreeRefFunction* evaluatorForFunction;
    for (auto _i = npc(_usedToolPacks)->iterator(); _i->hasNext(); ) {
        UDFFinder* pack = java_cast< UDFFinder* >(_i->next());
        {
            evaluatorForFunction = npc(pack)->findFunction(name);
            if(evaluatorForFunction != nullptr) {
                return evaluatorForFunction;
            }
        }
    }
    return nullptr;
}

void poi::ss::formula::udf::AggregatingUDFFinder::add(UDFFinder* toolPack)
{
    npc(_usedToolPacks)->add(toolPack);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::udf::AggregatingUDFFinder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.udf.AggregatingUDFFinder", 50);
    return c;
}

void poi::ss::formula::udf::AggregatingUDFFinder::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_ = new AggregatingUDFFinder(new UDFFinderArray({::poi::ss::formula::atp::AnalysisToolPak::instance()}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::udf::AggregatingUDFFinder::getClass0()
{
    return class_();
}

