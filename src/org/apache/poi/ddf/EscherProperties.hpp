// Generated from /POI/java/org/apache/poi/ddf/EscherProperties.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ddf::EscherProperties final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t TRANSFORM__ROTATION { int16_t(4) };
    static constexpr int16_t PROTECTION__LOCKROTATION { int16_t(119) };
    static constexpr int16_t PROTECTION__LOCKASPECTRATIO { int16_t(120) };
    static constexpr int16_t PROTECTION__LOCKPOSITION { int16_t(121) };
    static constexpr int16_t PROTECTION__LOCKAGAINSTSELECT { int16_t(122) };
    static constexpr int16_t PROTECTION__LOCKCROPPING { int16_t(123) };
    static constexpr int16_t PROTECTION__LOCKVERTICES { int16_t(124) };
    static constexpr int16_t PROTECTION__LOCKTEXT { int16_t(125) };
    static constexpr int16_t PROTECTION__LOCKADJUSTHANDLES { int16_t(126) };
    static constexpr int16_t PROTECTION__LOCKAGAINSTGROUPING { int16_t(127) };
    static constexpr int16_t TEXT__TEXTID { int16_t(128) };
    static constexpr int16_t TEXT__TEXTLEFT { int16_t(129) };
    static constexpr int16_t TEXT__TEXTTOP { int16_t(130) };
    static constexpr int16_t TEXT__TEXTRIGHT { int16_t(131) };
    static constexpr int16_t TEXT__TEXTBOTTOM { int16_t(132) };
    static constexpr int16_t TEXT__WRAPTEXT { int16_t(133) };
    static constexpr int16_t TEXT__SCALETEXT { int16_t(134) };
    static constexpr int16_t TEXT__ANCHORTEXT { int16_t(135) };
    static constexpr int16_t TEXT__TEXTFLOW { int16_t(136) };
    static constexpr int16_t TEXT__FONTROTATION { int16_t(137) };
    static constexpr int16_t TEXT__IDOFNEXTSHAPE { int16_t(138) };
    static constexpr int16_t TEXT__BIDIR { int16_t(139) };
    static constexpr int16_t TEXT__SINGLECLICKSELECTS { int16_t(187) };
    static constexpr int16_t TEXT__USEHOSTMARGINS { int16_t(188) };
    static constexpr int16_t TEXT__ROTATETEXTWITHSHAPE { int16_t(189) };
    static constexpr int16_t TEXT__SIZESHAPETOFITTEXT { int16_t(190) };
    static constexpr int16_t TEXT__SIZE_TEXT_TO_FIT_SHAPE { int16_t(191) };
    static constexpr int16_t GEOTEXT__UNICODE { int16_t(192) };
    static constexpr int16_t GEOTEXT__RTFTEXT { int16_t(193) };
    static constexpr int16_t GEOTEXT__ALIGNMENTONCURVE { int16_t(194) };
    static constexpr int16_t GEOTEXT__DEFAULTPOINTSIZE { int16_t(195) };
    static constexpr int16_t GEOTEXT__TEXTSPACING { int16_t(196) };
    static constexpr int16_t GEOTEXT__FONTFAMILYNAME { int16_t(197) };
    static constexpr int16_t GEOTEXT__REVERSEROWORDER { int16_t(240) };
    static constexpr int16_t GEOTEXT__HASTEXTEFFECT { int16_t(241) };
    static constexpr int16_t GEOTEXT__ROTATECHARACTERS { int16_t(242) };
    static constexpr int16_t GEOTEXT__KERNCHARACTERS { int16_t(243) };
    static constexpr int16_t GEOTEXT__TIGHTORTRACK { int16_t(244) };
    static constexpr int16_t GEOTEXT__STRETCHTOFITSHAPE { int16_t(245) };
    static constexpr int16_t GEOTEXT__CHARBOUNDINGBOX { int16_t(246) };
    static constexpr int16_t GEOTEXT__SCALETEXTONPATH { int16_t(247) };
    static constexpr int16_t GEOTEXT__STRETCHCHARHEIGHT { int16_t(248) };
    static constexpr int16_t GEOTEXT__NOMEASUREALONGPATH { int16_t(249) };
    static constexpr int16_t GEOTEXT__BOLDFONT { int16_t(250) };
    static constexpr int16_t GEOTEXT__ITALICFONT { int16_t(251) };
    static constexpr int16_t GEOTEXT__UNDERLINEFONT { int16_t(252) };
    static constexpr int16_t GEOTEXT__SHADOWFONT { int16_t(253) };
    static constexpr int16_t GEOTEXT__SMALLCAPSFONT { int16_t(254) };
    static constexpr int16_t GEOTEXT__STRIKETHROUGHFONT { int16_t(255) };
    static constexpr int16_t BLIP__CROPFROMTOP { int16_t(256) };
    static constexpr int16_t BLIP__CROPFROMBOTTOM { int16_t(257) };
    static constexpr int16_t BLIP__CROPFROMLEFT { int16_t(258) };
    static constexpr int16_t BLIP__CROPFROMRIGHT { int16_t(259) };
    static constexpr int16_t BLIP__BLIPTODISPLAY { int16_t(260) };
    static constexpr int16_t BLIP__BLIPFILENAME { int16_t(261) };
    static constexpr int16_t BLIP__BLIPFLAGS { int16_t(262) };
    static constexpr int16_t BLIP__TRANSPARENTCOLOR { int16_t(263) };
    static constexpr int16_t BLIP__CONTRASTSETTING { int16_t(264) };
    static constexpr int16_t BLIP__BRIGHTNESSSETTING { int16_t(265) };
    static constexpr int16_t BLIP__GAMMA { int16_t(266) };
    static constexpr int16_t BLIP__PICTUREID { int16_t(267) };
    static constexpr int16_t BLIP__DOUBLEMOD { int16_t(268) };
    static constexpr int16_t BLIP__PICTUREFILLMOD { int16_t(269) };
    static constexpr int16_t BLIP__PICTURELINE { int16_t(270) };
    static constexpr int16_t BLIP__PRINTBLIP { int16_t(271) };
    static constexpr int16_t BLIP__PRINTBLIPFILENAME { int16_t(272) };
    static constexpr int16_t BLIP__PRINTFLAGS { int16_t(273) };
    static constexpr int16_t BLIP__NOHITTESTPICTURE { int16_t(316) };
    static constexpr int16_t BLIP__PICTUREGRAY { int16_t(317) };
    static constexpr int16_t BLIP__PICTUREBILEVEL { int16_t(318) };
    static constexpr int16_t BLIP__PICTUREACTIVE { int16_t(319) };
    static constexpr int16_t GEOMETRY__LEFT { int16_t(320) };
    static constexpr int16_t GEOMETRY__TOP { int16_t(321) };
    static constexpr int16_t GEOMETRY__RIGHT { int16_t(322) };
    static constexpr int16_t GEOMETRY__BOTTOM { int16_t(323) };
    static constexpr int16_t GEOMETRY__SHAPEPATH { int16_t(324) };
    static constexpr int16_t GEOMETRY__VERTICES { int16_t(325) };
    static constexpr int16_t GEOMETRY__SEGMENTINFO { int16_t(326) };
    static constexpr int16_t GEOMETRY__ADJUSTVALUE { int16_t(327) };
    static constexpr int16_t GEOMETRY__ADJUST2VALUE { int16_t(328) };
    static constexpr int16_t GEOMETRY__ADJUST3VALUE { int16_t(329) };
    static constexpr int16_t GEOMETRY__ADJUST4VALUE { int16_t(330) };
    static constexpr int16_t GEOMETRY__ADJUST5VALUE { int16_t(331) };
    static constexpr int16_t GEOMETRY__ADJUST6VALUE { int16_t(332) };
    static constexpr int16_t GEOMETRY__ADJUST7VALUE { int16_t(333) };
    static constexpr int16_t GEOMETRY__ADJUST8VALUE { int16_t(334) };
    static constexpr int16_t GEOMETRY__ADJUST9VALUE { int16_t(335) };
    static constexpr int16_t GEOMETRY__ADJUST10VALUE { int16_t(336) };
    static constexpr int16_t GEOMETRY__SHADOWok { int16_t(378) };
    static constexpr int16_t GEOMETRY__3DOK { int16_t(379) };
    static constexpr int16_t GEOMETRY__LINEOK { int16_t(380) };
    static constexpr int16_t GEOMETRY__GEOTEXTOK { int16_t(381) };
    static constexpr int16_t GEOMETRY__FILLSHADESHAPEOK { int16_t(382) };
    static constexpr int16_t GEOMETRY__FILLOK { int16_t(383) };
    static constexpr int16_t FILL__FILLTYPE { int16_t(384) };
    static constexpr int16_t FILL__FILLCOLOR { int16_t(385) };
    static constexpr int16_t FILL__FILLOPACITY { int16_t(386) };
    static constexpr int16_t FILL__FILLBACKCOLOR { int16_t(387) };
    static constexpr int16_t FILL__BACKOPACITY { int16_t(388) };
    static constexpr int16_t FILL__CRMOD { int16_t(389) };
    static constexpr int16_t FILL__PATTERNTEXTURE { int16_t(390) };
    static constexpr int16_t FILL__BLIPFILENAME { int16_t(391) };
    static constexpr int16_t FILL__BLIPFLAGS { int16_t(392) };
    static constexpr int16_t FILL__WIDTH { int16_t(393) };
    static constexpr int16_t FILL__HEIGHT { int16_t(394) };
    static constexpr int16_t FILL__ANGLE { int16_t(395) };
    static constexpr int16_t FILL__FOCUS { int16_t(396) };
    static constexpr int16_t FILL__TOLEFT { int16_t(397) };
    static constexpr int16_t FILL__TOTOP { int16_t(398) };
    static constexpr int16_t FILL__TORIGHT { int16_t(399) };
    static constexpr int16_t FILL__TOBOTTOM { int16_t(400) };
    static constexpr int16_t FILL__RECTLEFT { int16_t(401) };
    static constexpr int16_t FILL__RECTTOP { int16_t(402) };
    static constexpr int16_t FILL__RECTRIGHT { int16_t(403) };
    static constexpr int16_t FILL__RECTBOTTOM { int16_t(404) };
    static constexpr int16_t FILL__DZTYPE { int16_t(405) };
    static constexpr int16_t FILL__SHADEPRESET { int16_t(406) };
    static constexpr int16_t FILL__SHADECOLORS { int16_t(407) };
    static constexpr int16_t FILL__ORIGINX { int16_t(408) };
    static constexpr int16_t FILL__ORIGINY { int16_t(409) };
    static constexpr int16_t FILL__SHAPEORIGINX { int16_t(410) };
    static constexpr int16_t FILL__SHAPEORIGINY { int16_t(411) };
    static constexpr int16_t FILL__SHADETYPE { int16_t(412) };
    static constexpr int16_t FILL__FILLED { int16_t(443) };
    static constexpr int16_t FILL__HITTESTFILL { int16_t(444) };
    static constexpr int16_t FILL__SHAPE { int16_t(445) };
    static constexpr int16_t FILL__USERECT { int16_t(446) };
    static constexpr int16_t FILL__NOFILLHITTEST { int16_t(447) };
    static constexpr int16_t LINESTYLE__COLOR { int16_t(448) };
    static constexpr int16_t LINESTYLE__OPACITY { int16_t(449) };
    static constexpr int16_t LINESTYLE__BACKCOLOR { int16_t(450) };
    static constexpr int16_t LINESTYLE__CRMOD { int16_t(451) };
    static constexpr int16_t LINESTYLE__LINETYPE { int16_t(452) };
    static constexpr int16_t LINESTYLE__FILLBLIP { int16_t(453) };
    static constexpr int16_t LINESTYLE__FILLBLIPNAME { int16_t(454) };
    static constexpr int16_t LINESTYLE__FILLBLIPFLAGS { int16_t(455) };
    static constexpr int16_t LINESTYLE__FILLWIDTH { int16_t(456) };
    static constexpr int16_t LINESTYLE__FILLHEIGHT { int16_t(457) };
    static constexpr int16_t LINESTYLE__FILLDZTYPE { int16_t(458) };
    static constexpr int16_t LINESTYLE__LINEWIDTH { int16_t(459) };
    static constexpr int16_t LINESTYLE__LINEMITERLIMIT { int16_t(460) };
    static constexpr int16_t LINESTYLE__LINESTYLE { int16_t(461) };
    static constexpr int16_t LINESTYLE__LINEDASHING { int16_t(462) };
    static constexpr int16_t LINESTYLE__LINEDASHSTYLE { int16_t(463) };
    static constexpr int16_t LINESTYLE__LINESTARTARROWHEAD { int16_t(464) };
    static constexpr int16_t LINESTYLE__LINEENDARROWHEAD { int16_t(465) };
    static constexpr int16_t LINESTYLE__LINESTARTARROWWIDTH { int16_t(466) };
    static constexpr int16_t LINESTYLE__LINESTARTARROWLENGTH { int16_t(467) };
    static constexpr int16_t LINESTYLE__LINEENDARROWWIDTH { int16_t(468) };
    static constexpr int16_t LINESTYLE__LINEENDARROWLENGTH { int16_t(469) };
    static constexpr int16_t LINESTYLE__LINEJOINSTYLE { int16_t(470) };
    static constexpr int16_t LINESTYLE__LINEENDCAPSTYLE { int16_t(471) };
    static constexpr int16_t LINESTYLE__ARROWHEADSOK { int16_t(507) };
    static constexpr int16_t LINESTYLE__ANYLINE { int16_t(508) };
    static constexpr int16_t LINESTYLE__HITLINETEST { int16_t(509) };
    static constexpr int16_t LINESTYLE__LINEFILLSHAPE { int16_t(510) };
    static constexpr int16_t LINESTYLE__NOLINEDRAWDASH { int16_t(511) };
    static constexpr int16_t LINESTYLE__NOLINEDRAWDASH_LEFT { int16_t(1407) };
    static constexpr int16_t LINESTYLE__NOLINEDRAWDASH_TOP { int16_t(1471) };
    static constexpr int16_t LINESTYLE__NOLINEDRAWDASH_BOTTOM { int16_t(1599) };
    static constexpr int16_t LINESTYLE__NOLINEDRAWDASH_RIGHT { int16_t(1535) };
    static constexpr int16_t SHADOWSTYLE__TYPE { int16_t(512) };
    static constexpr int16_t SHADOWSTYLE__COLOR { int16_t(513) };
    static constexpr int16_t SHADOWSTYLE__HIGHLIGHT { int16_t(514) };
    static constexpr int16_t SHADOWSTYLE__CRMOD { int16_t(515) };
    static constexpr int16_t SHADOWSTYLE__OPACITY { int16_t(516) };
    static constexpr int16_t SHADOWSTYLE__OFFSETX { int16_t(517) };
    static constexpr int16_t SHADOWSTYLE__OFFSETY { int16_t(518) };
    static constexpr int16_t SHADOWSTYLE__SECONDOFFSETX { int16_t(519) };
    static constexpr int16_t SHADOWSTYLE__SECONDOFFSETY { int16_t(520) };
    static constexpr int16_t SHADOWSTYLE__SCALEXTOX { int16_t(521) };
    static constexpr int16_t SHADOWSTYLE__SCALEYTOX { int16_t(522) };
    static constexpr int16_t SHADOWSTYLE__SCALEXTOY { int16_t(523) };
    static constexpr int16_t SHADOWSTYLE__SCALEYTOY { int16_t(524) };
    static constexpr int16_t SHADOWSTYLE__PERSPECTIVEX { int16_t(525) };
    static constexpr int16_t SHADOWSTYLE__PERSPECTIVEY { int16_t(526) };
    static constexpr int16_t SHADOWSTYLE__WEIGHT { int16_t(527) };
    static constexpr int16_t SHADOWSTYLE__ORIGINX { int16_t(528) };
    static constexpr int16_t SHADOWSTYLE__ORIGINY { int16_t(529) };
    static constexpr int16_t SHADOWSTYLE__SHADOW { int16_t(574) };
    static constexpr int16_t SHADOWSTYLE__SHADOWOBSURED { int16_t(575) };
    static constexpr int16_t PERSPECTIVE__TYPE { int16_t(576) };
    static constexpr int16_t PERSPECTIVE__OFFSETX { int16_t(577) };
    static constexpr int16_t PERSPECTIVE__OFFSETY { int16_t(578) };
    static constexpr int16_t PERSPECTIVE__SCALEXTOX { int16_t(579) };
    static constexpr int16_t PERSPECTIVE__SCALEYTOX { int16_t(580) };
    static constexpr int16_t PERSPECTIVE__SCALEXTOY { int16_t(581) };
    static constexpr int16_t PERSPECTIVE__SCALEYTOY { int16_t(582) };
    static constexpr int16_t PERSPECTIVE__PERSPECTIVEX { int16_t(583) };
    static constexpr int16_t PERSPECTIVE__PERSPECTIVEY { int16_t(584) };
    static constexpr int16_t PERSPECTIVE__WEIGHT { int16_t(585) };
    static constexpr int16_t PERSPECTIVE__ORIGINX { int16_t(586) };
    static constexpr int16_t PERSPECTIVE__ORIGINY { int16_t(587) };
    static constexpr int16_t PERSPECTIVE__PERSPECTIVEON { int16_t(639) };
    static constexpr int16_t THREED__SPECULARAMOUNT { int16_t(640) };
    static constexpr int16_t THREED__DIFFUSEAMOUNT { int16_t(661) };
    static constexpr int16_t THREED__SHININESS { int16_t(662) };
    static constexpr int16_t THREED__EDGETHICKNESS { int16_t(663) };
    static constexpr int16_t THREED__EXTRUDEFORWARD { int16_t(664) };
    static constexpr int16_t THREED__EXTRUDEBACKWARD { int16_t(665) };
    static constexpr int16_t THREED__EXTRUDEPLANE { int16_t(666) };
    static constexpr int16_t THREED__EXTRUSIONCOLOR { int16_t(667) };
    static constexpr int16_t THREED__CRMOD { int16_t(648) };
    static constexpr int16_t THREED__3DEFFECT { int16_t(700) };
    static constexpr int16_t THREED__METALLIC { int16_t(701) };
    static constexpr int16_t THREED__USEEXTRUSIONCOLOR { int16_t(702) };
    static constexpr int16_t THREED__LIGHTFACE { int16_t(703) };
    static constexpr int16_t THREEDSTYLE__YROTATIONANGLE { int16_t(704) };
    static constexpr int16_t THREEDSTYLE__XROTATIONANGLE { int16_t(705) };
    static constexpr int16_t THREEDSTYLE__ROTATIONAXISX { int16_t(706) };
    static constexpr int16_t THREEDSTYLE__ROTATIONAXISY { int16_t(707) };
    static constexpr int16_t THREEDSTYLE__ROTATIONAXISZ { int16_t(708) };
    static constexpr int16_t THREEDSTYLE__ROTATIONANGLE { int16_t(709) };
    static constexpr int16_t THREEDSTYLE__ROTATIONCENTERX { int16_t(710) };
    static constexpr int16_t THREEDSTYLE__ROTATIONCENTERY { int16_t(711) };
    static constexpr int16_t THREEDSTYLE__ROTATIONCENTERZ { int16_t(712) };
    static constexpr int16_t THREEDSTYLE__RENDERMODE { int16_t(713) };
    static constexpr int16_t THREEDSTYLE__TOLERANCE { int16_t(714) };
    static constexpr int16_t THREEDSTYLE__XVIEWPOINT { int16_t(715) };
    static constexpr int16_t THREEDSTYLE__YVIEWPOINT { int16_t(716) };
    static constexpr int16_t THREEDSTYLE__ZVIEWPOINT { int16_t(717) };
    static constexpr int16_t THREEDSTYLE__ORIGINX { int16_t(718) };
    static constexpr int16_t THREEDSTYLE__ORIGINY { int16_t(719) };
    static constexpr int16_t THREEDSTYLE__SKEWANGLE { int16_t(720) };
    static constexpr int16_t THREEDSTYLE__SKEWAMOUNT { int16_t(721) };
    static constexpr int16_t THREEDSTYLE__AMBIENTINTENSITY { int16_t(722) };
    static constexpr int16_t THREEDSTYLE__KEYX { int16_t(723) };
    static constexpr int16_t THREEDSTYLE__KEYY { int16_t(724) };
    static constexpr int16_t THREEDSTYLE__KEYZ { int16_t(725) };
    static constexpr int16_t THREEDSTYLE__KEYINTENSITY { int16_t(726) };
    static constexpr int16_t THREEDSTYLE__FILLX { int16_t(727) };
    static constexpr int16_t THREEDSTYLE__FILLY { int16_t(728) };
    static constexpr int16_t THREEDSTYLE__FILLZ { int16_t(729) };
    static constexpr int16_t THREEDSTYLE__FILLINTENSITY { int16_t(730) };
    static constexpr int16_t THREEDSTYLE__CONSTRAINROTATION { int16_t(763) };
    static constexpr int16_t THREEDSTYLE__ROTATIONCENTERAUTO { int16_t(764) };
    static constexpr int16_t THREEDSTYLE__PARALLEL { int16_t(765) };
    static constexpr int16_t THREEDSTYLE__KEYHARSH { int16_t(766) };
    static constexpr int16_t THREEDSTYLE__FILLHARSH { int16_t(767) };
    static constexpr int16_t SHAPE__MASTER { int16_t(769) };
    static constexpr int16_t SHAPE__CONNECTORSTYLE { int16_t(771) };
    static constexpr int16_t SHAPE__BLACKANDWHITESETTINGS { int16_t(772) };
    static constexpr int16_t SHAPE__WMODEPUREBW { int16_t(773) };
    static constexpr int16_t SHAPE__WMODEBW { int16_t(774) };
    static constexpr int16_t SHAPE__OLEICON { int16_t(826) };
    static constexpr int16_t SHAPE__PREFERRELATIVERESIZE { int16_t(827) };
    static constexpr int16_t SHAPE__LOCKSHAPETYPE { int16_t(828) };
    static constexpr int16_t SHAPE__DELETEATTACHEDOBJECT { int16_t(830) };
    static constexpr int16_t SHAPE__BACKGROUNDSHAPE { int16_t(831) };
    static constexpr int16_t CALLOUT__CALLOUTTYPE { int16_t(832) };
    static constexpr int16_t CALLOUT__XYCALLOUTGAP { int16_t(833) };
    static constexpr int16_t CALLOUT__CALLOUTANGLE { int16_t(834) };
    static constexpr int16_t CALLOUT__CALLOUTDROPTYPE { int16_t(835) };
    static constexpr int16_t CALLOUT__CALLOUTDROPSPECIFIED { int16_t(836) };
    static constexpr int16_t CALLOUT__CALLOUTLENGTHSPECIFIED { int16_t(837) };
    static constexpr int16_t CALLOUT__ISCALLOUT { int16_t(889) };
    static constexpr int16_t CALLOUT__CALLOUTACCENTBAR { int16_t(890) };
    static constexpr int16_t CALLOUT__CALLOUTTEXTBORDER { int16_t(891) };
    static constexpr int16_t CALLOUT__CALLOUTMINUSX { int16_t(892) };
    static constexpr int16_t CALLOUT__CALLOUTMINUSY { int16_t(893) };
    static constexpr int16_t CALLOUT__DROPAUTO { int16_t(894) };
    static constexpr int16_t CALLOUT__LENGTHSPECIFIED { int16_t(895) };
    static constexpr int16_t GROUPSHAPE__SHAPENAME { int16_t(896) };
    static constexpr int16_t GROUPSHAPE__DESCRIPTION { int16_t(897) };
    static constexpr int16_t GROUPSHAPE__HYPERLINK { int16_t(898) };
    static constexpr int16_t GROUPSHAPE__WRAPPOLYGONVERTICES { int16_t(899) };
    static constexpr int16_t GROUPSHAPE__WRAPDISTLEFT { int16_t(900) };
    static constexpr int16_t GROUPSHAPE__WRAPDISTTOP { int16_t(901) };
    static constexpr int16_t GROUPSHAPE__WRAPDISTRIGHT { int16_t(902) };
    static constexpr int16_t GROUPSHAPE__WRAPDISTBOTTOM { int16_t(903) };
    static constexpr int16_t GROUPSHAPE__REGROUPID { int16_t(904) };
    static constexpr int16_t GROUPSHAPE__UNUSED906 { int16_t(906) };
    static constexpr int16_t GROUPSHAPE__TOOLTIP { int16_t(909) };
    static constexpr int16_t GROUPSHAPE__SCRIPT { int16_t(910) };
    static constexpr int16_t GROUPSHAPE__POSH { int16_t(911) };
    static constexpr int16_t GROUPSHAPE__POSRELH { int16_t(912) };
    static constexpr int16_t GROUPSHAPE__POSV { int16_t(913) };
    static constexpr int16_t GROUPSHAPE__POSRELV { int16_t(914) };
    static constexpr int16_t GROUPSHAPE__HR_PCT { int16_t(915) };
    static constexpr int16_t GROUPSHAPE__HR_ALIGN { int16_t(916) };
    static constexpr int16_t GROUPSHAPE__HR_HEIGHT { int16_t(917) };
    static constexpr int16_t GROUPSHAPE__HR_WIDTH { int16_t(918) };
    static constexpr int16_t GROUPSHAPE__SCRIPTEXT { int16_t(919) };
    static constexpr int16_t GROUPSHAPE__SCRIPTLANG { int16_t(920) };
    static constexpr int16_t GROUPSHAPE__BORDERTOPCOLOR { int16_t(923) };
    static constexpr int16_t GROUPSHAPE__BORDERLEFTCOLOR { int16_t(924) };
    static constexpr int16_t GROUPSHAPE__BORDERBOTTOMCOLOR { int16_t(925) };
    static constexpr int16_t GROUPSHAPE__BORDERRIGHTCOLOR { int16_t(926) };
    static constexpr int16_t GROUPSHAPE__TABLEPROPERTIES { int16_t(927) };
    static constexpr int16_t GROUPSHAPE__TABLEROWPROPERTIES { int16_t(928) };
    static constexpr int16_t GROUPSHAPE__WEBBOT { int16_t(933) };
    static constexpr int16_t GROUPSHAPE__METROBLOB { int16_t(937) };
    static constexpr int16_t GROUPSHAPE__ZORDER { int16_t(938) };
    static constexpr int16_t GROUPSHAPE__FLAGS { int16_t(959) };
    static constexpr int16_t GROUPSHAPE__EDITEDWRAP { int16_t(953) };
    static constexpr int16_t GROUPSHAPE__BEHINDDOCUMENT { int16_t(954) };
    static constexpr int16_t GROUPSHAPE__ONDBLCLICKNOTIFY { int16_t(955) };
    static constexpr int16_t GROUPSHAPE__ISBUTTON { int16_t(956) };
    static constexpr int16_t GROUPSHAPE__1DADJUSTMENT { int16_t(957) };
    static constexpr int16_t GROUPSHAPE__HIDDEN { int16_t(958) };
    static constexpr int16_t GROUPSHAPE__PRINT { int16_t(959) };

private:
    static ::java::util::Map* properties_;
    static ::java::util::Map* initProps();
    static void addProp(::java::util::Map* m, int32_t s, ::java::lang::String* propName);
    static void addProp(::java::util::Map* m, int32_t s, ::java::lang::String* propName, int8_t type);

public:
    static ::java::lang::String* getPropertyName(int16_t propertyId);
    static int8_t getPropertyType(int16_t propertyId);

    // Generated
    EscherProperties();
protected:
    EscherProperties(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& properties();
    virtual ::java::lang::Class* getClass0();
};
