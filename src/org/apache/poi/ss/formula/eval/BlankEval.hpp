// Generated from /POI/java/org/apache/poi/ss/formula/eval/BlankEval.java

#pragma once

#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::BlankEval final
    : public virtual ::java::lang::Object
    , public ValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    static BlankEval* instance_;
protected:
    void ctor();

    // Generated

private:
    BlankEval();
protected:
    BlankEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static BlankEval*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
