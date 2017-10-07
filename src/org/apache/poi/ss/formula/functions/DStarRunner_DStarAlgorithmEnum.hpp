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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace functions
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum, ::java::lang::EnumArray > DStarRunner_DStarAlgorithmEnumArray;
                    } // functions
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static DStarRunner_DStarAlgorithmEnum *DGET;
    static DStarRunner_DStarAlgorithmEnum *DMIN;

    // Generated

public:
    DStarRunner_DStarAlgorithmEnum(::java::lang::String* name, int ordinal);
protected:
    DStarRunner_DStarAlgorithmEnum(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static DStarRunner_DStarAlgorithmEnum* valueOf(::java::lang::String* a0);
    static DStarRunner_DStarAlgorithmEnumArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DStarRunner;
    friend class DStarRunner_operator;
};
