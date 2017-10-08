// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidationConstraint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct poi::ss::usermodel::DataValidationConstraint
    : public virtual ::java::lang::Object
{
    virtual int32_t getValidationType() = 0;
    virtual int32_t getOperator() = 0;
    virtual void setOperator(int32_t operator_) = 0;
    virtual ::java::lang::StringArray* getExplicitListValues() = 0;
    virtual void setExplicitListValues(::java::lang::StringArray* explicitListValues) = 0;
    virtual ::java::lang::String* getFormula1() = 0;
    virtual void setFormula1(::java::lang::String* formula1) = 0;
    virtual ::java::lang::String* getFormula2() = 0;
    virtual void setFormula2(::java::lang::String* formula2) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
