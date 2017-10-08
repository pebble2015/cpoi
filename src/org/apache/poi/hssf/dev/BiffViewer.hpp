// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::dev::BiffViewer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::char16_tArray* NEW_LINE_CHARS_;
    static ::poi::util::POILogger* logger_;
protected:
    void ctor();

public:
    static ::poi::hssf::record::RecordArray* createRecords(::java::io::InputStream* is, ::java::io::PrintWriter* ps, BiffViewer_BiffRecordListener* recListener, bool dumpInterpretedRecords) /* throws(org.apache.poi.util.RecordFormatException) */;

private:
    static ::poi::hssf::record::Record* createRecord(::poi::hssf::record::RecordInputStream* in);

public:
    static void main(::java::lang::StringArray* args) /* throws(IOException, CommandParseException) */;

public: /* protected */
    static ::java::io::InputStream* getPOIFSInputStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException, FileNotFoundException) */;
    static void runBiffViewer(::java::io::PrintWriter* pw, ::java::io::InputStream* is, bool dumpInterpretedRecords, bool dumpHex, bool zeroAlignHexDump, bool suppressHeader);

private:
    static constexpr int32_t DUMP_LINE_LEN { int32_t(16) };
    static ::char16_tArray* COLUMN_SEPARATOR_;

public: /* package */
    static void hexDumpAligned(::java::io::Writer* w, ::int8_tArray* data, int32_t dumpLen, int32_t globalOffset, bool zeroAlignEachRecord);

private:
    static void hexDumpLine(::java::io::Writer* w, ::int8_tArray* data, int32_t lineStartAddress, int32_t lineDataOffset, int32_t startDelta, int32_t endDelta);
    static int32_t arraycopy(::char16_tArray* in, ::char16_tArray* out, int32_t pos);
    static char16_t getPrintableChar(int8_t b);
    static void writeHex(::char16_tArray* buf, int32_t startInBuf, int32_t value, int32_t nDigits) /* throws(IOException) */;

    // Generated
    BiffViewer();
protected:
    BiffViewer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::char16_tArray*& NEW_LINE_CHARS();
    static ::poi::util::POILogger*& logger();
    static ::char16_tArray*& COLUMN_SEPARATOR();
    virtual ::java::lang::Class* getClass0();
    friend class BiffViewer_CommandArgs;
    friend class BiffViewer_CommandParseException;
    friend class BiffViewer_BiffRecordListener;
    friend class BiffViewer_IBiffRecordListener;
    friend class BiffViewer_BiffDumpingStream;
};
