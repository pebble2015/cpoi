// Generated from /POI/java/org/apache/poi/ss/formula/udf/UDFFinder.java
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak.hpp>
#include <org/apache/poi/ss/formula/udf/AggregatingUDFFinder.hpp>
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

poi::ss::formula::udf::UDFFinder*& poi::ss::formula::udf::UDFFinder::DEFAULT()
{
    clinit();
    return DEFAULT_;
}
poi::ss::formula::udf::UDFFinder* poi::ss::formula::udf::UDFFinder::DEFAULT_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::udf::UDFFinder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.udf.UDFFinder", 39);
    return c;
}

