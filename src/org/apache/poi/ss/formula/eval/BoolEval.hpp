// Generated from /POI/java/org/apache/poi/ss/formula/eval/BoolEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::BoolEval final
    : public virtual ::java::lang::Object
    , public NumericValueEval
    , public StringValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    bool _value {  };
    static BoolEval* FALSE_;
    static BoolEval* TRUE_;

public:
    static BoolEval* valueOf(bool b);
protected:
    void ctor(bool value);

public:
    bool getBooleanValue();
    double getNumberValue() override;
    ::java::lang::String* getStringValue() override;
    ::java::lang::String* toString() override;

    // Generated

private:
    BoolEval(bool value);
protected:
    BoolEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static BoolEval*& FALSE();
    static BoolEval*& TRUE();

private:
    virtual ::java::lang::Class* getClass0();
};
