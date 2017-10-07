// Generated from /POI/java/org/apache/poi/ss/formula/atp/DateParser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::atp::DateParser
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ::java::util::Calendar* parseDate(::java::lang::String* strVal) /* throws(EvaluationException) */;

private:
    static ::java::util::Calendar* makeDate(int32_t year, int32_t month, int32_t day) /* throws(EvaluationException) */;

    // Generated
    DateParser();
protected:
    DateParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
