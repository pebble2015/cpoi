// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator final
    : public virtual ::java::lang::Object
    , public ::java::util::Comparator
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Comparator* instance_;
protected:
    void ctor();

public:
    int32_t compare(::org::apache::poi::hssf::record::ColumnInfoRecord* a, ::org::apache::poi::hssf::record::ColumnInfoRecord* b);
    static int32_t compareColInfos(::org::apache::poi::hssf::record::ColumnInfoRecord* a, ::org::apache::poi::hssf::record::ColumnInfoRecord* b);

    // Generated

private:
    ColumnInfoRecordsAggregate_CIRComparator();
protected:
    ColumnInfoRecordsAggregate_CIRComparator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual bool equals(::java::lang::Object* obj);
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;
    static ::java::util::Comparator*& instance();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ColumnInfoRecordsAggregate;
};
