// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefNPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref2DPtgBase.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::RefNPtg final
    : public Ref2DPtgBase
{

public:
    typedef Ref2DPtgBase super;
    static constexpr int8_t sid { int8_t(44) };
protected:
    void ctor(::poi::util::LittleEndianInput* in);

public: /* protected */
    int8_t getSid() override;

    // Generated

public:
    RefNPtg(::poi::util::LittleEndianInput* in);
protected:
    RefNPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
