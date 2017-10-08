// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
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
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::FormulaParser_SimpleRangePart_Type, ::java::lang::EnumArray > FormulaParser_SimpleRangePart_TypeArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaParser_SimpleRangePart_Type final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FormulaParser_SimpleRangePart_Type *CELL;
    static FormulaParser_SimpleRangePart_Type *ROW;
    static FormulaParser_SimpleRangePart_Type *COLUMN;

public:
    static FormulaParser_SimpleRangePart_Type* get(bool hasLetters, bool hasDigits);

    // Generated
    FormulaParser_SimpleRangePart_Type(::java::lang::String* name, int ordinal);
protected:
    FormulaParser_SimpleRangePart_Type(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static FormulaParser_SimpleRangePart_Type* valueOf(::java::lang::String* a0);
    static FormulaParser_SimpleRangePart_TypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaParser;
    friend class FormulaParser_SimpleRangePart;
};
