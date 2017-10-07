// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidation.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::DataValidation_ErrorStyle final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t STOP { int32_t(0) };
    static constexpr int32_t WARNING { int32_t(1) };
    static constexpr int32_t INFO { int32_t(2) };

    // Generated
    DataValidation_ErrorStyle();
protected:
    DataValidation_ErrorStyle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DataValidation;
};
