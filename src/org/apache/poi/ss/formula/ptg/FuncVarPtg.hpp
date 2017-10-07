// Generated from /POI/java/org/apache/poi/ss/formula/ptg/FuncVarPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/AbstractFunctionPtg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::FuncVarPtg final
    : public AbstractFunctionPtg
{

public:
    typedef AbstractFunctionPtg super;
    static constexpr int8_t sid { int8_t(34) };

private:
    static constexpr int32_t SIZE { int32_t(4) };
    static OperationPtg* SUM_;
protected:
    void ctor(int32_t functionIndex, int32_t returnClass, ::int8_tArray* paramClasses, int32_t numArgs);

public:
    static FuncVarPtg* create(::org::apache::poi::util::LittleEndianInput* in);
    static FuncVarPtg* create(::java::lang::String* pName, int32_t numArgs);

private:
    static FuncVarPtg* create(int32_t numArgs, int32_t functionIndex);

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;

    // Generated

private:
    FuncVarPtg(int32_t functionIndex, int32_t returnClass, ::int8_tArray* paramClasses, int32_t numArgs);
protected:
    FuncVarPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static OperationPtg*& SUM();

private:
    virtual ::java::lang::Class* getClass0();
};
