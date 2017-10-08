// Generated from /POI/java/org/apache/poi/hssf/record/ObjRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::ObjRecord final
    : public Record
    , public ::java::lang::Cloneable
{

public:
    typedef Record super;
    static constexpr int16_t sid { int16_t(93) };

private:
    static constexpr int32_t NORMAL_PAD_ALIGNMENT { int32_t(2) };
    static int32_t MAX_PAD_ALIGNMENT_;
    ::java::util::List* subrecords {  };
    ::int8_tArray* _uninterpretedData {  };
    bool _isPaddedToQuadByteMultiple {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

private:
    static bool canPaddingBeDiscarded(::int8_tArray* data, int32_t nRemainingBytes);

public:
    ::java::lang::String* toString() override;
    int32_t getRecordSize() override;
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;
    int16_t getSid() override;
    ::java::util::List* getSubRecords();
    void clearSubRecords();
    void addSubRecord(int32_t index, SubRecord* element);
    bool addSubRecord(SubRecord* o);
    ObjRecord* clone() override;

    // Generated
    ObjRecord();
    ObjRecord(RecordInputStream* in);
protected:
    ObjRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::int8_tArray* serialize();

private:
    static int32_t& MAX_PAD_ALIGNMENT();
    virtual ::java::lang::Class* getClass0();
};
