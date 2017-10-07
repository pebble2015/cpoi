// Generated from /POI/java/org/apache/poi/hssf/extractor/EventBasedExcelExtractor.java
#include <org/apache/poi/hssf/extractor/EventBasedExcelExtractor_TextListener.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/eventusermodel/FormatTrackingHSSFListener.hpp>
#include <org/apache/poi/hssf/extractor/EventBasedExcelExtractor.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/record/BOFRecord.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/LabelRecord.hpp>
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/NumberRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SSTRecord.hpp>
#include <org/apache/poi/hssf/record/StringRecord.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>

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

org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::EventBasedExcelExtractor_TextListener(EventBasedExcelExtractor *EventBasedExcelExtractor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , EventBasedExcelExtractor_this(EventBasedExcelExtractor_this)
{
    clinit();
}

org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::EventBasedExcelExtractor_TextListener(EventBasedExcelExtractor *EventBasedExcelExtractor_this) 
    : EventBasedExcelExtractor_TextListener(EventBasedExcelExtractor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::init()
{
    _text = new ::java::lang::StringBuffer();
    sheetNum = -int32_t(1);
    outputNextStringValue = false;
    nextRow = -int32_t(1);
}

void org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::ctor()
{
    super::ctor();
    init();
    sheetNames = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::processRecord(::org::apache::poi::hssf::record::Record* record)
{
    ::java::lang::String* thisText = nullptr;
    auto thisRow = -int32_t(1);
    {
        ::org::apache::poi::hssf::record::BoundSheetRecord* sr;
        ::org::apache::poi::hssf::record::BOFRecord* bof;
        ::org::apache::poi::hssf::record::FormulaRecord* frec;
        ::org::apache::poi::hssf::record::LabelRecord* lrec;
        ::org::apache::poi::hssf::record::LabelSSTRecord* lsrec;
        ::org::apache::poi::hssf::record::NoteRecord* nrec;
        ::org::apache::poi::hssf::record::NumberRecord* numrec;
        switch (npc(record)->getSid()) {
        case ::org::apache::poi::hssf::record::BoundSheetRecord::sid:
            sr = java_cast< ::org::apache::poi::hssf::record::BoundSheetRecord* >(record);
            npc(sheetNames)->add(static_cast< ::java::lang::Object* >(npc(sr)->getSheetname()));
            break;
        case ::org::apache::poi::hssf::record::BOFRecord::sid:
            bof = java_cast< ::org::apache::poi::hssf::record::BOFRecord* >(record);
            if(npc(bof)->getType() == ::org::apache::poi::hssf::record::BOFRecord::TYPE_WORKSHEET) {
                sheetNum++;
                rowNum = -int32_t(1);
                if(EventBasedExcelExtractor_this->_includeSheetNames) {
                    if(npc(_text)->length() > 0)
                        npc(_text)->append(u"\n"_j);

                    npc(_text)->append(java_cast< ::java::lang::String* >(npc(sheetNames)->get(sheetNum)));
                }
            }
            break;
        case ::org::apache::poi::hssf::record::SSTRecord::sid:
            sstRecord = java_cast< ::org::apache::poi::hssf::record::SSTRecord* >(record);
            break;
        case ::org::apache::poi::hssf::record::FormulaRecord::sid:
            frec = java_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(record);
            thisRow = npc(frec)->getRow();
            if(EventBasedExcelExtractor_this->_formulasNotResults) {
                thisText = ::org::apache::poi::hssf::model::HSSFFormulaParser::toFormulaString(static_cast< ::org::apache::poi::hssf::usermodel::HSSFWorkbook* >(nullptr), npc(frec)->getParsedExpression());
            } else {
                if(npc(frec)->hasCachedResultString()) {
                    outputNextStringValue = true;
                    nextRow = npc(frec)->getRow();
                } else {
                    thisText = npc(_ft)->formatNumberDateCell(frec);
                }
            }
            break;
        case ::org::apache::poi::hssf::record::StringRecord::sid:
            if(outputNextStringValue) {
                auto srec = java_cast< ::org::apache::poi::hssf::record::StringRecord* >(record);
                thisText = npc(srec)->getString();
                thisRow = nextRow;
                outputNextStringValue = false;
            }
            break;
        case ::org::apache::poi::hssf::record::LabelRecord::sid:
            lrec = java_cast< ::org::apache::poi::hssf::record::LabelRecord* >(record);
            thisRow = npc(lrec)->getRow();
            thisText = npc(lrec)->getValue();
            break;
        case ::org::apache::poi::hssf::record::LabelSSTRecord::sid:
            lsrec = java_cast< ::org::apache::poi::hssf::record::LabelSSTRecord* >(record);
            thisRow = npc(lsrec)->getRow();
            if(sstRecord == nullptr) {
                throw new ::java::lang::IllegalStateException(u"No SST record found"_j);
            }
            thisText = npc(npc(sstRecord)->getString(npc(lsrec)->getSSTIndex()))->toString();
            break;
        case ::org::apache::poi::hssf::record::NoteRecord::sid:
            nrec = java_cast< ::org::apache::poi::hssf::record::NoteRecord* >(record);
            thisRow = npc(nrec)->getRow();
            break;
        case ::org::apache::poi::hssf::record::NumberRecord::sid:
            numrec = java_cast< ::org::apache::poi::hssf::record::NumberRecord* >(record);
            thisRow = npc(numrec)->getRow();
            thisText = npc(_ft)->formatNumberDateCell(numrec);
            break;
        default:
            break;
        }
    }

    if(thisText != nullptr) {
        if(thisRow != rowNum) {
            rowNum = thisRow;
            if(npc(_text)->length() > 0)
                npc(_text)->append(u"\n"_j);

        } else {
            npc(_text)->append(u"\t"_j);
        }
        npc(_text)->append(thisText);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.extractor.EventBasedExcelExtractor.TextListener", 67);
    return c;
}

java::lang::Class* org::apache::poi::hssf::extractor::EventBasedExcelExtractor_TextListener::getClass0()
{
    return class_();
}

