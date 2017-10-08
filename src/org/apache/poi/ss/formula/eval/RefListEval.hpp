// Generated from /POI/java/org/apache/poi/ss/formula/eval/RefListEval.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

struct default_init_tag;

class poi::ss::formula::eval::RefListEval
    : public virtual ::java::lang::Object
    , public virtual ValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* list {  };
protected:
    void ctor(ValueEval* v1, ValueEval* v2);

private:
    void add(ValueEval* v);

public:
    virtual ::java::util::List* getList();

    // Generated
    RefListEval(ValueEval* v1, ValueEval* v2);
protected:
    RefListEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
