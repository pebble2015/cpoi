// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ConcatPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ValueOperatorPtg.hpp>

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

class org::apache::poi::ss::formula::ptg::ConcatPtg final
    : public ValueOperatorPtg
{

public:
    typedef ValueOperatorPtg super;
    static constexpr int8_t sid { int8_t(8) };

private:
    static ::java::lang::String* CONCAT_;
    static ValueOperatorPtg* instance_;
protected:
    void ctor();

public: /* protected */
    int8_t getSid() override;

public:
    int32_t getNumberOfOperands() override;
    ::java::lang::String* toFormulaString(::java::lang::StringArray* operands) override;

    // Generated

private:
    ConcatPtg();
protected:
    ConcatPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::java::lang::String* toFormulaString();

private:
    static ::java::lang::String*& CONCAT();

public:
    static ValueOperatorPtg*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
