// Generated from /POI/java/org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::MultiOperandNumericFunction_DoubleList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::doubleArray* _array {  };
    int32_t _count {  };
protected:
    void ctor();

public:
    virtual ::doubleArray* toArray_();

private:
    void ensureCapacity(int32_t reqSize);

public:
    virtual void add(double value);

    // Generated
    MultiOperandNumericFunction_DoubleList();
protected:
    MultiOperandNumericFunction_DoubleList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class MultiOperandNumericFunction;
};
