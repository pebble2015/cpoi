// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ExpPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::ExpPtg final
    : public ControlPtg
{

public:
    typedef ControlPtg super;

private:
    static constexpr int32_t SIZE { int32_t(5) };

public:
    static constexpr int16_t sid { int16_t(1) };

private:
    int32_t field_1_first_row {  };
    int32_t field_2_first_col {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(int32_t firstRow, int32_t firstCol);

public:
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    int32_t getRow();
    int32_t getColumn();
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toString() override;

    // Generated
    ExpPtg(::poi::util::LittleEndianInput* in);
    ExpPtg(int32_t firstRow, int32_t firstCol);
protected:
    ExpPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
