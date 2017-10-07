// Generated from /POI/java/org/apache/poi/sl/usermodel/TextParagraph.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::usermodel::TextParagraph_BulletStyle
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getBulletCharacter() = 0;
    virtual ::java::lang::String* getBulletFont() = 0;
    virtual ::java::lang::Double* getBulletFontSize() = 0;
    virtual void setBulletFontColor(::java::awt::Color* color) = 0;
    virtual void setBulletFontColor(PaintStyle* color) = 0;
    virtual PaintStyle* getBulletFontColor() = 0;
    virtual AutoNumberingScheme* getAutoNumberingScheme() = 0;
    virtual ::java::lang::Integer* getAutoNumberingStartAt() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
