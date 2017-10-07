// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ControlPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::ControlPtg
    : public Ptg
{

public:
    typedef Ptg super;
    bool isBaseToken() override;
    int8_t getDefaultOperandClass() override;

    // Generated
    ControlPtg();
protected:
    ControlPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
