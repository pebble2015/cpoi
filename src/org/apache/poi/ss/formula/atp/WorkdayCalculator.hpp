// Generated from /POI/java/org/apache/poi/ss/formula/atp/WorkdayCalculator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::atp::WorkdayCalculator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static WorkdayCalculator* instance_;
protected:
    void ctor();

public:
    virtual int32_t calculateWorkdays(double start, double end, ::doubleArray* holidays);
    virtual ::java::util::Date* calculateWorkdays(double start, int32_t workdays, ::doubleArray* holidays);

public: /* protected */
    virtual int32_t pastDaysOfWeek(double start, double end, int32_t dayOfWeek);
    virtual int32_t calculateNonWeekendHolidays(double start, double end, ::doubleArray* holidays);
    virtual bool isWeekend(double aDate);
    virtual bool isHoliday(double aDate, ::doubleArray* holidays);
    virtual int32_t isNonWorkday(double aDate, ::doubleArray* holidays);
    virtual bool isInARange(double start, double end, double aDate);

    // Generated

private:
    WorkdayCalculator();
protected:
    WorkdayCalculator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static WorkdayCalculator*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
