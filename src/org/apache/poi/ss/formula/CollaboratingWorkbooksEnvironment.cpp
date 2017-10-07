// Generated from /POI/java/org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.java
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/IdentityHashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment_WorkbookNotFoundException.hpp>
#include <org/apache/poi/ss/formula/EvaluationCache.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluatorProvider.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment, ::java::lang::ObjectArray > CollaboratingWorkbooksEnvironmentArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::WorkbookEvaluator, ::java::lang::ObjectArray > WorkbookEvaluatorArray;
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

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::CollaboratingWorkbooksEnvironment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::CollaboratingWorkbooksEnvironment() 
    : CollaboratingWorkbooksEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::CollaboratingWorkbooksEnvironment(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators, int32_t nItems) 
    : CollaboratingWorkbooksEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbookNames,evaluators,nItems);
}

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::CollaboratingWorkbooksEnvironment(::java::util::Map* evaluatorsByName, WorkbookEvaluatorArray* evaluators) 
    : CollaboratingWorkbooksEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluatorsByName,evaluators);
}

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment*& org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::EMPTY()
{
    clinit();
    return EMPTY_;
}
org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::EMPTY_;

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::ctor()
{
    super::ctor();
    _evaluatorsByName = ::java::util::Collections::emptyMap();
    _evaluators = new WorkbookEvaluatorArray(int32_t(0));
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::setup(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators)
{
    clinit();
    auto nItems = npc(workbookNames)->length;
    if(npc(evaluators)->length != nItems) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Number of workbook names is "_j)->append(nItems)
            ->append(u" but number of evaluators is "_j)
            ->append(npc(evaluators)->length)->toString());
    }
    if(nItems < 1) {
        throw new ::java::lang::IllegalArgumentException(u"Must provide at least one collaborating worbook"_j);
    }
    new CollaboratingWorkbooksEnvironment(workbookNames, evaluators, nItems);
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::setup(::java::util::Map* evaluatorsByName)
{
    clinit();
    if(npc(evaluatorsByName)->size() < 1) {
        throw new ::java::lang::IllegalArgumentException(u"Must provide at least one collaborating worbook"_j);
    }
    auto evaluators = java_cast< WorkbookEvaluatorArray* >(npc(npc(evaluatorsByName)->values())->toArray_(new WorkbookEvaluatorArray(npc(evaluatorsByName)->size())));
    new CollaboratingWorkbooksEnvironment(evaluatorsByName, evaluators);
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::setupFormulaEvaluator(::java::util::Map* evaluators)
{
    clinit();
    ::java::util::Map* evaluatorsByName = new ::java::util::HashMap(npc(evaluators)->size());
    for (auto _i = npc(npc(evaluators)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* swb = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto wbName = java_cast< ::java::lang::String* >(npc(swb)->getKey());
            auto eval = java_cast< ::org::apache::poi::ss::usermodel::FormulaEvaluator* >(npc(swb)->getValue());
            if(dynamic_cast< WorkbookEvaluatorProvider* >(eval) != nullptr) {
                npc(evaluatorsByName)->put(wbName, npc((java_cast< WorkbookEvaluatorProvider* >(eval)))->_getWorkbookEvaluator());
            } else {
                throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Formula Evaluator "_j)->append(static_cast< ::java::lang::Object* >(eval))
                    ->append(u" provides no WorkbookEvaluator access"_j)->toString());
            }
        }
    }
    setup(evaluatorsByName);
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::ctor(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators, int32_t nItems)
{
    ctor(toUniqueMap(workbookNames, evaluators, nItems), evaluators);
}

java::util::Map* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::toUniqueMap(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators, int32_t nItems)
{
    clinit();
    ::java::util::Map* evaluatorsByName = new ::java::util::HashMap(nItems * int32_t(3) / int32_t(2));
    for (auto i = int32_t(0); i < nItems; i++) {
        auto wbName = (*workbookNames)[i];
        auto wbEval = (*evaluators)[i];
        if(npc(evaluatorsByName)->containsKey(wbName)) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Duplicate workbook name '"_j)->append(wbName)
                ->append(u"'"_j)->toString());
        }
        npc(evaluatorsByName)->put(wbName, wbEval);
    }
    return evaluatorsByName;
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::ctor(::java::util::Map* evaluatorsByName, WorkbookEvaluatorArray* evaluators)
{
    super::ctor();
    auto uniqueEvals = new ::java::util::IdentityHashMap(npc(evaluators)->length);
    for (auto _i = npc(npc(evaluatorsByName)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* me = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto uniEval = java_cast< ::java::lang::String* >(npc(uniqueEvals)->put(static_cast< ::java::lang::Object* >(java_cast< WorkbookEvaluator* >(npc(me)->getValue())), static_cast< ::java::lang::Object* >(java_cast< ::java::lang::String* >(npc(me)->getKey()))));
            if(uniEval != nullptr) {
                auto msg = ::java::lang::StringBuilder().append(u"Attempted to register same workbook under names '"_j)->append(uniEval)
                    ->append(u"' and '"_j)
                    ->append(java_cast< ::java::lang::String* >(npc(me)->getKey()))
                    ->append(u"'"_j)->toString();
                throw new ::java::lang::IllegalArgumentException(msg);
            }
        }
    }
    unhookOldEnvironments(evaluators);
    hookNewEnvironment(evaluators, this);
    _unhooked = false;
    _evaluators = npc(evaluators)->clone();
    _evaluatorsByName = evaluatorsByName;
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::hookNewEnvironment(WorkbookEvaluatorArray* evaluators, CollaboratingWorkbooksEnvironment* env)
{
    clinit();
    auto nItems = npc(evaluators)->length;
    auto evalListener = npc((*evaluators)[int32_t(0)])->getEvaluationListener();
    for (auto i = int32_t(0); i < nItems; i++) {
        if(evalListener != npc((*evaluators)[i])->getEvaluationListener()) {
            throw new ::java::lang::RuntimeException(u"Workbook evaluators must all have the same evaluation listener"_j);
        }
    }
    auto cache = new EvaluationCache(evalListener);
    for (auto i = int32_t(0); i < nItems; i++) {
        npc((*evaluators)[i])->attachToEnvironment(env, cache, i);
    }
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::unhookOldEnvironments(WorkbookEvaluatorArray* evaluators)
{
    ::java::util::Set* oldEnvs = new ::java::util::HashSet();
    for (auto i = int32_t(0); i < npc(evaluators)->length; i++) {
        npc(oldEnvs)->add(static_cast< ::java::lang::Object* >(npc((*evaluators)[i])->getEnvironment()));
    }
    auto oldCWEs = new CollaboratingWorkbooksEnvironmentArray(npc(oldEnvs)->size());
    npc(oldEnvs)->toArray_(static_cast< ::java::lang::ObjectArray* >(oldCWEs));
    for (auto i = int32_t(0); i < npc(oldCWEs)->length; i++) {
        npc((*oldCWEs)[i])->unhook();
    }
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::unhook()
{
    if(npc(_evaluators)->length < 1) {
        return;
    }
    for (auto i = int32_t(0); i < npc(_evaluators)->length; i++) {
        npc((*_evaluators)[i])->detachFromEnvironment();
    }
    _unhooked = true;
}

org::apache::poi::ss::formula::WorkbookEvaluator* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::getWorkbookEvaluator(::java::lang::String* workbookName) /* throws(WorkbookNotFoundException) */
{
    if(_unhooked) {
        throw new ::java::lang::IllegalStateException(u"This environment has been unhooked"_j);
    }
    auto result = java_cast< WorkbookEvaluator* >(npc(_evaluatorsByName)->get(workbookName));
    if(result == nullptr) {
        auto sb = new ::java::lang::StringBuffer(int32_t(256));
        npc(npc(npc(sb)->append(u"Could not resolve external workbook name '"_j))->append(workbookName))->append(u"'."_j);
        if(npc(_evaluators)->length < 1) {
            npc(sb)->append(u" Workbook environment has not been set up."_j);
        } else {
            npc(sb)->append(u" The following workbook names are valid: ("_j);
            auto i = npc(npc(_evaluatorsByName)->keySet())->iterator();
            auto count = int32_t(0);
            while (npc(i)->hasNext()) {
                if(count++ > 0) {
                    npc(sb)->append(u", "_j);
                }
                npc(npc(npc(sb)->append(u"'"_j))->append(java_cast< ::java::lang::String* >(npc(i)->next())))->append(u"'"_j);
            }
            npc(sb)->append(u")"_j);
        }
        throw new CollaboratingWorkbooksEnvironment_WorkbookNotFoundException(npc(sb)->toString());
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.CollaboratingWorkbooksEnvironment", 59);
    return c;
}

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_ = new CollaboratingWorkbooksEnvironment();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment::getClass0()
{
    return class_();
}

