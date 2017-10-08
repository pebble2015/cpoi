// Generated from /POI/java/org/apache/poi/sl/draw/DrawFontInfo.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontInfo.hpp>

struct default_init_tag;

class poi::sl::draw::DrawFontInfo
    : public virtual ::java::lang::Object
    , public virtual ::poi::common::usermodel::fonts::FontInfo
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* typeface {  };
protected:
    void ctor(::java::lang::String* typeface);

public:
    ::java::lang::Integer* getIndex() override;
    void setIndex(int32_t index) override;
    ::java::lang::String* getTypeface() override;
    void setTypeface(::java::lang::String* typeface) override;
    ::poi::common::usermodel::fonts::FontCharset* getCharset() override;
    void setCharset(::poi::common::usermodel::fonts::FontCharset* charset) override;
    ::poi::common::usermodel::fonts::FontFamily* getFamily() override;
    void setFamily(::poi::common::usermodel::fonts::FontFamily* family) override;
    ::poi::common::usermodel::fonts::FontPitch* getPitch() override;
    void setPitch(::poi::common::usermodel::fonts::FontPitch* pitch) override;

    // Generated

public: /* package */
    DrawFontInfo(::java::lang::String* typeface);
protected:
    DrawFontInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
