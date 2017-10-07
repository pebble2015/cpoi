// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
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

class org::apache::poi::ss::formula::ptg::AbstractFunctionPtg
    : public OperationPtg
{

public:
    typedef OperationPtg super;

private:
    static ::java::lang::String* FUNCTION_NAME_IF_;
    static constexpr int16_t FUNCTION_INDEX_EXTERNAL { int16_t(255) };
    int8_t returnClass {  };
    ::int8_tArray* paramClass {  };
    int32_t _numberOfArgs {  };
    int16_t _functionIndex {  };
protected:
    void ctor(int32_t functionIndex, int32_t pReturnClass, ::int8_tArray* paramTypes, int32_t nParams);

public:
    bool isBaseToken() override;
    ::java::lang::String* toString() override;
    int16_t getFunctionIndex();
    int32_t getNumberOfOperands() override;
    ::java::lang::String* getName();
    bool isExternalFunction();
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toFormulaString(::java::lang::StringArray* operands) override;

private:
    static void appendArgs(::java::lang::StringBuilder* buf, int32_t firstArgIx, ::java::lang::StringArray* operands);

public:
    int32_t getSize() = 0;
    static bool isBuiltInFunctionName(::java::lang::String* name);

public: /* protected */
    ::java::lang::String* lookupName(int16_t index);
    static int16_t lookupIndex(::java::lang::String* name);

public:
    int8_t getDefaultOperandClass() override;
    int8_t getParameterClass(int32_t index);

    // Generated

public: /* protected */
    AbstractFunctionPtg(int32_t functionIndex, int32_t pReturnClass, ::int8_tArray* paramTypes, int32_t nParams);
protected:
    AbstractFunctionPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& FUNCTION_NAME_IF();

private:
    virtual ::java::lang::Class* getClass0();
};
