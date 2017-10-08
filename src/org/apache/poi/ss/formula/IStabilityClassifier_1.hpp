// Generated from /POI/java/org/apache/poi/ss/formula/IStabilityClassifier.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/IStabilityClassifier.hpp>

struct default_init_tag;

class poi::ss::formula::IStabilityClassifier_1
    : public virtual ::java::lang::Object
    , public virtual IStabilityClassifier
{

public:
    typedef ::java::lang::Object super;
    bool isCellFinal(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex) override;

    // Generated
    IStabilityClassifier_1(IStabilityClassifier *IStabilityClassifier_this);
    static ::java::lang::Class *class_();
    IStabilityClassifier *IStabilityClassifier_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class IStabilityClassifier;
};
