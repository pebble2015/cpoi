// Generated from /POI/java/org/apache/poi/hssf/record/PageBreakRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::PageBreakRecord
    : public StandardRecord
{

public:
    typedef StandardRecord super;

private:
    static ::int32_tArray* EMPTY_INT_ARRAY_;
    ::java::util::List* _breaks {  };
    ::java::util::Map* _breakMap {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    virtual bool isEmpty();

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    virtual int32_t getNumBreaks();
    ::java::util::Iterator* getBreaksIterator();
    ::java::lang::String* toString() override;
    virtual void addBreak(int32_t main, int32_t subFrom, int32_t subTo);
    void removeBreak(int32_t main);
    PageBreakRecord_Break* getBreak(int32_t main);
    ::int32_tArray* getBreaks();

    // Generated

public: /* protected */
    PageBreakRecord();

public:
    PageBreakRecord(RecordInputStream* in);
protected:
    PageBreakRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::int32_tArray*& EMPTY_INT_ARRAY();
    virtual ::java::lang::Class* getClass0();
    friend class PageBreakRecord_Break;
};
