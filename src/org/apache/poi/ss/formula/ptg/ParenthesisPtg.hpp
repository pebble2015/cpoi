// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ParenthesisPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>

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

class poi::ss::formula::ptg::ParenthesisPtg final
    : public ControlPtg
{

public:
    typedef ControlPtg super;

private:
    static constexpr int32_t SIZE { int32_t(1) };

public:
    static constexpr int8_t sid { int8_t(21) };

private:
    static ControlPtg* instance_;
protected:
    void ctor();

public:
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toFormulaString(::java::lang::StringArray* operands);

    // Generated

private:
    ParenthesisPtg();
protected:
    ParenthesisPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ControlPtg*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
