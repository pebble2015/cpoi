// Generated from /POI/java/org/apache/poi/ss/formula/OperandClassTransformer.java
#include <org/apache/poi/ss/formula/OperandClassTransformer.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/ParseNode.hpp>
#include <org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntersectionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/RangePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ValueOperatorPtg.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::ParseNode, ::java::lang::ObjectArray > ParseNodeArray;
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

poi::ss::formula::OperandClassTransformer::OperandClassTransformer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::OperandClassTransformer::OperandClassTransformer(FormulaType* formulaType) 
    : OperandClassTransformer(*static_cast< ::default_init_tag* >(0))
{
    ctor(formulaType);
}

void poi::ss::formula::OperandClassTransformer::ctor(FormulaType* formulaType)
{
    super::ctor();
    _formulaType = formulaType;
}

void poi::ss::formula::OperandClassTransformer::transformFormula(ParseNode* rootNode)
{
    int8_t rootNodeOperandClass;
    {
        auto v = _formulaType;
        if((v == FormulaType::CELL)) {
            rootNodeOperandClass = ::poi::ss::formula::ptg::Ptg::CLASS_VALUE;
            goto end_switch0;;
        }
        if((v == FormulaType::ARRAY)) {
            rootNodeOperandClass = ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY;
            goto end_switch0;;
        }
        if((v == FormulaType::NAMEDRANGE) || (v == FormulaType::DATAVALIDATION_LIST)) {
            rootNodeOperandClass = ::poi::ss::formula::ptg::Ptg::CLASS_REF;
            goto end_switch0;;
        }
        if((((v != FormulaType::CELL) && (v != FormulaType::ARRAY) && (v != FormulaType::NAMEDRANGE) && (v != FormulaType::DATAVALIDATION_LIST)))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Incomplete code - formula type ("_j)->append(static_cast< ::java::lang::Object* >(_formulaType))
                ->append(u") not supported yet"_j)->toString());
        }
end_switch0:;
    }

    transformNode(rootNode, rootNodeOperandClass, false);
}

void poi::ss::formula::OperandClassTransformer::transformNode(ParseNode* node, int8_t desiredOperandClass, bool callerForceArrayFlag)
{
    auto token = npc(node)->getToken();
    auto children = npc(node)->getChildren();
    auto isSimpleValueFunc = isSimpleValueFunction(token);
    if(isSimpleValueFunc) {
        auto localForceArray_ = desiredOperandClass == ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY;
        for (auto i = int32_t(0); i < npc(children)->length; i++) {
            transformNode((*children)[i], desiredOperandClass, localForceArray_);
        }
        setSimpleValueFuncClass(java_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(token), desiredOperandClass, callerForceArrayFlag);
        return;
    }
    if(isSingleArgSum(token)) {
        token = ::poi::ss::formula::ptg::FuncVarPtg::SUM();
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::ValueOperatorPtg* >(token) != nullptr || dynamic_cast< ::poi::ss::formula::ptg::ControlPtg* >(token) != nullptr || dynamic_cast< ::poi::ss::formula::ptg::MemFuncPtg* >(token) != nullptr|| dynamic_cast< ::poi::ss::formula::ptg::MemAreaPtg* >(token) != nullptr|| dynamic_cast< ::poi::ss::formula::ptg::UnionPtg* >(token) != nullptr|| dynamic_cast< ::poi::ss::formula::ptg::IntersectionPtg* >(token) != nullptr) {
        auto localDesiredOperandClass = desiredOperandClass == ::poi::ss::formula::ptg::Ptg::CLASS_REF ? ::poi::ss::formula::ptg::Ptg::CLASS_VALUE : desiredOperandClass;
        for (auto i = int32_t(0); i < npc(children)->length; i++) {
            transformNode((*children)[i], localDesiredOperandClass, callerForceArrayFlag);
        }
        return;
    }
    if(dynamic_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(token) != nullptr) {
        transformFunctionNode(java_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(token), children, desiredOperandClass, callerForceArrayFlag);
        return;
    }
    if(npc(children)->length > 0) {
        if(token == static_cast< ::poi::ss::formula::ptg::Ptg* >(::poi::ss::formula::ptg::RangePtg::instance())) {
            return;
        }
        throw new ::java::lang::IllegalStateException(u"Node should not have any children"_j);
    }
    if(npc(token)->isBaseToken()) {
        return;
    }
    npc(token)->setClass(transformClass(npc(token)->getPtgClass(), desiredOperandClass, callerForceArrayFlag));
}

bool poi::ss::formula::OperandClassTransformer::isSingleArgSum(::poi::ss::formula::ptg::Ptg* token)
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::ptg::AttrPtg* >(token) != nullptr) {
        auto attrPtg = java_cast< ::poi::ss::formula::ptg::AttrPtg* >(token);
        return npc(attrPtg)->isSum();
    }
    return false;
}

bool poi::ss::formula::OperandClassTransformer::isSimpleValueFunction(::poi::ss::formula::ptg::Ptg* token)
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(token) != nullptr) {
        auto aptg = java_cast< ::poi::ss::formula::ptg::AbstractFunctionPtg* >(token);
        if(npc(aptg)->getDefaultOperandClass() != ::poi::ss::formula::ptg::Ptg::CLASS_VALUE) {
            return false;
        }
        auto numberOfOperands = npc(aptg)->getNumberOfOperands();
        for (auto i = numberOfOperands - int32_t(1); i >= 0; i--) {
            if(npc(aptg)->getParameterClass(i) != ::poi::ss::formula::ptg::Ptg::CLASS_VALUE) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int8_t poi::ss::formula::OperandClassTransformer::transformClass(int8_t currentOperandClass, int8_t desiredOperandClass, bool callerForceArrayFlag)
{
    switch (desiredOperandClass) {
    case ::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
        if(!callerForceArrayFlag) {
            return ::poi::ss::formula::ptg::Ptg::CLASS_VALUE;
        }
    case ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
        return ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY;
    case ::poi::ss::formula::ptg::Ptg::CLASS_REF:
        if(!callerForceArrayFlag) {
            return currentOperandClass;
        }
        return ::poi::ss::formula::ptg::Ptg::CLASS_REF;
    }

    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected operand class ("_j)->append(desiredOperandClass)
        ->append(u")"_j)->toString());
}

void poi::ss::formula::OperandClassTransformer::transformFunctionNode(::poi::ss::formula::ptg::AbstractFunctionPtg* afp, ParseNodeArray* children, int8_t desiredOperandClass, bool callerForceArrayFlag)
{
    bool localForceArrayFlag;
    auto defaultReturnOperandClass = npc(afp)->getDefaultOperandClass();
    if(callerForceArrayFlag) {
        switch (defaultReturnOperandClass) {
        case ::poi::ss::formula::ptg::Ptg::CLASS_REF:
            if(desiredOperandClass == ::poi::ss::formula::ptg::Ptg::CLASS_REF) {
                npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_REF);
            } else {
                npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_ARRAY);
            }
            localForceArrayFlag = false;
            break;
        case ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
            npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_ARRAY);
            localForceArrayFlag = false;
            break;
        case ::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
            npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_ARRAY);
            localForceArrayFlag = true;
            break;
        default:
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected operand class ("_j)->append(defaultReturnOperandClass)
                ->append(u")"_j)->toString());
        }

    } else {
        if(defaultReturnOperandClass == desiredOperandClass) {
            localForceArrayFlag = false;
            npc(afp)->setClass(defaultReturnOperandClass);
        } else {
            switch (desiredOperandClass) {
            case ::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
                npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_VALUE);
                localForceArrayFlag = false;
                break;
            case ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
                switch (defaultReturnOperandClass) {
                case ::poi::ss::formula::ptg::Ptg::CLASS_REF:
                    npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_REF);
                    break;
                case ::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
                    npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_ARRAY);
                    break;
                default:
                    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected operand class ("_j)->append(defaultReturnOperandClass)
                        ->append(u")"_j)->toString());
                }

                localForceArrayFlag = (defaultReturnOperandClass == ::poi::ss::formula::ptg::Ptg::CLASS_VALUE);
                break;
            case ::poi::ss::formula::ptg::Ptg::CLASS_REF:
                switch (defaultReturnOperandClass) {
                case ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
                    npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_ARRAY);
                    break;
                case ::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
                    npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_VALUE);
                    break;
                default:
                    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected operand class ("_j)->append(defaultReturnOperandClass)
                        ->append(u")"_j)->toString());
                }

                localForceArrayFlag = false;
                break;
            default:
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected operand class ("_j)->append(desiredOperandClass)
                    ->append(u")"_j)->toString());
            }

        }
    }
    for (auto i = int32_t(0); i < npc(children)->length; i++) {
        auto child = (*children)[i];
        auto paramOperandClass = npc(afp)->getParameterClass(i);
        transformNode(child, paramOperandClass, localForceArrayFlag);
    }
}

void poi::ss::formula::OperandClassTransformer::setSimpleValueFuncClass(::poi::ss::formula::ptg::AbstractFunctionPtg* afp, int8_t desiredOperandClass, bool callerForceArrayFlag)
{
    if(callerForceArrayFlag || desiredOperandClass == ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY) {
        npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_ARRAY);
    } else {
        npc(afp)->setClass(::poi::ss::formula::ptg::Ptg::CLASS_VALUE);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::OperandClassTransformer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.OperandClassTransformer", 49);
    return c;
}

java::lang::Class* poi::ss::formula::OperandClassTransformer::getClass0()
{
    return class_();
}

