// Generated from /POI/java/org/apache/poi/ss/util/cellwalk/CellWalk.java
#include <org/apache/poi/ss/util/cellwalk/CellWalk.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/cellwalk/CellHandler.hpp>
#include <org/apache/poi/ss/util/cellwalk/CellWalk_SimpleCellWalkContext.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::cellwalk::CellWalk::CellWalk(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::cellwalk::CellWalk::CellWalk(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* range) 
    : CellWalk(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet,range);
}

void poi::ss::util::cellwalk::CellWalk::ctor(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* range)
{
    super::ctor();
    this->sheet = sheet;
    this->range = range;
    this->traverseEmptyCells = false;
}

bool poi::ss::util::cellwalk::CellWalk::isTraverseEmptyCells()
{
    return traverseEmptyCells;
}

void poi::ss::util::cellwalk::CellWalk::setTraverseEmptyCells(bool traverseEmptyCells)
{
    this->traverseEmptyCells = traverseEmptyCells;
}

void poi::ss::util::cellwalk::CellWalk::traverse(CellHandler* handler)
{
    auto firstRow = npc(range)->getFirstRow();
    auto lastRow = npc(range)->getLastRow();
    auto firstColumn = npc(range)->getFirstColumn();
    auto lastColumn = npc(range)->getLastColumn();
    auto const width = lastColumn - firstColumn + int32_t(1);
    auto ctx = new CellWalk_SimpleCellWalkContext();
    ::poi::ss::usermodel::Row* currentRow = nullptr;
    ::poi::ss::usermodel::Cell* currentCell = nullptr;
    for (npc(ctx)->rowNumber = firstRow; npc(ctx)->rowNumber <= lastRow; ++npc(ctx)->rowNumber) {
        currentRow = npc(sheet)->getRow(npc(ctx)->rowNumber);
        if(currentRow == nullptr) {
            continue;
        }
        for (npc(ctx)->colNumber = firstColumn; npc(ctx)->colNumber <= lastColumn; ++npc(ctx)->colNumber) {
            currentCell = npc(currentRow)->getCell(npc(ctx)->colNumber);
            if(currentCell == nullptr) {
                continue;
            }
            if(isEmpty(currentCell) && !traverseEmptyCells) {
                continue;
            }
            npc(ctx)->ordinalNumber = (npc(ctx)->rowNumber - firstRow) * width + (npc(ctx)->colNumber - firstColumn + int32_t(1));
            npc(handler)->onCell(currentCell, ctx);
        }
    }
}

bool poi::ss::util::cellwalk::CellWalk::isEmpty(::poi::ss::usermodel::Cell* cell)
{
    return (npc(cell)->getCellTypeEnum() == ::poi::ss::usermodel::CellType::BLANK);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::cellwalk::CellWalk::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.cellwalk.CellWalk", 40);
    return c;
}

java::lang::Class* poi::ss::util::cellwalk::CellWalk::getClass0()
{
    return class_();
}

