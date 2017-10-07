// Generated from /POI/java/org/apache/poi/ss/util/CellRangeUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class org::apache::poi::ss::util::CellRangeUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static constexpr int32_t NO_INTERSECTION { int32_t(1) };
    static constexpr int32_t OVERLAP { int32_t(2) };
    static constexpr int32_t INSIDE { int32_t(3) };
    static constexpr int32_t ENCLOSES { int32_t(4) };
    static int32_t intersect(CellRangeAddress* crA, CellRangeAddress* crB);
    static CellRangeAddressArray* mergeCellRanges(CellRangeAddressArray* cellRanges);

private:
    static ::java::util::List* mergeCellRanges(::java::util::List* cellRangeList);
    static CellRangeAddressArray* mergeRanges(CellRangeAddress* range1, CellRangeAddress* range2);
    static CellRangeAddressArray* toArray_(::java::util::List* temp);
    static ::java::util::List* toList(CellRangeAddressArray* temp);

public:
    static bool contains(CellRangeAddress* crA, CellRangeAddress* crB);
    static bool hasExactSharedBorder(CellRangeAddress* crA, CellRangeAddress* crB);
    static CellRangeAddress* createEnclosingCellRange(CellRangeAddress* crA, CellRangeAddress* crB);

private:
    static bool lt(int32_t a, int32_t b);
    static bool le(int32_t a, int32_t b);
    static bool gt(int32_t a, int32_t b);
    static bool ge(int32_t a, int32_t b);

    // Generated
    CellRangeUtil();
protected:
    CellRangeUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
