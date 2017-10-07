// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationWorkbook.java
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationWorkbook.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalName.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationCell.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>
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

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::ForkedEvaluationWorkbook(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::ForkedEvaluationWorkbook(::org::apache::poi::ss::formula::EvaluationWorkbook* master) 
    : ForkedEvaluationWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(master);
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::ctor(::org::apache::poi::ss::formula::EvaluationWorkbook* master)
{
    super::ctor();
    _masterBook = master;
    _sharedSheetsByName = new ::java::util::HashMap();
}

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getOrCreateUpdatableCell(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex)
{
    auto sheet = getSharedSheet(sheetName);
    return npc(sheet)->getOrCreateUpdatableCell(rowIndex, columnIndex);
}

org::apache::poi::ss::formula::EvaluationCell* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getEvaluationCell(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex)
{
    auto sheet = getSharedSheet(sheetName);
    return npc(sheet)->getCell(rowIndex, columnIndex);
}

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getSharedSheet(::java::lang::String* sheetName)
{
    auto result = java_cast< ForkedEvaluationSheet* >(npc(_sharedSheetsByName)->get(sheetName));
    if(result == nullptr) {
        result = new ForkedEvaluationSheet(npc(_masterBook)->getSheet(npc(_masterBook)->getSheetIndex(sheetName)));
        npc(_sharedSheetsByName)->put(sheetName, result);
    }
    return result;
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::copyUpdatedCells(::org::apache::poi::ss::usermodel::Workbook* workbook)
{
    auto sheetNames = new ::java::lang::StringArray(npc(_sharedSheetsByName)->size());
    npc(npc(_sharedSheetsByName)->keySet())->toArray_(static_cast< ::java::lang::ObjectArray* >(sheetNames));
    for(auto sheetName : *npc(sheetNames)) {
        auto sheet = java_cast< ForkedEvaluationSheet* >(npc(_sharedSheetsByName)->get(sheetName));
        npc(sheet)->copyUpdatedCells(npc(workbook)->getSheet(sheetName));
    }
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::convertFromExternSheetIndex(int32_t externSheetIndex)
{
    return npc(_masterBook)->convertFromExternSheetIndex(externSheetIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getExternalSheet(int32_t externSheetIndex)
{
    return npc(_masterBook)->getExternalSheet(externSheetIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getExternalSheet(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber)
{
    return npc(_masterBook)->getExternalSheet(firstSheetName, lastSheetName, externalWorkbookNumber);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getFormulaTokens(::org::apache::poi::ss::formula::EvaluationCell* cell)
{
    if(dynamic_cast< ForkedEvaluationCell* >(cell) != nullptr) {
        throw new ::java::lang::RuntimeException(u"Updated formulas not supported yet"_j);
    }
    return npc(_masterBook)->getFormulaTokens(cell);
}

org::apache::poi::ss::formula::EvaluationName* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getName(::org::apache::poi::ss::formula::ptg::NamePtg* namePtg)
{
    return npc(_masterBook)->getName(namePtg);
}

org::apache::poi::ss::formula::EvaluationName* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getName(::java::lang::String* name, int32_t sheetIndex)
{
    return npc(_masterBook)->getName(name, sheetIndex);
}

org::apache::poi::ss::formula::EvaluationSheet* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getSheet(int32_t sheetIndex)
{
    return getSharedSheet(getSheetName(sheetIndex));
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getExternalName(int32_t externSheetIndex, int32_t externNameIndex)
{
    return npc(_masterBook)->getExternalName(externSheetIndex, externNameIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getExternalName(::java::lang::String* nameName, ::java::lang::String* sheetName, int32_t externalWorkbookNumber)
{
    return npc(_masterBook)->getExternalName(nameName, sheetName, externalWorkbookNumber);
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getSheetIndex(::org::apache::poi::ss::formula::EvaluationSheet* sheet)
{
    if(dynamic_cast< ForkedEvaluationSheet* >(sheet) != nullptr) {
        auto mes = java_cast< ForkedEvaluationSheet* >(sheet);
        return npc(mes)->getSheetIndex(_masterBook);
    }
    return npc(_masterBook)->getSheetIndex(sheet);
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getSheetIndex(::java::lang::String* sheetName)
{
    return npc(_masterBook)->getSheetIndex(sheetName);
}

java::lang::String* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getSheetName(int32_t sheetIndex)
{
    return npc(_masterBook)->getSheetName(sheetIndex);
}

java::lang::String* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::resolveNameXText(::org::apache::poi::ss::formula::ptg::NameXPtg* ptg)
{
    return npc(_masterBook)->resolveNameXText(ptg);
}

org::apache::poi::ss::formula::udf::UDFFinder* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getUDFFinder()
{
    return npc(_masterBook)->getUDFFinder();
}

org::apache::poi::ss::SpreadsheetVersion* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getSpreadsheetVersion()
{
    return npc(_masterBook)->getSpreadsheetVersion();
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::clearAllCachedResultValues()
{
    npc(_masterBook)->clearAllCachedResultValues();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.forked.ForkedEvaluationWorkbook", 62);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationWorkbook::getClass0()
{
    return class_();
}

