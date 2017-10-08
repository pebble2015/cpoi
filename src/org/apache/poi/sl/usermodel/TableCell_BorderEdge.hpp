// Generated from /POI/java/org/apache/poi/sl/usermodel/TableCell.java

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
typedef ::SubArray< ::poi::sl::usermodel::TableCell_BorderEdge, ::java::lang::EnumArray > TableCell_BorderEdgeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::TableCell_BorderEdge final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TableCell_BorderEdge *bottom;
    static TableCell_BorderEdge *left;
    static TableCell_BorderEdge *top;
    static TableCell_BorderEdge *right;

    // Generated

public:
    TableCell_BorderEdge(::java::lang::String* name, int ordinal);
protected:
    TableCell_BorderEdge(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TableCell_BorderEdge* valueOf(::java::lang::String* a0);
    static TableCell_BorderEdgeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TableCell;
};
