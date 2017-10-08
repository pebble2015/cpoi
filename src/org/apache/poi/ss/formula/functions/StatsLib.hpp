// Generated from /POI/java/org/apache/poi/ss/formula/functions/StatsLib.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::StatsLib final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static double avedev(::doubleArray* v);
    static double stdev(::doubleArray* v);
    static double var(::doubleArray* v);
    static double varp(::doubleArray* v);
    static double median(::doubleArray* v);
    static double devsq(::doubleArray* v);
    static double kthLargest(::doubleArray* v, int32_t k);
    static double kthSmallest(::doubleArray* v, int32_t k);

    // Generated

private:
    StatsLib();
protected:
    StatsLib(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
