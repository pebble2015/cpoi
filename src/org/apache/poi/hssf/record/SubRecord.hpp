// Generated from /POI/java/org/apache/poi/hssf/record/SubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::SubRecord
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static SubRecord* createSubRecord(::poi::util::LittleEndianInput* in, int32_t cmoOt);

public: /* protected */
    virtual int32_t getDataSize() = 0;

public:
    virtual ::int8_tArray* serialize();
    virtual void serialize(::poi::util::LittleEndianOutput* out) = 0;
    SubRecord* clone() = 0;
    virtual bool isTerminating();

    // Generated

public: /* protected */
    SubRecord();
protected:
    SubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SubRecord_UnknownSubRecord;
};
