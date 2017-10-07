// Generated from /POI/java/org/apache/poi/hssf/model/ConvertAnchor.java

#pragma once

#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::ConvertAnchor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::org::apache::poi::ddf::EscherRecord* createAnchor(::org::apache::poi::hssf::usermodel::HSSFAnchor* userAnchor);

    // Generated
    ConvertAnchor();
protected:
    ConvertAnchor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
