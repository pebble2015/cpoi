// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ref2DPtgBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtgBase.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::ptg::Ref2DPtgBase
    : public RefPtgBase
{

public:
    typedef RefPtgBase super;

private:
    static constexpr int32_t SIZE { int32_t(5) };
protected:
    void ctor(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);
    void ctor(::org::apache::poi::ss::util::CellReference* cr);

public:
    void write(::org::apache::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toFormulaString() override;

public: /* protected */
    virtual int8_t getSid() = 0;

public:
    int32_t getSize() override;
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    Ref2DPtgBase(int32_t row, int32_t column, bool isRowRelative, bool isColumnRelative);
    Ref2DPtgBase(::org::apache::poi::util::LittleEndianInput* in);
    Ref2DPtgBase(::org::apache::poi::ss::util::CellReference* cr);
protected:
    Ref2DPtgBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
