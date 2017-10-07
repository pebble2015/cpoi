// Generated from /POI/java/org/apache/poi/sl/draw/binding/STSchemeColorVal.java

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
typedef ::SubArray< ::org::apache::poi::sl::draw::binding::STSchemeColorVal, ::java::lang::EnumArray > STSchemeColorValArray;
                    } // binding
                } // draw
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::draw::binding::STSchemeColorVal final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static STSchemeColorVal *BG_1;
    static STSchemeColorVal *TX_1;
    static STSchemeColorVal *BG_2;
    static STSchemeColorVal *TX_2;
    static STSchemeColorVal *ACCENT_1;
    static STSchemeColorVal *ACCENT_2;
    static STSchemeColorVal *ACCENT_3;
    static STSchemeColorVal *ACCENT_4;
    static STSchemeColorVal *ACCENT_5;
    static STSchemeColorVal *ACCENT_6;
    static STSchemeColorVal *HLINK;
    static STSchemeColorVal *FOL_HLINK;
    static STSchemeColorVal *PH_CLR;
    static STSchemeColorVal *DK_1;
    static STSchemeColorVal *LT_1;
    static STSchemeColorVal *DK_2;
    static STSchemeColorVal *LT_2;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v);

public:
    ::java::lang::String* value();
    static STSchemeColorVal* fromValue(::java::lang::String* v);

    // Generated

private:
    STSchemeColorVal(::java::lang::String* name, int ordinal, ::java::lang::String* v);
protected:
    STSchemeColorVal(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static STSchemeColorVal* valueOf(::java::lang::String* a0);
    static STSchemeColorValArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
