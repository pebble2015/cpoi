// Generated from /POI/java/org/apache/poi/ddf/EscherColorRef.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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
typedef ::SubArray< ::org::apache::poi::ddf::EscherColorRef_SysIndexProcedure, ::java::lang::EnumArray > EscherColorRef_SysIndexProcedureArray;
            } // ddf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ddf::EscherColorRef_SysIndexProcedure final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static EscherColorRef_SysIndexProcedure *DARKEN_COLOR;
    static EscherColorRef_SysIndexProcedure *LIGHTEN_COLOR;
    static EscherColorRef_SysIndexProcedure *ADD_GRAY_LEVEL;
    static EscherColorRef_SysIndexProcedure *SUB_GRAY_LEVEL;
    static EscherColorRef_SysIndexProcedure *REVERSE_GRAY_LEVEL;
    static EscherColorRef_SysIndexProcedure *THRESHOLD;
    static EscherColorRef_SysIndexProcedure *INVERT_AFTER;
    static EscherColorRef_SysIndexProcedure *INVERT_HIGHBIT_AFTER;

private:
    ::org::apache::poi::util::BitField* mask {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t mask);

    // Generated

private:
    EscherColorRef_SysIndexProcedure(::java::lang::String* name, int ordinal, int32_t mask);
protected:
    EscherColorRef_SysIndexProcedure(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static EscherColorRef_SysIndexProcedure* valueOf(::java::lang::String* a0);
    static EscherColorRef_SysIndexProcedureArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherColorRef;
    friend class EscherColorRef_SysIndexSource;
};
