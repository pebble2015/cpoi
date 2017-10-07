// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::InternalSheet_RecordCloner final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _destList {  };
protected:
    void ctor(::java::util::List* destList);

public:
    void visitRecord(::org::apache::poi::hssf::record::Record* r) override;

    // Generated
    InternalSheet_RecordCloner(::java::util::List* destList);
protected:
    InternalSheet_RecordCloner(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class InternalSheet;
    friend class InternalSheet_spillAggregate_1;
    friend class InternalSheet_UnsupportedBOFType;
};
