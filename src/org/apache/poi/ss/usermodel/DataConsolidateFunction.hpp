// Generated from /POI/java/org/apache/poi/ss/usermodel/DataConsolidateFunction.java

#pragma once

#include <fwd-POI.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::DataConsolidateFunction, ::java::lang::EnumArray > DataConsolidateFunctionArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::DataConsolidateFunction final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static DataConsolidateFunction *AVERAGE;
    static DataConsolidateFunction *COUNT;
    static DataConsolidateFunction *COUNT_NUMS;
    static DataConsolidateFunction *MAX;
    static DataConsolidateFunction *MIN;
    static DataConsolidateFunction *PRODUCT;
    static DataConsolidateFunction *STD_DEV;
    static DataConsolidateFunction *STD_DEVP;
    static DataConsolidateFunction *SUM;
    static DataConsolidateFunction *VAR;
    static DataConsolidateFunction *VARP;

private:
    int32_t value {  };
    ::java::lang::String* name_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t value, ::java::lang::String* name1);

public:
    ::java::lang::String* getName();
    int32_t getValue();

    // Generated

private:
    DataConsolidateFunction(::java::lang::String* name, int ordinal, int32_t value, ::java::lang::String* name1);
protected:
    DataConsolidateFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static DataConsolidateFunction* valueOf(::java::lang::String* a0);
    static DataConsolidateFunctionArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
