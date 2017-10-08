// Generated from /POI/java/org/apache/poi/ss/formula/FormulaShifter.java

#pragma once

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
typedef ::SubArray< ::poi::ss::formula::FormulaShifter_ShiftMode, ::java::lang::EnumArray > FormulaShifter_ShiftModeArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaShifter_ShiftMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FormulaShifter_ShiftMode *RowMove;
    static FormulaShifter_ShiftMode *RowCopy;
    static FormulaShifter_ShiftMode *SheetMove;

    // Generated

public:
    FormulaShifter_ShiftMode(::java::lang::String* name, int ordinal);
protected:
    FormulaShifter_ShiftMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static FormulaShifter_ShiftMode* valueOf(::java::lang::String* a0);
    static FormulaShifter_ShiftModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaShifter;
};
