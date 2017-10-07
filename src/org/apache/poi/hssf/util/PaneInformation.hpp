// Generated from /POI/java/org/apache/poi/hssf/util/PaneInformation.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/PaneInformation.hpp>

struct default_init_tag;

class org::apache::poi::hssf::util::PaneInformation
    : public ::org::apache::poi::ss::util::PaneInformation
{

public:
    typedef ::org::apache::poi::ss::util::PaneInformation super;
protected:
    void ctor(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen);

    // Generated

public:
    PaneInformation(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen);
protected:
    PaneInformation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
