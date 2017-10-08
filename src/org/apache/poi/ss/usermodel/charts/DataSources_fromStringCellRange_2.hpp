// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/DataSources_AbstractCellRangeDataSource.hpp>
#include <java/lang/String.hpp>

struct default_init_tag;

class poi::ss::usermodel::charts::DataSources_fromStringCellRange_2
    : public DataSources_AbstractCellRangeDataSource
{

public:
    typedef DataSources_AbstractCellRangeDataSource super;
    ::java::lang::String* getPointAt(int32_t index) override;
    bool isNumeric() override;

    // Generated

public: /* protected */
    DataSources_fromStringCellRange_2(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* cellRangeAddress);

public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSources;
    friend class DataSources_fromNumericCellRange_1;
    friend class DataSources_ArrayDataSource;
    friend class DataSources_AbstractCellRangeDataSource;
};
