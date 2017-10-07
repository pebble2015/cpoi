// Generated from /POI/java/org/apache/poi/ss/formula/ptg/OperandPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::OperandPtg
    : public Ptg
    , public virtual ::java::lang::Cloneable
{

public:
    typedef Ptg super;
    bool isBaseToken() override;
    OperandPtg* copy();

    // Generated
    OperandPtg();
protected:
    OperandPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
