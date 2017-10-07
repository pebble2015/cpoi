// Generated from /POI/java/org/apache/poi/ddf/EscherColorRef.java
#include <org/apache/poi/ddf/EscherColorRef_SysIndexProcedure.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/BitField.hpp>
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
            namespace ddf
            {
typedef ::SubArray< ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure, ::java::lang::EnumArray > EscherColorRef_SysIndexProcedureArray;
            } // ddf
        } // poi
    } // apache
} // org

org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::EscherColorRef_SysIndexProcedure(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::EscherColorRef_SysIndexProcedure(::java::lang::String* name, int ordinal, int32_t mask) 
    : EscherColorRef_SysIndexProcedure(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, mask);
}

org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::DARKEN_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"DARKEN_COLOR"_j, 0, int32_t(1));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::LIGHTEN_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"LIGHTEN_COLOR"_j, 1, int32_t(2));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::ADD_GRAY_LEVEL = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"ADD_GRAY_LEVEL"_j, 2, int32_t(3));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::SUB_GRAY_LEVEL = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"SUB_GRAY_LEVEL"_j, 3, int32_t(4));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::REVERSE_GRAY_LEVEL = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"REVERSE_GRAY_LEVEL"_j, 4, int32_t(5));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::THRESHOLD = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"THRESHOLD"_j, 5, int32_t(6));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::INVERT_AFTER = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"INVERT_AFTER"_j, 6, int32_t(32));
org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::INVERT_HIGHBIT_AFTER = new ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure(u"INVERT_HIGHBIT_AFTER"_j, 7, int32_t(64));
void org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::ctor(::java::lang::String* name, int ordinal, int32_t mask)
{
    super::ctor(name, ordinal);
    this->mask = new ::org::apache::poi::util::BitField(mask);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherColorRef.SysIndexProcedure", 51);
    return c;
}

org::apache::poi::ddf::EscherColorRef_SysIndexProcedure* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::valueOf(::java::lang::String* a0)
{
    if(ADD_GRAY_LEVEL->toString()->equals(a0))
        return ADD_GRAY_LEVEL;
    if(DARKEN_COLOR->toString()->equals(a0))
        return DARKEN_COLOR;
    if(INVERT_AFTER->toString()->equals(a0))
        return INVERT_AFTER;
    if(INVERT_HIGHBIT_AFTER->toString()->equals(a0))
        return INVERT_HIGHBIT_AFTER;
    if(LIGHTEN_COLOR->toString()->equals(a0))
        return LIGHTEN_COLOR;
    if(REVERSE_GRAY_LEVEL->toString()->equals(a0))
        return REVERSE_GRAY_LEVEL;
    if(SUB_GRAY_LEVEL->toString()->equals(a0))
        return SUB_GRAY_LEVEL;
    if(THRESHOLD->toString()->equals(a0))
        return THRESHOLD;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ddf::EscherColorRef_SysIndexProcedureArray* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::values()
{
    return new org::apache::poi::ddf::EscherColorRef_SysIndexProcedureArray({
        ADD_GRAY_LEVEL,
        DARKEN_COLOR,
        INVERT_AFTER,
        INVERT_HIGHBIT_AFTER,
        LIGHTEN_COLOR,
        REVERSE_GRAY_LEVEL,
        SUB_GRAY_LEVEL,
        THRESHOLD,
    });
}

java::lang::Class* org::apache::poi::ddf::EscherColorRef_SysIndexProcedure::getClass0()
{
    return class_();
}

