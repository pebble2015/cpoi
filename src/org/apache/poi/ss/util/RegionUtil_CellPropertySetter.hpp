// Generated from /POI/java/org/apache/poi/ss/util/RegionUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::RegionUtil_CellPropertySetter final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _propertyName {  };
    ::java::lang::Object* _propertyValue {  };
protected:
    void ctor(::java::lang::String* propertyName, int32_t value);
    void ctor(::java::lang::String* propertyName, ::org::apache::poi::ss::usermodel::BorderStyle* value);

public:
    void setProperty(::org::apache::poi::ss::usermodel::Row* row, int32_t column);

    // Generated
    RegionUtil_CellPropertySetter(::java::lang::String* propertyName, int32_t value);
    RegionUtil_CellPropertySetter(::java::lang::String* propertyName, ::org::apache::poi::ss::usermodel::BorderStyle* value);
protected:
    RegionUtil_CellPropertySetter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RegionUtil;
};
