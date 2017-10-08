// Generated from /POI/java/org/apache/poi/sl/usermodel/PresetColor.java
#include <org/apache/poi/sl/usermodel/PresetColor.hpp>

#include <java/awt/Color.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::PresetColor, ::java::lang::EnumArray > PresetColorArray;
        } // usermodel
    } // sl
} // poi

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::usermodel::PresetColor::PresetColor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::PresetColor::PresetColor(::java::lang::String* name, int ordinal, ::java::lang::Integer* rgb, int32_t nativeId, ::java::lang::String* ooxmlId) 
    : PresetColor(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, rgb,nativeId,ooxmlId);
}

poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ActiveBorder = new ::poi::sl::usermodel::PresetColor(u"ActiveBorder"_j, 0, ::java::lang::Integer::valueOf(int32_t(-4934476)), int32_t(1), u"activeBorder"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ActiveCaption = new ::poi::sl::usermodel::PresetColor(u"ActiveCaption"_j, 1, ::java::lang::Integer::valueOf(int32_t(-6703919)), int32_t(2), u"activeCaption"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ActiveCaptionText = new ::poi::sl::usermodel::PresetColor(u"ActiveCaptionText"_j, 2, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(3), u"captionText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::AppWorkspace = new ::poi::sl::usermodel::PresetColor(u"AppWorkspace"_j, 3, ::java::lang::Integer::valueOf(int32_t(-5526613)), int32_t(4), u"appWorkspace"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Control = new ::poi::sl::usermodel::PresetColor(u"Control"_j, 4, ::java::lang::Integer::valueOf(int32_t(-986896)), int32_t(5), u"btnFace"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ControlDark = new ::poi::sl::usermodel::PresetColor(u"ControlDark"_j, 5, ::java::lang::Integer::valueOf(int32_t(-9868951)), int32_t(6), u"btnShadow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ControlDarkDark = new ::poi::sl::usermodel::PresetColor(u"ControlDarkDark"_j, 6, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(7), u"3dDkShadow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ControlLight = new ::poi::sl::usermodel::PresetColor(u"ControlLight"_j, 7, ::java::lang::Integer::valueOf(int32_t(-1842205)), int32_t(8), u"btnHighlight"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ControlLightLight = new ::poi::sl::usermodel::PresetColor(u"ControlLightLight"_j, 8, ::java::lang::Integer::valueOf(int32_t(-1842205)), int32_t(9), u"3dLight"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ControlText = new ::poi::sl::usermodel::PresetColor(u"ControlText"_j, 9, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(10), u"btnText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Desktop = new ::poi::sl::usermodel::PresetColor(u"Desktop"_j, 10, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(11), u"background"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::GrayText = new ::poi::sl::usermodel::PresetColor(u"GrayText"_j, 11, ::java::lang::Integer::valueOf(int32_t(-9605779)), int32_t(12), u"grayText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Highlight = new ::poi::sl::usermodel::PresetColor(u"Highlight"_j, 12, ::java::lang::Integer::valueOf(int32_t(-13395457)), int32_t(13), u"highlight"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::HighlightText = new ::poi::sl::usermodel::PresetColor(u"HighlightText"_j, 13, ::java::lang::Integer::valueOf(int32_t(-1)), int32_t(14), u"highlightText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::HotTrack = new ::poi::sl::usermodel::PresetColor(u"HotTrack"_j, 14, ::java::lang::Integer::valueOf(int32_t(-16750900)), int32_t(15), u"hotLight"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::InactiveBorder = new ::poi::sl::usermodel::PresetColor(u"InactiveBorder"_j, 15, ::java::lang::Integer::valueOf(int32_t(-722948)), int32_t(16), u"inactiveBorder"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::InactiveCaption = new ::poi::sl::usermodel::PresetColor(u"InactiveCaption"_j, 16, ::java::lang::Integer::valueOf(int32_t(-4207141)), int32_t(17), u"inactiveCaption"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::InactiveCaptionText = new ::poi::sl::usermodel::PresetColor(u"InactiveCaptionText"_j, 17, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(18), u"inactiveCaptionText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Info = new ::poi::sl::usermodel::PresetColor(u"Info"_j, 18, ::java::lang::Integer::valueOf(int32_t(-31)), int32_t(19), u"infoBk"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::InfoText = new ::poi::sl::usermodel::PresetColor(u"InfoText"_j, 19, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(20), u"infoText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Menu = new ::poi::sl::usermodel::PresetColor(u"Menu"_j, 20, ::java::lang::Integer::valueOf(int32_t(-986896)), int32_t(21), u"menu"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MenuText = new ::poi::sl::usermodel::PresetColor(u"MenuText"_j, 21, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(22), u"menuText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ScrollBar = new ::poi::sl::usermodel::PresetColor(u"ScrollBar"_j, 22, ::java::lang::Integer::valueOf(int32_t(-3618616)), int32_t(23), u"scrollBar"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Window = new ::poi::sl::usermodel::PresetColor(u"Window"_j, 23, ::java::lang::Integer::valueOf(int32_t(-1)), int32_t(24), u"window"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::WindowFrame = new ::poi::sl::usermodel::PresetColor(u"WindowFrame"_j, 24, ::java::lang::Integer::valueOf(int32_t(-10197916)), int32_t(25), u"windowFrame"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::WindowText = new ::poi::sl::usermodel::PresetColor(u"WindowText"_j, 25, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(26), u"windowText"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Transparent = new ::poi::sl::usermodel::PresetColor(u"Transparent"_j, 26, ::java::lang::Integer::valueOf(int32_t(16777215)), int32_t(27), nullptr);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::AliceBlue = new ::poi::sl::usermodel::PresetColor(u"AliceBlue"_j, 27, ::java::lang::Integer::valueOf(int32_t(-984833)), int32_t(28), u"aliceBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::AntiqueWhite = new ::poi::sl::usermodel::PresetColor(u"AntiqueWhite"_j, 28, ::java::lang::Integer::valueOf(int32_t(-332841)), int32_t(29), u"antiqueWhite"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Aqua = new ::poi::sl::usermodel::PresetColor(u"Aqua"_j, 29, ::java::lang::Integer::valueOf(int32_t(-16711681)), int32_t(30), u"aqua"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Aquamarine = new ::poi::sl::usermodel::PresetColor(u"Aquamarine"_j, 30, ::java::lang::Integer::valueOf(int32_t(-8388652)), int32_t(31), u"aquamarine"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Azure = new ::poi::sl::usermodel::PresetColor(u"Azure"_j, 31, ::java::lang::Integer::valueOf(int32_t(-983041)), int32_t(32), u"azure"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Beige = new ::poi::sl::usermodel::PresetColor(u"Beige"_j, 32, ::java::lang::Integer::valueOf(int32_t(-657956)), int32_t(33), u"beige"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Bisque = new ::poi::sl::usermodel::PresetColor(u"Bisque"_j, 33, ::java::lang::Integer::valueOf(int32_t(-6972)), int32_t(34), u"bisque"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Black = new ::poi::sl::usermodel::PresetColor(u"Black"_j, 34, ::java::lang::Integer::valueOf(int32_t(-16777216)), int32_t(35), u"black"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::BlanchedAlmond = new ::poi::sl::usermodel::PresetColor(u"BlanchedAlmond"_j, 35, ::java::lang::Integer::valueOf(int32_t(-5171)), int32_t(36), u"blanchedAlmond"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Blue = new ::poi::sl::usermodel::PresetColor(u"Blue"_j, 36, ::java::lang::Integer::valueOf(int32_t(-16776961)), int32_t(37), u"blue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::BlueViolet = new ::poi::sl::usermodel::PresetColor(u"BlueViolet"_j, 37, ::java::lang::Integer::valueOf(int32_t(-7722014)), int32_t(38), u"blueViolet"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Brown = new ::poi::sl::usermodel::PresetColor(u"Brown"_j, 38, ::java::lang::Integer::valueOf(int32_t(-5952982)), int32_t(39), u"brown"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::BurlyWood = new ::poi::sl::usermodel::PresetColor(u"BurlyWood"_j, 39, ::java::lang::Integer::valueOf(int32_t(-2180985)), int32_t(40), u"burlyWood"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::CadetBlue = new ::poi::sl::usermodel::PresetColor(u"CadetBlue"_j, 40, ::java::lang::Integer::valueOf(int32_t(-10510688)), int32_t(41), u"cadetBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Chartreuse = new ::poi::sl::usermodel::PresetColor(u"Chartreuse"_j, 41, ::java::lang::Integer::valueOf(int32_t(-8388864)), int32_t(42), u"chartreuse"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Chocolate = new ::poi::sl::usermodel::PresetColor(u"Chocolate"_j, 42, ::java::lang::Integer::valueOf(int32_t(-2987746)), int32_t(43), u"chocolate"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Coral = new ::poi::sl::usermodel::PresetColor(u"Coral"_j, 43, ::java::lang::Integer::valueOf(int32_t(-32944)), int32_t(44), u"coral"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::CornflowerBlue = new ::poi::sl::usermodel::PresetColor(u"CornflowerBlue"_j, 44, ::java::lang::Integer::valueOf(int32_t(-10185235)), int32_t(45), u"cornflowerBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Cornsilk = new ::poi::sl::usermodel::PresetColor(u"Cornsilk"_j, 45, ::java::lang::Integer::valueOf(int32_t(-1828)), int32_t(46), u"cornsilk"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Crimson = new ::poi::sl::usermodel::PresetColor(u"Crimson"_j, 46, ::java::lang::Integer::valueOf(int32_t(-2354116)), int32_t(47), u"crimson"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Cyan = new ::poi::sl::usermodel::PresetColor(u"Cyan"_j, 47, ::java::lang::Integer::valueOf(int32_t(-16711681)), int32_t(48), u"cyan"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkBlue = new ::poi::sl::usermodel::PresetColor(u"DarkBlue"_j, 48, ::java::lang::Integer::valueOf(int32_t(-16777077)), int32_t(49), u"dkBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkCyan = new ::poi::sl::usermodel::PresetColor(u"DarkCyan"_j, 49, ::java::lang::Integer::valueOf(int32_t(-16741493)), int32_t(50), u"dkCyan"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkGoldenrod = new ::poi::sl::usermodel::PresetColor(u"DarkGoldenrod"_j, 50, ::java::lang::Integer::valueOf(int32_t(-4684277)), int32_t(51), u"dkGoldenrod"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkGray = new ::poi::sl::usermodel::PresetColor(u"DarkGray"_j, 51, ::java::lang::Integer::valueOf(int32_t(-5658199)), int32_t(52), u"dkGray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkGreen = new ::poi::sl::usermodel::PresetColor(u"DarkGreen"_j, 52, ::java::lang::Integer::valueOf(int32_t(-16751616)), int32_t(53), u"dkGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkKhaki = new ::poi::sl::usermodel::PresetColor(u"DarkKhaki"_j, 53, ::java::lang::Integer::valueOf(int32_t(-4343957)), int32_t(54), u"dkKhaki"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkMagenta = new ::poi::sl::usermodel::PresetColor(u"DarkMagenta"_j, 54, ::java::lang::Integer::valueOf(int32_t(-7667573)), int32_t(55), u"dkMagenta"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkOliveGreen = new ::poi::sl::usermodel::PresetColor(u"DarkOliveGreen"_j, 55, ::java::lang::Integer::valueOf(int32_t(-11179217)), int32_t(56), u"dkOliveGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkOrange = new ::poi::sl::usermodel::PresetColor(u"DarkOrange"_j, 56, ::java::lang::Integer::valueOf(int32_t(-29696)), int32_t(57), u"dkOrange"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkOrchid = new ::poi::sl::usermodel::PresetColor(u"DarkOrchid"_j, 57, ::java::lang::Integer::valueOf(int32_t(-6737204)), int32_t(58), u"dkOrchid"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkRed = new ::poi::sl::usermodel::PresetColor(u"DarkRed"_j, 58, ::java::lang::Integer::valueOf(int32_t(-7667712)), int32_t(59), u"dkRed"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkSalmon = new ::poi::sl::usermodel::PresetColor(u"DarkSalmon"_j, 59, ::java::lang::Integer::valueOf(int32_t(-1468806)), int32_t(60), u"dkSalmon"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkSeaGreen = new ::poi::sl::usermodel::PresetColor(u"DarkSeaGreen"_j, 60, ::java::lang::Integer::valueOf(int32_t(-7357301)), int32_t(61), u"dkSeaGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkSlateBlue = new ::poi::sl::usermodel::PresetColor(u"DarkSlateBlue"_j, 61, ::java::lang::Integer::valueOf(int32_t(-12042869)), int32_t(62), u"dkSlateBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkSlateGray = new ::poi::sl::usermodel::PresetColor(u"DarkSlateGray"_j, 62, ::java::lang::Integer::valueOf(int32_t(-13676721)), int32_t(63), u"dkSlateGray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkTurquoise = new ::poi::sl::usermodel::PresetColor(u"DarkTurquoise"_j, 63, ::java::lang::Integer::valueOf(int32_t(-16724271)), int32_t(64), u"dkTurquoise"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DarkViolet = new ::poi::sl::usermodel::PresetColor(u"DarkViolet"_j, 64, ::java::lang::Integer::valueOf(int32_t(-7077677)), int32_t(65), u"dkViolet"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DeepPink = new ::poi::sl::usermodel::PresetColor(u"DeepPink"_j, 65, ::java::lang::Integer::valueOf(int32_t(-60269)), int32_t(66), u"deepPink"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DeepSkyBlue = new ::poi::sl::usermodel::PresetColor(u"DeepSkyBlue"_j, 66, ::java::lang::Integer::valueOf(int32_t(-16728065)), int32_t(67), u"deepSkyBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DimGray = new ::poi::sl::usermodel::PresetColor(u"DimGray"_j, 67, ::java::lang::Integer::valueOf(int32_t(-9868951)), int32_t(68), u"dimGray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::DodgerBlue = new ::poi::sl::usermodel::PresetColor(u"DodgerBlue"_j, 68, ::java::lang::Integer::valueOf(int32_t(-14774017)), int32_t(69), u"dodgerBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Firebrick = new ::poi::sl::usermodel::PresetColor(u"Firebrick"_j, 69, ::java::lang::Integer::valueOf(int32_t(-5103070)), int32_t(70), u"firebrick"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::FloralWhite = new ::poi::sl::usermodel::PresetColor(u"FloralWhite"_j, 70, ::java::lang::Integer::valueOf(int32_t(-1296)), int32_t(71), u"floralWhite"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ForestGreen = new ::poi::sl::usermodel::PresetColor(u"ForestGreen"_j, 71, ::java::lang::Integer::valueOf(int32_t(-14513374)), int32_t(72), u"forestGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Fuchsia = new ::poi::sl::usermodel::PresetColor(u"Fuchsia"_j, 72, ::java::lang::Integer::valueOf(int32_t(-65281)), int32_t(73), u"fuchsia"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Gainsboro = new ::poi::sl::usermodel::PresetColor(u"Gainsboro"_j, 73, ::java::lang::Integer::valueOf(int32_t(-2302756)), int32_t(74), u"gainsboro"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::GhostWhite = new ::poi::sl::usermodel::PresetColor(u"GhostWhite"_j, 74, ::java::lang::Integer::valueOf(int32_t(-460545)), int32_t(75), u"ghostWhite"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Gold = new ::poi::sl::usermodel::PresetColor(u"Gold"_j, 75, ::java::lang::Integer::valueOf(int32_t(-10496)), int32_t(76), u"gold"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Goldenrod = new ::poi::sl::usermodel::PresetColor(u"Goldenrod"_j, 76, ::java::lang::Integer::valueOf(int32_t(-2448096)), int32_t(77), u"goldenrod"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Gray = new ::poi::sl::usermodel::PresetColor(u"Gray"_j, 77, ::java::lang::Integer::valueOf(int32_t(-8355712)), int32_t(78), u"gray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Green = new ::poi::sl::usermodel::PresetColor(u"Green"_j, 78, ::java::lang::Integer::valueOf(int32_t(-16744448)), int32_t(79), u"green"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::GreenYellow = new ::poi::sl::usermodel::PresetColor(u"GreenYellow"_j, 79, ::java::lang::Integer::valueOf(int32_t(-5374161)), int32_t(80), u"greenYellow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Honeydew = new ::poi::sl::usermodel::PresetColor(u"Honeydew"_j, 80, ::java::lang::Integer::valueOf(int32_t(-983056)), int32_t(81), u"honeydew"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::HotPink = new ::poi::sl::usermodel::PresetColor(u"HotPink"_j, 81, ::java::lang::Integer::valueOf(int32_t(-38476)), int32_t(82), u"hotPink"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::IndianRed = new ::poi::sl::usermodel::PresetColor(u"IndianRed"_j, 82, ::java::lang::Integer::valueOf(int32_t(-3318692)), int32_t(83), u"indianRed"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Indigo = new ::poi::sl::usermodel::PresetColor(u"Indigo"_j, 83, ::java::lang::Integer::valueOf(int32_t(-11861886)), int32_t(84), u"indigo"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Ivory = new ::poi::sl::usermodel::PresetColor(u"Ivory"_j, 84, ::java::lang::Integer::valueOf(int32_t(-16)), int32_t(85), u"ivory"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Khaki = new ::poi::sl::usermodel::PresetColor(u"Khaki"_j, 85, ::java::lang::Integer::valueOf(int32_t(-989556)), int32_t(86), u"khaki"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Lavender = new ::poi::sl::usermodel::PresetColor(u"Lavender"_j, 86, ::java::lang::Integer::valueOf(int32_t(-1644806)), int32_t(87), u"lavender"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LavenderBlush = new ::poi::sl::usermodel::PresetColor(u"LavenderBlush"_j, 87, ::java::lang::Integer::valueOf(int32_t(-3851)), int32_t(88), u"lavenderBlush"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LawnGreen = new ::poi::sl::usermodel::PresetColor(u"LawnGreen"_j, 88, ::java::lang::Integer::valueOf(int32_t(-8586240)), int32_t(89), u"lawnGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LemonChiffon = new ::poi::sl::usermodel::PresetColor(u"LemonChiffon"_j, 89, ::java::lang::Integer::valueOf(int32_t(-1331)), int32_t(90), u"lemonChiffon"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightBlue = new ::poi::sl::usermodel::PresetColor(u"LightBlue"_j, 90, ::java::lang::Integer::valueOf(int32_t(-5383962)), int32_t(91), u"ltBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightCoral = new ::poi::sl::usermodel::PresetColor(u"LightCoral"_j, 91, ::java::lang::Integer::valueOf(int32_t(-1015680)), int32_t(92), u"ltCoral"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightCyan = new ::poi::sl::usermodel::PresetColor(u"LightCyan"_j, 92, ::java::lang::Integer::valueOf(int32_t(-2031617)), int32_t(93), u"ltCyan"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightGoldenrodYellow = new ::poi::sl::usermodel::PresetColor(u"LightGoldenrodYellow"_j, 93, ::java::lang::Integer::valueOf(int32_t(-329096)), int32_t(94), u"ltGoldenrodYellow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightGray = new ::poi::sl::usermodel::PresetColor(u"LightGray"_j, 94, ::java::lang::Integer::valueOf(int32_t(-2894893)), int32_t(95), u"ltGray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightGreen = new ::poi::sl::usermodel::PresetColor(u"LightGreen"_j, 95, ::java::lang::Integer::valueOf(int32_t(-7278960)), int32_t(96), u"ltGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightPink = new ::poi::sl::usermodel::PresetColor(u"LightPink"_j, 96, ::java::lang::Integer::valueOf(int32_t(-18751)), int32_t(97), u"ltPink"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightSalmon = new ::poi::sl::usermodel::PresetColor(u"LightSalmon"_j, 97, ::java::lang::Integer::valueOf(int32_t(-24454)), int32_t(98), u"ltSalmon"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightSeaGreen = new ::poi::sl::usermodel::PresetColor(u"LightSeaGreen"_j, 98, ::java::lang::Integer::valueOf(int32_t(-14634326)), int32_t(99), u"ltSeaGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightSkyBlue = new ::poi::sl::usermodel::PresetColor(u"LightSkyBlue"_j, 99, ::java::lang::Integer::valueOf(int32_t(-7876870)), int32_t(100), u"ltSkyBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightSlateGray = new ::poi::sl::usermodel::PresetColor(u"LightSlateGray"_j, 100, ::java::lang::Integer::valueOf(int32_t(-8943463)), int32_t(101), u"ltSlateGray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightSteelBlue = new ::poi::sl::usermodel::PresetColor(u"LightSteelBlue"_j, 101, ::java::lang::Integer::valueOf(int32_t(-5192482)), int32_t(102), u"ltSteelBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LightYellow = new ::poi::sl::usermodel::PresetColor(u"LightYellow"_j, 102, ::java::lang::Integer::valueOf(int32_t(-32)), int32_t(103), u"ltYellow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Lime = new ::poi::sl::usermodel::PresetColor(u"Lime"_j, 103, ::java::lang::Integer::valueOf(int32_t(-16711936)), int32_t(104), u"lime"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::LimeGreen = new ::poi::sl::usermodel::PresetColor(u"LimeGreen"_j, 104, ::java::lang::Integer::valueOf(int32_t(-13447886)), int32_t(105), u"limeGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Linen = new ::poi::sl::usermodel::PresetColor(u"Linen"_j, 105, ::java::lang::Integer::valueOf(int32_t(-331546)), int32_t(106), u"linen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Magenta = new ::poi::sl::usermodel::PresetColor(u"Magenta"_j, 106, ::java::lang::Integer::valueOf(int32_t(-65281)), int32_t(107), u"magenta"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Maroon = new ::poi::sl::usermodel::PresetColor(u"Maroon"_j, 107, ::java::lang::Integer::valueOf(int32_t(-8388608)), int32_t(108), u"maroon"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumAquamarine = new ::poi::sl::usermodel::PresetColor(u"MediumAquamarine"_j, 108, ::java::lang::Integer::valueOf(int32_t(-10039894)), int32_t(109), u"medAquamarine"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumBlue = new ::poi::sl::usermodel::PresetColor(u"MediumBlue"_j, 109, ::java::lang::Integer::valueOf(int32_t(-16777011)), int32_t(110), u"medBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumOrchid = new ::poi::sl::usermodel::PresetColor(u"MediumOrchid"_j, 110, ::java::lang::Integer::valueOf(int32_t(-4565549)), int32_t(111), u"medOrchid"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumPurple = new ::poi::sl::usermodel::PresetColor(u"MediumPurple"_j, 111, ::java::lang::Integer::valueOf(int32_t(-7114533)), int32_t(112), u"medPurple"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumSeaGreen = new ::poi::sl::usermodel::PresetColor(u"MediumSeaGreen"_j, 112, ::java::lang::Integer::valueOf(int32_t(-12799119)), int32_t(113), u"medSeaGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumSlateBlue = new ::poi::sl::usermodel::PresetColor(u"MediumSlateBlue"_j, 113, ::java::lang::Integer::valueOf(int32_t(-8689426)), int32_t(114), u"medSlateBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumSpringGreen = new ::poi::sl::usermodel::PresetColor(u"MediumSpringGreen"_j, 114, ::java::lang::Integer::valueOf(int32_t(-16713062)), int32_t(115), u"medSpringGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumTurquoise = new ::poi::sl::usermodel::PresetColor(u"MediumTurquoise"_j, 115, ::java::lang::Integer::valueOf(int32_t(-12004916)), int32_t(116), u"medTurquoise"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MediumVioletRed = new ::poi::sl::usermodel::PresetColor(u"MediumVioletRed"_j, 116, ::java::lang::Integer::valueOf(int32_t(-3730043)), int32_t(117), u"medVioletRed"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MidnightBlue = new ::poi::sl::usermodel::PresetColor(u"MidnightBlue"_j, 117, ::java::lang::Integer::valueOf(int32_t(-15132304)), int32_t(118), u"midnightBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MintCream = new ::poi::sl::usermodel::PresetColor(u"MintCream"_j, 118, ::java::lang::Integer::valueOf(int32_t(-655366)), int32_t(119), u"mintCream"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MistyRose = new ::poi::sl::usermodel::PresetColor(u"MistyRose"_j, 119, ::java::lang::Integer::valueOf(int32_t(-6943)), int32_t(120), u"mistyRose"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Moccasin = new ::poi::sl::usermodel::PresetColor(u"Moccasin"_j, 120, ::java::lang::Integer::valueOf(int32_t(-6987)), int32_t(121), u"moccasin"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::NavajoWhite = new ::poi::sl::usermodel::PresetColor(u"NavajoWhite"_j, 121, ::java::lang::Integer::valueOf(int32_t(-8531)), int32_t(122), u"navajoWhite"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Navy = new ::poi::sl::usermodel::PresetColor(u"Navy"_j, 122, ::java::lang::Integer::valueOf(int32_t(-16777088)), int32_t(123), u"navy"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::OldLace = new ::poi::sl::usermodel::PresetColor(u"OldLace"_j, 123, ::java::lang::Integer::valueOf(int32_t(-133658)), int32_t(124), u"oldLace"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Olive = new ::poi::sl::usermodel::PresetColor(u"Olive"_j, 124, ::java::lang::Integer::valueOf(int32_t(-8355840)), int32_t(125), u"olive"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::OliveDrab = new ::poi::sl::usermodel::PresetColor(u"OliveDrab"_j, 125, ::java::lang::Integer::valueOf(int32_t(-9728477)), int32_t(126), u"oliveDrab"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Orange = new ::poi::sl::usermodel::PresetColor(u"Orange"_j, 126, ::java::lang::Integer::valueOf(int32_t(-23296)), int32_t(127), u"orange"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::OrangeRed = new ::poi::sl::usermodel::PresetColor(u"OrangeRed"_j, 127, ::java::lang::Integer::valueOf(int32_t(-47872)), int32_t(128), u"orangeRed"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Orchid = new ::poi::sl::usermodel::PresetColor(u"Orchid"_j, 128, ::java::lang::Integer::valueOf(int32_t(-2461482)), int32_t(129), u"orchid"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PaleGoldenrod = new ::poi::sl::usermodel::PresetColor(u"PaleGoldenrod"_j, 129, ::java::lang::Integer::valueOf(int32_t(-1120086)), int32_t(130), u"paleGoldenrod"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PaleGreen = new ::poi::sl::usermodel::PresetColor(u"PaleGreen"_j, 130, ::java::lang::Integer::valueOf(int32_t(-6751336)), int32_t(131), u"paleGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PaleTurquoise = new ::poi::sl::usermodel::PresetColor(u"PaleTurquoise"_j, 131, ::java::lang::Integer::valueOf(int32_t(-5247250)), int32_t(132), u"paleTurquoise"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PaleVioletRed = new ::poi::sl::usermodel::PresetColor(u"PaleVioletRed"_j, 132, ::java::lang::Integer::valueOf(int32_t(-2396013)), int32_t(133), u"paleVioletRed"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PapayaWhip = new ::poi::sl::usermodel::PresetColor(u"PapayaWhip"_j, 133, ::java::lang::Integer::valueOf(int32_t(-4139)), int32_t(134), u"papayaWhip"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PeachPuff = new ::poi::sl::usermodel::PresetColor(u"PeachPuff"_j, 134, ::java::lang::Integer::valueOf(int32_t(-9543)), int32_t(135), u"peachPuff"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Peru = new ::poi::sl::usermodel::PresetColor(u"Peru"_j, 135, ::java::lang::Integer::valueOf(int32_t(-3308225)), int32_t(136), u"peru"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Pink = new ::poi::sl::usermodel::PresetColor(u"Pink"_j, 136, ::java::lang::Integer::valueOf(int32_t(-16181)), int32_t(137), u"pink"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Plum = new ::poi::sl::usermodel::PresetColor(u"Plum"_j, 137, ::java::lang::Integer::valueOf(int32_t(-2252579)), int32_t(138), u"plum"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::PowderBlue = new ::poi::sl::usermodel::PresetColor(u"PowderBlue"_j, 138, ::java::lang::Integer::valueOf(int32_t(-5185306)), int32_t(139), u"powderBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Purple = new ::poi::sl::usermodel::PresetColor(u"Purple"_j, 139, ::java::lang::Integer::valueOf(int32_t(-8388480)), int32_t(140), u"purple"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Red = new ::poi::sl::usermodel::PresetColor(u"Red"_j, 140, ::java::lang::Integer::valueOf(int32_t(-65536)), int32_t(141), u"red"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::RosyBrown = new ::poi::sl::usermodel::PresetColor(u"RosyBrown"_j, 141, ::java::lang::Integer::valueOf(int32_t(-4419697)), int32_t(142), u"rosyBrown"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::RoyalBlue = new ::poi::sl::usermodel::PresetColor(u"RoyalBlue"_j, 142, ::java::lang::Integer::valueOf(int32_t(-12490271)), int32_t(143), u"royalBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SaddleBrown = new ::poi::sl::usermodel::PresetColor(u"SaddleBrown"_j, 143, ::java::lang::Integer::valueOf(int32_t(-7650029)), int32_t(144), u"saddleBrown"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Salmon = new ::poi::sl::usermodel::PresetColor(u"Salmon"_j, 144, ::java::lang::Integer::valueOf(int32_t(-360334)), int32_t(145), u"salmon"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SandyBrown = new ::poi::sl::usermodel::PresetColor(u"SandyBrown"_j, 145, ::java::lang::Integer::valueOf(int32_t(-744352)), int32_t(146), u"sandyBrown"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SeaGreen = new ::poi::sl::usermodel::PresetColor(u"SeaGreen"_j, 146, ::java::lang::Integer::valueOf(int32_t(-13726889)), int32_t(147), u"seaGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SeaShell = new ::poi::sl::usermodel::PresetColor(u"SeaShell"_j, 147, ::java::lang::Integer::valueOf(int32_t(-2578)), int32_t(148), u"seaShell"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Sienna = new ::poi::sl::usermodel::PresetColor(u"Sienna"_j, 148, ::java::lang::Integer::valueOf(int32_t(-6270419)), int32_t(149), u"sienna"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Silver = new ::poi::sl::usermodel::PresetColor(u"Silver"_j, 149, ::java::lang::Integer::valueOf(int32_t(-4144960)), int32_t(150), u"silver"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SkyBlue = new ::poi::sl::usermodel::PresetColor(u"SkyBlue"_j, 150, ::java::lang::Integer::valueOf(int32_t(-7876885)), int32_t(151), u"skyBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SlateBlue = new ::poi::sl::usermodel::PresetColor(u"SlateBlue"_j, 151, ::java::lang::Integer::valueOf(int32_t(-9807155)), int32_t(152), u"slateBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SlateGray = new ::poi::sl::usermodel::PresetColor(u"SlateGray"_j, 152, ::java::lang::Integer::valueOf(int32_t(-9404272)), int32_t(153), u"slateGray"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Snow = new ::poi::sl::usermodel::PresetColor(u"Snow"_j, 153, ::java::lang::Integer::valueOf(int32_t(-1286)), int32_t(154), u"snow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SpringGreen = new ::poi::sl::usermodel::PresetColor(u"SpringGreen"_j, 154, ::java::lang::Integer::valueOf(int32_t(-16711809)), int32_t(155), u"springGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::SteelBlue = new ::poi::sl::usermodel::PresetColor(u"SteelBlue"_j, 155, ::java::lang::Integer::valueOf(int32_t(-12156236)), int32_t(156), u"steelBlue"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Tan = new ::poi::sl::usermodel::PresetColor(u"Tan"_j, 156, ::java::lang::Integer::valueOf(int32_t(-2968436)), int32_t(157), u"tan"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Teal = new ::poi::sl::usermodel::PresetColor(u"Teal"_j, 157, ::java::lang::Integer::valueOf(int32_t(-16744320)), int32_t(158), u"teal"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Thistle = new ::poi::sl::usermodel::PresetColor(u"Thistle"_j, 158, ::java::lang::Integer::valueOf(int32_t(-2572328)), int32_t(159), u"thistle"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Tomato = new ::poi::sl::usermodel::PresetColor(u"Tomato"_j, 159, ::java::lang::Integer::valueOf(int32_t(-40121)), int32_t(160), u"tomato"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Turquoise = new ::poi::sl::usermodel::PresetColor(u"Turquoise"_j, 160, ::java::lang::Integer::valueOf(int32_t(-12525360)), int32_t(161), u"turquoise"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Violet = new ::poi::sl::usermodel::PresetColor(u"Violet"_j, 161, ::java::lang::Integer::valueOf(int32_t(-1146130)), int32_t(162), u"violet"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Wheat = new ::poi::sl::usermodel::PresetColor(u"Wheat"_j, 162, ::java::lang::Integer::valueOf(int32_t(-663885)), int32_t(163), u"wheat"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::White = new ::poi::sl::usermodel::PresetColor(u"White"_j, 163, ::java::lang::Integer::valueOf(int32_t(-1)), int32_t(164), u"white"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::WhiteSmoke = new ::poi::sl::usermodel::PresetColor(u"WhiteSmoke"_j, 164, ::java::lang::Integer::valueOf(int32_t(-657931)), int32_t(165), u"whiteSmoke"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::Yellow = new ::poi::sl::usermodel::PresetColor(u"Yellow"_j, 165, ::java::lang::Integer::valueOf(int32_t(-256)), int32_t(166), u"yellow"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::YellowGreen = new ::poi::sl::usermodel::PresetColor(u"YellowGreen"_j, 166, ::java::lang::Integer::valueOf(int32_t(-6632142)), int32_t(167), u"yellowGreen"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ButtonFace = new ::poi::sl::usermodel::PresetColor(u"ButtonFace"_j, 167, ::java::lang::Integer::valueOf(int32_t(-986896)), int32_t(168), nullptr);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ButtonHighlight = new ::poi::sl::usermodel::PresetColor(u"ButtonHighlight"_j, 168, ::java::lang::Integer::valueOf(int32_t(-1)), int32_t(169), nullptr);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::ButtonShadow = new ::poi::sl::usermodel::PresetColor(u"ButtonShadow"_j, 169, ::java::lang::Integer::valueOf(int32_t(-6250336)), int32_t(170), nullptr);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::GradientActiveCaption = new ::poi::sl::usermodel::PresetColor(u"GradientActiveCaption"_j, 170, ::java::lang::Integer::valueOf(int32_t(-4599318)), int32_t(171), u"gradientActiveCaption"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::GradientInactiveCaption = new ::poi::sl::usermodel::PresetColor(u"GradientInactiveCaption"_j, 171, ::java::lang::Integer::valueOf(int32_t(-2628366)), int32_t(172), u"gradientInactiveCaption"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MenuBar = new ::poi::sl::usermodel::PresetColor(u"MenuBar"_j, 172, ::java::lang::Integer::valueOf(int32_t(-986896)), int32_t(173), u"menuBar"_j);
poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::MenuHighlight = new ::poi::sl::usermodel::PresetColor(u"MenuHighlight"_j, 173, ::java::lang::Integer::valueOf(int32_t(-13395457)), int32_t(174), u"menuHighlight"_j);
void poi::sl::usermodel::PresetColor::ctor(::java::lang::String* name, int ordinal, ::java::lang::Integer* rgb, int32_t nativeId, ::java::lang::String* ooxmlId)
{
    super::ctor(name, ordinal);
    this->color = (rgb == nullptr) ? static_cast< ::java::awt::Color* >(nullptr) : new ::java::awt::Color((npc(rgb))->intValue(), true);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

java::util::Map*& poi::sl::usermodel::PresetColor::lookupOoxmlId()
{
    clinit();
    return lookupOoxmlId_;
}
java::util::Map* poi::sl::usermodel::PresetColor::lookupOoxmlId_;

poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::valueOfOoxmlId(::java::lang::String* ooxmlId)
{
    clinit();
    return java_cast< PresetColor* >(npc(lookupOoxmlId_)->get(ooxmlId));
}

poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::valueOfNativeId(int32_t nativeId)
{
    clinit();
    auto vals = values();
    return (0 < nativeId && nativeId <= npc(vals)->length) ? (*vals)[nativeId - int32_t(1)] : static_cast< PresetColor* >(nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::PresetColor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.PresetColor", 39);
    return c;
}

void poi::sl::usermodel::PresetColor::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            lookupOoxmlId_ = new ::java::util::HashMap();
            for(auto pc : *npc(PresetColor::values())) {
                if(npc(pc)->ooxmlId != nullptr) {
                    npc(lookupOoxmlId_)->put(npc(pc)->ooxmlId, pc);
                }
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::sl::usermodel::PresetColor* poi::sl::usermodel::PresetColor::valueOf(::java::lang::String* a0)
{
    if(ActiveBorder->toString()->equals(a0))
        return ActiveBorder;
    if(ActiveCaption->toString()->equals(a0))
        return ActiveCaption;
    if(ActiveCaptionText->toString()->equals(a0))
        return ActiveCaptionText;
    if(AliceBlue->toString()->equals(a0))
        return AliceBlue;
    if(AntiqueWhite->toString()->equals(a0))
        return AntiqueWhite;
    if(AppWorkspace->toString()->equals(a0))
        return AppWorkspace;
    if(Aqua->toString()->equals(a0))
        return Aqua;
    if(Aquamarine->toString()->equals(a0))
        return Aquamarine;
    if(Azure->toString()->equals(a0))
        return Azure;
    if(Beige->toString()->equals(a0))
        return Beige;
    if(Bisque->toString()->equals(a0))
        return Bisque;
    if(Black->toString()->equals(a0))
        return Black;
    if(BlanchedAlmond->toString()->equals(a0))
        return BlanchedAlmond;
    if(Blue->toString()->equals(a0))
        return Blue;
    if(BlueViolet->toString()->equals(a0))
        return BlueViolet;
    if(Brown->toString()->equals(a0))
        return Brown;
    if(BurlyWood->toString()->equals(a0))
        return BurlyWood;
    if(ButtonFace->toString()->equals(a0))
        return ButtonFace;
    if(ButtonHighlight->toString()->equals(a0))
        return ButtonHighlight;
    if(ButtonShadow->toString()->equals(a0))
        return ButtonShadow;
    if(CadetBlue->toString()->equals(a0))
        return CadetBlue;
    if(Chartreuse->toString()->equals(a0))
        return Chartreuse;
    if(Chocolate->toString()->equals(a0))
        return Chocolate;
    if(Control->toString()->equals(a0))
        return Control;
    if(ControlDark->toString()->equals(a0))
        return ControlDark;
    if(ControlDarkDark->toString()->equals(a0))
        return ControlDarkDark;
    if(ControlLight->toString()->equals(a0))
        return ControlLight;
    if(ControlLightLight->toString()->equals(a0))
        return ControlLightLight;
    if(ControlText->toString()->equals(a0))
        return ControlText;
    if(Coral->toString()->equals(a0))
        return Coral;
    if(CornflowerBlue->toString()->equals(a0))
        return CornflowerBlue;
    if(Cornsilk->toString()->equals(a0))
        return Cornsilk;
    if(Crimson->toString()->equals(a0))
        return Crimson;
    if(Cyan->toString()->equals(a0))
        return Cyan;
    if(DarkBlue->toString()->equals(a0))
        return DarkBlue;
    if(DarkCyan->toString()->equals(a0))
        return DarkCyan;
    if(DarkGoldenrod->toString()->equals(a0))
        return DarkGoldenrod;
    if(DarkGray->toString()->equals(a0))
        return DarkGray;
    if(DarkGreen->toString()->equals(a0))
        return DarkGreen;
    if(DarkKhaki->toString()->equals(a0))
        return DarkKhaki;
    if(DarkMagenta->toString()->equals(a0))
        return DarkMagenta;
    if(DarkOliveGreen->toString()->equals(a0))
        return DarkOliveGreen;
    if(DarkOrange->toString()->equals(a0))
        return DarkOrange;
    if(DarkOrchid->toString()->equals(a0))
        return DarkOrchid;
    if(DarkRed->toString()->equals(a0))
        return DarkRed;
    if(DarkSalmon->toString()->equals(a0))
        return DarkSalmon;
    if(DarkSeaGreen->toString()->equals(a0))
        return DarkSeaGreen;
    if(DarkSlateBlue->toString()->equals(a0))
        return DarkSlateBlue;
    if(DarkSlateGray->toString()->equals(a0))
        return DarkSlateGray;
    if(DarkTurquoise->toString()->equals(a0))
        return DarkTurquoise;
    if(DarkViolet->toString()->equals(a0))
        return DarkViolet;
    if(DeepPink->toString()->equals(a0))
        return DeepPink;
    if(DeepSkyBlue->toString()->equals(a0))
        return DeepSkyBlue;
    if(Desktop->toString()->equals(a0))
        return Desktop;
    if(DimGray->toString()->equals(a0))
        return DimGray;
    if(DodgerBlue->toString()->equals(a0))
        return DodgerBlue;
    if(Firebrick->toString()->equals(a0))
        return Firebrick;
    if(FloralWhite->toString()->equals(a0))
        return FloralWhite;
    if(ForestGreen->toString()->equals(a0))
        return ForestGreen;
    if(Fuchsia->toString()->equals(a0))
        return Fuchsia;
    if(Gainsboro->toString()->equals(a0))
        return Gainsboro;
    if(GhostWhite->toString()->equals(a0))
        return GhostWhite;
    if(Gold->toString()->equals(a0))
        return Gold;
    if(Goldenrod->toString()->equals(a0))
        return Goldenrod;
    if(GradientActiveCaption->toString()->equals(a0))
        return GradientActiveCaption;
    if(GradientInactiveCaption->toString()->equals(a0))
        return GradientInactiveCaption;
    if(Gray->toString()->equals(a0))
        return Gray;
    if(GrayText->toString()->equals(a0))
        return GrayText;
    if(Green->toString()->equals(a0))
        return Green;
    if(GreenYellow->toString()->equals(a0))
        return GreenYellow;
    if(Highlight->toString()->equals(a0))
        return Highlight;
    if(HighlightText->toString()->equals(a0))
        return HighlightText;
    if(Honeydew->toString()->equals(a0))
        return Honeydew;
    if(HotPink->toString()->equals(a0))
        return HotPink;
    if(HotTrack->toString()->equals(a0))
        return HotTrack;
    if(InactiveBorder->toString()->equals(a0))
        return InactiveBorder;
    if(InactiveCaption->toString()->equals(a0))
        return InactiveCaption;
    if(InactiveCaptionText->toString()->equals(a0))
        return InactiveCaptionText;
    if(IndianRed->toString()->equals(a0))
        return IndianRed;
    if(Indigo->toString()->equals(a0))
        return Indigo;
    if(Info->toString()->equals(a0))
        return Info;
    if(InfoText->toString()->equals(a0))
        return InfoText;
    if(Ivory->toString()->equals(a0))
        return Ivory;
    if(Khaki->toString()->equals(a0))
        return Khaki;
    if(Lavender->toString()->equals(a0))
        return Lavender;
    if(LavenderBlush->toString()->equals(a0))
        return LavenderBlush;
    if(LawnGreen->toString()->equals(a0))
        return LawnGreen;
    if(LemonChiffon->toString()->equals(a0))
        return LemonChiffon;
    if(LightBlue->toString()->equals(a0))
        return LightBlue;
    if(LightCoral->toString()->equals(a0))
        return LightCoral;
    if(LightCyan->toString()->equals(a0))
        return LightCyan;
    if(LightGoldenrodYellow->toString()->equals(a0))
        return LightGoldenrodYellow;
    if(LightGray->toString()->equals(a0))
        return LightGray;
    if(LightGreen->toString()->equals(a0))
        return LightGreen;
    if(LightPink->toString()->equals(a0))
        return LightPink;
    if(LightSalmon->toString()->equals(a0))
        return LightSalmon;
    if(LightSeaGreen->toString()->equals(a0))
        return LightSeaGreen;
    if(LightSkyBlue->toString()->equals(a0))
        return LightSkyBlue;
    if(LightSlateGray->toString()->equals(a0))
        return LightSlateGray;
    if(LightSteelBlue->toString()->equals(a0))
        return LightSteelBlue;
    if(LightYellow->toString()->equals(a0))
        return LightYellow;
    if(Lime->toString()->equals(a0))
        return Lime;
    if(LimeGreen->toString()->equals(a0))
        return LimeGreen;
    if(Linen->toString()->equals(a0))
        return Linen;
    if(Magenta->toString()->equals(a0))
        return Magenta;
    if(Maroon->toString()->equals(a0))
        return Maroon;
    if(MediumAquamarine->toString()->equals(a0))
        return MediumAquamarine;
    if(MediumBlue->toString()->equals(a0))
        return MediumBlue;
    if(MediumOrchid->toString()->equals(a0))
        return MediumOrchid;
    if(MediumPurple->toString()->equals(a0))
        return MediumPurple;
    if(MediumSeaGreen->toString()->equals(a0))
        return MediumSeaGreen;
    if(MediumSlateBlue->toString()->equals(a0))
        return MediumSlateBlue;
    if(MediumSpringGreen->toString()->equals(a0))
        return MediumSpringGreen;
    if(MediumTurquoise->toString()->equals(a0))
        return MediumTurquoise;
    if(MediumVioletRed->toString()->equals(a0))
        return MediumVioletRed;
    if(Menu->toString()->equals(a0))
        return Menu;
    if(MenuBar->toString()->equals(a0))
        return MenuBar;
    if(MenuHighlight->toString()->equals(a0))
        return MenuHighlight;
    if(MenuText->toString()->equals(a0))
        return MenuText;
    if(MidnightBlue->toString()->equals(a0))
        return MidnightBlue;
    if(MintCream->toString()->equals(a0))
        return MintCream;
    if(MistyRose->toString()->equals(a0))
        return MistyRose;
    if(Moccasin->toString()->equals(a0))
        return Moccasin;
    if(NavajoWhite->toString()->equals(a0))
        return NavajoWhite;
    if(Navy->toString()->equals(a0))
        return Navy;
    if(OldLace->toString()->equals(a0))
        return OldLace;
    if(Olive->toString()->equals(a0))
        return Olive;
    if(OliveDrab->toString()->equals(a0))
        return OliveDrab;
    if(Orange->toString()->equals(a0))
        return Orange;
    if(OrangeRed->toString()->equals(a0))
        return OrangeRed;
    if(Orchid->toString()->equals(a0))
        return Orchid;
    if(PaleGoldenrod->toString()->equals(a0))
        return PaleGoldenrod;
    if(PaleGreen->toString()->equals(a0))
        return PaleGreen;
    if(PaleTurquoise->toString()->equals(a0))
        return PaleTurquoise;
    if(PaleVioletRed->toString()->equals(a0))
        return PaleVioletRed;
    if(PapayaWhip->toString()->equals(a0))
        return PapayaWhip;
    if(PeachPuff->toString()->equals(a0))
        return PeachPuff;
    if(Peru->toString()->equals(a0))
        return Peru;
    if(Pink->toString()->equals(a0))
        return Pink;
    if(Plum->toString()->equals(a0))
        return Plum;
    if(PowderBlue->toString()->equals(a0))
        return PowderBlue;
    if(Purple->toString()->equals(a0))
        return Purple;
    if(Red->toString()->equals(a0))
        return Red;
    if(RosyBrown->toString()->equals(a0))
        return RosyBrown;
    if(RoyalBlue->toString()->equals(a0))
        return RoyalBlue;
    if(SaddleBrown->toString()->equals(a0))
        return SaddleBrown;
    if(Salmon->toString()->equals(a0))
        return Salmon;
    if(SandyBrown->toString()->equals(a0))
        return SandyBrown;
    if(ScrollBar->toString()->equals(a0))
        return ScrollBar;
    if(SeaGreen->toString()->equals(a0))
        return SeaGreen;
    if(SeaShell->toString()->equals(a0))
        return SeaShell;
    if(Sienna->toString()->equals(a0))
        return Sienna;
    if(Silver->toString()->equals(a0))
        return Silver;
    if(SkyBlue->toString()->equals(a0))
        return SkyBlue;
    if(SlateBlue->toString()->equals(a0))
        return SlateBlue;
    if(SlateGray->toString()->equals(a0))
        return SlateGray;
    if(Snow->toString()->equals(a0))
        return Snow;
    if(SpringGreen->toString()->equals(a0))
        return SpringGreen;
    if(SteelBlue->toString()->equals(a0))
        return SteelBlue;
    if(Tan->toString()->equals(a0))
        return Tan;
    if(Teal->toString()->equals(a0))
        return Teal;
    if(Thistle->toString()->equals(a0))
        return Thistle;
    if(Tomato->toString()->equals(a0))
        return Tomato;
    if(Transparent->toString()->equals(a0))
        return Transparent;
    if(Turquoise->toString()->equals(a0))
        return Turquoise;
    if(Violet->toString()->equals(a0))
        return Violet;
    if(Wheat->toString()->equals(a0))
        return Wheat;
    if(White->toString()->equals(a0))
        return White;
    if(WhiteSmoke->toString()->equals(a0))
        return WhiteSmoke;
    if(Window->toString()->equals(a0))
        return Window;
    if(WindowFrame->toString()->equals(a0))
        return WindowFrame;
    if(WindowText->toString()->equals(a0))
        return WindowText;
    if(Yellow->toString()->equals(a0))
        return Yellow;
    if(YellowGreen->toString()->equals(a0))
        return YellowGreen;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::PresetColorArray* poi::sl::usermodel::PresetColor::values()
{
    return new poi::sl::usermodel::PresetColorArray({
        ActiveBorder,
        ActiveCaption,
        ActiveCaptionText,
        AliceBlue,
        AntiqueWhite,
        AppWorkspace,
        Aqua,
        Aquamarine,
        Azure,
        Beige,
        Bisque,
        Black,
        BlanchedAlmond,
        Blue,
        BlueViolet,
        Brown,
        BurlyWood,
        ButtonFace,
        ButtonHighlight,
        ButtonShadow,
        CadetBlue,
        Chartreuse,
        Chocolate,
        Control,
        ControlDark,
        ControlDarkDark,
        ControlLight,
        ControlLightLight,
        ControlText,
        Coral,
        CornflowerBlue,
        Cornsilk,
        Crimson,
        Cyan,
        DarkBlue,
        DarkCyan,
        DarkGoldenrod,
        DarkGray,
        DarkGreen,
        DarkKhaki,
        DarkMagenta,
        DarkOliveGreen,
        DarkOrange,
        DarkOrchid,
        DarkRed,
        DarkSalmon,
        DarkSeaGreen,
        DarkSlateBlue,
        DarkSlateGray,
        DarkTurquoise,
        DarkViolet,
        DeepPink,
        DeepSkyBlue,
        Desktop,
        DimGray,
        DodgerBlue,
        Firebrick,
        FloralWhite,
        ForestGreen,
        Fuchsia,
        Gainsboro,
        GhostWhite,
        Gold,
        Goldenrod,
        GradientActiveCaption,
        GradientInactiveCaption,
        Gray,
        GrayText,
        Green,
        GreenYellow,
        Highlight,
        HighlightText,
        Honeydew,
        HotPink,
        HotTrack,
        InactiveBorder,
        InactiveCaption,
        InactiveCaptionText,
        IndianRed,
        Indigo,
        Info,
        InfoText,
        Ivory,
        Khaki,
        Lavender,
        LavenderBlush,
        LawnGreen,
        LemonChiffon,
        LightBlue,
        LightCoral,
        LightCyan,
        LightGoldenrodYellow,
        LightGray,
        LightGreen,
        LightPink,
        LightSalmon,
        LightSeaGreen,
        LightSkyBlue,
        LightSlateGray,
        LightSteelBlue,
        LightYellow,
        Lime,
        LimeGreen,
        Linen,
        Magenta,
        Maroon,
        MediumAquamarine,
        MediumBlue,
        MediumOrchid,
        MediumPurple,
        MediumSeaGreen,
        MediumSlateBlue,
        MediumSpringGreen,
        MediumTurquoise,
        MediumVioletRed,
        Menu,
        MenuBar,
        MenuHighlight,
        MenuText,
        MidnightBlue,
        MintCream,
        MistyRose,
        Moccasin,
        NavajoWhite,
        Navy,
        OldLace,
        Olive,
        OliveDrab,
        Orange,
        OrangeRed,
        Orchid,
        PaleGoldenrod,
        PaleGreen,
        PaleTurquoise,
        PaleVioletRed,
        PapayaWhip,
        PeachPuff,
        Peru,
        Pink,
        Plum,
        PowderBlue,
        Purple,
        Red,
        RosyBrown,
        RoyalBlue,
        SaddleBrown,
        Salmon,
        SandyBrown,
        ScrollBar,
        SeaGreen,
        SeaShell,
        Sienna,
        Silver,
        SkyBlue,
        SlateBlue,
        SlateGray,
        Snow,
        SpringGreen,
        SteelBlue,
        Tan,
        Teal,
        Thistle,
        Tomato,
        Transparent,
        Turquoise,
        Violet,
        Wheat,
        White,
        WhiteSmoke,
        Window,
        WindowFrame,
        WindowText,
        Yellow,
        YellowGreen,
    });
}

java::lang::Class* poi::sl::usermodel::PresetColor::getClass0()
{
    return class_();
}

