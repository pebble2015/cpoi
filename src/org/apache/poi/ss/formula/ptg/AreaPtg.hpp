// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AreaPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Area2DPtgBase.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::AreaPtg final
    : public Area2DPtgBase
{

public:
    typedef Area2DPtgBase super;
    static constexpr int16_t sid { int16_t(37) };
protected:
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative);
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(::java::lang::String* arearef);
    void ctor(::poi::ss::util::AreaReference* arearef);

public: /* protected */
    int8_t getSid() override;

    // Generated

public:
    AreaPtg(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative);
    AreaPtg(::poi::util::LittleEndianInput* in);
    AreaPtg(::java::lang::String* arearef);
    AreaPtg(::poi::ss::util::AreaReference* arearef);
protected:
    AreaPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
