// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java
#include <org/apache/poi/hssf/usermodel/DVConstraint_FormulaPair.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::DVConstraint_FormulaPair::DVConstraint_FormulaPair(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::DVConstraint_FormulaPair::DVConstraint_FormulaPair(::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2) 
    : DVConstraint_FormulaPair(*static_cast< ::default_init_tag* >(0))
{
    ctor(formula1,formula2);
}

void poi::hssf::usermodel::DVConstraint_FormulaPair::ctor(::poi::ss::formula::ptg::PtgArray* formula1, ::poi::ss::formula::ptg::PtgArray* formula2)
{
    super::ctor();
    _formula1 = (formula1 == nullptr) ? static_cast< ::poi::ss::formula::ptg::PtgArray* >(nullptr) : npc(formula1)->clone();
    _formula2 = (formula2 == nullptr) ? static_cast< ::poi::ss::formula::ptg::PtgArray* >(nullptr) : npc(formula2)->clone();
}

poi::ss::formula::ptg::PtgArray* poi::hssf::usermodel::DVConstraint_FormulaPair::getFormula1()
{
    return _formula1;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::usermodel::DVConstraint_FormulaPair::getFormula2()
{
    return _formula2;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::DVConstraint_FormulaPair::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.DVConstraint.FormulaPair", 54);
    return c;
}

java::lang::Class* poi::hssf::usermodel::DVConstraint_FormulaPair::getClass0()
{
    return class_();
}

