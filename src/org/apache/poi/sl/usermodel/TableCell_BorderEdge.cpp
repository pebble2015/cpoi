// Generated from /POI/java/org/apache/poi/sl/usermodel/TableCell.java
#include <org/apache/poi/sl/usermodel/TableCell_BorderEdge.hpp>

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
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge, ::java::lang::EnumArray > TableCell_BorderEdgeArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

org::apache::poi::sl::usermodel::TableCell_BorderEdge::TableCell_BorderEdge(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::TableCell_BorderEdge::TableCell_BorderEdge(::java::lang::String* name, int ordinal)
    : TableCell_BorderEdge(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::sl::usermodel::TableCell_BorderEdge* org::apache::poi::sl::usermodel::TableCell_BorderEdge::bottom = new ::org::apache::poi::sl::usermodel::TableCell_BorderEdge(u"bottom"_j, 0);
org::apache::poi::sl::usermodel::TableCell_BorderEdge* org::apache::poi::sl::usermodel::TableCell_BorderEdge::left = new ::org::apache::poi::sl::usermodel::TableCell_BorderEdge(u"left"_j, 1);
org::apache::poi::sl::usermodel::TableCell_BorderEdge* org::apache::poi::sl::usermodel::TableCell_BorderEdge::top = new ::org::apache::poi::sl::usermodel::TableCell_BorderEdge(u"top"_j, 2);
org::apache::poi::sl::usermodel::TableCell_BorderEdge* org::apache::poi::sl::usermodel::TableCell_BorderEdge::right = new ::org::apache::poi::sl::usermodel::TableCell_BorderEdge(u"right"_j, 3);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::TableCell_BorderEdge::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.TableCell.BorderEdge", 48);
    return c;
}

org::apache::poi::sl::usermodel::TableCell_BorderEdge* org::apache::poi::sl::usermodel::TableCell_BorderEdge::valueOf(::java::lang::String* a0)
{
    if(bottom->toString()->equals(a0))
        return bottom;
    if(left->toString()->equals(a0))
        return left;
    if(right->toString()->equals(a0))
        return right;
    if(top->toString()->equals(a0))
        return top;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::TableCell_BorderEdgeArray* org::apache::poi::sl::usermodel::TableCell_BorderEdge::values()
{
    return new org::apache::poi::sl::usermodel::TableCell_BorderEdgeArray({
        bottom,
        left,
        right,
        top,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::TableCell_BorderEdge::getClass0()
{
    return class_();
}

