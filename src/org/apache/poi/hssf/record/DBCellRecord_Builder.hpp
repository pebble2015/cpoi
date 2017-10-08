// Generated from /POI/java/org/apache/poi/hssf/record/DBCellRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::DBCellRecord_Builder final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int16_tArray* _cellOffsets {  };
    int32_t _nCellOffsets {  };
protected:
    void ctor();

public:
    void addCellOffset(int32_t cellRefOffset);
    DBCellRecord* build(int32_t rowOffset);

    // Generated
    DBCellRecord_Builder();
protected:
    DBCellRecord_Builder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DBCellRecord;
};
