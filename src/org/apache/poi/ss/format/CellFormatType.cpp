// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java
#include <org/apache/poi/ss/format/CellFormatType.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/format/CellFormatType_1.hpp>
#include <org/apache/poi/ss/format/CellFormatType_2.hpp>
#include <org/apache/poi/ss/format/CellFormatType_3.hpp>
#include <org/apache/poi/ss/format/CellFormatType_4.hpp>
#include <org/apache/poi/ss/format/CellFormatType_5.hpp>
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
                namespace format
                {
typedef ::SubArray< ::org::apache::poi::ss::format::CellFormatType, ::java::lang::EnumArray > CellFormatTypeArray;
                } // format
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::format::CellFormatType::CellFormatType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellFormatType::CellFormatType(::java::lang::String* name, int ordinal)
    : CellFormatType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::format::CellFormatType* org::apache::poi::ss::format::CellFormatType::GENERAL = new ::org::apache::poi::ss::format::CellFormatType_1(u"GENERAL"_j, 0);
org::apache::poi::ss::format::CellFormatType* org::apache::poi::ss::format::CellFormatType::NUMBER = new ::org::apache::poi::ss::format::CellFormatType_2(u"NUMBER"_j, 1);
org::apache::poi::ss::format::CellFormatType* org::apache::poi::ss::format::CellFormatType::DATE = new ::org::apache::poi::ss::format::CellFormatType_3(u"DATE"_j, 2);
org::apache::poi::ss::format::CellFormatType* org::apache::poi::ss::format::CellFormatType::ELAPSED = new ::org::apache::poi::ss::format::CellFormatType_4(u"ELAPSED"_j, 3);
org::apache::poi::ss::format::CellFormatType* org::apache::poi::ss::format::CellFormatType::TEXT = new ::org::apache::poi::ss::format::CellFormatType_5(u"TEXT"_j, 4);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellFormatType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellFormatType", 39);
    return c;
}

org::apache::poi::ss::format::CellFormatType* org::apache::poi::ss::format::CellFormatType::valueOf(::java::lang::String* a0)
{
    if(DATE->toString()->equals(a0))
        return DATE;
    if(ELAPSED->toString()->equals(a0))
        return ELAPSED;
    if(GENERAL->toString()->equals(a0))
        return GENERAL;
    if(NUMBER->toString()->equals(a0))
        return NUMBER;
    if(TEXT->toString()->equals(a0))
        return TEXT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::format::CellFormatTypeArray* org::apache::poi::ss::format::CellFormatType::values()
{
    return new org::apache::poi::ss::format::CellFormatTypeArray({
        DATE,
        ELAPSED,
        GENERAL,
        NUMBER,
        TEXT,
    });
}

java::lang::Class* org::apache::poi::ss::format::CellFormatType::getClass0()
{
    return class_();
}

