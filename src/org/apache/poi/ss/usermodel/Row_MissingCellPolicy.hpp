// Generated from /POI/java/org/apache/poi/ss/usermodel/Row.java

#pragma once

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::Row_MissingCellPolicy, ::java::lang::EnumArray > Row_MissingCellPolicyArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::Row_MissingCellPolicy final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static Row_MissingCellPolicy *RETURN_NULL_AND_BLANK;
    static Row_MissingCellPolicy *RETURN_BLANK_AS_NULL;
    static Row_MissingCellPolicy *CREATE_NULL_AS_BLANK;

    // Generated

public:
    Row_MissingCellPolicy(::java::lang::String* name, int ordinal);
protected:
    Row_MissingCellPolicy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Row_MissingCellPolicy* valueOf(::java::lang::String* a0);
    static Row_MissingCellPolicyArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Row;
};
