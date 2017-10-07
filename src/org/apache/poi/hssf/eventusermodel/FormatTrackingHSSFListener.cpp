// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/FormatTrackingHSSFListener.java
#include <org/apache/poi/hssf/eventusermodel/FormatTrackingHSSFListener.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/NumberFormat.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFListener.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/FormatRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormatter.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::FormatTrackingHSSFListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::FormatTrackingHSSFListener(HSSFListener* childListener) 
    : FormatTrackingHSSFListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(childListener);
}

org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::FormatTrackingHSSFListener(HSSFListener* childListener, ::java::util::Locale* locale) 
    : FormatTrackingHSSFListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(childListener,locale);
}

void org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::init()
{
    _customFormatRecords = new ::java::util::HashMap();
    _xfRecords = new ::java::util::ArrayList();
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::logger_;

void org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::ctor(HSSFListener* childListener)
{
    ctor(childListener, ::org::apache::poi::util::LocaleUtil::getUserLocale());
}

void org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::ctor(HSSFListener* childListener, ::java::util::Locale* locale)
{
    super::ctor();
    init();
    _childListener = childListener;
    _formatter = new ::org::apache::poi::hssf::usermodel::HSSFDataFormatter(locale);
    _defaultFormat = ::java::text::NumberFormat::getInstance(locale);
}

int32_t org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::getNumberOfCustomFormats()
{
    return npc(_customFormatRecords)->size();
}

int32_t org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::getNumberOfExtendedFormats()
{
    return npc(_xfRecords)->size();
}

void org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::processRecord(::org::apache::poi::hssf::record::Record* record)
{
    processRecordInternally(record);
    npc(_childListener)->processRecord(record);
}

void org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::processRecordInternally(::org::apache::poi::hssf::record::Record* record)
{
    if(dynamic_cast< ::org::apache::poi::hssf::record::FormatRecord* >(record) != nullptr) {
        auto fr = java_cast< ::org::apache::poi::hssf::record::FormatRecord* >(record);
        npc(_customFormatRecords)->put(::java::lang::Integer::valueOf(npc(fr)->getIndexCode()), fr);
    }
    if(dynamic_cast< ::org::apache::poi::hssf::record::ExtendedFormatRecord* >(record) != nullptr) {
        auto xr = java_cast< ::org::apache::poi::hssf::record::ExtendedFormatRecord* >(record);
        npc(_xfRecords)->add(static_cast< ::java::lang::Object* >(xr));
    }
}

java::lang::String* org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::formatNumberDateCell(::org::apache::poi::hssf::record::CellValueRecordInterface* cell)
{
    double value;
    if(dynamic_cast< ::org::apache::poi::hssf::record::NumberRecord* >(cell) != nullptr) {
        value = npc((java_cast< ::org::apache::poi::hssf::record::NumberRecord* >(cell)))->getValue();
    } else if(dynamic_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(cell) != nullptr) {
        value = npc((java_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(cell)))->getValue();
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unsupported CellValue Record passed in "_j)->append(static_cast< ::java::lang::Object* >(cell))->toString());
    }
    auto formatIndex = getFormatIndex(cell);
    auto formatString = getFormatString(cell);
    if(formatString == nullptr) {
        return npc(_defaultFormat)->format(value);
    }
    return npc(_formatter)->formatRawCellContents(value, formatIndex, formatString);
}

java::lang::String* org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::getFormatString(int32_t formatIndex)
{
    ::java::lang::String* format = nullptr;
    if(formatIndex >= ::org::apache::poi::hssf::usermodel::HSSFDataFormat::getNumberOfBuiltinBuiltinFormats()) {
        auto tfr = java_cast< ::org::apache::poi::hssf::record::FormatRecord* >(npc(_customFormatRecords)->get(::java::lang::Integer::valueOf(formatIndex)));
        if(tfr == nullptr) {
            npc(logger_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Requested format at index "_j)->append(formatIndex)
                ->append(u", but it wasn't found"_j)->toString())}));
        } else {
            format = npc(tfr)->getFormatString();
        }
    } else {
        format = ::org::apache::poi::hssf::usermodel::HSSFDataFormat::getBuiltinFormat(static_cast< int16_t >(formatIndex));
    }
    return format;
}

java::lang::String* org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::getFormatString(::org::apache::poi::hssf::record::CellValueRecordInterface* cell)
{
    auto formatIndex = getFormatIndex(cell);
    if(formatIndex == -int32_t(1)) {
        return nullptr;
    }
    return getFormatString(formatIndex);
}

int32_t org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::getFormatIndex(::org::apache::poi::hssf::record::CellValueRecordInterface* cell)
{
    auto xfr = java_cast< ::org::apache::poi::hssf::record::ExtendedFormatRecord* >(npc(_xfRecords)->get(npc(cell)->getXFIndex()));
    if(xfr == nullptr) {
        npc(logger_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Cell "_j)->append(npc(cell)->getRow())
            ->append(u","_j)
            ->append(npc(cell)->getColumn())
            ->append(u" uses XF with index "_j)
            ->append(npc(cell)->getXFIndex())
            ->append(u", but we don't have that"_j)->toString())}));
        return -int32_t(1);
    }
    return npc(xfr)->getFormatIndex();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.FormatTrackingHSSFListener", 61);
    return c;
}

void org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FormatTrackingHSSFListener::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::eventusermodel::FormatTrackingHSSFListener::getClass0()
{
    return class_();
}

