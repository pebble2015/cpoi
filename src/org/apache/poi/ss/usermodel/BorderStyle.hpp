// Generated from /POI/java/org/apache/poi/ss/usermodel/BorderStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
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
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::BorderStyle, ::java::lang::EnumArray > BorderStyleArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::BorderStyle final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static BorderStyle *NONE;
    static BorderStyle *THIN;
    static BorderStyle *MEDIUM;
    static BorderStyle *DASHED;
    static BorderStyle *DOTTED;
    static BorderStyle *THICK;
    static BorderStyle *DOUBLE;
    static BorderStyle *HAIR;
    static BorderStyle *MEDIUM_DASHED;
    static BorderStyle *DASH_DOT;
    static BorderStyle *MEDIUM_DASH_DOT;
    static BorderStyle *DASH_DOT_DOT;
    static BorderStyle *MEDIUM_DASH_DOT_DOT;
    static BorderStyle *SLANTED_DASH_DOT;

private:
    int16_t code {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t code);

public:
    int16_t getCode();

private:
    static BorderStyleArray* _table_;

public:
    static BorderStyle* valueOf(int16_t code);

    // Generated

private:
    BorderStyle(::java::lang::String* name, int ordinal, int32_t code);
protected:
    BorderStyle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static BorderStyleArray*& _table();

public:
    static BorderStyle* valueOf(::java::lang::String* a0);
    static BorderStyleArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
