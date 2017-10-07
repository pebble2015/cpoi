// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefErrorPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/OperandPtg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::RefErrorPtg final
    : public OperandPtg
{

public:
    typedef OperandPtg super;

private:
    static constexpr int32_t SIZE { int32_t(5) };

public:
    static constexpr int8_t sid { int8_t(42) };

private:
    int32_t field_1_reserved {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    ::java::lang::String* toString() override;
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;
    int8_t getDefaultOperandClass() override;

    // Generated
    RefErrorPtg();
    RefErrorPtg(::org::apache::poi::util::LittleEndianInput* in);
protected:
    RefErrorPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
