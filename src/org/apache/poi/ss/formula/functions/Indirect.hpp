// Generated from /POI/java/org/apache/poi/ss/formula/functions/Indirect.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>

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

class poi::ss::formula::functions::Indirect final
    : public virtual ::java::lang::Object
    , public FreeRefFunction
{

public:
    typedef ::java::lang::Object super;

private:
    static FreeRefFunction* instance_;
protected:
    void ctor();

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec) override;

private:
    static bool evaluateBooleanArg(::poi::ss::formula::eval::ValueEval* arg, ::poi::ss::formula::OperationEvaluationContext* ec) /* throws(EvaluationException) */;
    static ::poi::ss::formula::eval::ValueEval* evaluateIndirect(::poi::ss::formula::OperationEvaluationContext* ec, ::java::lang::String* text, bool isA1style);
    static ::java::lang::StringArray* parseWorkbookAndSheetName(::java::lang::CharSequence* text);
    static ::java::lang::String* unescapeString(::java::lang::CharSequence* text);
    static bool canTrim(::java::lang::CharSequence* text);

    // Generated
    Indirect();
protected:
    Indirect(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
