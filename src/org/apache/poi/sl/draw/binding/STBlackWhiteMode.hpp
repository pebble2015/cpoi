// Generated from /POI/java/org/apache/poi/sl/draw/binding/STBlackWhiteMode.java

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
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STBlackWhiteMode, ::java::lang::EnumArray > STBlackWhiteModeArray;
                    } // binding
                } // draw
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::draw::binding::STBlackWhiteMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static STBlackWhiteMode *CLR;
    static STBlackWhiteMode *AUTO;
    static STBlackWhiteMode *GRAY;
    static STBlackWhiteMode *LT_GRAY;
    static STBlackWhiteMode *INV_GRAY;
    static STBlackWhiteMode *GRAY_WHITE;
    static STBlackWhiteMode *BLACK_GRAY;
    static STBlackWhiteMode *BLACK_WHITE;
    static STBlackWhiteMode *BLACK;
    static STBlackWhiteMode *WHITE;
    static STBlackWhiteMode *HIDDEN;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v);

public:
    ::java::lang::String* value();
    static STBlackWhiteMode* fromValue(::java::lang::String* v);

    // Generated

private:
    STBlackWhiteMode(::java::lang::String* name, int ordinal, ::java::lang::String* v);
protected:
    STBlackWhiteMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static STBlackWhiteMode* valueOf(::java::lang::String* a0);
    static STBlackWhiteModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
