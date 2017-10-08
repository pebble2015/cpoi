// Generated from /POI/java/org/apache/poi/ss/formula/OperationEvaluatorFactory.java
#include <org/apache/poi/ss/formula/OperationEvaluatorFactory.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/Executable.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Member.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/UserDefinedFunction.hpp>
#include <org/apache/poi/ss/formula/eval/ConcatEval.hpp>
#include <org/apache/poi/ss/formula/eval/FunctionEval.hpp>
#include <org/apache/poi/ss/formula/eval/IntersectionEval.hpp>
#include <org/apache/poi/ss/formula/eval/PercentEval.hpp>
#include <org/apache/poi/ss/formula/eval/RangeEval.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.hpp>
#include <org/apache/poi/ss/formula/eval/UnaryMinusEval.hpp>
#include <org/apache/poi/ss/formula/eval/UnaryPlusEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>
#include <org/apache/poi/ss/formula/functions/Indirect.hpp>
#include <org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AddPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ConcatPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DividePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/EqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/GreaterEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/GreaterThanPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntersectionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/LessEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/LessThanPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MultiplyPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NotEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/PercentPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/PowerPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RangePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/SubtractPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnaryMinusPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnaryPlusPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ValueOperatorPtg.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Constructor, ExecutableArray > ConstructorArray;
        } // reflect
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
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

poi::ss::formula::OperationEvaluatorFactory::OperationEvaluatorFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::OperationEvaluatorFactory::OperationEvaluatorFactory() 
    : OperationEvaluatorFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Map*& poi::ss::formula::OperationEvaluatorFactory::_instancesByPtgClass()
{
    clinit();
    return _instancesByPtgClass_;
}
java::util::Map* poi::ss::formula::OperationEvaluatorFactory::_instancesByPtgClass_;

void poi::ss::formula::OperationEvaluatorFactory::ctor()
{
    super::ctor();
}

java::util::Map* poi::ss::formula::OperationEvaluatorFactory::initialiseInstancesMap()
{
    clinit();
    ::java::util::Map* m = new ::java::util::HashMap(int32_t(32));
    put(m, ::poi::ss::formula::ptg::EqualPtg::instance(), ::poi::ss::formula::eval::RelationalOperationEval::EqualEval());
    put(m, ::poi::ss::formula::ptg::GreaterEqualPtg::instance(), ::poi::ss::formula::eval::RelationalOperationEval::GreaterEqualEval());
    put(m, ::poi::ss::formula::ptg::GreaterThanPtg::instance(), ::poi::ss::formula::eval::RelationalOperationEval::GreaterThanEval());
    put(m, ::poi::ss::formula::ptg::LessEqualPtg::instance(), ::poi::ss::formula::eval::RelationalOperationEval::LessEqualEval());
    put(m, ::poi::ss::formula::ptg::LessThanPtg::instance(), ::poi::ss::formula::eval::RelationalOperationEval::LessThanEval());
    put(m, ::poi::ss::formula::ptg::NotEqualPtg::instance(), ::poi::ss::formula::eval::RelationalOperationEval::NotEqualEval());
    put(m, ::poi::ss::formula::ptg::ConcatPtg::instance(), ::poi::ss::formula::eval::ConcatEval::instance());
    put(m, ::poi::ss::formula::ptg::AddPtg::instance(), ::poi::ss::formula::eval::TwoOperandNumericOperation::AddEval());
    put(m, ::poi::ss::formula::ptg::DividePtg::instance(), ::poi::ss::formula::eval::TwoOperandNumericOperation::DivideEval());
    put(m, ::poi::ss::formula::ptg::MultiplyPtg::instance(), ::poi::ss::formula::eval::TwoOperandNumericOperation::MultiplyEval());
    put(m, ::poi::ss::formula::ptg::PercentPtg::instance(), ::poi::ss::formula::eval::PercentEval::instance());
    put(m, ::poi::ss::formula::ptg::PowerPtg::instance(), ::poi::ss::formula::eval::TwoOperandNumericOperation::PowerEval());
    put(m, ::poi::ss::formula::ptg::SubtractPtg::instance(), ::poi::ss::formula::eval::TwoOperandNumericOperation::SubtractEval());
    put(m, ::poi::ss::formula::ptg::UnaryMinusPtg::instance(), ::poi::ss::formula::eval::UnaryMinusEval::instance());
    put(m, ::poi::ss::formula::ptg::UnaryPlusPtg::instance(), ::poi::ss::formula::eval::UnaryPlusEval::instance());
    put(m, ::poi::ss::formula::ptg::RangePtg::instance(), ::poi::ss::formula::eval::RangeEval::instance());
    put(m, ::poi::ss::formula::ptg::IntersectionPtg::instance(), ::poi::ss::formula::eval::IntersectionEval::instance());
    return m;
}

void poi::ss::formula::OperationEvaluatorFactory::put(::java::util::Map* m, ::poi::ss::formula::ptg::OperationPtg* ptgKey, ::poi::ss::formula::functions::Function* instance)
{
    clinit();
    auto cc = npc(npc(ptgKey)->getClass())->getDeclaredConstructors();
    if(npc(cc)->length > 1 || !::java::lang::reflect::Modifier::isPrivate(npc((*cc)[int32_t(0)])->getModifiers())) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Failed to verify instance ("_j)->append(npc(npc(ptgKey)->getClass())->getName())
            ->append(u") is a singleton."_j)->toString());
    }
    npc(m)->put(ptgKey, instance);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::OperationEvaluatorFactory::evaluate(::poi::ss::formula::ptg::OperationPtg* ptg, ::poi::ss::formula::eval::ValueEvalArray* args, OperationEvaluationContext* ec)
{
    clinit();
    if(ptg == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"ptg must not be null"_j);
    }
    auto result = java_cast< ::poi::ss::formula::functions::Function* >(npc(_instancesByPtgClass_)->get(ptg));
    if(result != nullptr) {
        return npc(result)->evaluate(args, npc(ec)->getRowIndex(), static_cast< int16_t >(npc(ec)->getColumnIndex()));
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(ptg) != nullptr) {
        auto fptg = java_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(ptg);
        int32_t functionIndex = npc(fptg)->getFunctionIndex();
        switch (functionIndex) {
        case ::poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_INDIRECT:
            return npc(::poi::ss::formula::functions::Indirect::instance())->evaluate(args, ec);
        case ::poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_INDEX_EXTERNAL:
            return npc(UserDefinedFunction::instance())->evaluate(args, ec);
        }

        return npc(::poi::ss::formula::eval::FunctionEval::getBasicFunction(functionIndex))->evaluate(args, npc(ec)->getRowIndex(), static_cast< int16_t >(npc(ec)->getColumnIndex()));
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected operation ptg class ("_j)->append(npc(npc(ptg)->getClass())->getName())
        ->append(u")"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::OperationEvaluatorFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.OperationEvaluatorFactory", 51);
    return c;
}

void poi::ss::formula::OperationEvaluatorFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _instancesByPtgClass_ = initialiseInstancesMap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::OperationEvaluatorFactory::getClass0()
{
    return class_();
}

