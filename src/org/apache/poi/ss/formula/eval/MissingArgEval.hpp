// Generated from /POI/java/org/apache/poi/ss/formula/eval/MissingArgEval.java

#pragma once

#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::MissingArgEval final
    : public virtual ::java::lang::Object
    , public ValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    static MissingArgEval* instance_;
protected:
    void ctor();

    // Generated

private:
    MissingArgEval();
protected:
    MissingArgEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static MissingArgEval*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
