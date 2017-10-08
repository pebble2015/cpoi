// Generated from /POI/java/org/apache/poi/sl/usermodel/TextRun.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
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
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::TextRun_FieldType, ::java::lang::EnumArray > TextRun_FieldTypeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::TextRun_FieldType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TextRun_FieldType *SLIDE_NUMBER;
    static TextRun_FieldType *DATE_TIME;

    // Generated

public:
    TextRun_FieldType(::java::lang::String* name, int ordinal);
protected:
    TextRun_FieldType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextRun_FieldType* valueOf(::java::lang::String* a0);
    static TextRun_FieldTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextRun;
    friend class TextRun_TextCap;
};
