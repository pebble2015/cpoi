// Generated from /POI/java/org/apache/poi/ss/format/CellElapsedFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>

struct default_init_tag;

class poi::ss::format::CellElapsedFormatter
    : public CellFormatter
{

public:
    typedef CellFormatter super;

private:
    ::java::util::List* specs {  };
    CellElapsedFormatter_TimeSpec* topmost {  };
    ::java::lang::String* printfFmt {  };
    static ::java::util::regex::Pattern* PERCENTS_;
    static constexpr double HOUR__FACTOR { 0.041666666666666664 };
    static constexpr double MIN__FACTOR { 6.944444444444444E-4 };
    static constexpr double SEC__FACTOR { 1.1574074074074073E-5 };
protected:
    void ctor(::java::lang::String* pattern);

private:
    CellElapsedFormatter_TimeSpec* assignSpec(char16_t type, int32_t pos, int32_t len);
    static double factorFor(char16_t type, int32_t len);
    static double modFor(char16_t type, int32_t len);

public:
    void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;
    void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;

    // Generated
    CellElapsedFormatter(::java::lang::String* pattern);
protected:
    CellElapsedFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::regex::Pattern*& PERCENTS();
    virtual ::java::lang::Class* getClass0();
    friend class CellElapsedFormatter_TimeSpec;
    friend class CellElapsedFormatter_ElapsedPartHandler;
};
