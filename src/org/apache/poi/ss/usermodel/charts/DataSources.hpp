// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::charts::DataSources
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static /* <T> */ChartDataSource* fromArray_(::java::lang::ObjectArray* elements);
    static ChartDataSource* fromNumericCellRange(::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::util::CellRangeAddress* cellRangeAddress);
    static ChartDataSource* fromStringCellRange(::org::apache::poi::ss::usermodel::Sheet* sheet, ::org::apache::poi::ss::util::CellRangeAddress* cellRangeAddress);

    // Generated

private:
    DataSources();
protected:
    DataSources(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSources_fromNumericCellRange_1;
    friend class DataSources_fromStringCellRange_2;
    friend class DataSources_ArrayDataSource;
    friend class DataSources_AbstractCellRangeDataSource;
};
