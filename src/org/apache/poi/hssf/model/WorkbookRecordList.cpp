// Generated from /POI/java/org/apache/poi/hssf/model/WorkbookRecordList.java
#include <org/apache/poi/hssf/model/WorkbookRecordList.hpp>

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

poi::hssf::model::WorkbookRecordList::WorkbookRecordList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::WorkbookRecordList::WorkbookRecordList()
    : WorkbookRecordList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::model::WorkbookRecordList::ctor()
{
    super::ctor();
    init();
}

void poi::hssf::model::WorkbookRecordList::init()
{
    records = new ::java::util::ArrayList();
    protpos = int32_t(0);
    bspos = int32_t(0);
    tabpos = int32_t(0);
    fontpos = int32_t(0);
    xfpos = int32_t(0);
    backuppos = int32_t(0);
    namepos = int32_t(0);
    supbookpos = int32_t(0);
    externsheetPos = int32_t(0);
    palettepos = -int32_t(1);
}

void poi::hssf::model::WorkbookRecordList::setRecords(::java::util::List* records)
{
    this->records = records;
}

int32_t poi::hssf::model::WorkbookRecordList::size()
{
    return npc(records)->size();
}

poi::hssf::record::Record* poi::hssf::model::WorkbookRecordList::get(int32_t i)
{
    return java_cast< ::poi::hssf::record::Record* >(npc(records)->get(i));
}

void poi::hssf::model::WorkbookRecordList::add(int32_t pos, ::poi::hssf::record::Record* r)
{
    npc(records)->add(pos, r);
    updateRecordPos(pos, true);
}

java::util::List* poi::hssf::model::WorkbookRecordList::getRecords()
{
    return records;
}

void poi::hssf::model::WorkbookRecordList::remove(::java::lang::Object* record)
{
    auto i = int32_t(0);
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::Record* r = java_cast< ::poi::hssf::record::Record* >(_i->next());
        {
            if(static_cast< ::java::lang::Object* >(r) == record) {
                remove(i);
                break;
            }
            i++;
        }
    }
}

void poi::hssf::model::WorkbookRecordList::remove(int32_t pos)
{
    npc(records)->remove(pos);
    updateRecordPos(pos, false);
}

int32_t poi::hssf::model::WorkbookRecordList::getProtpos()
{
    return protpos;
}

void poi::hssf::model::WorkbookRecordList::setProtpos(int32_t protpos)
{
    this->protpos = protpos;
}

int32_t poi::hssf::model::WorkbookRecordList::getBspos()
{
    return bspos;
}

void poi::hssf::model::WorkbookRecordList::setBspos(int32_t bspos)
{
    this->bspos = bspos;
}

int32_t poi::hssf::model::WorkbookRecordList::getTabpos()
{
    return tabpos;
}

void poi::hssf::model::WorkbookRecordList::setTabpos(int32_t tabpos)
{
    this->tabpos = tabpos;
}

int32_t poi::hssf::model::WorkbookRecordList::getFontpos()
{
    return fontpos;
}

void poi::hssf::model::WorkbookRecordList::setFontpos(int32_t fontpos)
{
    this->fontpos = fontpos;
}

int32_t poi::hssf::model::WorkbookRecordList::getXfpos()
{
    return xfpos;
}

void poi::hssf::model::WorkbookRecordList::setXfpos(int32_t xfpos)
{
    this->xfpos = xfpos;
}

int32_t poi::hssf::model::WorkbookRecordList::getBackuppos()
{
    return backuppos;
}

void poi::hssf::model::WorkbookRecordList::setBackuppos(int32_t backuppos)
{
    this->backuppos = backuppos;
}

int32_t poi::hssf::model::WorkbookRecordList::getPalettepos()
{
    return palettepos;
}

void poi::hssf::model::WorkbookRecordList::setPalettepos(int32_t palettepos)
{
    this->palettepos = palettepos;
}

int32_t poi::hssf::model::WorkbookRecordList::getNamepos()
{
    return namepos;
}

int32_t poi::hssf::model::WorkbookRecordList::getSupbookpos()
{
    return supbookpos;
}

void poi::hssf::model::WorkbookRecordList::setNamepos(int32_t namepos)
{
    this->namepos = namepos;
}

void poi::hssf::model::WorkbookRecordList::setSupbookpos(int32_t supbookpos)
{
    this->supbookpos = supbookpos;
}

int32_t poi::hssf::model::WorkbookRecordList::getExternsheetPos()
{
    return externsheetPos;
}

void poi::hssf::model::WorkbookRecordList::setExternsheetPos(int32_t externsheetPos)
{
    this->externsheetPos = externsheetPos;
}

void poi::hssf::model::WorkbookRecordList::updateRecordPos(int32_t pos, bool add)
{
    auto delta = (add) ? int32_t(1) : -int32_t(1);
    auto p = getProtpos();
    if(p >= pos) {
        setProtpos(p + delta);
    }
    p = getBspos();
    if(p >= pos) {
        setBspos(p + delta);
    }
    p = getTabpos();
    if(p >= pos) {
        setTabpos(p + delta);
    }
    p = getFontpos();
    if(p >= pos) {
        setFontpos(p + delta);
    }
    p = getXfpos();
    if(p >= pos) {
        setXfpos(p + delta);
    }
    p = getBackuppos();
    if(p >= pos) {
        setBackuppos(p + delta);
    }
    p = getNamepos();
    if(p >= pos) {
        setNamepos(p + delta);
    }
    p = getSupbookpos();
    if(p >= pos) {
        setSupbookpos(p + delta);
    }
    p = getPalettepos();
    if(p != -int32_t(1) && p >= pos) {
        setPalettepos(p + delta);
    }
    p = getExternsheetPos();
    if(p >= pos) {
        setExternsheetPos(p + delta);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::WorkbookRecordList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.WorkbookRecordList", 44);
    return c;
}

java::lang::Class* poi::hssf::model::WorkbookRecordList::getClass0()
{
    return class_();
}

