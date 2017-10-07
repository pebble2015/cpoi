// Generated from /POI/java/org/apache/poi/ddf/EscherColorRef.java
#include <org/apache/poi/ddf/EscherColorRef_SysIndexSource.hpp>

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
            namespace ddf
            {
typedef ::SubArray< ::org::apache::poi::ddf::EscherColorRef_SysIndexSource, ::java::lang::EnumArray > EscherColorRef_SysIndexSourceArray;
            } // ddf
        } // poi
    } // apache
} // org

org::apache::poi::ddf::EscherColorRef_SysIndexSource::EscherColorRef_SysIndexSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherColorRef_SysIndexSource::EscherColorRef_SysIndexSource(::java::lang::String* name, int ordinal, int32_t value) 
    : EscherColorRef_SysIndexSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, value);
}

org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::FILL_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"FILL_COLOR"_j, 0, int32_t(240));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::LINE_OR_FILL_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"LINE_OR_FILL_COLOR"_j, 1, int32_t(241));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::LINE_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"LINE_COLOR"_j, 2, int32_t(242));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::SHADOW_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"SHADOW_COLOR"_j, 3, int32_t(243));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::CURRENT_OR_LAST_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"CURRENT_OR_LAST_COLOR"_j, 4, int32_t(244));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::FILL_BACKGROUND_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"FILL_BACKGROUND_COLOR"_j, 5, int32_t(245));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::LINE_BACKGROUND_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"LINE_BACKGROUND_COLOR"_j, 6, int32_t(246));
org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::FILL_OR_LINE_COLOR = new ::org::apache::poi::ddf::EscherColorRef_SysIndexSource(u"FILL_OR_LINE_COLOR"_j, 7, int32_t(247));
void org::apache::poi::ddf::EscherColorRef_SysIndexSource::ctor(::java::lang::String* name, int ordinal, int32_t value)
{
    super::ctor(name, ordinal);
    this->value = value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherColorRef_SysIndexSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherColorRef.SysIndexSource", 48);
    return c;
}

org::apache::poi::ddf::EscherColorRef_SysIndexSource* org::apache::poi::ddf::EscherColorRef_SysIndexSource::valueOf(::java::lang::String* a0)
{
    if(CURRENT_OR_LAST_COLOR->toString()->equals(a0))
        return CURRENT_OR_LAST_COLOR;
    if(FILL_BACKGROUND_COLOR->toString()->equals(a0))
        return FILL_BACKGROUND_COLOR;
    if(FILL_COLOR->toString()->equals(a0))
        return FILL_COLOR;
    if(FILL_OR_LINE_COLOR->toString()->equals(a0))
        return FILL_OR_LINE_COLOR;
    if(LINE_BACKGROUND_COLOR->toString()->equals(a0))
        return LINE_BACKGROUND_COLOR;
    if(LINE_COLOR->toString()->equals(a0))
        return LINE_COLOR;
    if(LINE_OR_FILL_COLOR->toString()->equals(a0))
        return LINE_OR_FILL_COLOR;
    if(SHADOW_COLOR->toString()->equals(a0))
        return SHADOW_COLOR;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ddf::EscherColorRef_SysIndexSourceArray* org::apache::poi::ddf::EscherColorRef_SysIndexSource::values()
{
    return new org::apache::poi::ddf::EscherColorRef_SysIndexSourceArray({
        CURRENT_OR_LAST_COLOR,
        FILL_BACKGROUND_COLOR,
        FILL_COLOR,
        FILL_OR_LINE_COLOR,
        LINE_BACKGROUND_COLOR,
        LINE_COLOR,
        LINE_OR_FILL_COLOR,
        SHADOW_COLOR,
    });
}

java::lang::Class* org::apache::poi::ddf::EscherColorRef_SysIndexSource::getClass0()
{
    return class_();
}

