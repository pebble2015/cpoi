// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java
#include <org/apache/poi/hssf/dev/BiffViewer.hpp>

#include <java/io/File.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer_BiffDumpingStream.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer_BiffRecordListener.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer_CommandArgs.hpp>
#include <org/apache/poi/hssf/record/ArrayRecord.hpp>
#include <org/apache/poi/hssf/record/AutoFilterInfoRecord.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/BackupRecord.hpp>
#include <org/apache/poi/hssf/record/BlankRecord.hpp>
#include <org/apache/poi/hssf/record/BookBoolRecord.hpp>
#include <org/apache/poi/hssf/record/BoolErrRecord.hpp>
#include <org/apache/poi/hssf/record/BottomMarginRecord.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>
#include <org/apache/poi/hssf/record/CFHeader12Record.hpp>
#include <org/apache/poi/hssf/record/CFHeaderRecord.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/CFRuleRecord.hpp>
#include <org/apache/poi/hssf/record/CalcCountRecord.hpp>
#include <org/apache/poi/hssf/record/CalcModeRecord.hpp>
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>
#include <org/apache/poi/hssf/record/ColumnInfoRecord.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/CountryRecord.hpp>
#include <org/apache/poi/hssf/record/DBCellRecord.hpp>
#include <org/apache/poi/hssf/record/DConRefRecord.hpp>
#include <org/apache/poi/hssf/record/DSFRecord.hpp>
#include <org/apache/poi/hssf/record/DVALRecord.hpp>
#include <org/apache/poi/hssf/record/DVRecord.hpp>
#include <org/apache/poi/hssf/record/DateWindow1904Record.hpp>
#include <org/apache/poi/hssf/record/DefaultColWidthRecord.hpp>
#include <org/apache/poi/hssf/record/DefaultRowHeightRecord.hpp>
#include <org/apache/poi/hssf/record/DeltaRecord.hpp>
#include <org/apache/poi/hssf/record/DimensionsRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingGroupRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingRecordForBiffViewer.hpp>
#include <org/apache/poi/hssf/record/DrawingSelectionRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/ExtSSTRecord.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/ExternSheetRecord.hpp>
#include <org/apache/poi/hssf/record/ExternalNameRecord.hpp>
#include <org/apache/poi/hssf/record/FeatHdrRecord.hpp>
#include <org/apache/poi/hssf/record/FeatRecord.hpp>
#include <org/apache/poi/hssf/record/FilePassRecord.hpp>
#include <org/apache/poi/hssf/record/FileSharingRecord.hpp>
#include <org/apache/poi/hssf/record/FnGroupCountRecord.hpp>
#include <org/apache/poi/hssf/record/FontRecord.hpp>
#include <org/apache/poi/hssf/record/FooterRecord.hpp>
#include <org/apache/poi/hssf/record/FormatRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/GridsetRecord.hpp>
#include <org/apache/poi/hssf/record/GutsRecord.hpp>
#include <org/apache/poi/hssf/record/HCenterRecord.hpp>
#include <org/apache/poi/hssf/record/HeaderRecord.hpp>
#include <org/apache/poi/hssf/record/HideObjRecord.hpp>
#include <org/apache/poi/hssf/record/HorizontalPageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>
#include <org/apache/poi/hssf/record/IndexRecord.hpp>
#include <org/apache/poi/hssf/record/InterfaceEndRecord.hpp>
#include <org/apache/poi/hssf/record/InterfaceHdrRecord.hpp>
#include <org/apache/poi/hssf/record/IterationRecord.hpp>
#include <org/apache/poi/hssf/record/LabelRecord.hpp>
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>
#include <org/apache/poi/hssf/record/LeftMarginRecord.hpp>
#include <org/apache/poi/hssf/record/MMSRecord.hpp>
#include <org/apache/poi/hssf/record/MergeCellsRecord.hpp>
#include <org/apache/poi/hssf/record/MulBlankRecord.hpp>
#include <org/apache/poi/hssf/record/MulRKRecord.hpp>
#include <org/apache/poi/hssf/record/NameCommentRecord.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/PaletteRecord.hpp>
#include <org/apache/poi/hssf/record/PaneRecord.hpp>
#include <org/apache/poi/hssf/record/PasswordRecord.hpp>
#include <org/apache/poi/hssf/record/PasswordRev4Record.hpp>
#include <org/apache/poi/hssf/record/PrecisionRecord.hpp>
#include <org/apache/poi/hssf/record/PrintGridlinesRecord.hpp>
#include <org/apache/poi/hssf/record/PrintHeadersRecord.hpp>
#include <org/apache/poi/hssf/record/PrintSetupRecord.hpp>
#include <org/apache/poi/hssf/record/ProtectRecord.hpp>
#include <org/apache/poi/hssf/record/ProtectionRev4Record.hpp>
#include <org/apache/poi/hssf/record/RKRecord.hpp>
#include <org/apache/poi/hssf/record/RecalcIdRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream_LeftoverDataException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/RefModeRecord.hpp>
#include <org/apache/poi/hssf/record/RefreshAllRecord.hpp>
#include <org/apache/poi/hssf/record/RightMarginRecord.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/SCLRecord.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/SaveRecalcRecord.hpp>
#include <org/apache/poi/hssf/record/SelectionRecord.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/StringRecord.hpp>
#include <org/apache/poi/hssf/record/StyleRecord.hpp>
#include <org/apache/poi/hssf/record/SupBookRecord.hpp>
#include <org/apache/poi/hssf/record/TabIdRecord.hpp>
#include <org/apache/poi/hssf/record/TableRecord.hpp>
#include <org/apache/poi/hssf/record/TableStylesRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/record/TopMarginRecord.hpp>
#include <org/apache/poi/hssf/record/UncalcedRecord.hpp>
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>
#include <org/apache/poi/hssf/record/UseSelFSRecord.hpp>
#include <org/apache/poi/hssf/record/VCenterRecord.hpp>
#include <org/apache/poi/hssf/record/VerticalPageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/WSBoolRecord.hpp>
#include <org/apache/poi/hssf/record/WindowOneRecord.hpp>
#include <org/apache/poi/hssf/record/WindowProtectRecord.hpp>
#include <org/apache/poi/hssf/record/WindowTwoRecord.hpp>
#include <org/apache/poi/hssf/record/WriteAccessRecord.hpp>
#include <org/apache/poi/hssf/record/WriteProtectRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AreaFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AreaRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AxisLineFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AxisOptionsRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AxisParentRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AxisRecord.hpp>
#include <org/apache/poi/hssf/record/chart/AxisUsedRecord.hpp>
#include <org/apache/poi/hssf/record/chart/BarRecord.hpp>
#include <org/apache/poi/hssf/record/chart/BeginRecord.hpp>
#include <org/apache/poi/hssf/record/chart/CatLabRecord.hpp>
#include <org/apache/poi/hssf/record/chart/CategorySeriesAxisRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartEndBlockRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartEndObjectRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartStartBlockRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartStartObjectRecord.hpp>
#include <org/apache/poi/hssf/record/chart/DatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/DataFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/DefaultDataLabelTextPropertiesRecord.hpp>
#include <org/apache/poi/hssf/record/chart/EndRecord.hpp>
#include <org/apache/poi/hssf/record/chart/FontBasisRecord.hpp>
#include <org/apache/poi/hssf/record/chart/FontIndexRecord.hpp>
#include <org/apache/poi/hssf/record/chart/FrameRecord.hpp>
#include <org/apache/poi/hssf/record/chart/LegendRecord.hpp>
#include <org/apache/poi/hssf/record/chart/LineFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/LinkedDataRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ObjectLinkRecord.hpp>
#include <org/apache/poi/hssf/record/chart/PlotAreaRecord.hpp>
#include <org/apache/poi/hssf/record/chart/PlotGrowthRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesIndexRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesListRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesTextRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesToChartGroupRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SheetPropertiesRecord.hpp>
#include <org/apache/poi/hssf/record/chart/TextRecord.hpp>
#include <org/apache/poi/hssf/record/chart/TickRecord.hpp>
#include <org/apache/poi/hssf/record/chart/UnitsRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ValueRangeRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/DataItemRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ExtendedPivotTableViewFieldsRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/PageItemRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/StreamIDRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewDefinitionRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewSourceRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::hssf::dev::BiffViewer::BiffViewer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::dev::BiffViewer::BiffViewer() 
    : BiffViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

char16_tArray*& poi::hssf::dev::BiffViewer::NEW_LINE_CHARS()
{
    clinit();
    return NEW_LINE_CHARS_;
}
char16_tArray* poi::hssf::dev::BiffViewer::NEW_LINE_CHARS_;

poi::util::POILogger*& poi::hssf::dev::BiffViewer::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::hssf::dev::BiffViewer::logger_;

void poi::hssf::dev::BiffViewer::ctor()
{
    super::ctor();
}

poi::hssf::record::RecordArray* poi::hssf::dev::BiffViewer::createRecords(::java::io::InputStream* is, ::java::io::PrintWriter* ps, BiffViewer_BiffRecordListener* recListener, bool dumpInterpretedRecords) /* throws(org.apache.poi.util.RecordFormatException) */
{
    clinit();
    ::java::util::List* temp = new ::java::util::ArrayList();
    auto recStream = new ::poi::hssf::record::RecordInputStream(is);
    while (true) {
        bool hasNext;
        try {
            hasNext = npc(recStream)->hasNextRecord();
        } catch (::poi::hssf::record::RecordInputStream_LeftoverDataException* e) {
            npc(logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Discarding "_j)->append(npc(recStream)->remaining())
                ->append(u" bytes and continuing"_j)->toString()), static_cast< ::java::lang::Object* >(e)}));
            npc(recStream)->readRemainder();
            hasNext = npc(recStream)->hasNextRecord();
        }
        if(!hasNext) {
            break;
        }
        npc(recStream)->nextRecord();
        if(npc(recStream)->getSid() == 0) {
            continue;
        }
        ::poi::hssf::record::Record* record;
        if(dumpInterpretedRecords) {
            record = createRecord(recStream);
            if(npc(record)->getSid() == ::poi::hssf::record::ContinueRecord::sid) {
                continue;
            }
            npc(temp)->add(static_cast< ::java::lang::Object* >(record));
            for (auto _i = npc(npc(recListener)->getRecentHeaders())->iterator(); _i->hasNext(); ) {
                ::java::lang::String* header = java_cast< ::java::lang::String* >(_i->next());
                {
                    npc(ps)->println(header);
                }
            }
            npc(ps)->print(static_cast< ::java::lang::Object* >(record));
        } else {
            npc(recStream)->readRemainder();
        }
        npc(ps)->println();
    }
    auto result = new ::poi::hssf::record::RecordArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

poi::hssf::record::Record* poi::hssf::dev::BiffViewer::createRecord(::poi::hssf::record::RecordInputStream* in)
{
    clinit();
    switch (npc(in)->getSid()) {
    case ::poi::hssf::record::chart::AreaFormatRecord::sid:
        return new ::poi::hssf::record::chart::AreaFormatRecord(in);
    case ::poi::hssf::record::chart::AreaRecord::sid:
        return new ::poi::hssf::record::chart::AreaRecord(in);
    case ::poi::hssf::record::ArrayRecord::sid:
        return new ::poi::hssf::record::ArrayRecord(in);
    case ::poi::hssf::record::chart::AxisLineFormatRecord::sid:
        return new ::poi::hssf::record::chart::AxisLineFormatRecord(in);
    case ::poi::hssf::record::chart::AxisOptionsRecord::sid:
        return new ::poi::hssf::record::chart::AxisOptionsRecord(in);
    case ::poi::hssf::record::chart::AxisParentRecord::sid:
        return new ::poi::hssf::record::chart::AxisParentRecord(in);
    case ::poi::hssf::record::chart::AxisRecord::sid:
        return new ::poi::hssf::record::chart::AxisRecord(in);
    case ::poi::hssf::record::chart::AxisUsedRecord::sid:
        return new ::poi::hssf::record::chart::AxisUsedRecord(in);
    case ::poi::hssf::record::AutoFilterInfoRecord::sid:
        return new ::poi::hssf::record::AutoFilterInfoRecord(in);
    case ::poi::hssf::record::BOFRecord::sid:
        return new ::poi::hssf::record::BOFRecord(in);
    case ::poi::hssf::record::BackupRecord::sid:
        return new ::poi::hssf::record::BackupRecord(in);
    case ::poi::hssf::record::chart::BarRecord::sid:
        return new ::poi::hssf::record::chart::BarRecord(in);
    case ::poi::hssf::record::chart::BeginRecord::sid:
        return new ::poi::hssf::record::chart::BeginRecord(in);
    case ::poi::hssf::record::BlankRecord::sid:
        return new ::poi::hssf::record::BlankRecord(in);
    case ::poi::hssf::record::BookBoolRecord::sid:
        return new ::poi::hssf::record::BookBoolRecord(in);
    case ::poi::hssf::record::BoolErrRecord::sid:
        return new ::poi::hssf::record::BoolErrRecord(in);
    case ::poi::hssf::record::BottomMarginRecord::sid:
        return new ::poi::hssf::record::BottomMarginRecord(in);
    case ::poi::hssf::record::BoundSheetRecord::sid:
        return new ::poi::hssf::record::BoundSheetRecord(in);
    case ::poi::hssf::record::CFHeaderRecord::sid:
        return new ::poi::hssf::record::CFHeaderRecord(in);
    case ::poi::hssf::record::CFHeader12Record::sid:
        return new ::poi::hssf::record::CFHeader12Record(in);
    case ::poi::hssf::record::CFRuleRecord::sid:
        return new ::poi::hssf::record::CFRuleRecord(in);
    case ::poi::hssf::record::CFRule12Record::sid:
        return new ::poi::hssf::record::CFRule12Record(in);
    case ::poi::hssf::record::CalcCountRecord::sid:
        return new ::poi::hssf::record::CalcCountRecord(in);
    case ::poi::hssf::record::CalcModeRecord::sid:
        return new ::poi::hssf::record::CalcModeRecord(in);
    case ::poi::hssf::record::chart::CategorySeriesAxisRecord::sid:
        return new ::poi::hssf::record::chart::CategorySeriesAxisRecord(in);
    case ::poi::hssf::record::chart::ChartFormatRecord::sid:
        return new ::poi::hssf::record::chart::ChartFormatRecord(in);
    case ::poi::hssf::record::chart::ChartRecord::sid:
        return new ::poi::hssf::record::chart::ChartRecord(in);
    case ::poi::hssf::record::CodepageRecord::sid:
        return new ::poi::hssf::record::CodepageRecord(in);
    case ::poi::hssf::record::ColumnInfoRecord::sid:
        return new ::poi::hssf::record::ColumnInfoRecord(in);
    case ::poi::hssf::record::ContinueRecord::sid:
        return new ::poi::hssf::record::ContinueRecord(in);
    case ::poi::hssf::record::CountryRecord::sid:
        return new ::poi::hssf::record::CountryRecord(in);
    case ::poi::hssf::record::DBCellRecord::sid:
        return new ::poi::hssf::record::DBCellRecord(in);
    case ::poi::hssf::record::DSFRecord::sid:
        return new ::poi::hssf::record::DSFRecord(in);
    case ::poi::hssf::record::chart::DatRecord::sid:
        return new ::poi::hssf::record::chart::DatRecord(in);
    case ::poi::hssf::record::chart::DataFormatRecord::sid:
        return new ::poi::hssf::record::chart::DataFormatRecord(in);
    case ::poi::hssf::record::DateWindow1904Record::sid:
        return new ::poi::hssf::record::DateWindow1904Record(in);
    case ::poi::hssf::record::DConRefRecord::sid:
        return new ::poi::hssf::record::DConRefRecord(in);
    case ::poi::hssf::record::DefaultColWidthRecord::sid:
        return new ::poi::hssf::record::DefaultColWidthRecord(in);
    case ::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord::sid:
        return new ::poi::hssf::record::chart::DefaultDataLabelTextPropertiesRecord(in);
    case ::poi::hssf::record::DefaultRowHeightRecord::sid:
        return new ::poi::hssf::record::DefaultRowHeightRecord(in);
    case ::poi::hssf::record::DeltaRecord::sid:
        return new ::poi::hssf::record::DeltaRecord(in);
    case ::poi::hssf::record::DimensionsRecord::sid:
        return new ::poi::hssf::record::DimensionsRecord(in);
    case ::poi::hssf::record::DrawingGroupRecord::sid:
        return new ::poi::hssf::record::DrawingGroupRecord(in);
    case ::poi::hssf::record::DrawingRecordForBiffViewer::sid:
        return new ::poi::hssf::record::DrawingRecordForBiffViewer(in);
    case ::poi::hssf::record::DrawingSelectionRecord::sid:
        return new ::poi::hssf::record::DrawingSelectionRecord(in);
    case ::poi::hssf::record::DVRecord::sid:
        return new ::poi::hssf::record::DVRecord(in);
    case ::poi::hssf::record::DVALRecord::sid:
        return new ::poi::hssf::record::DVALRecord(in);
    case ::poi::hssf::record::EOFRecord::sid:
        return new ::poi::hssf::record::EOFRecord(in);
    case ::poi::hssf::record::chart::EndRecord::sid:
        return new ::poi::hssf::record::chart::EndRecord(in);
    case ::poi::hssf::record::ExtSSTRecord::sid:
        return new ::poi::hssf::record::ExtSSTRecord(in);
    case ::poi::hssf::record::ExtendedFormatRecord::sid:
        return new ::poi::hssf::record::ExtendedFormatRecord(in);
    case ::poi::hssf::record::ExternSheetRecord::sid:
        return new ::poi::hssf::record::ExternSheetRecord(in);
    case ::poi::hssf::record::ExternalNameRecord::sid:
        return new ::poi::hssf::record::ExternalNameRecord(in);
    case ::poi::hssf::record::FeatRecord::sid:
        return new ::poi::hssf::record::FeatRecord(in);
    case ::poi::hssf::record::FeatHdrRecord::sid:
        return new ::poi::hssf::record::FeatHdrRecord(in);
    case ::poi::hssf::record::FilePassRecord::sid:
        return new ::poi::hssf::record::FilePassRecord(in);
    case ::poi::hssf::record::FileSharingRecord::sid:
        return new ::poi::hssf::record::FileSharingRecord(in);
    case ::poi::hssf::record::FnGroupCountRecord::sid:
        return new ::poi::hssf::record::FnGroupCountRecord(in);
    case ::poi::hssf::record::chart::FontBasisRecord::sid:
        return new ::poi::hssf::record::chart::FontBasisRecord(in);
    case ::poi::hssf::record::chart::FontIndexRecord::sid:
        return new ::poi::hssf::record::chart::FontIndexRecord(in);
    case ::poi::hssf::record::FontRecord::sid:
        return new ::poi::hssf::record::FontRecord(in);
    case ::poi::hssf::record::FooterRecord::sid:
        return new ::poi::hssf::record::FooterRecord(in);
    case ::poi::hssf::record::FormatRecord::sid:
        return new ::poi::hssf::record::FormatRecord(in);
    case ::poi::hssf::record::FormulaRecord::sid:
        return new ::poi::hssf::record::FormulaRecord(in);
    case ::poi::hssf::record::chart::FrameRecord::sid:
        return new ::poi::hssf::record::chart::FrameRecord(in);
    case ::poi::hssf::record::GridsetRecord::sid:
        return new ::poi::hssf::record::GridsetRecord(in);
    case ::poi::hssf::record::GutsRecord::sid:
        return new ::poi::hssf::record::GutsRecord(in);
    case ::poi::hssf::record::HCenterRecord::sid:
        return new ::poi::hssf::record::HCenterRecord(in);
    case ::poi::hssf::record::HeaderRecord::sid:
        return new ::poi::hssf::record::HeaderRecord(in);
    case ::poi::hssf::record::HideObjRecord::sid:
        return new ::poi::hssf::record::HideObjRecord(in);
    case ::poi::hssf::record::HorizontalPageBreakRecord::sid:
        return new ::poi::hssf::record::HorizontalPageBreakRecord(in);
    case ::poi::hssf::record::HyperlinkRecord::sid:
        return new ::poi::hssf::record::HyperlinkRecord(in);
    case ::poi::hssf::record::IndexRecord::sid:
        return new ::poi::hssf::record::IndexRecord(in);
    case ::poi::hssf::record::InterfaceEndRecord::sid:
        return ::poi::hssf::record::InterfaceEndRecord::create(in);
    case ::poi::hssf::record::InterfaceHdrRecord::sid:
        return new ::poi::hssf::record::InterfaceHdrRecord(in);
    case ::poi::hssf::record::IterationRecord::sid:
        return new ::poi::hssf::record::IterationRecord(in);
    case ::poi::hssf::record::LabelRecord::sid:
        return new ::poi::hssf::record::LabelRecord(in);
    case ::poi::hssf::record::LabelSSTRecord::sid:
        return new ::poi::hssf::record::LabelSSTRecord(in);
    case ::poi::hssf::record::LeftMarginRecord::sid:
        return new ::poi::hssf::record::LeftMarginRecord(in);
    case ::poi::hssf::record::chart::LegendRecord::sid:
        return new ::poi::hssf::record::chart::LegendRecord(in);
    case ::poi::hssf::record::chart::LineFormatRecord::sid:
        return new ::poi::hssf::record::chart::LineFormatRecord(in);
    case ::poi::hssf::record::chart::LinkedDataRecord::sid:
        return new ::poi::hssf::record::chart::LinkedDataRecord(in);
    case ::poi::hssf::record::MMSRecord::sid:
        return new ::poi::hssf::record::MMSRecord(in);
    case ::poi::hssf::record::MergeCellsRecord::sid:
        return new ::poi::hssf::record::MergeCellsRecord(in);
    case ::poi::hssf::record::MulBlankRecord::sid:
        return new ::poi::hssf::record::MulBlankRecord(in);
    case ::poi::hssf::record::MulRKRecord::sid:
        return new ::poi::hssf::record::MulRKRecord(in);
    case ::poi::hssf::record::NameRecord::sid:
        return new ::poi::hssf::record::NameRecord(in);
    case ::poi::hssf::record::NameCommentRecord::sid:
        return new ::poi::hssf::record::NameCommentRecord(in);
    case ::poi::hssf::record::NoteRecord::sid:
        return new ::poi::hssf::record::NoteRecord(in);
    case ::poi::hssf::record::NumberRecord::sid:
        return new ::poi::hssf::record::NumberRecord(in);
    case ::poi::hssf::record::ObjRecord::sid:
        return new ::poi::hssf::record::ObjRecord(in);
    case ::poi::hssf::record::chart::ObjectLinkRecord::sid:
        return new ::poi::hssf::record::chart::ObjectLinkRecord(in);
    case ::poi::hssf::record::PaletteRecord::sid:
        return new ::poi::hssf::record::PaletteRecord(in);
    case ::poi::hssf::record::PaneRecord::sid:
        return new ::poi::hssf::record::PaneRecord(in);
    case ::poi::hssf::record::PasswordRecord::sid:
        return new ::poi::hssf::record::PasswordRecord(in);
    case ::poi::hssf::record::PasswordRev4Record::sid:
        return new ::poi::hssf::record::PasswordRev4Record(in);
    case ::poi::hssf::record::chart::PlotAreaRecord::sid:
        return new ::poi::hssf::record::chart::PlotAreaRecord(in);
    case ::poi::hssf::record::chart::PlotGrowthRecord::sid:
        return new ::poi::hssf::record::chart::PlotGrowthRecord(in);
    case ::poi::hssf::record::PrecisionRecord::sid:
        return new ::poi::hssf::record::PrecisionRecord(in);
    case ::poi::hssf::record::PrintGridlinesRecord::sid:
        return new ::poi::hssf::record::PrintGridlinesRecord(in);
    case ::poi::hssf::record::PrintHeadersRecord::sid:
        return new ::poi::hssf::record::PrintHeadersRecord(in);
    case ::poi::hssf::record::PrintSetupRecord::sid:
        return new ::poi::hssf::record::PrintSetupRecord(in);
    case ::poi::hssf::record::ProtectRecord::sid:
        return new ::poi::hssf::record::ProtectRecord(in);
    case ::poi::hssf::record::ProtectionRev4Record::sid:
        return new ::poi::hssf::record::ProtectionRev4Record(in);
    case ::poi::hssf::record::RKRecord::sid:
        return new ::poi::hssf::record::RKRecord(in);
    case ::poi::hssf::record::RecalcIdRecord::sid:
        return new ::poi::hssf::record::RecalcIdRecord(in);
    case ::poi::hssf::record::RefModeRecord::sid:
        return new ::poi::hssf::record::RefModeRecord(in);
    case ::poi::hssf::record::RefreshAllRecord::sid:
        return new ::poi::hssf::record::RefreshAllRecord(in);
    case ::poi::hssf::record::RightMarginRecord::sid:
        return new ::poi::hssf::record::RightMarginRecord(in);
    case ::poi::hssf::record::RowRecord::sid:
        return new ::poi::hssf::record::RowRecord(in);
    case ::poi::hssf::record::SCLRecord::sid:
        return new ::poi::hssf::record::SCLRecord(in);
    case ::poi::hssf::record::SSTRecord::sid:
        return new ::poi::hssf::record::SSTRecord(in);
    case ::poi::hssf::record::SaveRecalcRecord::sid:
        return new ::poi::hssf::record::SaveRecalcRecord(in);
    case ::poi::hssf::record::SelectionRecord::sid:
        return new ::poi::hssf::record::SelectionRecord(in);
    case ::poi::hssf::record::chart::SeriesIndexRecord::sid:
        return new ::poi::hssf::record::chart::SeriesIndexRecord(in);
    case ::poi::hssf::record::chart::SeriesListRecord::sid:
        return new ::poi::hssf::record::chart::SeriesListRecord(in);
    case ::poi::hssf::record::chart::SeriesRecord::sid:
        return new ::poi::hssf::record::chart::SeriesRecord(in);
    case ::poi::hssf::record::chart::SeriesTextRecord::sid:
        return new ::poi::hssf::record::chart::SeriesTextRecord(in);
    case ::poi::hssf::record::chart::SeriesToChartGroupRecord::sid:
        return new ::poi::hssf::record::chart::SeriesToChartGroupRecord(in);
    case ::poi::hssf::record::SharedFormulaRecord::sid:
        return new ::poi::hssf::record::SharedFormulaRecord(in);
    case ::poi::hssf::record::chart::SheetPropertiesRecord::sid:
        return new ::poi::hssf::record::chart::SheetPropertiesRecord(in);
    case ::poi::hssf::record::StringRecord::sid:
        return new ::poi::hssf::record::StringRecord(in);
    case ::poi::hssf::record::StyleRecord::sid:
        return new ::poi::hssf::record::StyleRecord(in);
    case ::poi::hssf::record::SupBookRecord::sid:
        return new ::poi::hssf::record::SupBookRecord(in);
    case ::poi::hssf::record::TabIdRecord::sid:
        return new ::poi::hssf::record::TabIdRecord(in);
    case ::poi::hssf::record::TableStylesRecord::sid:
        return new ::poi::hssf::record::TableStylesRecord(in);
    case ::poi::hssf::record::TableRecord::sid:
        return new ::poi::hssf::record::TableRecord(in);
    case ::poi::hssf::record::TextObjectRecord::sid:
        return new ::poi::hssf::record::TextObjectRecord(in);
    case ::poi::hssf::record::chart::TextRecord::sid:
        return new ::poi::hssf::record::chart::TextRecord(in);
    case ::poi::hssf::record::chart::TickRecord::sid:
        return new ::poi::hssf::record::chart::TickRecord(in);
    case ::poi::hssf::record::TopMarginRecord::sid:
        return new ::poi::hssf::record::TopMarginRecord(in);
    case ::poi::hssf::record::UncalcedRecord::sid:
        return new ::poi::hssf::record::UncalcedRecord(in);
    case ::poi::hssf::record::chart::UnitsRecord::sid:
        return new ::poi::hssf::record::chart::UnitsRecord(in);
    case ::poi::hssf::record::UseSelFSRecord::sid:
        return new ::poi::hssf::record::UseSelFSRecord(in);
    case ::poi::hssf::record::VCenterRecord::sid:
        return new ::poi::hssf::record::VCenterRecord(in);
    case ::poi::hssf::record::chart::ValueRangeRecord::sid:
        return new ::poi::hssf::record::chart::ValueRangeRecord(in);
    case ::poi::hssf::record::VerticalPageBreakRecord::sid:
        return new ::poi::hssf::record::VerticalPageBreakRecord(in);
    case ::poi::hssf::record::WSBoolRecord::sid:
        return new ::poi::hssf::record::WSBoolRecord(in);
    case ::poi::hssf::record::WindowOneRecord::sid:
        return new ::poi::hssf::record::WindowOneRecord(in);
    case ::poi::hssf::record::WindowProtectRecord::sid:
        return new ::poi::hssf::record::WindowProtectRecord(in);
    case ::poi::hssf::record::WindowTwoRecord::sid:
        return new ::poi::hssf::record::WindowTwoRecord(in);
    case ::poi::hssf::record::WriteAccessRecord::sid:
        return new ::poi::hssf::record::WriteAccessRecord(in);
    case ::poi::hssf::record::WriteProtectRecord::sid:
        return new ::poi::hssf::record::WriteProtectRecord(in);
    case ::poi::hssf::record::chart::CatLabRecord::sid:
        return new ::poi::hssf::record::chart::CatLabRecord(in);
    case ::poi::hssf::record::chart::ChartEndBlockRecord::sid:
        return new ::poi::hssf::record::chart::ChartEndBlockRecord(in);
    case ::poi::hssf::record::chart::ChartEndObjectRecord::sid:
        return new ::poi::hssf::record::chart::ChartEndObjectRecord(in);
    case ::poi::hssf::record::chart::ChartFRTInfoRecord::sid:
        return new ::poi::hssf::record::chart::ChartFRTInfoRecord(in);
    case ::poi::hssf::record::chart::ChartStartBlockRecord::sid:
        return new ::poi::hssf::record::chart::ChartStartBlockRecord(in);
    case ::poi::hssf::record::chart::ChartStartObjectRecord::sid:
        return new ::poi::hssf::record::chart::ChartStartObjectRecord(in);
    case ::poi::hssf::record::pivottable::StreamIDRecord::sid:
        return new ::poi::hssf::record::pivottable::StreamIDRecord(in);
    case ::poi::hssf::record::pivottable::ViewSourceRecord::sid:
        return new ::poi::hssf::record::pivottable::ViewSourceRecord(in);
    case ::poi::hssf::record::pivottable::PageItemRecord::sid:
        return new ::poi::hssf::record::pivottable::PageItemRecord(in);
    case ::poi::hssf::record::pivottable::ViewDefinitionRecord::sid:
        return new ::poi::hssf::record::pivottable::ViewDefinitionRecord(in);
    case ::poi::hssf::record::pivottable::ViewFieldsRecord::sid:
        return new ::poi::hssf::record::pivottable::ViewFieldsRecord(in);
    case ::poi::hssf::record::pivottable::DataItemRecord::sid:
        return new ::poi::hssf::record::pivottable::DataItemRecord(in);
    case ::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::sid:
        return new ::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord(in);
    }

    return new ::poi::hssf::record::UnknownRecord(in);
}

void poi::hssf::dev::BiffViewer::main(::java::lang::StringArray* args) /* throws(IOException, CommandParseException) */
{
    clinit();
    auto cmdArgs = BiffViewer_CommandArgs::parse(args);
    ::java::io::PrintWriter* pw;
    if(npc(cmdArgs)->shouldOutputToFile()) {
        ::java::io::OutputStream* os = new ::java::io::FileOutputStream(::java::lang::StringBuilder().append(npc(npc(cmdArgs)->getFile())->getAbsolutePath())->append(u".out"_j)->toString());
        pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(new ::java::io::OutputStreamWriter(os, ::poi::util::StringUtil::UTF8())));
    } else {
        pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(new ::java::io::OutputStreamWriter(static_cast< ::java::io::OutputStream* >(::java::lang::System::out()), ::java::nio::charset::Charset::defaultCharset())));
    }
    ::poi::poifs::filesystem::NPOIFSFileSystem* fs = nullptr;
    ::java::io::InputStream* is = nullptr;
    {
        auto finally0 = finally([&] {
            ::poi::util::IOUtils::closeQuietly(is);
            ::poi::util::IOUtils::closeQuietly(fs);
            ::poi::util::IOUtils::closeQuietly(pw);
        });
        {
            fs = new ::poi::poifs::filesystem::NPOIFSFileSystem(npc(cmdArgs)->getFile(), true);
            is = getPOIFSInputStream(fs);
            if(npc(cmdArgs)->shouldOutputRawHexOnly()) {
                auto data = ::poi::util::IOUtils::toByteArray_(is);
                ::poi::util::HexDump::dump(data, static_cast< int64_t >(int32_t(0)), static_cast< ::java::io::OutputStream* >(::java::lang::System::out()), int32_t(0));
            } else {
                auto dumpInterpretedRecords = npc(cmdArgs)->shouldDumpRecordInterpretations();
                auto dumpHex = npc(cmdArgs)->shouldDumpBiffHex();
                auto zeroAlignHexDump = dumpInterpretedRecords;
                runBiffViewer(pw, is, dumpInterpretedRecords, dumpHex, zeroAlignHexDump, npc(cmdArgs)->suppressHeader());
            }
        }
    }

}

java::io::InputStream* poi::hssf::dev::BiffViewer::getPOIFSInputStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException, FileNotFoundException) */
{
    clinit();
    auto workbookName = ::poi::hssf::usermodel::HSSFWorkbook::getWorkbookDirEntryName(npc(fs)->getRoot());
    return npc(fs)->createDocumentInputStream(workbookName);
}

void poi::hssf::dev::BiffViewer::runBiffViewer(::java::io::PrintWriter* pw, ::java::io::InputStream* is, bool dumpInterpretedRecords, bool dumpHex, bool zeroAlignHexDump, bool suppressHeader)
{
    clinit();
    auto recListener = new BiffViewer_BiffRecordListener(dumpHex ? static_cast< ::java::io::Writer* >(pw) : static_cast< ::java::io::Writer* >(nullptr), zeroAlignHexDump, suppressHeader);
    is = new BiffViewer_BiffDumpingStream(is, recListener);
    createRecords(is, pw, recListener, dumpInterpretedRecords);
}

constexpr int32_t poi::hssf::dev::BiffViewer::DUMP_LINE_LEN;

char16_tArray*& poi::hssf::dev::BiffViewer::COLUMN_SEPARATOR()
{
    clinit();
    return COLUMN_SEPARATOR_;
}
char16_tArray* poi::hssf::dev::BiffViewer::COLUMN_SEPARATOR_;

void poi::hssf::dev::BiffViewer::hexDumpAligned(::java::io::Writer* w, ::int8_tArray* data, int32_t dumpLen, int32_t globalOffset, bool zeroAlignEachRecord)
{
    clinit();
    auto baseDataOffset = int32_t(0);
    auto globalStart = globalOffset + baseDataOffset;
    auto globalEnd = globalOffset + baseDataOffset + dumpLen;
    auto startDelta = globalStart % DUMP_LINE_LEN;
    auto endDelta = globalEnd % DUMP_LINE_LEN;
    if(zeroAlignEachRecord) {
        endDelta -= startDelta;
        if(endDelta < 0) {
            endDelta += DUMP_LINE_LEN;
        }
        startDelta = 0;
    }
    int32_t startLineAddr;
    int32_t endLineAddr;
    if(zeroAlignEachRecord) {
        endLineAddr = globalEnd - endDelta - (globalStart - startDelta);
        startLineAddr = 0;
    } else {
        startLineAddr = globalStart - startDelta;
        endLineAddr = globalEnd - endDelta;
    }
    auto lineDataOffset = baseDataOffset - startDelta;
    auto lineAddr = startLineAddr;
    if(startLineAddr == endLineAddr) {
        hexDumpLine(w, data, lineAddr, lineDataOffset, startDelta, endDelta);
        return;
    }
    hexDumpLine(w, data, lineAddr, lineDataOffset, startDelta, DUMP_LINE_LEN);
    while (true) {
        lineAddr += DUMP_LINE_LEN;
        lineDataOffset += DUMP_LINE_LEN;
        if(lineAddr >= endLineAddr) {
            break;
        }
        hexDumpLine(w, data, lineAddr, lineDataOffset, 0, DUMP_LINE_LEN);
    }
    if(endDelta != 0) {
        hexDumpLine(w, data, lineAddr, lineDataOffset, 0, endDelta);
    }
}

void poi::hssf::dev::BiffViewer::hexDumpLine(::java::io::Writer* w, ::int8_tArray* data, int32_t lineStartAddress, int32_t lineDataOffset, int32_t startDelta, int32_t endDelta)
{
    clinit();
    auto const buf = new ::char16_tArray(int32_t(8) + int32_t(2) * npc(COLUMN_SEPARATOR_)->length + DUMP_LINE_LEN * int32_t(3) - int32_t(1) + DUMP_LINE_LEN + npc(NEW_LINE_CHARS_)->length);
    if(startDelta >= endDelta) {
        throw new ::java::lang::IllegalArgumentException(u"Bad start/end delta"_j);
    }
    auto idx = int32_t(0);
    try {
        writeHex(buf, idx, lineStartAddress, 8);
        idx = arraycopy(COLUMN_SEPARATOR_, buf, idx + int32_t(8));
        for (auto i = int32_t(0); i < DUMP_LINE_LEN; i++) {
            if(i > 0) {
                (*buf)[idx++] = u' ';
            }
            if(i >= startDelta && i < endDelta) {
                writeHex(buf, idx, (*data)[lineDataOffset + i], 2);
            } else {
                (*buf)[idx] = u' ';
                (*buf)[idx + int32_t(1)] = u' ';
            }
            idx += 2;
        }
        idx = arraycopy(COLUMN_SEPARATOR_, buf, idx);
        for (auto i = int32_t(0); i < DUMP_LINE_LEN; i++) {
            auto ch = u' ';
            if(i >= startDelta && i < endDelta) {
                ch = getPrintableChar((*data)[lineDataOffset + i]);
            }
            (*buf)[idx++] = ch;
        }
        idx = arraycopy(NEW_LINE_CHARS_, buf, idx);
        npc(w)->write(buf, int32_t(0), idx);
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int32_t poi::hssf::dev::BiffViewer::arraycopy(::char16_tArray* in, ::char16_tArray* out, int32_t pos)
{
    clinit();
    auto idx = pos;
    for(auto c : *npc(in)) {
        (*out)[idx++] = c;
    }
    return idx;
}

char16_t poi::hssf::dev::BiffViewer::getPrintableChar(int8_t b)
{
    clinit();
    auto ib = static_cast< char16_t >((b & int32_t(255)));
    if(ib < 32 || ib > 126) {
        return u'.';
    }
    return ib;
}

void poi::hssf::dev::BiffViewer::writeHex(::char16_tArray* buf, int32_t startInBuf, int32_t value, int32_t nDigits) /* throws(IOException) */
{
    clinit();
    auto acc = value;
    for (auto i = nDigits - int32_t(1); i >= 0; i--) {
        auto digit = acc & int32_t(15);
        (*buf)[startInBuf + i] = static_cast< char16_t >((digit < 10 ? (u'0' + digit) : (u'A' + digit - int32_t(10))));
        acc = static_cast<uint32_t>(acc) >> 4;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::dev::BiffViewer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.BiffViewer", 34);
    return c;
}

void poi::hssf::dev::BiffViewer::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NEW_LINE_CHARS_ = npc(::java::lang::System::getProperty(u"line.separator"_j))->toCharArray_();
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(BiffViewer::class_()));
        COLUMN_SEPARATOR_ = npc(u" | "_j)->toCharArray_();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::dev::BiffViewer::getClass0()
{
    return class_();
}

