// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/MissingRowDummyRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/DummyRecordBase.hpp>

struct default_init_tag;

class org::apache::poi::hssf::eventusermodel::dummyrecord::MissingRowDummyRecord final
    : public DummyRecordBase
{

public:
    typedef DummyRecordBase super;

private:
    int32_t rowNumber {  };
protected:
    void ctor(int32_t rowNumber);

public:
    int32_t getRowNumber();

    // Generated
    MissingRowDummyRecord(int32_t rowNumber);
protected:
    MissingRowDummyRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
