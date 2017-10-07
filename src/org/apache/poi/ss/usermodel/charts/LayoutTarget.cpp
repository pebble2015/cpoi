// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LayoutTarget.java
#include <org/apache/poi/ss/usermodel/charts/LayoutTarget.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
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
                namespace usermodel
                {
                    namespace charts
                    {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::LayoutTarget, ::java::lang::EnumArray > LayoutTargetArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::usermodel::charts::LayoutTarget::LayoutTarget(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::LayoutTarget::LayoutTarget(::java::lang::String* name, int ordinal)
    : LayoutTarget(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::usermodel::charts::LayoutTarget* org::apache::poi::ss::usermodel::charts::LayoutTarget::INNER = new ::org::apache::poi::ss::usermodel::charts::LayoutTarget(u"INNER"_j, 0);
org::apache::poi::ss::usermodel::charts::LayoutTarget* org::apache::poi::ss::usermodel::charts::LayoutTarget::OUTER = new ::org::apache::poi::ss::usermodel::charts::LayoutTarget(u"OUTER"_j, 1);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::LayoutTarget::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.LayoutTarget", 47);
    return c;
}

org::apache::poi::ss::usermodel::charts::LayoutTarget* org::apache::poi::ss::usermodel::charts::LayoutTarget::valueOf(::java::lang::String* a0)
{
    if(INNER->toString()->equals(a0))
        return INNER;
    if(OUTER->toString()->equals(a0))
        return OUTER;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::usermodel::charts::LayoutTargetArray* org::apache::poi::ss::usermodel::charts::LayoutTarget::values()
{
    return new org::apache::poi::ss::usermodel::charts::LayoutTargetArray({
        INNER,
        OUTER,
    });
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::LayoutTarget::getClass0()
{
    return class_();
}

