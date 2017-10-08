// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java

#pragma once

#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.hpp>

struct default_init_tag;

class poi::ss::formula::functions::AggregateFunction
    : public MultiOperandNumericFunction
{

public:
    typedef MultiOperandNumericFunction super;
protected:
    void ctor();

public: /* package */
    static Function* subtotalInstance(Function* func);

private:
    static Function* AVEDEV_;
    static Function* AVERAGE_;
    static Function* DEVSQ_;
    static Function* LARGE_;
    static Function* MAX_;
    static Function* MEDIAN_;
    static Function* MIN_;
    static Function* PERCENTILE_;
    static Function* PRODUCT_;
    static Function* SMALL_;
    static Function* STDEV_;
    static Function* SUM_;
    static Function* SUMSQ_;
    static Function* VAR_;
    static Function* VARP_;

    // Generated

public: /* protected */
    AggregateFunction();
protected:
    AggregateFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Function*& AVEDEV();
    static Function*& AVERAGE();
    static Function*& DEVSQ();
    static Function*& LARGE();
    static Function*& MAX();
    static Function*& MEDIAN();
    static Function*& MIN();
    static Function*& PERCENTILE();
    static Function*& PRODUCT();
    static Function*& SMALL();
    static Function*& STDEV();
    static Function*& SUM();
    static Function*& SUMSQ();
    static Function*& VAR();
    static Function*& VARP();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AggregateFunction_LargeSmall;
    friend class AggregateFunction_Percentile;
    friend class AggregateFunction_ValueCollector;
    friend class AggregateFunction_subtotalInstance_13;
    friend class AggregateFunction_1;
    friend class AggregateFunction_2;
    friend class AggregateFunction_3;
    friend class AggregateFunction_4;
    friend class AggregateFunction_5;
    friend class AggregateFunction_6;
    friend class AggregateFunction_7;
    friend class AggregateFunction_8;
    friend class AggregateFunction_9;
    friend class AggregateFunction_10;
    friend class AggregateFunction_11;
    friend class AggregateFunction_12;
};
