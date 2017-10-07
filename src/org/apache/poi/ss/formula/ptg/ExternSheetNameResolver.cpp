// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ExternSheetNameResolver.java
#include <org/apache/poi/ss/formula/ptg/ExternSheetNameResolver.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheetRange.hpp>
#include <org/apache/poi/ss/formula/FormulaRenderingWorkbook.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>

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

org::apache::poi::ss::formula::ptg::ExternSheetNameResolver::ExternSheetNameResolver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::ExternSheetNameResolver::ExternSheetNameResolver() 
    : ExternSheetNameResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::ptg::ExternSheetNameResolver::ctor()
{
    super::ctor();
}

java::lang::String* org::apache::poi::ss::formula::ptg::ExternSheetNameResolver::prependSheetName(::org::apache::poi::ss::formula::FormulaRenderingWorkbook* book, int32_t field_1_index_extern_sheet, ::java::lang::String* cellRefText)
{
    clinit();
    auto externalSheet = npc(book)->getExternalSheet(field_1_index_extern_sheet);
    ::java::lang::StringBuffer* sb;
    if(externalSheet != nullptr) {
        auto wbName = npc(externalSheet)->getWorkbookName();
        auto sheetName = npc(externalSheet)->getSheetName();
        if(wbName != nullptr) {
            sb = new ::java::lang::StringBuffer(npc(wbName)->length() + npc(sheetName)->length() + npc(cellRefText)->length()+ int32_t(4));
            ::org::apache::poi::ss::formula::SheetNameFormatter::appendFormat(sb, wbName, sheetName);
        } else {
            sb = new ::java::lang::StringBuffer(npc(sheetName)->length() + npc(cellRefText)->length() + int32_t(4));
            ::org::apache::poi::ss::formula::SheetNameFormatter::appendFormat(sb, sheetName);
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheetRange* >(externalSheet) != nullptr) {
            auto r = java_cast< ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheetRange* >(externalSheet);
            if(!npc(npc(r)->getFirstSheetName())->equals(static_cast< ::java::lang::Object* >(npc(r)->getLastSheetName()))) {
                npc(sb)->append(u':');
                ::org::apache::poi::ss::formula::SheetNameFormatter::appendFormat(sb, npc(r)->getLastSheetName());
            }
        }
    } else {
        auto firstSheetName = npc(book)->getSheetFirstNameByExternSheet(field_1_index_extern_sheet);
        auto lastSheetName = npc(book)->getSheetLastNameByExternSheet(field_1_index_extern_sheet);
        sb = new ::java::lang::StringBuffer(npc(firstSheetName)->length() + npc(cellRefText)->length() + int32_t(4));
        if(npc(firstSheetName)->length() < 1) {
            npc(sb)->append(u"#REF"_j);
        } else {
            ::org::apache::poi::ss::formula::SheetNameFormatter::appendFormat(sb, firstSheetName);
            if(!npc(firstSheetName)->equals(static_cast< ::java::lang::Object* >(lastSheetName))) {
                npc(sb)->append(u':');
                npc(sb)->append(lastSheetName);
            }
        }
    }
    npc(sb)->append(u'!');
    npc(sb)->append(cellRefText);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::ExternSheetNameResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ExternSheetNameResolver", 53);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::ExternSheetNameResolver::getClass0()
{
    return class_();
}

