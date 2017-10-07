// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartDataSource.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::charts::ChartDataSource
    : public virtual ::java::lang::Object
{
    virtual int32_t getPointCount() = 0;
    virtual ::java::lang::Object* getPointAt(int32_t index) = 0;
    virtual bool isReference() = 0;
    virtual bool isNumeric() = 0;
    virtual ::java::lang::String* getFormulaString() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
