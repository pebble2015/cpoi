// Generated from /POI/java/org/apache/poi/hssf/record/VerticalPageBreakRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::VerticalPageBreakRecord final
    : public PageBreakRecord
{

public:
    typedef PageBreakRecord super;
    static constexpr int16_t sid { int16_t(26) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    VerticalPageBreakRecord();
    VerticalPageBreakRecord(RecordInputStream* in);
protected:
    VerticalPageBreakRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
