// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFWorkbook.java
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook_SheetRecordCollector.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

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

poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::HSSFWorkbook_SheetRecordCollector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::HSSFWorkbook_SheetRecordCollector() 
    : HSSFWorkbook_SheetRecordCollector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::ctor()
{
    super::ctor();
    _totalSize = 0;
    _list = new ::java::util::ArrayList(int32_t(128));
}

int32_t poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::getTotalSize()
{
    return _totalSize;
}

void poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::visitRecord(::poi::hssf::record::Record* r)
{
    npc(_list)->add(static_cast< ::java::lang::Object* >(r));
    _totalSize += npc(r)->getRecordSize();
}

int32_t poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::serialize(int32_t offset, ::int8_tArray* data)
{
    auto result = int32_t(0);
    for (auto _i = npc(_list)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::Record* rec = java_cast< ::poi::hssf::record::Record* >(_i->next());
        {
            result += npc(rec)->serialize(offset + result, data);
        }
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFWorkbook.SheetRecordCollector", 63);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFWorkbook_SheetRecordCollector::getClass0()
{
    return class_();
}

