// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java
#include <org/apache/poi/hssf/dev/BiffViewer_BiffDumpingStream.hpp>

#include <java/io/DataInputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer_IBiffRecordListener.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::dev::BiffViewer_BiffDumpingStream::BiffViewer_BiffDumpingStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::dev::BiffViewer_BiffDumpingStream::BiffViewer_BiffDumpingStream(::java::io::InputStream* is, BiffViewer_IBiffRecordListener* listener) 
    : BiffViewer_BiffDumpingStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(is,listener);
}

void poi::hssf::dev::BiffViewer_BiffDumpingStream::ctor(::java::io::InputStream* is, BiffViewer_IBiffRecordListener* listener)
{
    super::ctor();
    _is = new ::java::io::DataInputStream(is);
    _listener = listener;
    _data = new ::int8_tArray(::poi::hssf::record::RecordInputStream::MAX_RECORD_DATA_SIZE + int32_t(4));
    _recordCounter = 0;
    _overallStreamPos = 0;
    _currentSize = 0;
    _currentPos = 0;
}

int32_t poi::hssf::dev::BiffViewer_BiffDumpingStream::read() /* throws(IOException) */
{
    if(_currentPos >= _currentSize) {
        fillNextBuffer();
    }
    if(_currentPos >= _currentSize) {
        return -int32_t(1);
    }
    auto result = (*_data)[_currentPos] & int32_t(255);
    _currentPos++;
    _overallStreamPos++;
    formatBufferIfAtEndOfRec();
    return result;
}

int32_t poi::hssf::dev::BiffViewer_BiffDumpingStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    if(_currentPos >= _currentSize) {
        fillNextBuffer();
    }
    if(_currentPos >= _currentSize) {
        return -int32_t(1);
    }
    auto availSize = _currentSize - _currentPos;
    int32_t result;
    if(len > availSize) {
        npc(::java::lang::System::err())->println(u"Unexpected request to read past end of current biff record"_j);
        result = availSize;
    } else {
        result = len;
    }
    ::java::lang::System::arraycopy(_data, _currentPos, b, off, result);
    _currentPos += result;
    _overallStreamPos += result;
    formatBufferIfAtEndOfRec();
    return result;
}

int32_t poi::hssf::dev::BiffViewer_BiffDumpingStream::available() /* throws(IOException) */
{
    return _currentSize - _currentPos + npc(_is)->available();
}

void poi::hssf::dev::BiffViewer_BiffDumpingStream::fillNextBuffer() /* throws(IOException) */
{
    if(_innerHasReachedEOF) {
        return;
    }
    auto b0 = npc(_is)->read();
    if(b0 == -int32_t(1)) {
        _innerHasReachedEOF = true;
        return;
    }
    (*_data)[int32_t(0)] = static_cast< int8_t >(b0);
    npc(_is)->readFully(_data, int32_t(1), int32_t(3));
    int32_t len = ::poi::util::LittleEndian::getShort(_data, 2);
    npc(_is)->readFully(_data, int32_t(4), len);
    _currentPos = 0;
    _currentSize = len + int32_t(4);
    _recordCounter++;
}

void poi::hssf::dev::BiffViewer_BiffDumpingStream::formatBufferIfAtEndOfRec()
{
    if(_currentPos != _currentSize) {
        return;
    }
    auto dataSize = _currentSize - int32_t(4);
    int32_t sid = ::poi::util::LittleEndian::getShort(_data, 0);
    auto globalOffset = _overallStreamPos - _currentSize;
    npc(_listener)->processRecord(globalOffset, _recordCounter, sid, dataSize, _data);
}

void poi::hssf::dev::BiffViewer_BiffDumpingStream::close() /* throws(IOException) */
{
    npc(_is)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::dev::BiffViewer_BiffDumpingStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.BiffViewer.BiffDumpingStream", 52);
    return c;
}

int32_t poi::hssf::dev::BiffViewer_BiffDumpingStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* poi::hssf::dev::BiffViewer_BiffDumpingStream::getClass0()
{
    return class_();
}

