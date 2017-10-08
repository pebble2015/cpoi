// Generated from /POI/java/org/apache/poi/hssf/record/AbstractEscherHolderRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::AbstractEscherHolderRecord
    : public Record
    , public virtual ::java::lang::Cloneable
{

public:
    typedef Record super;

private:
    static bool DESERIALISE_;
    ::java::util::List* escherRecords {  };
    ::poi::hssf::util::LazilyConcatenatedByteArray_* rawDataContainer {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public: /* protected */
    virtual void convertRawBytesToEscherRecords();

private:
    void convertToEscherRecords(int32_t offset, int32_t size, ::int8_tArray* data);

public:
    ::java::lang::String* toString() override;

public: /* protected */
    virtual ::java::lang::String* getRecordName() = 0;

public:
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;
    int32_t getRecordSize() override;
    int16_t getSid() = 0;
    AbstractEscherHolderRecord* clone() override;
    virtual void addEscherRecord(int32_t index, ::poi::ddf::EscherRecord* element);
    virtual bool addEscherRecord(::poi::ddf::EscherRecord* element);
    virtual ::java::util::List* getEscherRecords();
    virtual void clearEscherRecords();
    virtual ::poi::ddf::EscherContainerRecord* getEscherContainer();
    virtual ::poi::ddf::EscherRecord* findFirstWithId(int16_t id);

private:
    ::poi::ddf::EscherRecord* findFirstWithId(int16_t id, ::java::util::List* records);

public:
    virtual ::poi::ddf::EscherRecord* getEscherRecord(int32_t index);
    virtual void join(AbstractEscherHolderRecord* record);
    virtual void processContinueRecord(::int8_tArray* record);
    virtual ::int8_tArray* getRawData();
    virtual void setRawData(::int8_tArray* rawData);
    virtual void decode();

    // Generated
    AbstractEscherHolderRecord();
    AbstractEscherHolderRecord(RecordInputStream* in);
protected:
    AbstractEscherHolderRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    ::int8_tArray* serialize();

private:
    static bool& DESERIALISE();
    virtual ::java::lang::Class* getClass0();
};
