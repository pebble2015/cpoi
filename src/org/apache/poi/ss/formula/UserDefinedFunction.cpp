// Generated from /POI/java/org/apache/poi/ss/formula/UserDefinedFunction.java
#include <org/apache/poi/ss/formula/UserDefinedFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/FunctionNameEval.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedFunctionException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
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
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
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

org::apache::poi::ss::formula::UserDefinedFunction::UserDefinedFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::UserDefinedFunction::UserDefinedFunction() 
    : UserDefinedFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::UserDefinedFunction::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::UserDefinedFunction::instance_;

void org::apache::poi::ss::formula::UserDefinedFunction::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::UserDefinedFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, OperationEvaluationContext* ec)
{
    auto nIncomingArgs = npc(args)->length;
    if(nIncomingArgs < 1) {
        throw new ::java::lang::RuntimeException(u"function name argument missing"_j);
    }
    auto nameArg = (*args)[int32_t(0)];
    ::java::lang::String* functionName;
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::FunctionNameEval* >(nameArg) != nullptr) {
        functionName = npc((java_cast< ::org::apache::poi::ss::formula::eval::FunctionNameEval* >(nameArg)))->getFunctionName();
    } else {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"First argument should be a NameEval, but got ("_j)->append(npc(npc(nameArg)->getClass())->getName())
            ->append(u")"_j)->toString());
    }
    auto targetFunc = npc(ec)->findUserDefinedFunction(functionName);
    if(targetFunc == nullptr) {
        throw new ::org::apache::poi::ss::formula::eval::NotImplementedFunctionException(functionName);
    }
    auto nOutGoingArgs = nIncomingArgs - int32_t(1);
    auto outGoingArgs = new ::org::apache::poi::ss::formula::eval::ValueEvalArray(nOutGoingArgs);
    ::java::lang::System::arraycopy(args, 1, outGoingArgs, 0, nOutGoingArgs);
    return npc(targetFunc)->evaluate(outGoingArgs, ec);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::UserDefinedFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.UserDefinedFunction", 45);
    return c;
}

void org::apache::poi::ss::formula::UserDefinedFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new UserDefinedFunction();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::UserDefinedFunction::getClass0()
{
    return class_();
}

