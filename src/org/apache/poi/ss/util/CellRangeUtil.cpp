// Generated from /POI/java/org/apache/poi/ss/util/CellRangeUtil.java
#include <org/apache/poi/ss/util/CellRangeUtil.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
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

org::apache::poi::ss::util::CellRangeUtil::CellRangeUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::CellRangeUtil::CellRangeUtil() 
    : CellRangeUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::util::CellRangeUtil::ctor()
{
    super::ctor();
}

constexpr int32_t org::apache::poi::ss::util::CellRangeUtil::NO_INTERSECTION;

constexpr int32_t org::apache::poi::ss::util::CellRangeUtil::OVERLAP;

constexpr int32_t org::apache::poi::ss::util::CellRangeUtil::INSIDE;

constexpr int32_t org::apache::poi::ss::util::CellRangeUtil::ENCLOSES;

int32_t org::apache::poi::ss::util::CellRangeUtil::intersect(CellRangeAddress* crA, CellRangeAddress* crB)
{
    clinit();
    auto firstRow = npc(crB)->getFirstRow();
    auto lastRow = npc(crB)->getLastRow();
    auto firstCol = npc(crB)->getFirstColumn();
    auto lastCol = npc(crB)->getLastColumn();
    if(gt(npc(crA)->getFirstRow(), lastRow) || lt(npc(crA)->getLastRow(), firstRow) || gt(npc(crA)->getFirstColumn(), lastCol)|| lt(npc(crA)->getLastColumn(), firstCol)) {
        return NO_INTERSECTION;
    } else if(contains(crA, crB)) {
        return INSIDE;
    } else if(contains(crB, crA)) {
        return ENCLOSES;
    } else {
        return OVERLAP;
    }
}

org::apache::poi::ss::util::CellRangeAddressArray* org::apache::poi::ss::util::CellRangeUtil::mergeCellRanges(CellRangeAddressArray* cellRanges)
{
    clinit();
    if(npc(cellRanges)->length < 1) {
        return new CellRangeAddressArray({});
    }
    auto list = toList(cellRanges);
    auto temp = mergeCellRanges(list);
    return toArray_(temp);
}

java::util::List* org::apache::poi::ss::util::CellRangeUtil::mergeCellRanges(::java::util::List* cellRangeList)
{
    clinit();
    while (npc(cellRangeList)->size() > 1) {
        auto somethingGotMerged = false;
        for (auto i = int32_t(0); i < npc(cellRangeList)->size(); i++) {
            auto range1 = java_cast< CellRangeAddress* >(npc(cellRangeList)->get(i));
            for (auto j = i + int32_t(1); j < npc(cellRangeList)->size(); j++) {
                auto range2 = java_cast< CellRangeAddress* >(npc(cellRangeList)->get(j));
                auto mergeResult = mergeRanges(range1, range2);
                if(mergeResult == nullptr) {
                    continue;
                }
                somethingGotMerged = true;
                npc(cellRangeList)->set(i, (*mergeResult)[int32_t(0)]);
                npc(cellRangeList)->remove(j--);
                for (auto k = int32_t(1); k < npc(mergeResult)->length; k++) {
                    j++;
                    npc(cellRangeList)->add(j, (*mergeResult)[k]);
                }
            }
        }
        if(!somethingGotMerged) {
            break;
        }
    }
    return cellRangeList;
}

org::apache::poi::ss::util::CellRangeAddressArray* org::apache::poi::ss::util::CellRangeUtil::mergeRanges(CellRangeAddress* range1, CellRangeAddress* range2)
{
    clinit();
    auto x = intersect(range1, range2);
    switch (x) {
    case CellRangeUtil::NO_INTERSECTION:
        if(hasExactSharedBorder(range1, range2)) {
            return new CellRangeAddressArray({createEnclosingCellRange(range1, range2)});
        }
        return nullptr;
    case CellRangeUtil::OVERLAP:
        return nullptr;
    case CellRangeUtil::INSIDE:
        return new CellRangeAddressArray({range1});
    case CellRangeUtil::ENCLOSES:
        return new CellRangeAddressArray({range2});
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"unexpected intersection result ("_j)->append(x)
        ->append(u")"_j)->toString());
}

org::apache::poi::ss::util::CellRangeAddressArray* org::apache::poi::ss::util::CellRangeUtil::toArray_(::java::util::List* temp)
{
    clinit();
    auto result = new CellRangeAddressArray(npc(temp)->size());
    npc(temp)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

java::util::List* org::apache::poi::ss::util::CellRangeUtil::toList(CellRangeAddressArray* temp)
{
    clinit();
    ::java::util::List* result = new ::java::util::ArrayList(npc(temp)->length);
    for(auto range : *npc(temp)) {
        npc(result)->add(static_cast< ::java::lang::Object* >(range));
    }
    return result;
}

bool org::apache::poi::ss::util::CellRangeUtil::contains(CellRangeAddress* crA, CellRangeAddress* crB)
{
    clinit();
    return le(npc(crA)->getFirstRow(), npc(crB)->getFirstRow()) && ge(npc(crA)->getLastRow(), npc(crB)->getLastRow()) && le(npc(crA)->getFirstColumn(), npc(crB)->getFirstColumn())&& ge(npc(crA)->getLastColumn(), npc(crB)->getLastColumn());
}

bool org::apache::poi::ss::util::CellRangeUtil::hasExactSharedBorder(CellRangeAddress* crA, CellRangeAddress* crB)
{
    clinit();
    auto oFirstRow = npc(crB)->getFirstRow();
    auto oLastRow = npc(crB)->getLastRow();
    auto oFirstCol = npc(crB)->getFirstColumn();
    auto oLastCol = npc(crB)->getLastColumn();
    if(npc(crA)->getFirstRow() > 0 && npc(crA)->getFirstRow() - int32_t(1) == oLastRow || oFirstRow > 0 && oFirstRow - int32_t(1) == npc(crA)->getLastRow()) {
        return npc(crA)->getFirstColumn() == oFirstCol && npc(crA)->getLastColumn() == oLastCol;
    }
    if(npc(crA)->getFirstColumn() > 0 && npc(crA)->getFirstColumn() - int32_t(1) == oLastCol || oFirstCol > 0 && npc(crA)->getLastColumn() == oFirstCol - int32_t(1)) {
        return npc(crA)->getFirstRow() == oFirstRow && npc(crA)->getLastRow() == oLastRow;
    }
    return false;
}

org::apache::poi::ss::util::CellRangeAddress* org::apache::poi::ss::util::CellRangeUtil::createEnclosingCellRange(CellRangeAddress* crA, CellRangeAddress* crB)
{
    clinit();
    if(crB == nullptr) {
        return npc(crA)->copy();
    }
    auto minRow = lt(npc(crB)->getFirstRow(), npc(crA)->getFirstRow()) ? npc(crB)->getFirstRow() : npc(crA)->getFirstRow();
    auto maxRow = gt(npc(crB)->getLastRow(), npc(crA)->getLastRow()) ? npc(crB)->getLastRow() : npc(crA)->getLastRow();
    auto minCol = lt(npc(crB)->getFirstColumn(), npc(crA)->getFirstColumn()) ? npc(crB)->getFirstColumn() : npc(crA)->getFirstColumn();
    auto maxCol = gt(npc(crB)->getLastColumn(), npc(crA)->getLastColumn()) ? npc(crB)->getLastColumn() : npc(crA)->getLastColumn();
    return new CellRangeAddress(minRow, maxRow, minCol, maxCol);
}

bool org::apache::poi::ss::util::CellRangeUtil::lt(int32_t a, int32_t b)
{
    clinit();
    return a == -int32_t(1) ? false : (b == -int32_t(1) ? true : a < b);
}

bool org::apache::poi::ss::util::CellRangeUtil::le(int32_t a, int32_t b)
{
    clinit();
    return a == b || lt(a, b);
}

bool org::apache::poi::ss::util::CellRangeUtil::gt(int32_t a, int32_t b)
{
    clinit();
    return lt(b, a);
}

bool org::apache::poi::ss::util::CellRangeUtil::ge(int32_t a, int32_t b)
{
    clinit();
    return !lt(a, b);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::CellRangeUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellRangeUtil", 36);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::CellRangeUtil::getClass0()
{
    return class_();
}

