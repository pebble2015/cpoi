// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t curRowIndex {  }, curColIndex {  };
    int32_t nextRowIndex {  }, nextColIndex {  };
protected:
    void ctor();

public: /* package */
    virtual void getNextPos();

public:
    bool hasNext() override;
    ::poi::hssf::record::CellValueRecordInterface* next() override;
    void remove() override;

    // Generated
    ValueRecordsAggregate_ValueIterator(ValueRecordsAggregate *ValueRecordsAggregate_this);
protected:
    ValueRecordsAggregate_ValueIterator(ValueRecordsAggregate *ValueRecordsAggregate_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    ValueRecordsAggregate *ValueRecordsAggregate_this;
    virtual ::java::lang::Class* getClass0();
    friend class ValueRecordsAggregate;
};
