// Generated from /POI/java/org/apache/poi/hssf/record/DrawingRecordForBiffViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/AbstractEscherHolderRecord.hpp>

struct default_init_tag;

class poi::hssf::record::DrawingRecordForBiffViewer final
    : public AbstractEscherHolderRecord
{

public:
    typedef AbstractEscherHolderRecord super;
    static constexpr int16_t sid { int16_t(236) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);
    void ctor(DrawingRecord* r);

private:
    static RecordInputStream* convertToInputStream(DrawingRecord* r);

public: /* protected */
    ::java::lang::String* getRecordName() override;

public:
    int16_t getSid() override;

    // Generated
    DrawingRecordForBiffViewer();
    DrawingRecordForBiffViewer(RecordInputStream* in);
    DrawingRecordForBiffViewer(DrawingRecord* r);
protected:
    DrawingRecordForBiffViewer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
