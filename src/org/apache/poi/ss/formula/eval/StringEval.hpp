// Generated from /POI/java/org/apache/poi/ss/formula/eval/StringEval.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::StringEval final
    : public virtual ::java::lang::Object
    , public StringValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    static StringEval* EMPTY_INSTANCE_;
    ::java::lang::String* _value {  };
protected:
    void ctor(::org::apache::poi::ss::formula::ptg::Ptg* ptg);
    void ctor(::java::lang::String* value);

public:
    ::java::lang::String* getStringValue() override;
    ::java::lang::String* toString() override;

    // Generated
    StringEval(::org::apache::poi::ss::formula::ptg::Ptg* ptg);
    StringEval(::java::lang::String* value);
protected:
    StringEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static StringEval*& EMPTY_INSTANCE();

private:
    virtual ::java::lang::Class* getClass0();
};
