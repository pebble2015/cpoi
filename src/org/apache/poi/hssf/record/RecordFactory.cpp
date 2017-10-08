// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactory.java
#include <org/apache/poi/hssf/record/RecordFactory.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NoSuchMethodException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/Field.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Modifier.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
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
#include <org/apache/poi/hssf/record/CRNCountRecord.hpp>
#include <org/apache/poi/hssf/record/CRNRecord.hpp>
#include <org/apache/poi/hssf/record/CalcCountRecord.hpp>
#include <org/apache/poi/hssf/record/CalcModeRecord.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
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
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
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
#include <org/apache/poi/hssf/record/HeaderFooterRecord.hpp>
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
#include <org/apache/poi/hssf/record/ObjectProtectRecord.hpp>
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
#include <org/apache/poi/hssf/record/RecordFactory_I_RecordCreator.hpp>
#include <org/apache/poi/hssf/record/RecordFactory_ReflectionConstructorRecordCreator.hpp>
#include <org/apache/poi/hssf/record/RecordFactory_ReflectionMethodRecordCreator.hpp>
#include <org/apache/poi/hssf/record/RecordFactoryInputStream.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/RefModeRecord.hpp>
#include <org/apache/poi/hssf/record/RefreshAllRecord.hpp>
#include <org/apache/poi/hssf/record/RightMarginRecord.hpp>
#include <org/apache/poi/hssf/record/RowRecord.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/SaveRecalcRecord.hpp>
#include <org/apache/poi/hssf/record/ScenarioProtectRecord.hpp>
#include <org/apache/poi/hssf/record/SelectionRecord.hpp>
#include <org/apache/poi/hssf/record/SharedFormulaRecord.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
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
#include <org/apache/poi/hssf/record/UserSViewBegin.hpp>
#include <org/apache/poi/hssf/record/UserSViewEnd.hpp>
#include <org/apache/poi/hssf/record/VCenterRecord.hpp>
#include <org/apache/poi/hssf/record/VerticalPageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/WSBoolRecord.hpp>
#include <org/apache/poi/hssf/record/WindowOneRecord.hpp>
#include <org/apache/poi/hssf/record/WindowProtectRecord.hpp>
#include <org/apache/poi/hssf/record/WindowTwoRecord.hpp>
#include <org/apache/poi/hssf/record/WriteAccessRecord.hpp>
#include <org/apache/poi/hssf/record/WriteProtectRecord.hpp>
#include <org/apache/poi/hssf/record/chart/BeginRecord.hpp>
#include <org/apache/poi/hssf/record/chart/CatLabRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartEndBlockRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartEndObjectRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartStartBlockRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartStartObjectRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ChartTitleFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/DataFormatRecord.hpp>
#include <org/apache/poi/hssf/record/chart/EndRecord.hpp>
#include <org/apache/poi/hssf/record/chart/LegendRecord.hpp>
#include <org/apache/poi/hssf/record/chart/LinkedDataRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesTextRecord.hpp>
#include <org/apache/poi/hssf/record/chart/SeriesToChartGroupRecord.hpp>
#include <org/apache/poi/hssf/record/chart/ValueRangeRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/DataItemRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ExtendedPivotTableViewFieldsRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/PageItemRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/StreamIDRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewDefinitionRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.hpp>
#include <org/apache/poi/hssf/record/pivottable/ViewSourceRecord.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>
#include <Array.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
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
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::poi::hssf::record::BlankRecord, StandardRecordArray, CellValueRecordInterfaceArray, ::java::lang::CloneableArray > BlankRecordArray;
typedef ::SubArray< ::poi::hssf::record::CellRecord, StandardRecordArray, CellValueRecordInterfaceArray > CellRecordArray;
typedef ::SubArray< ::poi::hssf::record::NumberRecord, CellRecordArray, ::java::lang::CloneableArray > NumberRecordArray;
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

poi::hssf::record::RecordFactory::RecordFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RecordFactory::RecordFactory()
    : RecordFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::hssf::record::RecordFactory::NUM_RECORDS;

java::lang::ClassArray*& poi::hssf::record::RecordFactory::CONSTRUCTOR_ARGS()
{
    clinit();
    return CONSTRUCTOR_ARGS_;
}
java::lang::ClassArray* poi::hssf::record::RecordFactory::CONSTRUCTOR_ARGS_;

java::lang::ClassArray*& poi::hssf::record::RecordFactory::recordClasses()
{
    clinit();
    return recordClasses_;
}
java::lang::ClassArray* poi::hssf::record::RecordFactory::recordClasses_;

java::util::Map*& poi::hssf::record::RecordFactory::_recordCreatorsById()
{
    clinit();
    return _recordCreatorsById_;
}
java::util::Map* poi::hssf::record::RecordFactory::_recordCreatorsById_;

int16_tArray*& poi::hssf::record::RecordFactory::_allKnownRecordSIDs()
{
    clinit();
    return _allKnownRecordSIDs_;
}
int16_tArray* poi::hssf::record::RecordFactory::_allKnownRecordSIDs_;

java::lang::Class* poi::hssf::record::RecordFactory::getRecordClass(int32_t sid)
{
    clinit();
    auto rc = java_cast< RecordFactory_I_RecordCreator* >(npc(_recordCreatorsById_)->get(::java::lang::Integer::valueOf(sid)));
    if(rc == nullptr) {
        return nullptr;
    }
    return npc(rc)->getRecordClass();
}

poi::hssf::record::RecordArray* poi::hssf::record::RecordFactory::createRecord(RecordInputStream* in)
{
    clinit();
    auto record = createSingleRecord(in);
    if(dynamic_cast< DBCellRecord* >(record) != nullptr) {
        return new RecordArray({static_cast< Record* >(nullptr)});
    }
    if(dynamic_cast< RKRecord* >(record) != nullptr) {
        return new RecordArray({static_cast< Record* >(convertToNumberRecord(java_cast< RKRecord* >(record)))});
    }
    if(dynamic_cast< MulRKRecord* >(record) != nullptr) {
        return convertRKRecords(java_cast< MulRKRecord* >(record));
    }
    return new RecordArray({record});
}

poi::hssf::record::Record* poi::hssf::record::RecordFactory::createSingleRecord(RecordInputStream* in)
{
    clinit();
    auto constructor = java_cast< RecordFactory_I_RecordCreator* >(npc(_recordCreatorsById_)->get(::java::lang::Integer::valueOf(static_cast< int32_t >(npc(in)->getSid()))));
    if(constructor == nullptr) {
        return new UnknownRecord(in);
    }
    return npc(constructor)->create(in);
}

poi::hssf::record::NumberRecord* poi::hssf::record::RecordFactory::convertToNumberRecord(RKRecord* rk)
{
    clinit();
    auto num = new NumberRecord();
    npc(num)->setColumn(npc(rk)->getColumn());
    npc(num)->setRow(npc(rk)->getRow());
    npc(num)->setXFIndex(npc(rk)->getXFIndex());
    npc(num)->setValue(npc(rk)->getRKNumber());
    return num;
}

poi::hssf::record::NumberRecordArray* poi::hssf::record::RecordFactory::convertRKRecords(MulRKRecord* mrk)
{
    clinit();
    auto mulRecs = new NumberRecordArray(npc(mrk)->getNumColumns());
    for (auto k = int32_t(0); k < npc(mrk)->getNumColumns(); k++) {
        auto nr = new NumberRecord();
        npc(nr)->setColumn(static_cast< int16_t >((k + npc(mrk)->getFirstColumn())));
        npc(nr)->setRow(npc(mrk)->getRow());
        npc(nr)->setXFIndex(npc(mrk)->getXFAt(k));
        npc(nr)->setValue(npc(mrk)->getRKNumberAt(k));
        mulRecs->set(k, nr);
    }
    return mulRecs;
}

poi::hssf::record::BlankRecordArray* poi::hssf::record::RecordFactory::convertBlankRecords(MulBlankRecord* mbk)
{
    clinit();
    auto mulRecs = new BlankRecordArray(npc(mbk)->getNumColumns());
    for (auto k = int32_t(0); k < npc(mbk)->getNumColumns(); k++) {
        auto br = new BlankRecord();
        npc(br)->setColumn(static_cast< int16_t >((k + npc(mbk)->getFirstColumn())));
        npc(br)->setRow(npc(mbk)->getRow());
        npc(br)->setXFIndex(npc(mbk)->getXFAt(k));
        mulRecs->set(k, br);
    }
    return mulRecs;
}

int16_tArray* poi::hssf::record::RecordFactory::getAllKnownRecordSIDs()
{
    clinit();
    if(_allKnownRecordSIDs_ == nullptr) {
        auto results = new ::int16_tArray(npc(_recordCreatorsById_)->size());
        auto i = int32_t(0);
        for (auto _i = npc(npc(_recordCreatorsById_)->keySet())->iterator(); _i->hasNext(); ) {
            ::java::lang::Integer* sid = java_cast< ::java::lang::Integer* >(_i->next());
            {
                (*results)[i++] = npc(sid)->shortValue();
            }
        }
        ::java::util::Arrays::sort(results);
        _allKnownRecordSIDs_ = results;
    }
    return npc(_allKnownRecordSIDs_)->clone();
}

java::util::Map* poi::hssf::record::RecordFactory::recordsToMap(::java::lang::ClassArray* records)
{
    clinit();
    ::java::util::Map* result = new ::java::util::HashMap();
    ::java::util::Set* uniqueRecClasses = new ::java::util::HashSet(npc(records)->length * int32_t(3) / int32_t(2));
    for(auto recClass : *npc(records)) {
        if(!npc(Record::class_())->isAssignableFrom(recClass)) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid record sub-class ("_j)->append(npc(recClass)->getName())
                ->append(u")"_j)->toString());
        }
        if(::java::lang::reflect::Modifier::isAbstract(npc(recClass)->getModifiers())) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid record class ("_j)->append(npc(recClass)->getName())
                ->append(u") - must not be abstract"_j)->toString());
        }
        if(!npc(uniqueRecClasses)->add(static_cast< ::java::lang::Object* >(recClass))) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"duplicate record class ("_j)->append(npc(recClass)->getName())
                ->append(u")"_j)->toString());
        }
        int32_t sid;
        try {
            sid = npc(npc(recClass)->getField(u"sid"_j))->getShort(nullptr);
        } catch (::java::lang::Exception* illegalArgumentException) {
            throw new ::poi::util::RecordFormatException(u"Unable to determine record types"_j);
        }
        auto key = ::java::lang::Integer::valueOf(sid);
        if(npc(result)->containsKey(key)) {
            auto prevClass = npc(java_cast< RecordFactory_I_RecordCreator* >(npc(result)->get(key)))->getRecordClass();
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"duplicate record sid 0x"_j)->append(npc(::java::lang::Integer::toHexString(sid))->toUpperCase(::java::util::Locale::ROOT()))
                ->append(u" for classes ("_j)
                ->append(npc(recClass)->getName())
                ->append(u") and ("_j)
                ->append(npc(prevClass)->getName())
                ->append(u")"_j)->toString());
        }
        npc(result)->put(key, getRecordCreator(recClass));
    }
    return result;
}

poi::hssf::record::RecordFactory_I_RecordCreator* poi::hssf::record::RecordFactory::getRecordCreator(::java::lang::Class* recClass)
{
    clinit();
    try {
        ::java::lang::reflect::Constructor* constructor;
        constructor = npc(recClass)->getConstructor(CONSTRUCTOR_ARGS_);
        return new RecordFactory_ReflectionConstructorRecordCreator(constructor);
    } catch (::java::lang::NoSuchMethodException* e) {
    }
    try {
        auto m = npc(recClass)->getDeclaredMethod(u"create"_j, CONSTRUCTOR_ARGS_);
        return new RecordFactory_ReflectionMethodRecordCreator(m);
    } catch (::java::lang::NoSuchMethodException* e) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Failed to find constructor or create method for ("_j)->append(npc(recClass)->getName())
            ->append(u")."_j)->toString());
    }
}

java::util::List* poi::hssf::record::RecordFactory::createRecords(::java::io::InputStream* in) /* throws(org.apache.poi.util.RecordFormatException) */
{
    clinit();
    ::java::util::List* records = new ::java::util::ArrayList(NUM_RECORDS);
    auto recStream = new RecordFactoryInputStream(in, true);
    Record* record;
    while ((record = npc(recStream)->nextRecord()) != nullptr) {
        npc(records)->add(static_cast< ::java::lang::Object* >(record));
    }
    return records;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RecordFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordFactory", 40);
    return c;
}

void poi::hssf::record::RecordFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CONSTRUCTOR_ARGS_ = (new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(RecordInputStream::class_())}));
        recordClasses_ = new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(ArrayRecord::class_())
            , static_cast< ::java::lang::Class* >(AutoFilterInfoRecord::class_())
            , static_cast< ::java::lang::Class* >(BackupRecord::class_())
            , static_cast< ::java::lang::Class* >(BlankRecord::class_())
            , static_cast< ::java::lang::Class* >(BOFRecord::class_())
            , static_cast< ::java::lang::Class* >(BookBoolRecord::class_())
            , static_cast< ::java::lang::Class* >(BoolErrRecord::class_())
            , static_cast< ::java::lang::Class* >(BottomMarginRecord::class_())
            , static_cast< ::java::lang::Class* >(BoundSheetRecord::class_())
            , static_cast< ::java::lang::Class* >(CalcCountRecord::class_())
            , static_cast< ::java::lang::Class* >(CalcModeRecord::class_())
            , static_cast< ::java::lang::Class* >(CFHeaderRecord::class_())
            , static_cast< ::java::lang::Class* >(CFHeader12Record::class_())
            , static_cast< ::java::lang::Class* >(CFRuleRecord::class_())
            , static_cast< ::java::lang::Class* >(CFRule12Record::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartTitleFormatRecord::class_())
            , static_cast< ::java::lang::Class* >(CodepageRecord::class_())
            , static_cast< ::java::lang::Class* >(ColumnInfoRecord::class_())
            , static_cast< ::java::lang::Class* >(ContinueRecord::class_())
            , static_cast< ::java::lang::Class* >(CountryRecord::class_())
            , static_cast< ::java::lang::Class* >(CRNCountRecord::class_())
            , static_cast< ::java::lang::Class* >(CRNRecord::class_())
            , static_cast< ::java::lang::Class* >(DateWindow1904Record::class_())
            , static_cast< ::java::lang::Class* >(DBCellRecord::class_())
            , static_cast< ::java::lang::Class* >(DConRefRecord::class_())
            , static_cast< ::java::lang::Class* >(DefaultColWidthRecord::class_())
            , static_cast< ::java::lang::Class* >(DefaultRowHeightRecord::class_())
            , static_cast< ::java::lang::Class* >(DeltaRecord::class_())
            , static_cast< ::java::lang::Class* >(DimensionsRecord::class_())
            , static_cast< ::java::lang::Class* >(DrawingGroupRecord::class_())
            , static_cast< ::java::lang::Class* >(DrawingRecord::class_())
            , static_cast< ::java::lang::Class* >(DrawingSelectionRecord::class_())
            , static_cast< ::java::lang::Class* >(DSFRecord::class_())
            , static_cast< ::java::lang::Class* >(DVALRecord::class_())
            , static_cast< ::java::lang::Class* >(DVRecord::class_())
            , static_cast< ::java::lang::Class* >(EOFRecord::class_())
            , static_cast< ::java::lang::Class* >(ExtendedFormatRecord::class_())
            , static_cast< ::java::lang::Class* >(ExternalNameRecord::class_())
            , static_cast< ::java::lang::Class* >(ExternSheetRecord::class_())
            , static_cast< ::java::lang::Class* >(ExtSSTRecord::class_())
            , static_cast< ::java::lang::Class* >(FeatRecord::class_())
            , static_cast< ::java::lang::Class* >(FeatHdrRecord::class_())
            , static_cast< ::java::lang::Class* >(FilePassRecord::class_())
            , static_cast< ::java::lang::Class* >(FileSharingRecord::class_())
            , static_cast< ::java::lang::Class* >(FnGroupCountRecord::class_())
            , static_cast< ::java::lang::Class* >(FontRecord::class_())
            , static_cast< ::java::lang::Class* >(FooterRecord::class_())
            , static_cast< ::java::lang::Class* >(FormatRecord::class_())
            , static_cast< ::java::lang::Class* >(FormulaRecord::class_())
            , static_cast< ::java::lang::Class* >(GridsetRecord::class_())
            , static_cast< ::java::lang::Class* >(GutsRecord::class_())
            , static_cast< ::java::lang::Class* >(HCenterRecord::class_())
            , static_cast< ::java::lang::Class* >(HeaderRecord::class_())
            , static_cast< ::java::lang::Class* >(HeaderFooterRecord::class_())
            , static_cast< ::java::lang::Class* >(HideObjRecord::class_())
            , static_cast< ::java::lang::Class* >(HorizontalPageBreakRecord::class_())
            , static_cast< ::java::lang::Class* >(HyperlinkRecord::class_())
            , static_cast< ::java::lang::Class* >(IndexRecord::class_())
            , static_cast< ::java::lang::Class* >(InterfaceEndRecord::class_())
            , static_cast< ::java::lang::Class* >(InterfaceHdrRecord::class_())
            , static_cast< ::java::lang::Class* >(IterationRecord::class_())
            , static_cast< ::java::lang::Class* >(LabelRecord::class_())
            , static_cast< ::java::lang::Class* >(LabelSSTRecord::class_())
            , static_cast< ::java::lang::Class* >(LeftMarginRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::LegendRecord::class_())
            , static_cast< ::java::lang::Class* >(MergeCellsRecord::class_())
            , static_cast< ::java::lang::Class* >(MMSRecord::class_())
            , static_cast< ::java::lang::Class* >(MulBlankRecord::class_())
            , static_cast< ::java::lang::Class* >(MulRKRecord::class_())
            , static_cast< ::java::lang::Class* >(NameRecord::class_())
            , static_cast< ::java::lang::Class* >(NameCommentRecord::class_())
            , static_cast< ::java::lang::Class* >(NoteRecord::class_())
            , static_cast< ::java::lang::Class* >(NumberRecord::class_())
            , static_cast< ::java::lang::Class* >(ObjectProtectRecord::class_())
            , static_cast< ::java::lang::Class* >(ObjRecord::class_())
            , static_cast< ::java::lang::Class* >(PaletteRecord::class_())
            , static_cast< ::java::lang::Class* >(PaneRecord::class_())
            , static_cast< ::java::lang::Class* >(PasswordRecord::class_())
            , static_cast< ::java::lang::Class* >(PasswordRev4Record::class_())
            , static_cast< ::java::lang::Class* >(PrecisionRecord::class_())
            , static_cast< ::java::lang::Class* >(PrintGridlinesRecord::class_())
            , static_cast< ::java::lang::Class* >(PrintHeadersRecord::class_())
            , static_cast< ::java::lang::Class* >(PrintSetupRecord::class_())
            , static_cast< ::java::lang::Class* >(ProtectionRev4Record::class_())
            , static_cast< ::java::lang::Class* >(ProtectRecord::class_())
            , static_cast< ::java::lang::Class* >(RecalcIdRecord::class_())
            , static_cast< ::java::lang::Class* >(RefModeRecord::class_())
            , static_cast< ::java::lang::Class* >(RefreshAllRecord::class_())
            , static_cast< ::java::lang::Class* >(RightMarginRecord::class_())
            , static_cast< ::java::lang::Class* >(RKRecord::class_())
            , static_cast< ::java::lang::Class* >(RowRecord::class_())
            , static_cast< ::java::lang::Class* >(SaveRecalcRecord::class_())
            , static_cast< ::java::lang::Class* >(ScenarioProtectRecord::class_())
            , static_cast< ::java::lang::Class* >(SelectionRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::SeriesRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::SeriesTextRecord::class_())
            , static_cast< ::java::lang::Class* >(SharedFormulaRecord::class_())
            , static_cast< ::java::lang::Class* >(SSTRecord::class_())
            , static_cast< ::java::lang::Class* >(StringRecord::class_())
            , static_cast< ::java::lang::Class* >(StyleRecord::class_())
            , static_cast< ::java::lang::Class* >(SupBookRecord::class_())
            , static_cast< ::java::lang::Class* >(TabIdRecord::class_())
            , static_cast< ::java::lang::Class* >(TableRecord::class_())
            , static_cast< ::java::lang::Class* >(TableStylesRecord::class_())
            , static_cast< ::java::lang::Class* >(TextObjectRecord::class_())
            , static_cast< ::java::lang::Class* >(TopMarginRecord::class_())
            , static_cast< ::java::lang::Class* >(UncalcedRecord::class_())
            , static_cast< ::java::lang::Class* >(UseSelFSRecord::class_())
            , static_cast< ::java::lang::Class* >(UserSViewBegin::class_())
            , static_cast< ::java::lang::Class* >(UserSViewEnd::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ValueRangeRecord::class_())
            , static_cast< ::java::lang::Class* >(VCenterRecord::class_())
            , static_cast< ::java::lang::Class* >(VerticalPageBreakRecord::class_())
            , static_cast< ::java::lang::Class* >(WindowOneRecord::class_())
            , static_cast< ::java::lang::Class* >(WindowProtectRecord::class_())
            , static_cast< ::java::lang::Class* >(WindowTwoRecord::class_())
            , static_cast< ::java::lang::Class* >(WriteAccessRecord::class_())
            , static_cast< ::java::lang::Class* >(WriteProtectRecord::class_())
            , static_cast< ::java::lang::Class* >(WSBoolRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::BeginRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartFRTInfoRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartStartBlockRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartEndBlockRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartStartObjectRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::ChartEndObjectRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::CatLabRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::DataFormatRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::EndRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::LinkedDataRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::chart::SeriesToChartGroupRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::DataItemRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::ExtendedPivotTableViewFieldsRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::PageItemRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::StreamIDRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::ViewDefinitionRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::ViewFieldsRecord::class_())
            , static_cast< ::java::lang::Class* >(::poi::hssf::record::pivottable::ViewSourceRecord::class_())
        });
        _recordCreatorsById_ = recordsToMap(recordClasses_);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::RecordFactory::getClass0()
{
    return class_();
}

