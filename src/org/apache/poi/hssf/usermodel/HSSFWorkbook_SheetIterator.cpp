// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFWorkbook.java
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook_SheetIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>

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

poi::hssf::usermodel::HSSFWorkbook_SheetIterator::HSSFWorkbook_SheetIterator(HSSFWorkbook *HSSFWorkbook_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HSSFWorkbook_this(HSSFWorkbook_this)
{
    clinit();
}

poi::hssf::usermodel::HSSFWorkbook_SheetIterator::HSSFWorkbook_SheetIterator(HSSFWorkbook *HSSFWorkbook_this) 
    : HSSFWorkbook_SheetIterator(HSSFWorkbook_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::usermodel::HSSFWorkbook_SheetIterator::init()
{
    cursor = nullptr;
}

void poi::hssf::usermodel::HSSFWorkbook_SheetIterator::ctor()
{
    super::ctor();
    init();
    it = java_cast< ::java::util::Iterator* >(npc(HSSFWorkbook_this->_sheets)->iterator());
}

bool poi::hssf::usermodel::HSSFWorkbook_SheetIterator::hasNext()
{
    return npc(it)->hasNext();
}

poi::ss::usermodel::Sheet* poi::hssf::usermodel::HSSFWorkbook_SheetIterator::next() /* throws(NoSuchElementException) */
{
    cursor = java_cast< ::poi::ss::usermodel::Sheet* >(npc(it)->next());
    return java_cast< ::poi::ss::usermodel::Sheet* >(cursor);
}

void poi::hssf::usermodel::HSSFWorkbook_SheetIterator::remove() /* throws(IllegalStateException) */
{
    throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"remove method not supported on HSSFWorkbook.iterator(). "_j)->append(u"Use Sheet.removeSheetAt(int) instead."_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFWorkbook_SheetIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFWorkbook.SheetIterator", 56);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFWorkbook_SheetIterator::getClass0()
{
    return class_();
}

