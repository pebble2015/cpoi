// Generated from /POI/java/org/apache/poi/ss/formula/ptg/UnionPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>

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

class org::apache::poi::ss::formula::ptg::UnionPtg final
    : public OperationPtg
{

public:
    typedef OperationPtg super;
    static constexpr int8_t sid { int8_t(16) };

private:
    static OperationPtg* instance_;
protected:
    void ctor();

public:
    bool isBaseToken() override;
    int32_t getSize() override;
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toFormulaString(::java::lang::StringArray* operands) override;
    int32_t getNumberOfOperands() override;

    // Generated

private:
    UnionPtg();
protected:
    UnionPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static OperationPtg*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};