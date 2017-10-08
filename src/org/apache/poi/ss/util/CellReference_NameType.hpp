// Generated from /POI/java/org/apache/poi/ss/util/CellReference.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellReference_NameType, ::java::lang::EnumArray > CellReference_NameTypeArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::ss::util::CellReference_NameType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static CellReference_NameType *CELL;
    static CellReference_NameType *NAMED_RANGE;
    static CellReference_NameType *COLUMN;
    static CellReference_NameType *ROW;
    static CellReference_NameType *BAD_CELL_OR_NAMED_RANGE;

    // Generated

public:
    CellReference_NameType(::java::lang::String* name, int ordinal);
protected:
    CellReference_NameType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static CellReference_NameType* valueOf(::java::lang::String* a0);
    static CellReference_NameTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellReference;
    friend class CellReference_CellRefParts;
};
