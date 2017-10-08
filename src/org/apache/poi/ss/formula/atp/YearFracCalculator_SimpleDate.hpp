// Generated from /POI/java/org/apache/poi/ss/formula/atp/YearFracCalculator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::atp::YearFracCalculator_SimpleDate final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t JANUARY { int32_t(1) };
    static constexpr int32_t FEBRUARY { int32_t(2) };
    int32_t year {  };
    int32_t month {  };
    int32_t day {  };
    int64_t tsMilliseconds {  };
protected:
    void ctor(::java::util::Calendar* cal);

    // Generated

public:
    YearFracCalculator_SimpleDate(::java::util::Calendar* cal);
protected:
    YearFracCalculator_SimpleDate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class YearFracCalculator;
};
