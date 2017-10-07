// Generated from /POI/java/org/apache/poi/hssf/model/LinkTable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
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
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::model::LinkTable final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    LinkTable_ExternalBookBlockArray* _externalBookBlocks {  };
    ::org::apache::poi::hssf::record::ExternSheetRecord* _externSheetRecord {  };
    ::java::util::List* _definedNames {  };
    int32_t _recordCount {  };
    WorkbookRecordList* _workbookRecordList {  };
protected:
    void ctor(::java::util::List* inputList, int32_t startIndex, WorkbookRecordList* workbookRecordList, ::java::util::Map* commentRecords);

private:
    static ::org::apache::poi::hssf::record::ExternSheetRecord* readExtSheetRecord(RecordStream* rs);
protected:
    void ctor(int32_t numberOfSheets, WorkbookRecordList* workbookRecordList);

public:
    int32_t getRecordCount();
    ::org::apache::poi::hssf::record::NameRecord* getSpecificBuiltinRecord(int8_t builtInCode, int32_t sheetNumber);
    void removeBuiltinRecord(int8_t name, int32_t sheetIndex);
    int32_t getNumNames();
    ::org::apache::poi::hssf::record::NameRecord* getNameRecord(int32_t index);
    void addName(::org::apache::poi::hssf::record::NameRecord* name);
    void removeName(int32_t namenum);
    bool nameAlreadyExists(::org::apache::poi::hssf::record::NameRecord* name);

private:
    static bool isDuplicatedNames(::org::apache::poi::hssf::record::NameRecord* firstName, ::org::apache::poi::hssf::record::NameRecord* lastName);
    static bool isSameSheetNames(::org::apache::poi::hssf::record::NameRecord* firstName, ::org::apache::poi::hssf::record::NameRecord* lastName);

public:
    ::java::lang::StringArray* getExternalBookAndSheetName(int32_t extRefIndex);

private:
    int32_t getExternalWorkbookIndex(::java::lang::String* workbookName);

public:
    int32_t linkExternalWorkbook(::java::lang::String* name, ::org::apache::poi::ss::usermodel::Workbook* externalWorkbook);
    int32_t getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName);

private:
    static int32_t getSheetIndex(::java::lang::StringArray* sheetNames, ::java::lang::String* sheetName);

public:
    int32_t getFirstInternalSheetIndexForExtIndex(int32_t extRefIndex);
    int32_t getLastInternalSheetIndexForExtIndex(int32_t extRefIndex);
    void removeSheet(int32_t sheetIdx);
    int32_t checkExternSheet(int32_t sheetIndex);
    int32_t checkExternSheet(int32_t firstSheetIndex, int32_t lastSheetIndex);

private:
    int32_t findFirstRecordLocBySid(int16_t sid);

public:
    ::java::lang::String* resolveNameXText(int32_t refIndex, int32_t definedNameIndex, InternalWorkbook* workbook);
    int32_t resolveNameXIx(int32_t refIndex, int32_t definedNameIndex);
    ::org::apache::poi::ss::formula::ptg::NameXPtg* getNameXPtg(::java::lang::String* name, int32_t sheetRefIndex);
    ::org::apache::poi::ss::formula::ptg::NameXPtg* addNameXPtg(::java::lang::String* name);

private:
    int32_t extendExternalBookBlocks(LinkTable_ExternalBookBlock* newBlock);
    int32_t findRefIndexFromExtBookIndex(int32_t extBookIndex);

public:
    bool changeExternalReference(::java::lang::String* oldUrl, ::java::lang::String* newUrl);

    // Generated
    LinkTable(::java::util::List* inputList, int32_t startIndex, WorkbookRecordList* workbookRecordList, ::java::util::Map* commentRecords);
    LinkTable(int32_t numberOfSheets, WorkbookRecordList* workbookRecordList);
protected:
    LinkTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinkTable_CRNBlock;
    friend class LinkTable_ExternalBookBlock;
};
