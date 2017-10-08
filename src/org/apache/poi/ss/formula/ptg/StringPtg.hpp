// Generated from /POI/java/org/apache/poi/ss/formula/ptg/StringPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ScalarConstantPtg.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::StringPtg final
    : public ScalarConstantPtg
{

public:
    typedef ScalarConstantPtg super;
    static constexpr int8_t sid { int8_t(23) };

private:
    static constexpr char16_t FORMULA_DELIMITER { u'"' };
    bool _is16bitUnicode {  };
    ::java::lang::String* field_3_string {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(::java::lang::String* value);

public:
    ::java::lang::String* getValue();
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

    // Generated
    StringPtg(::poi::util::LittleEndianInput* in);
    StringPtg(::java::lang::String* value);
protected:
    StringPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
