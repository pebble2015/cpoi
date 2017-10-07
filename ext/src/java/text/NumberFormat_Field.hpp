// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/text/Format_Field.hpp>

struct default_init_tag;

class java::text::NumberFormat_Field
    : public Format_Field
{

public:
    typedef Format_Field super;

private:
    static NumberFormat_Field* CURRENCY_;
    static NumberFormat_Field* DECIMAL_SEPARATOR_;
    static NumberFormat_Field* EXPONENT_;
    static NumberFormat_Field* EXPONENT_SIGN_;
    static NumberFormat_Field* EXPONENT_SYMBOL_;
    static NumberFormat_Field* FRACTION_;
    static NumberFormat_Field* GROUPING_SEPARATOR_;
    static NumberFormat_Field* INTEGER_;
    static NumberFormat_Field* PERCENT_;
    static NumberFormat_Field* PERMILLE_;
    static NumberFormat_Field* SIGN_;
    static ::java::util::Map* instanceMap_;
    static constexpr int64_t serialVersionUID { int64_t(7494728892700160890LL) };

protected:
    void ctor(::java::lang::String* name);

public: /* protected */
    ::java::lang::Object* readResolve() override;

    // Generated
    NumberFormat_Field(::java::lang::String* name);
protected:
    NumberFormat_Field(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static NumberFormat_Field*& CURRENCY();
    static NumberFormat_Field*& DECIMAL_SEPARATOR();
    static NumberFormat_Field*& EXPONENT();
    static NumberFormat_Field*& EXPONENT_SIGN();
    static NumberFormat_Field*& EXPONENT_SYMBOL();
    static NumberFormat_Field*& FRACTION();
    static NumberFormat_Field*& GROUPING_SEPARATOR();
    static NumberFormat_Field*& INTEGER();
    static NumberFormat_Field*& PERCENT();
    static NumberFormat_Field*& PERMILLE();
    static NumberFormat_Field*& SIGN();

private:
    static ::java::util::Map*& instanceMap();
    virtual ::java::lang::Class* getClass0();
};
