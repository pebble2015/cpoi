// Generated from /POI/java/org/apache/poi/ss/usermodel/CellRange.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Iterable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
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
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::Cell, ::java::lang::ObjectArray > CellArray;
typedef ::SubArray< ::org::apache::poi::ss::usermodel::CellArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > CellArrayArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct org::apache::poi::ss::usermodel::CellRange
    : public virtual ::java::lang::Iterable
{
    virtual int32_t getWidth() = 0;
    virtual int32_t getHeight() = 0;
    virtual int32_t size() = 0;
    virtual ::java::lang::String* getReferenceText() = 0;
    virtual Cell* getTopLeftCell() = 0;
    virtual Cell* getCell(int32_t relativeRowIndex, int32_t relativeColumnIndex) = 0;
    virtual CellArray* getFlattenedCells() = 0;
    virtual CellArrayArray* getCells() = 0;
    /*::java::util::Iterator* iterator(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
