// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::DVConstraint_FormulaValuePair
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _formula {  };
    ::java::lang::String* _value {  };

public:
    virtual ::java::lang::String* formula();
    virtual ::java::lang::Double* value();
    virtual ::java::lang::String* string();

    // Generated
    DVConstraint_FormulaValuePair();
protected:
    DVConstraint_FormulaValuePair(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DVConstraint;
    friend class DVConstraint_FormulaPair;
};
