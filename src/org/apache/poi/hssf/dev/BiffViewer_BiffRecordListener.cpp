// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java
#include <org/apache/poi/hssf/dev/BiffViewer_BiffRecordListener.hpp>

#include <java/io/IOException.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer.hpp>
#include <org/apache/poi/util/HexDump.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::BiffViewer_BiffRecordListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::BiffViewer_BiffRecordListener(::java::io::Writer* hexDumpWriter, bool zeroAlignEachRecord, bool noHeader) 
    : BiffViewer_BiffRecordListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(hexDumpWriter,zeroAlignEachRecord,noHeader);
}

void org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::ctor(::java::io::Writer* hexDumpWriter, bool zeroAlignEachRecord, bool noHeader)
{
    super::ctor();
    _hexDumpWriter = hexDumpWriter;
    _zeroAlignEachRecord = zeroAlignEachRecord;
    _noHeader = noHeader;
    _headers = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::processRecord(int32_t globalOffset, int32_t recordCounter, int32_t sid, int32_t dataSize, ::int8_tArray* data)
{
    auto header = formatRecordDetails(globalOffset, sid, dataSize, recordCounter);
    if(!_noHeader) {
        npc(_headers)->add(static_cast< ::java::lang::Object* >(header));
    }
    auto w = _hexDumpWriter;
    if(w != nullptr) {
        try {
            npc(w)->write(header);
            npc(w)->write(BiffViewer::NEW_LINE_CHARS());
            BiffViewer::hexDumpAligned(w, data, dataSize + int32_t(4), globalOffset, _zeroAlignEachRecord);
            npc(w)->flush();
        } catch (::java::io::IOException* e) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        }
    }
}

java::util::List* org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::getRecentHeaders()
{
    auto result = _headers;
    _headers = new ::java::util::ArrayList();
    return result;
}

java::lang::String* org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::formatRecordDetails(int32_t globalOffset, int32_t sid, int32_t size, int32_t recordCounter)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder(int32_t(64));
    npc(npc(npc(npc(npc(sb)->append(u"Offset="_j))->append(::org::apache::poi::util::HexDump::intToHex(globalOffset)))->append(u"("_j))->append(globalOffset))->append(u")"_j);
    npc(npc(sb)->append(u" recno="_j))->append(recordCounter);
    npc(npc(sb)->append(u" sid="_j))->append(::org::apache::poi::util::HexDump::shortToHex(sid));
    npc(npc(npc(npc(npc(sb)->append(u" size="_j))->append(::org::apache::poi::util::HexDump::shortToHex(size)))->append(u"("_j))->append(size))->append(u")"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.BiffViewer.BiffRecordListener", 53);
    return c;
}

java::lang::Class* org::apache::poi::hssf::dev::BiffViewer_BiffRecordListener::getClass0()
{
    return class_();
}

