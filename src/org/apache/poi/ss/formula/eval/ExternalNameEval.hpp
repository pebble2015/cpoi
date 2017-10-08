// Generated from /POI/java/org/apache/poi/ss/formula/eval/ExternalNameEval.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct default_init_tag;

class poi::ss::formula::eval::ExternalNameEval final
    : public virtual ::java::lang::Object
    , public ValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::formula::EvaluationName* _name {  };
protected:
    void ctor(::poi::ss::formula::EvaluationName* name);

public:
    ::poi::ss::formula::EvaluationName* getName();
    ::java::lang::String* toString() override;

    // Generated
    ExternalNameEval(::poi::ss::formula::EvaluationName* name);
protected:
    ExternalNameEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
