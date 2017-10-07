// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ValueOperatorPtg.java

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

class org::apache::poi::ss::formula::ptg::ValueOperatorPtg
    : public OperationPtg
{

public:
    typedef OperationPtg super;
    bool isBaseToken() override;
    int8_t getDefaultOperandClass() override;
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    virtual int8_t getSid() = 0;

public:
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

    // Generated
    ValueOperatorPtg();
protected:
    ValueOperatorPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* toFormulaString(::java::lang::StringArray* operands) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};