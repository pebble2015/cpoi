// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactoryInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RecordFactoryInputStream_StreamEncryptionInfo final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _initialRecordsSize {  };
    FilePassRecord* _filePassRec {  };
    Record* _lastRecord {  };
    bool _hasBOFRecord {  };
protected:
    void ctor(RecordInputStream* rs, ::java::util::List* outputRecs);

public:
    RecordInputStream* createDecryptingStream(::java::io::InputStream* original);
    bool hasEncryption();
    Record* getLastRecord();
    bool hasBOFRecord();

    // Generated
    RecordFactoryInputStream_StreamEncryptionInfo(RecordInputStream* rs, ::java::util::List* outputRecs);
protected:
    RecordFactoryInputStream_StreamEncryptionInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordFactoryInputStream;
};
