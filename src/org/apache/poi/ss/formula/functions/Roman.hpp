// Generated from /POI/java/org/apache/poi/ss/formula/functions/Roman.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed2ArgFunction.hpp>

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

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::functions::Roman
    : public Fixed2ArgFunction
{

public:
    typedef Fixed2ArgFunction super;

private:
    static ::int32_tArray* VALUES_;
    static ::java::lang::StringArray* ROMAN_;

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* numberVE, ::poi::ss::formula::eval::ValueEval* formVE) override;

private:
    ::java::lang::String* integerToRoman(int32_t number);

public:
    virtual ::java::lang::String* makeConcise(::java::lang::String* result, int32_t form);

    // Generated
    Roman();
protected:
    Roman(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static ::int32_tArray*& VALUES();
    static ::java::lang::StringArray*& ROMAN();

private:
    virtual ::java::lang::Class* getClass0();
};
