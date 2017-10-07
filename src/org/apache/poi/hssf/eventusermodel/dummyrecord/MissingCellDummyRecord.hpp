// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/MissingCellDummyRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/DummyRecordBase.hpp>

struct default_init_tag;

class org::apache::poi::hssf::eventusermodel::dummyrecord::MissingCellDummyRecord final
    : public DummyRecordBase
{

public:
    typedef DummyRecordBase super;

private:
    int32_t row {  };
    int32_t column {  };
protected:
    void ctor(int32_t row, int32_t column);

public:
    int32_t getRow();
    int32_t getColumn();

    // Generated
    MissingCellDummyRecord(int32_t row, int32_t column);
protected:
    MissingCellDummyRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};