// Generated from /POI/java/org/apache/poi/ss/formula/functions/Match.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Match_SingleValueVector final
    : public virtual ::java::lang::Object
    , public LookupUtils_ValueVector
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::formula::eval::ValueEval* _value {  };
protected:
    void ctor(::org::apache::poi::ss::formula::eval::ValueEval* value);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* getItem(int32_t index) override;
    int32_t getSize() override;

    // Generated
    Match_SingleValueVector(::org::apache::poi::ss::formula::eval::ValueEval* value);
protected:
    Match_SingleValueVector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Match;
};
