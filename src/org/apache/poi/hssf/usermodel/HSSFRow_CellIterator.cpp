// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFRow.java
#include <org/apache/poi/hssf/usermodel/HSSFRow_CellIterator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/NoSuchElementException.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::Cell, ::java::lang::ObjectArray > CellArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFCell, ::java::lang::ObjectArray, ::poi::ss::usermodel::CellArray > HSSFCellArray;
        } // usermodel
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::HSSFRow_CellIterator::HSSFRow_CellIterator(HSSFRow *HSSFRow_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , HSSFRow_this(HSSFRow_this)
{
    clinit();
}

poi::hssf::usermodel::HSSFRow_CellIterator::HSSFRow_CellIterator(HSSFRow *HSSFRow_this) 
    : HSSFRow_CellIterator(HSSFRow_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::usermodel::HSSFRow_CellIterator::init()
{
    thisId = -int32_t(1);
    nextId = -int32_t(1);
}

void poi::hssf::usermodel::HSSFRow_CellIterator::ctor()
{
    super::ctor();
    init();
    findNext();
}

bool poi::hssf::usermodel::HSSFRow_CellIterator::hasNext()
{
    return nextId < npc(HSSFRow_this->cells)->length;
}

poi::ss::usermodel::Cell* poi::hssf::usermodel::HSSFRow_CellIterator::next()
{
    if(!hasNext())
        throw new ::java::util::NoSuchElementException(u"At last element"_j);

    auto cell = (*HSSFRow_this->cells)[nextId];
    thisId = nextId;
    findNext();
    return cell;
}

void poi::hssf::usermodel::HSSFRow_CellIterator::remove()
{
    if(thisId == -int32_t(1))
        throw new ::java::lang::IllegalStateException(u"remove() called before next()"_j);

    HSSFRow_this->cells->set(thisId, nullptr);
}

void poi::hssf::usermodel::HSSFRow_CellIterator::findNext()
{
    auto i = nextId + int32_t(1);
    for (; i < npc(HSSFRow_this->cells)->length; i++) {
        if((*HSSFRow_this->cells)[i] != nullptr)
            break;

    }
    nextId = i;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFRow_CellIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFRow.CellIterator", 50);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFRow_CellIterator::getClass0()
{
    return class_();
}

