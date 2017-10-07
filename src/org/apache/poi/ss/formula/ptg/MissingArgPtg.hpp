// Generated from /POI/java/org/apache/poi/ss/formula/ptg/MissingArgPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::MissingArgPtg final
    : public ScalarConstantPtg
{

public:
    typedef ScalarConstantPtg super;

private:
    static constexpr int32_t SIZE { int32_t(1) };

public:
    static constexpr int8_t sid { int8_t(22) };

private:
    static Ptg* instance_;
protected:
    void ctor();

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

    // Generated

private:
    MissingArgPtg();
protected:
    MissingArgPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Ptg*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
