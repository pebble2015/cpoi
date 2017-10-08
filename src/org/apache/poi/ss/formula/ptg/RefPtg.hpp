// Generated from /POI/java/org/apache/poi/ss/formula/ptg/RefPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref2DPtgBase.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::RefPtg final
    : public Ref2DPtgBase
{

public:
    typedef Ref2DPtgBase super;
    static constexpr int8_t sid { int8_t(36) };
protected:
    void ctor(::java::lang::String* cellref);
    void ctor(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative);
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(::poi::ss::util::CellReference* cr);

public: /* protected */
    int8_t getSid() override;

    // Generated

public:
    RefPtg(::java::lang::String* cellref);
    RefPtg(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative);
    RefPtg(::poi::util::LittleEndianInput* in);
    RefPtg(::poi::ss::util::CellReference* cr);
protected:
    RefPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
