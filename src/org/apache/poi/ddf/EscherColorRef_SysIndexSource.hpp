// Generated from /POI/java/org/apache/poi/ddf/EscherColorRef.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class org::apache::poi::ddf::EscherColorRef_SysIndexSource final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static EscherColorRef_SysIndexSource *FILL_COLOR;
    static EscherColorRef_SysIndexSource *LINE_OR_FILL_COLOR;
    static EscherColorRef_SysIndexSource *LINE_COLOR;
    static EscherColorRef_SysIndexSource *SHADOW_COLOR;
    static EscherColorRef_SysIndexSource *CURRENT_OR_LAST_COLOR;
    static EscherColorRef_SysIndexSource *FILL_BACKGROUND_COLOR;
    static EscherColorRef_SysIndexSource *LINE_BACKGROUND_COLOR;
    static EscherColorRef_SysIndexSource *FILL_OR_LINE_COLOR;

private:
    int32_t value {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t value);

    // Generated

private:
    EscherColorRef_SysIndexSource(::java::lang::String* name, int ordinal, int32_t value);
protected:
    EscherColorRef_SysIndexSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static EscherColorRef_SysIndexSource* valueOf(::java::lang::String* a0);
    static EscherColorRef_SysIndexSourceArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherColorRef;
    friend class EscherColorRef_SysIndexProcedure;
};
