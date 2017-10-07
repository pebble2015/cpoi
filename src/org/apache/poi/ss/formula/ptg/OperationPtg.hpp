// Generated from /POI/java/org/apache/poi/ss/formula/ptg/OperationPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

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

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::OperationPtg
    : public Ptg
{

public:
    typedef Ptg super;
    static constexpr int32_t TYPE_UNARY { int32_t(0) };
    static constexpr int32_t TYPE_BINARY { int32_t(1) };
    static constexpr int32_t TYPE_FUNCTION { int32_t(2) };
    virtual ::java::lang::String* toFormulaString(::java::lang::StringArray* operands) = 0;
    virtual int32_t getNumberOfOperands() = 0;
    int8_t getDefaultOperandClass() override;

    // Generated
    OperationPtg();
protected:
    OperationPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* toFormulaString() = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
