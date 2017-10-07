// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaErrPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::AreaErrPtg final
    : public OperandPtg
{

public:
    typedef OperandPtg super;
    static constexpr int8_t sid { int8_t(43) };

private:
    int32_t unused1 {  };
    int32_t unused2 {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;
    int32_t getSize() override;

    // Generated
    AreaErrPtg();
    AreaErrPtg(::org::apache::poi::util::LittleEndianInput* in);
protected:
    AreaErrPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
