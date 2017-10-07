// Generated from /POI/java/org/apache/poi/ss/usermodel/IgnoredErrorType.java

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::IgnoredErrorType, ::java::lang::EnumArray > IgnoredErrorTypeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::IgnoredErrorType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static IgnoredErrorType *CALCULATED_COLUMN;
    static IgnoredErrorType *EMPTY_CELL_REFERENCE;
    static IgnoredErrorType *EVALUATION_ERROR;
    static IgnoredErrorType *FORMULA;
    static IgnoredErrorType *FORMULA_RANGE;
    static IgnoredErrorType *LIST_DATA_VALIDATION;
    static IgnoredErrorType *NUMBER_STORED_AS_TEXT;
    static IgnoredErrorType *TWO_DIGIT_TEXT_YEAR;
    static IgnoredErrorType *UNLOCKED_FORMULA;

    // Generated

public:
    IgnoredErrorType(::java::lang::String* name, int ordinal);
protected:
    IgnoredErrorType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static IgnoredErrorType* valueOf(::java::lang::String* a0);
    static IgnoredErrorTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
