// Generated from /POI/java/org/apache/poi/hssf/dev/BiffDrawingToXml.java
#include <org/apache/poi/hssf/dev/BiffDrawingToXml.hpp>

#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/DrawingGroupRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/Drawing.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::hssf::dev::BiffDrawingToXml::BiffDrawingToXml(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::dev::BiffDrawingToXml::BiffDrawingToXml()
    : BiffDrawingToXml(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& org::apache::poi::hssf::dev::BiffDrawingToXml::SHEET_NAME_PARAM()
{
    clinit();
    return SHEET_NAME_PARAM_;
}
java::lang::String* org::apache::poi::hssf::dev::BiffDrawingToXml::SHEET_NAME_PARAM_;

java::lang::String*& org::apache::poi::hssf::dev::BiffDrawingToXml::SHEET_INDEXES_PARAM()
{
    clinit();
    return SHEET_INDEXES_PARAM_;
}
java::lang::String* org::apache::poi::hssf::dev::BiffDrawingToXml::SHEET_INDEXES_PARAM_;

java::lang::String*& org::apache::poi::hssf::dev::BiffDrawingToXml::EXCLUDE_WORKBOOK_RECORDS()
{
    clinit();
    return EXCLUDE_WORKBOOK_RECORDS_;
}
java::lang::String* org::apache::poi::hssf::dev::BiffDrawingToXml::EXCLUDE_WORKBOOK_RECORDS_;

int32_t org::apache::poi::hssf::dev::BiffDrawingToXml::getAttributeIndex(::java::lang::String* attribute, ::java::lang::StringArray* params)
{
    clinit();
    for (auto i = int32_t(0); i < npc(params)->length; i++) {
        auto param = (*params)[i];
        if(npc(attribute)->equals(static_cast< ::java::lang::Object* >(param))) {
            return i;
        }
    }
    return -int32_t(1);
}

bool org::apache::poi::hssf::dev::BiffDrawingToXml::isExcludeWorkbookRecords(::java::lang::StringArray* params)
{
    clinit();
    return -int32_t(1) != getAttributeIndex(EXCLUDE_WORKBOOK_RECORDS_, params);
}

java::util::List* org::apache::poi::hssf::dev::BiffDrawingToXml::getIndexesByName(::java::lang::StringArray* params, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::java::util::List* list = new ::java::util::ArrayList();
    auto pos = getAttributeIndex(SHEET_NAME_PARAM_, params);
    if(-int32_t(1) != pos) {
        if(pos >= npc(params)->length) {
            throw new ::java::lang::IllegalArgumentException(u"sheet name param value was not specified"_j);
        }
        auto sheetName = (*params)[pos + int32_t(1)];
        auto sheetPos = npc(workbook)->getSheetIndex(sheetName);
        if(-int32_t(1) == sheetPos) {
            throw new ::java::lang::IllegalArgumentException(u"specified sheet name has not been found in xls file"_j);
        }
        npc(list)->add(::java::lang::Integer::valueOf(sheetPos));
    }
    return list;
}

java::util::List* org::apache::poi::hssf::dev::BiffDrawingToXml::getIndexesByIdArray_(::java::lang::StringArray* params)
{
    clinit();
    ::java::util::List* list = new ::java::util::ArrayList();
    auto pos = getAttributeIndex(SHEET_INDEXES_PARAM_, params);
    if(-int32_t(1) != pos) {
        if(pos >= npc(params)->length) {
            throw new ::java::lang::IllegalArgumentException(u"sheet list value was not specified"_j);
        }
        auto sheetParam = (*params)[pos + int32_t(1)];
        auto sheets = npc(sheetParam)->split(u","_j);
        for(auto sheet : *npc(sheets)) {
            npc(list)->add(::java::lang::Integer::valueOf(::java::lang::Integer::parseInt(sheet)));
        }
    }
    return list;
}

java::util::List* org::apache::poi::hssf::dev::BiffDrawingToXml::getSheetsIndexes(::java::lang::StringArray* params, ::org::apache::poi::hssf::usermodel::HSSFWorkbook* workbook)
{
    clinit();
    ::java::util::List* list = new ::java::util::ArrayList();
    npc(list)->addAll(static_cast< ::java::util::Collection* >(getIndexesByIdArray_(params)));
    npc(list)->addAll(static_cast< ::java::util::Collection* >(getIndexesByName(params, workbook)));
    if(0 == npc(list)->size()) {
        auto size = npc(workbook)->getNumberOfSheets();
        for (auto i = int32_t(0); i < size; i++) {
            npc(list)->add(::java::lang::Integer::valueOf(i));
        }
    }
    return list;
}

java::lang::String* org::apache::poi::hssf::dev::BiffDrawingToXml::getInputFileName(::java::lang::StringArray* params)
{
    clinit();
    return (*params)[npc(params)->length - int32_t(1)];
}

java::lang::String* org::apache::poi::hssf::dev::BiffDrawingToXml::getOutputFileName(::java::lang::String* input)
{
    clinit();
    if(npc(input)->contains(u"xls"_j)) {
        return npc(input)->replace(static_cast< ::java::lang::CharSequence* >(u".xls"_j), static_cast< ::java::lang::CharSequence* >(u".xml"_j));
    }
    return ::java::lang::StringBuilder().append(input)->append(u".xml"_j)->toString();
}

void org::apache::poi::hssf::dev::BiffDrawingToXml::main(::java::lang::StringArray* params) /* throws(IOException) */
{
    clinit();
    if(0 == npc(params)->length) {
        npc(::java::lang::System::out())->println(u"Usage: BiffDrawingToXml [options] inputWorkbook"_j);
        npc(::java::lang::System::out())->println(u"Options:"_j);
        npc(::java::lang::System::out())->println(u"  -exclude-workbook            exclude workbook-level records"_j);
        npc(::java::lang::System::out())->println(u"  -sheet-indexes   <indexes>   output sheets with specified indexes"_j);
        npc(::java::lang::System::out())->println(u"  -sheet-namek  <names>        output sheets with specified name"_j);
        return;
    }
    auto input = getInputFileName(params);
    auto inp = new ::java::io::FileInputStream(input);
    auto output = getOutputFileName(input);
    auto outputStream = new ::java::io::FileOutputStream(output);
    writeToFile(outputStream, inp, isExcludeWorkbookRecords(params), params);
    npc(inp)->close();
    npc(outputStream)->close();
}

void org::apache::poi::hssf::dev::BiffDrawingToXml::writeToFile(::java::io::OutputStream* fos, ::java::io::InputStream* xlsWorkbook, bool excludeWorkbookRecords, ::java::lang::StringArray* params) /* throws(IOException) */
{
    clinit();
    auto workbook = new ::org::apache::poi::hssf::usermodel::HSSFWorkbook(xlsWorkbook);
    auto internalWorkbook = npc(workbook)->getInternalWorkbook();
    auto r = java_cast< ::org::apache::poi::hssf::record::DrawingGroupRecord* >(npc(internalWorkbook)->findFirstRecordBySid(::org::apache::poi::hssf::record::DrawingGroupRecord::sid));
    auto builder = new ::java::lang::StringBuilder();
    npc(builder)->append(u"<workbook>\n"_j);
    auto tab = u"\t"_j;
    if(!excludeWorkbookRecords && r != nullptr) {
        npc(r)->decode();
        auto escherRecords = npc(r)->getEscherRecords();
        for (auto _i = npc(escherRecords)->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::ddf::EscherRecord* record = java_cast< ::org::apache::poi::ddf::EscherRecord* >(_i->next());
            {
                npc(builder)->append(npc(record)->toXml(tab));
            }
        }
    }
    auto sheets = getSheetsIndexes(params, workbook);
    for (auto _i = npc(sheets)->iterator(); _i->hasNext(); ) {
        ::java::lang::Integer* i = java_cast< ::java::lang::Integer* >(_i->next());
        {
            auto p = java_cast< ::org::apache::poi::hssf::usermodel::HSSFPatriarch* >(npc(java_cast< ::org::apache::poi::hssf::usermodel::HSSFSheet* >(npc(workbook)->getSheetAt((npc(i))->intValue())))->getDrawingPatriarch());
            if(p != nullptr) {
                npc(npc(npc(npc(builder)->append(tab))->append(u"<sheet"_j))->append(static_cast< ::java::lang::Object* >(i)))->append(u">\n"_j);
                npc(builder)->append(npc(npc(p)->getBoundAggregate())->toXml(::java::lang::StringBuilder().append(tab)->append(u"\t"_j)->toString()));
                npc(npc(npc(npc(builder)->append(tab))->append(u"</sheet"_j))->append(static_cast< ::java::lang::Object* >(i)))->append(u">\n"_j);
            }
        }
    }
    npc(builder)->append(u"</workbook>\n"_j);
    npc(fos)->write(npc(npc(builder)->toString())->getBytes(::org::apache::poi::util::StringUtil::UTF8()));
    npc(fos)->close();
    npc(workbook)->close();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::dev::BiffDrawingToXml::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.BiffDrawingToXml", 40);
    return c;
}

void org::apache::poi::hssf::dev::BiffDrawingToXml::clinit()
{
struct string_init_ {
    string_init_() {
    SHEET_NAME_PARAM_ = u"-sheet-name"_j;
    SHEET_INDEXES_PARAM_ = u"-sheet-indexes"_j;
    EXCLUDE_WORKBOOK_RECORDS_ = u"-exclude-workbook"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* org::apache::poi::hssf::dev::BiffDrawingToXml::getClass0()
{
    return class_();
}

