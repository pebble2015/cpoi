// Generated from /POI/java/org/apache/poi/ss/formula/ptg/TblPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::TblPtg final
    : public ControlPtg
{

public:
    typedef ControlPtg super;

private:
    static constexpr int32_t SIZE { int32_t(5) };

public:
    static constexpr int16_t sid { int16_t(2) };

private:
    int32_t field_1_first_row {  };
    int32_t field_2_first_col {  };
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    int32_t getRow();
    int32_t getColumn();
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toString() override;

    // Generated
    TblPtg(::org::apache::poi::util::LittleEndianInput* in);
protected:
    TblPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
