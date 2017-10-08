// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer_IBiffRecordListener.hpp>

struct default_init_tag;

class poi::hssf::dev::BiffViewer_BiffRecordListener final
    : public virtual ::java::lang::Object
    , public BiffViewer_IBiffRecordListener
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::io::Writer* _hexDumpWriter {  };
    ::java::util::List* _headers {  };
    bool _zeroAlignEachRecord {  };
    bool _noHeader {  };
protected:
    void ctor(::java::io::Writer* hexDumpWriter, bool zeroAlignEachRecord, bool noHeader);

public:
    void processRecord(int32_t globalOffset, int32_t recordCounter, int32_t sid, int32_t dataSize, ::int8_tArray* data) override;
    ::java::util::List* getRecentHeaders();

private:
    static ::java::lang::String* formatRecordDetails(int32_t globalOffset, int32_t sid, int32_t size, int32_t recordCounter);

    // Generated

public:
    BiffViewer_BiffRecordListener(::java::io::Writer* hexDumpWriter, bool zeroAlignEachRecord, bool noHeader);
protected:
    BiffViewer_BiffRecordListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BiffViewer;
    friend class BiffViewer_CommandArgs;
    friend class BiffViewer_CommandParseException;
    friend class BiffViewer_IBiffRecordListener;
    friend class BiffViewer_BiffDumpingStream;
};
