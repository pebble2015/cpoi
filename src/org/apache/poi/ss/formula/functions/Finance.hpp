// Generated from /POI/java/org/apache/poi/ss/formula/functions/Finance.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Finance
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static double pmt(double r, int32_t nper, double pv, double fv, int32_t type);
    static double pmt(double r, int32_t nper, double pv, double fv);
    static double pmt(double r, int32_t nper, double pv);
    static double ipmt(double r, int32_t per, int32_t nper, double pv, double fv, int32_t type);
    static double ipmt(double r, int32_t per, int32_t nper, double pv, double fv);
    static double ipmt(double r, int32_t per, int32_t nper, double pv);
    static double ppmt(double r, int32_t per, int32_t nper, double pv, double fv, int32_t type);
    static double ppmt(double r, int32_t per, int32_t nper, double pv, double fv);
    static double ppmt(double r, int32_t per, int32_t nper, double pv);
    static double fv(double r, int32_t nper, double pmt, double pv, int32_t type);
    static double fv(double r, int32_t nper, double c, double pv);

    // Generated
    Finance();
protected:
    Finance(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
