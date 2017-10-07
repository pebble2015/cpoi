// Generated from /POI/java/org/apache/poi/sl/draw/binding/STPathFillMode.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
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
            namespace sl
            {
                namespace draw
                {
                    namespace binding
                    {
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STPathFillMode, ::java::lang::EnumArray > STPathFillModeArray;
                    } // binding
                } // draw
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::draw::binding::STPathFillMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static STPathFillMode *NONE;
    static STPathFillMode *NORM;
    static STPathFillMode *LIGHTEN;
    static STPathFillMode *LIGHTEN_LESS;
    static STPathFillMode *DARKEN;
    static STPathFillMode *DARKEN_LESS;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v);

public:
    ::java::lang::String* value();
    static STPathFillMode* fromValue(::java::lang::String* v);

    // Generated

private:
    STPathFillMode(::java::lang::String* name, int ordinal, ::java::lang::String* v);
protected:
    STPathFillMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static STPathFillMode* valueOf(::java::lang::String* a0);
    static STPathFillModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
