// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ErrPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::ErrPtg final
    : public ScalarConstantPtg
{

public:
    typedef ScalarConstantPtg super;

private:
    static ErrPtg* NULL_INTERSECTION_;
    static ErrPtg* DIV_ZERO_;
    static ErrPtg* VALUE_INVALID_;
    static ErrPtg* REF_INVALID_;
    static ErrPtg* NAME_INVALID_;
    static ErrPtg* NUM_ERROR_;
    static ErrPtg* N_A_;

public:
    static constexpr int16_t sid { int16_t(28) };

private:
    static constexpr int32_t SIZE { int32_t(2) };
    int32_t field_1_error_code {  };
protected:
    void ctor(int32_t errorCode);

public:
    static ErrPtg* read(::poi::util::LittleEndianInput* in);
    void write(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toFormulaString() override;
    int32_t getSize() override;
    int32_t getErrorCode();
    static ErrPtg* valueOf(int32_t code);

    // Generated

private:
    ErrPtg(int32_t errorCode);
protected:
    ErrPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ErrPtg*& NULL_INTERSECTION();
    static ErrPtg*& DIV_ZERO();
    static ErrPtg*& VALUE_INVALID();
    static ErrPtg*& REF_INVALID();
    static ErrPtg*& NAME_INVALID();
    static ErrPtg*& NUM_ERROR();
    static ErrPtg*& N_A();

private:
    virtual ::java::lang::Class* getClass0();
};
