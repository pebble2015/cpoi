// Generated from /POI/java/org/apache/poi/hssf/record/FooterRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/HeaderFooterBase.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::FooterRecord final
    : public HeaderFooterBase
    , public ::java::lang::Cloneable
{

public:
    typedef HeaderFooterBase super;
    static constexpr int16_t sid { int16_t(21) };
protected:
    void ctor(::java::lang::String* text);
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    int16_t getSid() override;
    FooterRecord* clone() override;

    // Generated
    FooterRecord(::java::lang::String* text);
    FooterRecord(RecordInputStream* in);
protected:
    FooterRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
