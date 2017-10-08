// Generated from /POI/java/org/apache/poi/hssf/record/BoundSheetRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class poi::hssf::record::BoundSheetRecord_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Comparator
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t compare(BoundSheetRecord* bsr1, BoundSheetRecord* bsr2);

    // Generated
    BoundSheetRecord_1();
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class BoundSheetRecord;
};
