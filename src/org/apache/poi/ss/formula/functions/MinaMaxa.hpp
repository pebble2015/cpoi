// Generated from /POI/java/org/apache/poi/ss/formula/functions/MinaMaxa.java

#pragma once

#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::MinaMaxa
    : public MultiOperandNumericFunction
{

public:
    typedef MultiOperandNumericFunction super;
protected:
    void ctor();

private:
    static Function* MAXA_;
    static Function* MINA_;

    // Generated

public: /* protected */
    MinaMaxa();
protected:
    MinaMaxa(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Function*& MAXA();
    static Function*& MINA();

private:
    virtual ::java::lang::Class* getClass0();
    friend class MinaMaxa_1;
    friend class MinaMaxa_2;
};
