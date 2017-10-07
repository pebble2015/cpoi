// Generated from /POI/java/org/apache/poi/sl/usermodel/PresetColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::PresetColor, ::java::lang::EnumArray > PresetColorArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::PresetColor final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PresetColor *ActiveBorder;
    static PresetColor *ActiveCaption;
    static PresetColor *ActiveCaptionText;
    static PresetColor *AppWorkspace;
    static PresetColor *Control;
    static PresetColor *ControlDark;
    static PresetColor *ControlDarkDark;
    static PresetColor *ControlLight;
    static PresetColor *ControlLightLight;
    static PresetColor *ControlText;
    static PresetColor *Desktop;
    static PresetColor *GrayText;
    static PresetColor *Highlight;
    static PresetColor *HighlightText;
    static PresetColor *HotTrack;
    static PresetColor *InactiveBorder;
    static PresetColor *InactiveCaption;
    static PresetColor *InactiveCaptionText;
    static PresetColor *Info;
    static PresetColor *InfoText;
    static PresetColor *Menu;
    static PresetColor *MenuText;
    static PresetColor *ScrollBar;
    static PresetColor *Window;
    static PresetColor *WindowFrame;
    static PresetColor *WindowText;
    static PresetColor *Transparent;
    static PresetColor *AliceBlue;
    static PresetColor *AntiqueWhite;
    static PresetColor *Aqua;
    static PresetColor *Aquamarine;
    static PresetColor *Azure;
    static PresetColor *Beige;
    static PresetColor *Bisque;
    static PresetColor *Black;
    static PresetColor *BlanchedAlmond;
    static PresetColor *Blue;
    static PresetColor *BlueViolet;
    static PresetColor *Brown;
    static PresetColor *BurlyWood;
    static PresetColor *CadetBlue;
    static PresetColor *Chartreuse;
    static PresetColor *Chocolate;
    static PresetColor *Coral;
    static PresetColor *CornflowerBlue;
    static PresetColor *Cornsilk;
    static PresetColor *Crimson;
    static PresetColor *Cyan;
    static PresetColor *DarkBlue;
    static PresetColor *DarkCyan;
    static PresetColor *DarkGoldenrod;
    static PresetColor *DarkGray;
    static PresetColor *DarkGreen;
    static PresetColor *DarkKhaki;
    static PresetColor *DarkMagenta;
    static PresetColor *DarkOliveGreen;
    static PresetColor *DarkOrange;
    static PresetColor *DarkOrchid;
    static PresetColor *DarkRed;
    static PresetColor *DarkSalmon;
    static PresetColor *DarkSeaGreen;
    static PresetColor *DarkSlateBlue;
    static PresetColor *DarkSlateGray;
    static PresetColor *DarkTurquoise;
    static PresetColor *DarkViolet;
    static PresetColor *DeepPink;
    static PresetColor *DeepSkyBlue;
    static PresetColor *DimGray;
    static PresetColor *DodgerBlue;
    static PresetColor *Firebrick;
    static PresetColor *FloralWhite;
    static PresetColor *ForestGreen;
    static PresetColor *Fuchsia;
    static PresetColor *Gainsboro;
    static PresetColor *GhostWhite;
    static PresetColor *Gold;
    static PresetColor *Goldenrod;
    static PresetColor *Gray;
    static PresetColor *Green;
    static PresetColor *GreenYellow;
    static PresetColor *Honeydew;
    static PresetColor *HotPink;
    static PresetColor *IndianRed;
    static PresetColor *Indigo;
    static PresetColor *Ivory;
    static PresetColor *Khaki;
    static PresetColor *Lavender;
    static PresetColor *LavenderBlush;
    static PresetColor *LawnGreen;
    static PresetColor *LemonChiffon;
    static PresetColor *LightBlue;
    static PresetColor *LightCoral;
    static PresetColor *LightCyan;
    static PresetColor *LightGoldenrodYellow;
    static PresetColor *LightGray;
    static PresetColor *LightGreen;
    static PresetColor *LightPink;
    static PresetColor *LightSalmon;
    static PresetColor *LightSeaGreen;
    static PresetColor *LightSkyBlue;
    static PresetColor *LightSlateGray;
    static PresetColor *LightSteelBlue;
    static PresetColor *LightYellow;
    static PresetColor *Lime;
    static PresetColor *LimeGreen;
    static PresetColor *Linen;
    static PresetColor *Magenta;
    static PresetColor *Maroon;
    static PresetColor *MediumAquamarine;
    static PresetColor *MediumBlue;
    static PresetColor *MediumOrchid;
    static PresetColor *MediumPurple;
    static PresetColor *MediumSeaGreen;
    static PresetColor *MediumSlateBlue;
    static PresetColor *MediumSpringGreen;
    static PresetColor *MediumTurquoise;
    static PresetColor *MediumVioletRed;
    static PresetColor *MidnightBlue;
    static PresetColor *MintCream;
    static PresetColor *MistyRose;
    static PresetColor *Moccasin;
    static PresetColor *NavajoWhite;
    static PresetColor *Navy;
    static PresetColor *OldLace;
    static PresetColor *Olive;
    static PresetColor *OliveDrab;
    static PresetColor *Orange;
    static PresetColor *OrangeRed;
    static PresetColor *Orchid;
    static PresetColor *PaleGoldenrod;
    static PresetColor *PaleGreen;
    static PresetColor *PaleTurquoise;
    static PresetColor *PaleVioletRed;
    static PresetColor *PapayaWhip;
    static PresetColor *PeachPuff;
    static PresetColor *Peru;
    static PresetColor *Pink;
    static PresetColor *Plum;
    static PresetColor *PowderBlue;
    static PresetColor *Purple;
    static PresetColor *Red;
    static PresetColor *RosyBrown;
    static PresetColor *RoyalBlue;
    static PresetColor *SaddleBrown;
    static PresetColor *Salmon;
    static PresetColor *SandyBrown;
    static PresetColor *SeaGreen;
    static PresetColor *SeaShell;
    static PresetColor *Sienna;
    static PresetColor *Silver;
    static PresetColor *SkyBlue;
    static PresetColor *SlateBlue;
    static PresetColor *SlateGray;
    static PresetColor *Snow;
    static PresetColor *SpringGreen;
    static PresetColor *SteelBlue;
    static PresetColor *Tan;
    static PresetColor *Teal;
    static PresetColor *Thistle;
    static PresetColor *Tomato;
    static PresetColor *Turquoise;
    static PresetColor *Violet;
    static PresetColor *Wheat;
    static PresetColor *White;
    static PresetColor *WhiteSmoke;
    static PresetColor *Yellow;
    static PresetColor *YellowGreen;
    static PresetColor *ButtonFace;
    static PresetColor *ButtonHighlight;
    static PresetColor *ButtonShadow;
    static PresetColor *GradientActiveCaption;
    static PresetColor *GradientInactiveCaption;
    static PresetColor *MenuBar;
    static PresetColor *MenuHighlight;

public:
    ::java::awt::Color* color {  };
    int32_t nativeId {  };
    ::java::lang::String* ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::Integer* rgb, int32_t nativeId, ::java::lang::String* ooxmlId);

private:
    static ::java::util::Map* lookupOoxmlId_;

public:
    static PresetColor* valueOfOoxmlId(::java::lang::String* ooxmlId);
    static PresetColor* valueOfNativeId(int32_t nativeId);

    // Generated

private:
    PresetColor(::java::lang::String* name, int ordinal, ::java::lang::Integer* rgb, int32_t nativeId, ::java::lang::String* ooxmlId);
protected:
    PresetColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& lookupOoxmlId();

public:
    static PresetColor* valueOf(::java::lang::String* a0);
    static PresetColorArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
