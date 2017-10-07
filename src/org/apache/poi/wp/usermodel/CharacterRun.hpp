// Generated from /POI/java/org/apache/poi/wp/usermodel/CharacterRun.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/wp/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::wp::usermodel::CharacterRun
    : public virtual ::java::lang::Object
{
    virtual bool isBold() = 0;
    virtual void setBold(bool bold) = 0;
    virtual bool isItalic() = 0;
    virtual void setItalic(bool italic) = 0;
    virtual bool isSmallCaps() = 0;
    virtual void setSmallCaps(bool smallCaps) = 0;
    virtual bool isCapitalized() = 0;
    virtual void setCapitalized(bool caps) = 0;
    virtual bool isStrikeThrough() = 0;
    virtual void setStrikeThrough(bool strike) = 0;
    virtual bool isDoubleStrikeThrough() = 0;
    virtual void setDoubleStrikethrough(bool dstrike) = 0;
    virtual bool isShadowed() = 0;
    virtual void setShadow(bool shadow) = 0;
    virtual bool isEmbossed() = 0;
    virtual void setEmbossed(bool emboss) = 0;
    virtual bool isImprinted() = 0;
    virtual void setImprinted(bool imprint) = 0;
    virtual int32_t getFontSize() = 0;
    virtual void setFontSize(int32_t halfPoints) = 0;
    virtual int32_t getCharacterSpacing() = 0;
    virtual void setCharacterSpacing(int32_t twips) = 0;
    virtual int32_t getKerning() = 0;
    virtual void setKerning(int32_t kern) = 0;
    virtual bool isHighlighted() = 0;
    virtual ::java::lang::String* getFontName() = 0;
    virtual ::java::lang::String* text() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
