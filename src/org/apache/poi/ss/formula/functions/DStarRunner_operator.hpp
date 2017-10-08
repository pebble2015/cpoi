// Generated from /POI/java/org/apache/poi/ss/formula/functions/DStarRunner.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
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
            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::DStarRunner_operator, ::java::lang::EnumArray > DStarRunner_operatorArray;
            } // functions
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::functions::DStarRunner_operator final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static DStarRunner_operator *largerThan;
    static DStarRunner_operator *largerEqualThan;
    static DStarRunner_operator *smallerThan;
    static DStarRunner_operator *smallerEqualThan;
    static DStarRunner_operator *equal;

    // Generated

public:
    DStarRunner_operator(::java::lang::String* name, int ordinal);
protected:
    DStarRunner_operator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static DStarRunner_operator* valueOf(::java::lang::String* a0);
    static DStarRunner_operatorArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DStarRunner;
    friend class DStarRunner_DStarAlgorithmEnum;
};
