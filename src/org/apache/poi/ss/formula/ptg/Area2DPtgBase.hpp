// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Area2DPtgBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtgBase.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::Area2DPtgBase
    : public AreaPtgBase
{

public:
    typedef AreaPtgBase super;

private:
    static constexpr int32_t SIZE { int32_t(9) };
protected:
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative);
    void ctor(::org::apache::poi::ss::util::AreaReference* ar);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public: /* protected */
    virtual int8_t getSid() = 0;

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    Area2DPtgBase(int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn, bool firstRowRelative, bool lastRowRelative, bool firstColRelative, bool lastColRelative);
    Area2DPtgBase(::org::apache::poi::ss::util::AreaReference* ar);
    Area2DPtgBase(::org::apache::poi::util::LittleEndianInput* in);
protected:
    Area2DPtgBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
