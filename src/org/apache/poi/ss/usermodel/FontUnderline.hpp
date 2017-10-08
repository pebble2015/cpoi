// Generated from /POI/java/org/apache/poi/ss/usermodel/FontUnderline.java

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
typedef ::SubArray< ::poi::ss::usermodel::FontUnderline, ::java::lang::EnumArray > FontUnderlineArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::FontUnderline final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FontUnderline *SINGLE;
    static FontUnderline *DOUBLE;
    static FontUnderline *SINGLE_ACCOUNTING;
    static FontUnderline *DOUBLE_ACCOUNTING;
    static FontUnderline *NONE;

private:
    int32_t value {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t val);

public:
    int32_t getValue();
    int8_t getByteValue();

private:
    static FontUnderlineArray* _table_;

public:
    static FontUnderline* valueOf(int32_t value);
    static FontUnderline* valueOf(int8_t value);

    // Generated

private:
    FontUnderline(::java::lang::String* name, int ordinal, int32_t val);
protected:
    FontUnderline(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static FontUnderlineArray*& _table();

public:
    static FontUnderline* valueOf(::java::lang::String* a0);
    static FontUnderlineArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
