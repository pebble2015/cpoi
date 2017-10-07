// Generated from /POI/java/org/apache/poi/ss/formula/functions/CalendarFieldFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed1ArgFunction.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::functions::CalendarFieldFunction final
    : public Fixed1ArgFunction
{

public:
    typedef Fixed1ArgFunction super;

private:
    static Function* YEAR_;
    static Function* MONTH_;
    static Function* DAY_;
    static Function* HOUR_;
    static Function* MINUTE_;
    static Function* SECOND_;
    int32_t _dateFieldId {  };
protected:
    void ctor(int32_t dateFieldId);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0) override;

private:
    int32_t getCalField(double serialDate);

    // Generated
    CalendarFieldFunction(int32_t dateFieldId);
protected:
    CalendarFieldFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static Function*& YEAR();
    static Function*& MONTH();
    static Function*& DAY();
    static Function*& HOUR();
    static Function*& MINUTE();
    static Function*& SECOND();

private:
    virtual ::java::lang::Class* getClass0();
};
