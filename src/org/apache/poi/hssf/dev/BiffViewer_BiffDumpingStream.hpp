// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class org::apache::poi::hssf::dev::BiffViewer_BiffDumpingStream final
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    ::java::io::DataInputStream* _is {  };
    BiffViewer_IBiffRecordListener* _listener {  };
    ::int8_tArray* _data {  };
    int32_t _recordCounter {  };
    int32_t _overallStreamPos {  };
    int32_t _currentPos {  };
    int32_t _currentSize {  };
    bool _innerHasReachedEOF {  };
protected:
    void ctor(::java::io::InputStream* is, BiffViewer_IBiffRecordListener* listener);

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    int32_t available() /* throws(IOException) */ override;

private:
    void fillNextBuffer() /* throws(IOException) */;
    void formatBufferIfAtEndOfRec();

public:
    void close() /* throws(IOException) */ override;

    // Generated
    BiffViewer_BiffDumpingStream(::java::io::InputStream* is, BiffViewer_IBiffRecordListener* listener);
protected:
    BiffViewer_BiffDumpingStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
    friend class BiffViewer;
    friend class BiffViewer_CommandArgs;
    friend class BiffViewer_CommandParseException;
    friend class BiffViewer_BiffRecordListener;
    friend class BiffViewer_IBiffRecordListener;
};
