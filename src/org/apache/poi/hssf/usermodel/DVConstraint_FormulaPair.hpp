// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
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
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::usermodel::DVConstraint_FormulaPair final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::formula::ptg::PtgArray* _formula1 {  };
    ::org::apache::poi::ss::formula::ptg::PtgArray* _formula2 {  };
protected:
    void ctor(::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2);

public:
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormula1();
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormula2();

    // Generated

public: /* package */
    DVConstraint_FormulaPair(::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2);
protected:
    DVConstraint_FormulaPair(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DVConstraint;
    friend class DVConstraint_FormulaValuePair;
};
