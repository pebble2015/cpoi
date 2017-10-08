// Generated from /POI/java/org/apache/poi/hssf/record/HorizontalPageBreakRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::HorizontalPageBreakRecord final
    : public PageBreakRecord
    , public ::java::lang::Cloneable
{

public:
    typedef PageBreakRecord super;
    static constexpr int16_t sid { int16_t(27) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    int16_t getSid() override;
    PageBreakRecord* clone() override;

    // Generated
    HorizontalPageBreakRecord();
    HorizontalPageBreakRecord(RecordInputStream* in);
protected:
    HorizontalPageBreakRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
