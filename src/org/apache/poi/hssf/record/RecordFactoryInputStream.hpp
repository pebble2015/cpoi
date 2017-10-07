// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactoryInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::RecordFactoryInputStream final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    RecordInputStream* _recStream {  };
    bool _shouldIncludeContinueRecords {  };
    RecordArray* _unreadRecordBuffer {  };
    int32_t _unreadRecordIndex {  };
    Record* _lastRecord {  };
    DrawingRecord* _lastDrawingRecord {  };
    int32_t _bofDepth {  };
    bool _lastRecordWasEOFLevelZero {  };
protected:
    void ctor(::java::io::InputStream* in, bool shouldIncludeContinueRecords);

public:
    Record* nextRecord();

private:
    Record* getNextUnreadRecord();
    Record* readNextRecord();

    // Generated

public:
    RecordFactoryInputStream(::java::io::InputStream* in, bool shouldIncludeContinueRecords);
protected:
    RecordFactoryInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class RecordFactoryInputStream_StreamEncryptionInfo;
};
