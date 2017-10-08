// Generated from /POI/java/org/apache/poi/ss/usermodel/helpers/RowShifter.java
#include <org/apache/poi/ss/usermodel/helpers/RowShifter.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>

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

poi::ss::usermodel::helpers::RowShifter::RowShifter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::helpers::RowShifter::RowShifter(::poi::ss::usermodel::Sheet* sh) 
    : RowShifter(*static_cast< ::default_init_tag* >(0))
{
    ctor(sh);
}

void poi::ss::usermodel::helpers::RowShifter::ctor(::poi::ss::usermodel::Sheet* sh)
{
    super::ctor();
    sheet = sh;
}

java::util::List* poi::ss::usermodel::helpers::RowShifter::shiftMergedRegions(int32_t startRow, int32_t endRow, int32_t n)
{
    ::java::util::List* shiftedRegions = new ::java::util::ArrayList();
    ::java::util::Set* removedIndices = new ::java::util::HashSet();
    auto size = npc(sheet)->getNumMergedRegions();
    for (auto i = int32_t(0); i < size; i++) {
        auto merged = npc(sheet)->getMergedRegion(i);
        if(removalNeeded(merged, startRow, endRow, n)) {
            npc(removedIndices)->add(::java::lang::Integer::valueOf(i));
            continue;
        }
        auto inStart = (npc(merged)->getFirstRow() >= startRow || npc(merged)->getLastRow() >= startRow);
        auto inEnd = (npc(merged)->getFirstRow() <= endRow || npc(merged)->getLastRow() <= endRow);
        if(!inStart || !inEnd) {
            continue;
        }
        if(!npc(merged)->containsRow(startRow - int32_t(1)) && !npc(merged)->containsRow(endRow + int32_t(1))) {
            npc(merged)->setFirstRow(npc(merged)->getFirstRow() + n);
            npc(merged)->setLastRow(npc(merged)->getLastRow() + n);
            npc(shiftedRegions)->add(static_cast< ::java::lang::Object* >(merged));
            npc(removedIndices)->add(::java::lang::Integer::valueOf(i));
        }
    }
    if(!npc(removedIndices)->isEmpty()) {
        npc(sheet)->removeMergedRegions(removedIndices);
    }
    for (auto _i = npc(shiftedRegions)->iterator(); _i->hasNext(); ) {
        ::poi::ss::util::CellRangeAddress* region = java_cast< ::poi::ss::util::CellRangeAddress* >(_i->next());
        {
            npc(sheet)->addMergedRegion(region);
        }
    }
    return shiftedRegions;
}

bool poi::ss::usermodel::helpers::RowShifter::removalNeeded(::poi::ss::util::CellRangeAddress* merged, int32_t startRow, int32_t endRow, int32_t n)
{
    auto const movedRows = endRow - startRow + int32_t(1);
    ::poi::ss::util::CellRangeAddress* overwrite;
    if(n > 0) {
        overwrite = new ::poi::ss::util::CellRangeAddress(::java::lang::Math::max(endRow + int32_t(1), endRow + n - movedRows), endRow + n, int32_t(0), int32_t(0));
    } else {
        overwrite = new ::poi::ss::util::CellRangeAddress(startRow + n, ::java::lang::Math::min(startRow - int32_t(1), startRow + n + movedRows), int32_t(0), int32_t(0));
    }
    return npc(merged)->intersects(overwrite);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::helpers::RowShifter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.helpers.RowShifter", 46);
    return c;
}

java::lang::Class* poi::ss::usermodel::helpers::RowShifter::getClass0()
{
    return class_();
}

