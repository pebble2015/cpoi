// Generated from /POI/java/org/apache/poi/ss/formula/IStabilityClassifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::IStabilityClassifier
    : public virtual ::java::lang::Object
{

private:
    static IStabilityClassifier* TOTALLY_IMMUTABLE_;

public:
    virtual bool isCellFinal(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex) = 0;

    // Generated
    static ::java::lang::Class *class_();
    static IStabilityClassifier*& TOTALLY_IMMUTABLE();
};
