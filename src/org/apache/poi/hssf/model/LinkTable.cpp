// Generated from /POI/java/org/apache/poi/hssf/model/LinkTable.java
#include <org/apache/poi/hssf/model/LinkTable.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/model/LinkTable_ExternalBookBlock.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/model/WorkbookRecordList.hpp>
#include <org/apache/poi/hssf/record/CountryRecord.hpp>
#include <org/apache/poi/hssf/record/ExternSheetRecord.hpp>
#include <org/apache/poi/hssf/record/ExternalNameRecord.hpp>
#include <org/apache/poi/hssf/record/NameCommentRecord.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/SupBookRecord.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/formula/ptg/ErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace model
                {
typedef ::SubArray< ::org::apache::poi::hssf::model::LinkTable_ExternalBookBlock, ::java::lang::ObjectArray > LinkTable_ExternalBookBlockArray;
                } // model

                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::ExternSheetRecord, StandardRecordArray > ExternSheetRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::ExternalNameRecord, StandardRecordArray > ExternalNameRecordArray;
                } // record
            } // hssf

            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::model::LinkTable::LinkTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::model::LinkTable::LinkTable(::java::util::List* inputList, int32_t startIndex, WorkbookRecordList* workbookRecordList, ::java::util::Map* commentRecords) 
    : LinkTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(inputList,startIndex,workbookRecordList,commentRecords);
}

org::apache::poi::hssf::model::LinkTable::LinkTable(int32_t numberOfSheets, WorkbookRecordList* workbookRecordList) 
    : LinkTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(numberOfSheets,workbookRecordList);
}

void org::apache::poi::hssf::model::LinkTable::ctor(::java::util::List* inputList, int32_t startIndex, WorkbookRecordList* workbookRecordList, ::java::util::Map* commentRecords)
{
    super::ctor();
    _workbookRecordList = workbookRecordList;
    auto rs = new RecordStream(inputList, startIndex);
    ::java::util::List* temp = new ::java::util::ArrayList();
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::SupBookRecord::class_())) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(new LinkTable_ExternalBookBlock(rs)));
    }
    _externalBookBlocks = new LinkTable_ExternalBookBlockArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(_externalBookBlocks));
    npc(temp)->clear();
    if(npc(_externalBookBlocks)->length > 0) {
        if(static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) != static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::ExternSheetRecord::class_())) {
            _externSheetRecord = nullptr;
        } else {
            _externSheetRecord = readExtSheetRecord(rs);
        }
    } else {
        _externSheetRecord = nullptr;
    }
    _definedNames = new ::java::util::ArrayList();
    while (true) {
        auto nextClass = npc(rs)->peekNextClass();
        if(static_cast< ::java::lang::Object* >(nextClass) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::NameRecord::class_())) {
            auto nr = java_cast< ::org::apache::poi::hssf::record::NameRecord* >(npc(rs)->getNext());
            npc(_definedNames)->add(static_cast< ::java::lang::Object* >(nr));
        } else if(static_cast< ::java::lang::Object* >(nextClass) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::NameCommentRecord::class_())) {
            auto ncr = java_cast< ::org::apache::poi::hssf::record::NameCommentRecord* >(npc(rs)->getNext());
            npc(commentRecords)->put(npc(ncr)->getNameText(), ncr);
        } else {
            break;
        }
    }
    _recordCount = npc(rs)->getCountRead();
    npc(npc(_workbookRecordList)->getRecords())->addAll(static_cast< ::java::util::Collection* >(npc(inputList)->subList(startIndex, startIndex + _recordCount)));
}

org::apache::poi::hssf::record::ExternSheetRecord* org::apache::poi::hssf::model::LinkTable::readExtSheetRecord(RecordStream* rs)
{
    clinit();
    ::java::util::List* temp = new ::java::util::ArrayList(int32_t(2));
    while (static_cast< ::java::lang::Object* >(npc(rs)->peekNextClass()) == static_cast< ::java::lang::Object* >(::org::apache::poi::hssf::record::ExternSheetRecord::class_())) {
        npc(temp)->add(static_cast< ::java::lang::Object* >(java_cast< ::org::apache::poi::hssf::record::ExternSheetRecord* >(npc(rs)->getNext())));
    }
    auto nItems = npc(temp)->size();
    if(nItems < 1) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Expected an EXTERNSHEET record but got ("_j)->append(npc(npc(rs)->peekNextClass())->getName())
            ->append(u")"_j)->toString());
    }
    if(nItems == 1) {
        return java_cast< ::org::apache::poi::hssf::record::ExternSheetRecord* >(npc(temp)->get(0));
    }
    auto esrs = new ::org::apache::poi::hssf::record::ExternSheetRecordArray(nItems);
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(esrs));
    return ::org::apache::poi::hssf::record::ExternSheetRecord::combine(esrs);
}

void org::apache::poi::hssf::model::LinkTable::ctor(int32_t numberOfSheets, WorkbookRecordList* workbookRecordList)
{
    super::ctor();
    _workbookRecordList = workbookRecordList;
    _definedNames = new ::java::util::ArrayList();
    _externalBookBlocks = new LinkTable_ExternalBookBlockArray({new LinkTable_ExternalBookBlock(numberOfSheets)});
    _externSheetRecord = new ::org::apache::poi::hssf::record::ExternSheetRecord();
    _recordCount = 2;
    auto supbook = npc((*_externalBookBlocks)[int32_t(0)])->getExternalBookRecord();
    auto idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::CountryRecord::sid);
    if(idx < 0) {
        throw new ::java::lang::RuntimeException(u"CountryRecord not found"_j);
    }
    npc(_workbookRecordList)->add(idx + int32_t(1), _externSheetRecord);
    npc(_workbookRecordList)->add(idx + int32_t(1), supbook);
}

int32_t org::apache::poi::hssf::model::LinkTable::getRecordCount()
{
    return _recordCount;
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::LinkTable::getSpecificBuiltinRecord(int8_t builtInCode, int32_t sheetNumber)
{
    auto iterator = npc(_definedNames)->iterator();
    while (npc(iterator)->hasNext()) {
        auto record = java_cast< ::org::apache::poi::hssf::record::NameRecord* >(npc(iterator)->next());
        if(npc(record)->getBuiltInName() == builtInCode && npc(record)->getSheetNumber() == sheetNumber) {
            return record;
        }
    }
    return nullptr;
}

void org::apache::poi::hssf::model::LinkTable::removeBuiltinRecord(int8_t name, int32_t sheetIndex)
{
    auto record = getSpecificBuiltinRecord(name, sheetIndex);
    if(record != nullptr) {
        npc(_definedNames)->remove(static_cast< ::java::lang::Object* >(record));
    }
}

int32_t org::apache::poi::hssf::model::LinkTable::getNumNames()
{
    return npc(_definedNames)->size();
}

org::apache::poi::hssf::record::NameRecord* org::apache::poi::hssf::model::LinkTable::getNameRecord(int32_t index)
{
    return java_cast< ::org::apache::poi::hssf::record::NameRecord* >(npc(_definedNames)->get(index));
}

void org::apache::poi::hssf::model::LinkTable::addName(::org::apache::poi::hssf::record::NameRecord* name)
{
    npc(_definedNames)->add(static_cast< ::java::lang::Object* >(name));
    auto idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::ExternSheetRecord::sid);
    if(idx == -int32_t(1))
        idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::SupBookRecord::sid);

    if(idx == -int32_t(1))
        idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::CountryRecord::sid);

    auto countNames = npc(_definedNames)->size();
    npc(_workbookRecordList)->add(idx + countNames, name);
}

void org::apache::poi::hssf::model::LinkTable::removeName(int32_t namenum)
{
    npc(_definedNames)->remove(namenum);
}

bool org::apache::poi::hssf::model::LinkTable::nameAlreadyExists(::org::apache::poi::hssf::record::NameRecord* name)
{
    for (auto i = getNumNames() - int32_t(1); i >= 0; i--) {
        auto rec = getNameRecord(i);
        if(rec != name) {
            if(isDuplicatedNames(name, rec))
                return true;

        }
    }
    return false;
}

bool org::apache::poi::hssf::model::LinkTable::isDuplicatedNames(::org::apache::poi::hssf::record::NameRecord* firstName, ::org::apache::poi::hssf::record::NameRecord* lastName)
{
    clinit();
    return npc(npc(lastName)->getNameText())->equalsIgnoreCase(npc(firstName)->getNameText()) && isSameSheetNames(firstName, lastName);
}

bool org::apache::poi::hssf::model::LinkTable::isSameSheetNames(::org::apache::poi::hssf::record::NameRecord* firstName, ::org::apache::poi::hssf::record::NameRecord* lastName)
{
    clinit();
    return npc(lastName)->getSheetNumber() == npc(firstName)->getSheetNumber();
}

java::lang::StringArray* org::apache::poi::hssf::model::LinkTable::getExternalBookAndSheetName(int32_t extRefIndex)
{
    auto ebIx = npc(_externSheetRecord)->getExtbookIndexFromRefIndex(extRefIndex);
    auto ebr = npc((*_externalBookBlocks)[ebIx])->getExternalBookRecord();
    if(!npc(ebr)->isExternalReferences()) {
        return nullptr;
    }
    auto shIx1 = npc(_externSheetRecord)->getFirstSheetIndexFromRefIndex(extRefIndex);
    auto shIx2 = npc(_externSheetRecord)->getLastSheetIndexFromRefIndex(extRefIndex);
    ::java::lang::String* firstSheetName = nullptr;
    ::java::lang::String* lastSheetName = nullptr;
    if(shIx1 >= 0) {
        firstSheetName = (*npc(ebr)->getSheetNames())[shIx1];
    }
    if(shIx2 >= 0) {
        lastSheetName = (*npc(ebr)->getSheetNames())[shIx2];
    }
    if(shIx1 == shIx2) {
        return new ::java::lang::StringArray({
            npc(ebr)->getURL()
            , firstSheetName
        });
    } else {
        return new ::java::lang::StringArray({
            npc(ebr)->getURL()
            , firstSheetName
            , lastSheetName
        });
    }
}

int32_t org::apache::poi::hssf::model::LinkTable::getExternalWorkbookIndex(::java::lang::String* workbookName)
{
    for (auto i = int32_t(0); i < npc(_externalBookBlocks)->length; i++) {
        auto ebr = npc((*_externalBookBlocks)[i])->getExternalBookRecord();
        if(!npc(ebr)->isExternalReferences()) {
            continue;
        }
        if(npc(workbookName)->equals(static_cast< ::java::lang::Object* >(npc(ebr)->getURL()))) {
            return i;
        }
    }
    return -int32_t(1);
}

int32_t org::apache::poi::hssf::model::LinkTable::linkExternalWorkbook(::java::lang::String* name, ::org::apache::poi::ss::usermodel::Workbook* externalWorkbook)
{
    auto extBookIndex = getExternalWorkbookIndex(name);
    if(extBookIndex != -int32_t(1)) {
        return extBookIndex;
    }
    auto sheetNames = new ::java::lang::StringArray(npc(externalWorkbook)->getNumberOfSheets());
    for (auto sn = int32_t(0); sn < npc(sheetNames)->length; sn++) {
        sheetNames->set(sn, npc(externalWorkbook)->getSheetName(sn));
    }
    auto url = ::java::lang::StringBuilder().append(u"\000"_j)->append(name)->toString();
    auto block = new LinkTable_ExternalBookBlock(url, sheetNames);
    extBookIndex = extendExternalBookBlocks(block);
    auto idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::ExternSheetRecord::sid);
    if(idx == -int32_t(1)) {
        idx = npc(_workbookRecordList)->size();
    }
    npc(_workbookRecordList)->add(idx, npc(block)->getExternalBookRecord());
    for (auto sn = int32_t(0); sn < npc(sheetNames)->length; sn++) {
        npc(_externSheetRecord)->addRef(extBookIndex, sn, sn);
    }
    return extBookIndex;
}

int32_t org::apache::poi::hssf::model::LinkTable::getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName)
{
    auto externalBookIndex = getExternalWorkbookIndex(workbookName);
    if(externalBookIndex == -int32_t(1)) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"No external workbook with name '"_j)->append(workbookName)
            ->append(u"'"_j)->toString());
    }
    auto ebrTarget = npc((*_externalBookBlocks)[externalBookIndex])->getExternalBookRecord();
    auto firstSheetIndex = getSheetIndex(npc(ebrTarget)->getSheetNames(), firstSheetName);
    auto lastSheetIndex = getSheetIndex(npc(ebrTarget)->getSheetNames(), lastSheetName);
    auto result = npc(_externSheetRecord)->getRefIxForSheet(externalBookIndex, firstSheetIndex, lastSheetIndex);
    if(result < 0) {
        result = npc(_externSheetRecord)->addRef(externalBookIndex, firstSheetIndex, lastSheetIndex);
    }
    return result;
}

int32_t org::apache::poi::hssf::model::LinkTable::getSheetIndex(::java::lang::StringArray* sheetNames, ::java::lang::String* sheetName)
{
    clinit();
    for (auto i = int32_t(0); i < npc(sheetNames)->length; i++) {
        if(npc((*sheetNames)[i])->equals(static_cast< ::java::lang::Object* >(sheetName))) {
            return i;
        }
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"External workbook does not contain sheet '"_j)->append(sheetName)
        ->append(u"'"_j)->toString());
}

int32_t org::apache::poi::hssf::model::LinkTable::getFirstInternalSheetIndexForExtIndex(int32_t extRefIndex)
{
    if(extRefIndex >= npc(_externSheetRecord)->getNumOfRefs() || extRefIndex < 0) {
        return -int32_t(1);
    }
    return npc(_externSheetRecord)->getFirstSheetIndexFromRefIndex(extRefIndex);
}

int32_t org::apache::poi::hssf::model::LinkTable::getLastInternalSheetIndexForExtIndex(int32_t extRefIndex)
{
    if(extRefIndex >= npc(_externSheetRecord)->getNumOfRefs() || extRefIndex < 0) {
        return -int32_t(1);
    }
    return npc(_externSheetRecord)->getLastSheetIndexFromRefIndex(extRefIndex);
}

void org::apache::poi::hssf::model::LinkTable::removeSheet(int32_t sheetIdx)
{
    npc(_externSheetRecord)->removeSheet(sheetIdx);
}

int32_t org::apache::poi::hssf::model::LinkTable::checkExternSheet(int32_t sheetIndex)
{
    return checkExternSheet(sheetIndex, sheetIndex);
}

int32_t org::apache::poi::hssf::model::LinkTable::checkExternSheet(int32_t firstSheetIndex, int32_t lastSheetIndex)
{
    auto thisWbIndex = -int32_t(1);
    for (auto i = int32_t(0); i < npc(_externalBookBlocks)->length; i++) {
        auto ebr = npc((*_externalBookBlocks)[i])->getExternalBookRecord();
        if(npc(ebr)->isInternalReferences()) {
            thisWbIndex = i;
            break;
        }
    }
    if(thisWbIndex < 0) {
        throw new ::java::lang::RuntimeException(u"Could not find 'internal references' EXTERNALBOOK"_j);
    }
    auto i = npc(_externSheetRecord)->getRefIxForSheet(thisWbIndex, firstSheetIndex, lastSheetIndex);
    if(i >= 0) {
        return i;
    }
    return npc(_externSheetRecord)->addRef(thisWbIndex, firstSheetIndex, lastSheetIndex);
}

int32_t org::apache::poi::hssf::model::LinkTable::findFirstRecordLocBySid(int16_t sid)
{
    auto index = int32_t(0);
    for (auto _i = npc(npc(_workbookRecordList)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(npc(record)->getSid() == sid) {
                return index;
            }
            index++;
        }
    }
    return -int32_t(1);
}

java::lang::String* org::apache::poi::hssf::model::LinkTable::resolveNameXText(int32_t refIndex, int32_t definedNameIndex, InternalWorkbook* workbook)
{
    auto extBookIndex = npc(_externSheetRecord)->getExtbookIndexFromRefIndex(refIndex);
    auto firstTabIndex = npc(_externSheetRecord)->getFirstSheetIndexFromRefIndex(refIndex);
    if(firstTabIndex == -int32_t(1)) {
        throw new ::java::lang::RuntimeException(u"Referenced sheet could not be found"_j);
    }
    auto externalBook = (*_externalBookBlocks)[extBookIndex];
    if(npc(npc(externalBook)->_externalNameRecords)->length > definedNameIndex) {
        return npc((*_externalBookBlocks)[extBookIndex])->getNameText(definedNameIndex);
    } else if(firstTabIndex == -int32_t(2)) {
        auto nr = getNameRecord(definedNameIndex);
        auto sheetNumber = npc(nr)->getSheetNumber();
        auto text = new ::java::lang::StringBuffer();
        if(sheetNumber > 0) {
            auto sheetName = npc(workbook)->getSheetName(sheetNumber - int32_t(1));
            ::org::apache::poi::ss::formula::SheetNameFormatter::appendFormat(text, sheetName);
            npc(text)->append(u"!"_j);
        }
        npc(text)->append(npc(nr)->getNameText());
        return npc(text)->toString();
    } else {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Ext Book Index relative but beyond the supported length, was "_j)->append(extBookIndex)
            ->append(u" but maximum is "_j)
            ->append(npc(_externalBookBlocks)->length)->toString());
    }
}

int32_t org::apache::poi::hssf::model::LinkTable::resolveNameXIx(int32_t refIndex, int32_t definedNameIndex)
{
    auto extBookIndex = npc(_externSheetRecord)->getExtbookIndexFromRefIndex(refIndex);
    return npc((*_externalBookBlocks)[extBookIndex])->getNameIx(definedNameIndex);
}

org::apache::poi::ss::formula::ptg::NameXPtg* org::apache::poi::hssf::model::LinkTable::getNameXPtg(::java::lang::String* name, int32_t sheetRefIndex)
{
    for (auto i = int32_t(0); i < npc(_externalBookBlocks)->length; i++) {
        auto definedNameIndex = npc((*_externalBookBlocks)[i])->getIndexOfName(name);
        if(definedNameIndex < 0) {
            continue;
        }
        auto thisSheetRefIndex = findRefIndexFromExtBookIndex(i);
        if(thisSheetRefIndex >= 0) {
            if(sheetRefIndex == -int32_t(1) || thisSheetRefIndex == sheetRefIndex) {
                return new ::org::apache::poi::ss::formula::ptg::NameXPtg(thisSheetRefIndex, definedNameIndex);
            }
        }
    }
    return nullptr;
}

org::apache::poi::ss::formula::ptg::NameXPtg* org::apache::poi::hssf::model::LinkTable::addNameXPtg(::java::lang::String* name)
{
    auto extBlockIndex = -int32_t(1);
    LinkTable_ExternalBookBlock* extBlock = nullptr;
    for (auto i = int32_t(0); i < npc(_externalBookBlocks)->length; i++) {
        auto ebr = npc((*_externalBookBlocks)[i])->getExternalBookRecord();
        if(npc(ebr)->isAddInFunctions()) {
            extBlock = (*_externalBookBlocks)[i];
            extBlockIndex = i;
            break;
        }
    }
    if(extBlock == nullptr) {
        extBlock = new LinkTable_ExternalBookBlock();
        extBlockIndex = extendExternalBookBlocks(extBlock);
        auto idx = findFirstRecordLocBySid(::org::apache::poi::hssf::record::ExternSheetRecord::sid);
        npc(_workbookRecordList)->add(idx, npc(extBlock)->getExternalBookRecord());
        npc(_externSheetRecord)->addRef(npc(_externalBookBlocks)->length - int32_t(1), -int32_t(2), -int32_t(2));
    }
    auto extNameRecord = new ::org::apache::poi::hssf::record::ExternalNameRecord();
    npc(extNameRecord)->setText(name);
    npc(extNameRecord)->setParsedExpression(new ::org::apache::poi::ss::formula::ptg::PtgArray({static_cast< ::org::apache::poi::ss::formula::ptg::Ptg* >(::org::apache::poi::ss::formula::ptg::ErrPtg::REF_INVALID())}));
    auto nameIndex = npc(extBlock)->addExternalName(extNameRecord);
    auto supLinkIndex = int32_t(0);
    for (auto _i = npc(npc(_workbookRecordList)->getRecords())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
        {
            if(dynamic_cast< ::org::apache::poi::hssf::record::SupBookRecord* >(record) != nullptr && npc((java_cast< ::org::apache::poi::hssf::record::SupBookRecord* >(record)))->isAddInFunctions()) {
                break;
            }
            supLinkIndex++;
        }
    }
    auto numberOfNames = npc(extBlock)->getNumberOfNames();
    npc(_workbookRecordList)->add(supLinkIndex + numberOfNames, extNameRecord);
    auto fakeSheetIdx = -int32_t(2);
    auto ix = npc(_externSheetRecord)->getRefIxForSheet(extBlockIndex, fakeSheetIdx, fakeSheetIdx);
    return new ::org::apache::poi::ss::formula::ptg::NameXPtg(ix, nameIndex);
}

int32_t org::apache::poi::hssf::model::LinkTable::extendExternalBookBlocks(LinkTable_ExternalBookBlock* newBlock)
{
    auto tmp = new LinkTable_ExternalBookBlockArray(npc(_externalBookBlocks)->length + int32_t(1));
    ::java::lang::System::arraycopy(_externalBookBlocks, 0, tmp, 0, npc(_externalBookBlocks)->length);
    tmp->set(npc(tmp)->length - int32_t(1), newBlock);
    _externalBookBlocks = tmp;
    return (npc(_externalBookBlocks)->length - int32_t(1));
}

int32_t org::apache::poi::hssf::model::LinkTable::findRefIndexFromExtBookIndex(int32_t extBookIndex)
{
    return npc(_externSheetRecord)->findRefIndexFromExtBookIndex(extBookIndex);
}

bool org::apache::poi::hssf::model::LinkTable::changeExternalReference(::java::lang::String* oldUrl, ::java::lang::String* newUrl)
{
    for(auto ex : *npc(_externalBookBlocks)) {
        auto externalRecord = npc(ex)->getExternalBookRecord();
        if(npc(externalRecord)->isExternalReferences() && npc(npc(externalRecord)->getURL())->equals(static_cast< ::java::lang::Object* >(oldUrl))) {
            npc(externalRecord)->setURL(newUrl);
            return true;
        }
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::model::LinkTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.LinkTable", 35);
    return c;
}

java::lang::Class* org::apache::poi::hssf::model::LinkTable::getClass0()
{
    return class_();
}

