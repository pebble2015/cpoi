// Generated from /POI/java/org/apache/poi/ss/formula/ptg/FuncPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/function/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::FuncPtg final
    : public AbstractFunctionPtg
{

public:
    typedef AbstractFunctionPtg super;
    static constexpr int8_t sid { int8_t(33) };
    static constexpr int32_t SIZE { int32_t(3) };
    static FuncPtg* create(::poi::util::LittleEndianInput* in);
protected:
    void ctor(int32_t funcIndex, ::poi::ss::formula::function::FunctionMetadata* fm);

public:
    static FuncPtg* create(int32_t functionIndex);
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;

    // Generated

private:
    FuncPtg(int32_t funcIndex, ::poi::ss::formula::function::FunctionMetadata* fm);
protected:
    FuncPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
