// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector final
    : public virtual ::java::lang::Object
    , public ::poi::hssf::record::aggregates::RecordAggregate_RecordVisitor
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _list {  };
    int32_t _totalSize {  };
protected:
    void ctor();

public:
    int32_t getTotalSize();
    void visitRecord(::poi::hssf::record::Record* r) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data);

    // Generated
    HSSFWorkbook_SheetRecordCollector();
protected:
    HSSFWorkbook_SheetRecordCollector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFWorkbook;
    friend class HSSFWorkbook_SheetIterator;
};
