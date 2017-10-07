// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartDataSource.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::charts::DataSources_AbstractCellRangeDataSource
    : public virtual ::java::lang::Object
    , public virtual ChartDataSource
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::usermodel::Sheet* sheet {  };
    ::org::apache::poi::ss::util::CellRangeAddress* cellRangeAddress {  };
    int32_t numOfCells {  };
    ::org::apache::poi::ss::usermodel::FormulaEvaluator* evaluator {  };
protected:
    void ctor(::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::util::CellRangeAddress* cellRangeAddress);

public:
    int32_t getPointCount() override;
    bool isReference() override;
    ::java::lang::String* getFormulaString() override;

public: /* protected */
    virtual ::org::apache::poi::ss::usermodel::CellValue* getCellValueAt(int32_t index);

    // Generated
    DataSources_AbstractCellRangeDataSource(::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::util::CellRangeAddress* cellRangeAddress);
protected:
    DataSources_AbstractCellRangeDataSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSources;
    friend class DataSources_fromNumericCellRange_1;
    friend class DataSources_fromStringCellRange_2;
    friend class DataSources_ArrayDataSource;
};
