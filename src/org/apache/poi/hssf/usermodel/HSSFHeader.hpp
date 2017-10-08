// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFHeader.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HeaderFooter.hpp>
#include <org/apache/poi/ss/usermodel/Header.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFHeader final
    : public HeaderFooter
    , public ::poi::ss::usermodel::Header
{

public:
    typedef HeaderFooter super;

private:
    ::poi::hssf::record::aggregates::PageSettingsBlock* _psb {  };
protected:
    void ctor(::poi::hssf::record::aggregates::PageSettingsBlock* psb);

public: /* protected */
    ::java::lang::String* getRawText() override;
    void setHeaderFooterText(::java::lang::String* text) override;

    // Generated
    HSSFHeader(::poi::hssf::record::aggregates::PageSettingsBlock* psb);
protected:
    HSSFHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* getCenter();
    virtual ::java::lang::String* getLeft();
    virtual ::java::lang::String* getRight();
    virtual void setCenter(::java::lang::String* newCenter);
    virtual void setLeft(::java::lang::String* newLeft);
    virtual void setRight(::java::lang::String* newRight);

private:
    virtual ::java::lang::Class* getClass0();
};
