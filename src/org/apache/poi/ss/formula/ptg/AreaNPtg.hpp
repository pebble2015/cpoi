// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaNPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Area2DPtgBase.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::AreaNPtg final
    : public Area2DPtgBase
{

public:
    typedef Area2DPtgBase super;
    static constexpr int16_t sid { int16_t(45) };
protected:
    void ctor(::poi::util::LittleEndianInput* in);

public: /* protected */
    int8_t getSid() override;

    // Generated

public:
    AreaNPtg(::poi::util::LittleEndianInput* in);
protected:
    AreaNPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
