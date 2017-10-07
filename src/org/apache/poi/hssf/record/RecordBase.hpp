// Generated from /POI/java/org/apache/poi/hssf/record/RecordBase.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RecordBase
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data) = 0;
    virtual int32_t getRecordSize() = 0;

    // Generated
    RecordBase();
protected:
    RecordBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
