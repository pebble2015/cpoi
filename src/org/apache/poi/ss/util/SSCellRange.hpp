// Generated from /POI/java/org/apache/poi/ss/util/SSCellRange.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/CellRange.hpp>

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

struct default_init_tag;

class org::apache::poi::ss::util::SSCellRange final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::CellRange
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _height {  };
    int32_t _width {  };
    ::org::apache::poi::ss::usermodel::CellArray* _flattenedArray_ {  };
    int32_t _firstRow {  };
    int32_t _firstColumn {  };
protected:
    void ctor(int32_t firstRow, int32_t firstColumn, int32_t height, int32_t width, ::org::apache::poi::ss::usermodel::CellArray* flattenedArray_);

public:
    static /* <B extends Cell> */SSCellRange* create(int32_t firstRow, int32_t firstColumn, int32_t height, int32_t width, ::java::util::List* flattenedList, ::java::lang::Class* cellClass);
    int32_t getHeight() override;
    int32_t getWidth() override;
    int32_t size() override;
    ::java::lang::String* getReferenceText() override;
    ::org::apache::poi::ss::usermodel::Cell* getTopLeftCell() override;
    ::org::apache::poi::ss::usermodel::Cell* getCell(int32_t relativeRowIndex, int32_t relativeColumnIndex) override;
    ::org::apache::poi::ss::usermodel::CellArray* getFlattenedCells() override;
    ::org::apache::poi::ss::usermodel::CellArrayArray* getCells() override;
    ::java::util::Iterator* iterator() override;

    // Generated

private:
    SSCellRange(int32_t firstRow, int32_t firstColumn, int32_t height, int32_t width, ::org::apache::poi::ss::usermodel::CellArray* flattenedArray_);
protected:
    SSCellRange(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SSCellRange_ArrayIterator;
};
