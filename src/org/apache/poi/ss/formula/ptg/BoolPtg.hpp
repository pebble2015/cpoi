// Generated from /POI/java/org/apache/poi/ss/formula/ptg/BoolPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::BoolPtg final
    : public ScalarConstantPtg
{

public:
    typedef ScalarConstantPtg super;
    static constexpr int32_t SIZE { int32_t(2) };
    static constexpr int8_t sid { int8_t(29) };

private:
    static BoolPtg* FALSE_;
    static BoolPtg* TRUE_;
    bool _value {  };
protected:
    void ctor(bool b);

public:
    static BoolPtg* valueOf(bool b);
    static BoolPtg* read(::org::apache::poi::util::LittleEndianInput* in);
    bool getValue();
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

    // Generated

private:
    BoolPtg(bool b);
protected:
    BoolPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static BoolPtg*& FALSE();
    static BoolPtg*& TRUE();
    virtual ::java::lang::Class* getClass0();
};
