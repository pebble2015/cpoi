// Generated from /POI/java/org/apache/poi/sl/draw/binding/STRectAlignment.java

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

namespace poi
{
    namespace sl
    {
        namespace draw
        {
            namespace binding
            {
typedef ::SubArray< ::poi::sl::draw::binding::STRectAlignment, ::java::lang::EnumArray > STRectAlignmentArray;
            } // binding
        } // draw
    } // sl
} // poi

struct default_init_tag;

class poi::sl::draw::binding::STRectAlignment final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static STRectAlignment *TL;
    static STRectAlignment *T;
    static STRectAlignment *TR;
    static STRectAlignment *L;
    static STRectAlignment *CTR;
    static STRectAlignment *R;
    static STRectAlignment *BL;
    static STRectAlignment *B;
    static STRectAlignment *BR;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v);

public:
    ::java::lang::String* value();
    static STRectAlignment* fromValue(::java::lang::String* v);

    // Generated

private:
    STRectAlignment(::java::lang::String* name, int ordinal, ::java::lang::String* v);
protected:
    STRectAlignment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static STRectAlignment* valueOf(::java::lang::String* a0);
    static STRectAlignmentArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
