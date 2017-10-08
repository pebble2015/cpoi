// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/LastCellOfRowDummyRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/DummyRecordBase.hpp>

struct default_init_tag;

class poi::hssf::eventusermodel::dummyrecord::LastCellOfRowDummyRecord final
    : public DummyRecordBase
{

public:
    typedef DummyRecordBase super;

private:
    int32_t row {  };
    int32_t lastColumnNumber {  };
protected:
    void ctor(int32_t row, int32_t lastColumnNumber);

public:
    int32_t getRow();
    int32_t getLastColumnNumber();
    ::java::lang::String* toString() override;

    // Generated
    LastCellOfRowDummyRecord(int32_t row, int32_t lastColumnNumber);
protected:
    LastCellOfRowDummyRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
