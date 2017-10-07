// Generated from /POI/java/org/apache/poi/hssf/record/NameRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::NameRecord_Option final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t OPT_HIDDEN_NAME { int32_t(1) };
    static constexpr int32_t OPT_FUNCTION_NAME { int32_t(2) };
    static constexpr int32_t OPT_COMMAND_NAME { int32_t(4) };
    static constexpr int32_t OPT_MACRO { int32_t(8) };
    static constexpr int32_t OPT_COMPLEX { int32_t(16) };
    static constexpr int32_t OPT_BUILTIN { int32_t(32) };
    static constexpr int32_t OPT_BINDATA { int32_t(4096) };
    static bool isFormula(int32_t optValue);

    // Generated
    NameRecord_Option();
protected:
    NameRecord_Option(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class NameRecord;
};
