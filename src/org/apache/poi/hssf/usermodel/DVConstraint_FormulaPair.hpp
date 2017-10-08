// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::usermodel::DVConstraint_FormulaPair final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::formula::ptg::PtgArray* _formula1 {  };
    ::poi::ss::formula::ptg::PtgArray* _formula2 {  };
protected:
    void ctor(::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2);

public:
    ::poi::ss::formula::ptg::PtgArray* getFormula1();
    ::poi::ss::formula::ptg::PtgArray* getFormula2();

    // Generated

public: /* package */
    DVConstraint_FormulaPair(::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2);
protected:
    DVConstraint_FormulaPair(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DVConstraint;
    friend class DVConstraint_FormulaValuePair;
};
