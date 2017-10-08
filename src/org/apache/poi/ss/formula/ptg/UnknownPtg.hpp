// Generated from /POI/java/org/apache/poi/ss/formula/ptg/UnknownPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::UnknownPtg
    : public Ptg
{

public:
    typedef Ptg super;

private:
    int16_t size {  };
    int32_t _sid {  };
protected:
    void ctor(int32_t sid);

public:
    bool isBaseToken() override;
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;

    // Generated
    UnknownPtg(int32_t sid);
protected:
    UnknownPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
