// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
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
        namespace format
        {
typedef ::SubArray< ::poi::ss::format::CellFormatType, ::java::lang::EnumArray > CellFormatTypeArray;
        } // format
    } // ss
} // poi

struct default_init_tag;

class poi::ss::format::CellFormatType
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static CellFormatType *GENERAL;
    static CellFormatType *NUMBER;
    static CellFormatType *DATE;
    static CellFormatType *ELAPSED;
    static CellFormatType *TEXT;
    virtual bool isSpecial(char16_t ch) = 0;
    virtual CellFormatter* formatter(::java::lang::String* pattern) = 0;
    virtual CellFormatter* formatter(::java::util::Locale* locale, ::java::lang::String* pattern) = 0;

    // Generated

public:
    CellFormatType(::java::lang::String* name, int ordinal);
protected:
    CellFormatType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static CellFormatType* valueOf(::java::lang::String* a0);
    static CellFormatTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellFormatType_1;
    friend class CellFormatType_2;
    friend class CellFormatType_3;
    friend class CellFormatType_4;
    friend class CellFormatType_5;
};
