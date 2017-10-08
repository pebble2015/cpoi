// Generated from /POI/java/org/apache/poi/ss/formula/FormulaType.java

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
typedef ::SubArray< ::poi::ss::formula::FormulaType, ::java::lang::EnumArray > FormulaTypeArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FormulaType *CELL;
    static FormulaType *SHARED;
    static FormulaType *ARRAY;
    static FormulaType *CONDFORMAT;
    static FormulaType *NAMEDRANGE;
    static FormulaType *DATAVALIDATION_LIST;

private:
    bool isSingleValue_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, bool singleValue);

public:
    bool isSingleValue();
    static FormulaType* forInt(int32_t code);

    // Generated

private:
    FormulaType(::java::lang::String* name, int ordinal, bool singleValue);
protected:
    FormulaType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static FormulaType* valueOf(::java::lang::String* a0);
    static FormulaTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
