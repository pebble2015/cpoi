// Generated from /POI/java/org/apache/poi/ss/formula/OperandClassTransformer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::formula::ParseNode, ::java::lang::ObjectArray > ParseNodeArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::OperandClassTransformer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    FormulaType* _formulaType {  };
protected:
    void ctor(FormulaType* formulaType);

public:
    void transformFormula(ParseNode* rootNode);

private:
    void transformNode(ParseNode* node, int8_t desiredOperandClass, bool callerForceArrayFlag);
    static bool isSingleArgSum(::org::apache::poi::ss::formula::ptg::Ptg* token);
    static bool isSimpleValueFunction(::org::apache::poi::ss::formula::ptg::Ptg* token);
    int8_t transformClass(int8_t currentOperandClass, int8_t desiredOperandClass, bool callerForceArrayFlag);
    void transformFunctionNode(::org::apache::poi::ss::formula::ptg::AbstractFunctionPtg* afp, ParseNodeArray* children, int8_t desiredOperandClass, bool callerForceArrayFlag);
    void setSimpleValueFuncClass(::org::apache::poi::ss::formula::ptg::AbstractFunctionPtg* afp, int8_t desiredOperandClass, bool callerForceArrayFlag);

    // Generated

public:
    OperandClassTransformer(FormulaType* formulaType);
protected:
    OperandClassTransformer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
