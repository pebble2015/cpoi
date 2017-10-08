// Generated from /POI/java/org/apache/poi/ss/formula/eval/FunctionEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::eval::FunctionEval_FunctionID final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t IF { int32_t(1) };
    static constexpr int32_t SUM { int32_t(4) };
    static constexpr int32_t OFFSET { int32_t(78) };
    static constexpr int32_t CHOOSE { int32_t(100) };
    static constexpr int32_t INDIRECT { int32_t(148) };
    static constexpr int32_t EXTERNAL_FUNC { int32_t(255) };

    // Generated
    FunctionEval_FunctionID();
protected:
    FunctionEval_FunctionID(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FunctionEval;
};
