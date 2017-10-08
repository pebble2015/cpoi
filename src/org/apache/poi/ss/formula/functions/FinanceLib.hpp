// Generated from /POI/java/org/apache/poi/ss/formula/functions/FinanceLib.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::FinanceLib final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static double fv(double r, double n, double y, double p, bool t);
    static double pv(double r, double n, double y, double f, bool t);
    static double npv(double r, ::doubleArray* cfs);
    static double pmt(double r, double n, double p, double f, bool t);
    static double nper(double r, double y, double p, double f, bool t);

    // Generated

private:
    FinanceLib();
protected:
    FinanceLib(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
