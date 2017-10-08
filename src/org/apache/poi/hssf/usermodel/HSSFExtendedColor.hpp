// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFExtendedColor.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/ExtendedColor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFExtendedColor
    : public ::poi::ss::usermodel::ExtendedColor
{

public:
    typedef ::poi::ss::usermodel::ExtendedColor super;

private:
    ::poi::hssf::record::common::ExtendedColor* color {  };
protected:
    void ctor(::poi::hssf::record::common::ExtendedColor* color);

public: /* protected */
    virtual ::poi::hssf::record::common::ExtendedColor* getExtendedColor();

public:
    bool isAuto() override;
    bool isIndexed() override;
    bool isRGB() override;
    bool isThemed() override;
    int16_t getIndex() override;
    int32_t getTheme() override;
    ::int8_tArray* getRGB() override;
    ::int8_tArray* getARGB() override;

public: /* protected */
    ::int8_tArray* getStoredRBG() override;

public:
    void setRGB(::int8_tArray* rgb) override;
    double getTint() override;
    void setTint(double tint) override;

public: /* protected */
    ::int8_tArray* getIndexedRGB() override;

    // Generated

public:
    HSSFExtendedColor(::poi::hssf::record::common::ExtendedColor* color);
protected:
    HSSFExtendedColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
