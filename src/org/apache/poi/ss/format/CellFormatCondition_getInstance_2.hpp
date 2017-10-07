// Generated from /POI/java/org/apache/poi/ss/format/CellFormatCondition.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatCondition.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellFormatCondition_getInstance_2
    : public CellFormatCondition
{

public:
    typedef CellFormatCondition super;
    bool pass(double value) override;

    // Generated
    CellFormatCondition_getInstance_2(double c);
    static ::java::lang::Class *class_();
    double c;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellFormatCondition;
    friend class CellFormatCondition_getInstance_1;
    friend class CellFormatCondition_getInstance_3;
    friend class CellFormatCondition_getInstance_4;
    friend class CellFormatCondition_getInstance_5;
    friend class CellFormatCondition_getInstance_6;
};
