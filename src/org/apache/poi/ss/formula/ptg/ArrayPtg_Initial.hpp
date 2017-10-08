// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ArrayPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::ArrayPtg_Initial final
    : public Ptg
{

public:
    typedef Ptg super;

private:
    int32_t _reserved0 {  };
    int32_t _reserved1 {  };
    int32_t _reserved2 {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);

private:
    static ::java::lang::RuntimeException* invalid();

public:
    int8_t getDefaultOperandClass() override;
    int32_t getSize() override;
    bool isBaseToken() override;
    ::java::lang::String* toFormulaString() override;
    void write(::poi::util::LittleEndianOutput* out) override;
    ArrayPtg* finishReading(::poi::util::LittleEndianInput* in);

    // Generated
    ArrayPtg_Initial(::poi::util::LittleEndianInput* in);
protected:
    ArrayPtg_Initial(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ArrayPtg;
};
