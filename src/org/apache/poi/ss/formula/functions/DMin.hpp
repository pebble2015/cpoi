// Generated from /POI/java/org/apache/poi/ss/formula/functions/DMin.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/IDStarAlgorithm.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::DMin final
    : public virtual ::java::lang::Object
    , public IDStarAlgorithm
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::formula::eval::ValueEval* minimumValue {  };

public:
    bool processMatch(::org::apache::poi::ss::formula::eval::ValueEval* eval) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* getResult() override;

    // Generated
    DMin();
protected:
    DMin(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
