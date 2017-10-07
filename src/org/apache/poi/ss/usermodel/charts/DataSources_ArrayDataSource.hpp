// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartDataSource.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource
    : public virtual ::java::lang::Object
    , public virtual ChartDataSource
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::ObjectArray* elements {  };
protected:
    void ctor(::java::lang::ObjectArray* elements);

public:
    int32_t getPointCount() override;
    ::java::lang::Object* getPointAt(int32_t index) override;
    bool isReference() override;
    bool isNumeric() override;
    ::java::lang::String* getFormulaString() override;

    // Generated
    DataSources_ArrayDataSource(::java::lang::ObjectArray* elements);
protected:
    DataSources_ArrayDataSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataSources;
    friend class DataSources_fromNumericCellRange_1;
    friend class DataSources_fromStringCellRange_2;
    friend class DataSources_AbstractCellRangeDataSource;
};
