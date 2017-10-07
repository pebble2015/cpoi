// Generated from /POI/java/org/apache/poi/ddf/EscherProperties.java
#include <org/apache/poi/ddf/EscherProperties.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ddf/EscherPropertyMetaData.hpp>

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

org::apache::poi::ddf::EscherProperties::EscherProperties(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherProperties::EscherProperties()
    : EscherProperties(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherProperties::TRANSFORM__ROTATION;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKROTATION;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKASPECTRATIO;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKPOSITION;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKAGAINSTSELECT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKCROPPING;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKVERTICES;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKTEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKADJUSTHANDLES;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKAGAINSTGROUPING;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__TEXTID;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__TEXTLEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__TEXTTOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__TEXTRIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__TEXTBOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__WRAPTEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__SCALETEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__ANCHORTEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__TEXTFLOW;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__FONTROTATION;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__IDOFNEXTSHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__BIDIR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__SINGLECLICKSELECTS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__USEHOSTMARGINS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__ROTATETEXTWITHSHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__SIZESHAPETOFITTEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::TEXT__SIZE_TEXT_TO_FIT_SHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__UNICODE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__RTFTEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__ALIGNMENTONCURVE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__DEFAULTPOINTSIZE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__TEXTSPACING;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__FONTFAMILYNAME;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__REVERSEROWORDER;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__HASTEXTEFFECT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__ROTATECHARACTERS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__KERNCHARACTERS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__TIGHTORTRACK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__STRETCHTOFITSHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__CHARBOUNDINGBOX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__SCALETEXTONPATH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__STRETCHCHARHEIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__NOMEASUREALONGPATH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__BOLDFONT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__ITALICFONT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__UNDERLINEFONT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__SHADOWFONT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__SMALLCAPSFONT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOTEXT__STRIKETHROUGHFONT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__CROPFROMTOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__CROPFROMBOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__CROPFROMLEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__CROPFROMRIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__BLIPTODISPLAY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__BLIPFILENAME;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__BLIPFLAGS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__TRANSPARENTCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__CONTRASTSETTING;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__BRIGHTNESSSETTING;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__GAMMA;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PICTUREID;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__DOUBLEMOD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PICTUREFILLMOD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PICTURELINE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PRINTBLIP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PRINTBLIPFILENAME;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PRINTFLAGS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__NOHITTESTPICTURE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PICTUREGRAY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PICTUREBILEVEL;

constexpr int16_t org::apache::poi::ddf::EscherProperties::BLIP__PICTUREACTIVE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__LEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__TOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__RIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__BOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__SHAPEPATH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__VERTICES;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__SEGMENTINFO;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUSTVALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST2VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST3VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST4VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST5VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST6VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST7VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST8VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST9VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__ADJUST10VALUE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__SHADOWok;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__3DOK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__LINEOK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__GEOTEXTOK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__FILLSHADESHAPEOK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GEOMETRY__FILLOK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__FILLTYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__FILLCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__FILLOPACITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__FILLBACKCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__BACKOPACITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__CRMOD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__PATTERNTEXTURE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__BLIPFILENAME;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__BLIPFLAGS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__WIDTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__HEIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__ANGLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__FOCUS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__TOLEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__TOTOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__TORIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__TOBOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__RECTLEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__RECTTOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__RECTRIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__RECTBOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__DZTYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__SHADEPRESET;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__SHADECOLORS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__ORIGINX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__ORIGINY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__SHAPEORIGINX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__SHAPEORIGINY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__SHADETYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__FILLED;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__HITTESTFILL;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__SHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__USERECT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::FILL__NOFILLHITTEST;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__COLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__OPACITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__BACKCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__CRMOD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINETYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__FILLBLIP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__FILLBLIPNAME;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__FILLBLIPFLAGS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__FILLWIDTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__FILLHEIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__FILLDZTYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEWIDTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEMITERLIMIT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINESTYLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEDASHSTYLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINESTARTARROWHEAD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEENDARROWHEAD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINESTARTARROWWIDTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINESTARTARROWLENGTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEENDARROWWIDTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEENDARROWLENGTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEJOINSTYLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEENDCAPSTYLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__ARROWHEADSOK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__ANYLINE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__HITLINETEST;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEFILLSHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH_LEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH_TOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH_BOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH_RIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__TYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__COLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__HIGHLIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__CRMOD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__OPACITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__OFFSETX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__OFFSETY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SECONDOFFSETX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SECONDOFFSETY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SCALEXTOX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SCALEYTOX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SCALEXTOY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SCALEYTOY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__PERSPECTIVEX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__PERSPECTIVEY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__WEIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__ORIGINX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__ORIGINY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SHADOW;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHADOWSTYLE__SHADOWOBSURED;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__TYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__OFFSETX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__OFFSETY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__SCALEXTOX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__SCALEYTOX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__SCALEXTOY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__SCALEYTOY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__PERSPECTIVEX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__PERSPECTIVEY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__WEIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__ORIGINX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__ORIGINY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::PERSPECTIVE__PERSPECTIVEON;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__SPECULARAMOUNT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__DIFFUSEAMOUNT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__SHININESS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__EDGETHICKNESS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__EXTRUDEFORWARD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__EXTRUDEBACKWARD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__EXTRUDEPLANE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__EXTRUSIONCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__CRMOD;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__3DEFFECT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__METALLIC;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__USEEXTRUSIONCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREED__LIGHTFACE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__YROTATIONANGLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__XROTATIONANGLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONAXISX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONAXISY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONAXISZ;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONANGLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONCENTERX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONCENTERY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONCENTERZ;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__RENDERMODE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__TOLERANCE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__XVIEWPOINT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__YVIEWPOINT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ZVIEWPOINT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ORIGINX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ORIGINY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__SKEWANGLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__SKEWAMOUNT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__AMBIENTINTENSITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__KEYX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__KEYY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__KEYZ;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__KEYINTENSITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__FILLX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__FILLY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__FILLZ;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__FILLINTENSITY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__CONSTRAINROTATION;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__ROTATIONCENTERAUTO;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__PARALLEL;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__KEYHARSH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::THREEDSTYLE__FILLHARSH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__MASTER;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__CONNECTORSTYLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__BLACKANDWHITESETTINGS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__WMODEPUREBW;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__WMODEBW;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__OLEICON;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__PREFERRELATIVERESIZE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__LOCKSHAPETYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__DELETEATTACHEDOBJECT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::SHAPE__BACKGROUNDSHAPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTTYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__XYCALLOUTGAP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTANGLE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTDROPTYPE;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTDROPSPECIFIED;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTLENGTHSPECIFIED;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__ISCALLOUT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTACCENTBAR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTTEXTBORDER;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTMINUSX;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__CALLOUTMINUSY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__DROPAUTO;

constexpr int16_t org::apache::poi::ddf::EscherProperties::CALLOUT__LENGTHSPECIFIED;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__SHAPENAME;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__DESCRIPTION;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__HYPERLINK;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__WRAPPOLYGONVERTICES;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__WRAPDISTLEFT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__WRAPDISTTOP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__WRAPDISTRIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__WRAPDISTBOTTOM;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__REGROUPID;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__UNUSED906;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__TOOLTIP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__SCRIPT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__POSH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__POSRELH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__POSV;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__POSRELV;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__HR_PCT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__HR_ALIGN;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__HR_HEIGHT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__HR_WIDTH;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__SCRIPTEXT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__SCRIPTLANG;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__BORDERTOPCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__BORDERLEFTCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__BORDERBOTTOMCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__BORDERRIGHTCOLOR;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__TABLEPROPERTIES;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__TABLEROWPROPERTIES;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__WEBBOT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__METROBLOB;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__ZORDER;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__FLAGS;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__EDITEDWRAP;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__BEHINDDOCUMENT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__ONDBLCLICKNOTIFY;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__ISBUTTON;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__1DADJUSTMENT;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__HIDDEN;

constexpr int16_t org::apache::poi::ddf::EscherProperties::GROUPSHAPE__PRINT;

java::util::Map*& org::apache::poi::ddf::EscherProperties::properties()
{
    clinit();
    return properties_;
}
java::util::Map* org::apache::poi::ddf::EscherProperties::properties_;

java::util::Map* org::apache::poi::ddf::EscherProperties::initProps()
{
    clinit();
    ::java::util::Map* m = new ::java::util::HashMap();
    addProp(m, TRANSFORM__ROTATION, u"transform.rotation"_j);
    addProp(m, PROTECTION__LOCKROTATION, u"protection.lockrotation"_j);
    addProp(m, PROTECTION__LOCKASPECTRATIO, u"protection.lockaspectratio"_j);
    addProp(m, PROTECTION__LOCKPOSITION, u"protection.lockposition"_j);
    addProp(m, PROTECTION__LOCKAGAINSTSELECT, u"protection.lockagainstselect"_j);
    addProp(m, PROTECTION__LOCKCROPPING, u"protection.lockcropping"_j);
    addProp(m, PROTECTION__LOCKVERTICES, u"protection.lockvertices"_j);
    addProp(m, PROTECTION__LOCKTEXT, u"protection.locktext"_j);
    addProp(m, PROTECTION__LOCKADJUSTHANDLES, u"protection.lockadjusthandles"_j);
    addProp(m, PROTECTION__LOCKAGAINSTGROUPING, u"protection.lockagainstgrouping"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, TEXT__TEXTID, u"text.textid"_j);
    addProp(m, TEXT__TEXTLEFT, u"text.textleft"_j);
    addProp(m, TEXT__TEXTTOP, u"text.texttop"_j);
    addProp(m, TEXT__TEXTRIGHT, u"text.textright"_j);
    addProp(m, TEXT__TEXTBOTTOM, u"text.textbottom"_j);
    addProp(m, TEXT__WRAPTEXT, u"text.wraptext"_j);
    addProp(m, TEXT__SCALETEXT, u"text.scaletext"_j);
    addProp(m, TEXT__ANCHORTEXT, u"text.anchortext"_j);
    addProp(m, TEXT__TEXTFLOW, u"text.textflow"_j);
    addProp(m, TEXT__FONTROTATION, u"text.fontrotation"_j);
    addProp(m, TEXT__IDOFNEXTSHAPE, u"text.idofnextshape"_j);
    addProp(m, TEXT__BIDIR, u"text.bidir"_j);
    addProp(m, TEXT__SINGLECLICKSELECTS, u"text.singleclickselects"_j);
    addProp(m, TEXT__USEHOSTMARGINS, u"text.usehostmargins"_j);
    addProp(m, TEXT__ROTATETEXTWITHSHAPE, u"text.rotatetextwithshape"_j);
    addProp(m, TEXT__SIZESHAPETOFITTEXT, u"text.sizeshapetofittext"_j);
    addProp(m, TEXT__SIZE_TEXT_TO_FIT_SHAPE, u"text.sizetexttofitshape"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, GEOTEXT__UNICODE, u"geotext.unicode"_j);
    addProp(m, GEOTEXT__RTFTEXT, u"geotext.rtftext"_j);
    addProp(m, GEOTEXT__ALIGNMENTONCURVE, u"geotext.alignmentoncurve"_j);
    addProp(m, GEOTEXT__DEFAULTPOINTSIZE, u"geotext.defaultpointsize"_j);
    addProp(m, GEOTEXT__TEXTSPACING, u"geotext.textspacing"_j);
    addProp(m, GEOTEXT__FONTFAMILYNAME, u"geotext.fontfamilyname"_j);
    addProp(m, GEOTEXT__REVERSEROWORDER, u"geotext.reverseroworder"_j);
    addProp(m, GEOTEXT__HASTEXTEFFECT, u"geotext.hastexteffect"_j);
    addProp(m, GEOTEXT__ROTATECHARACTERS, u"geotext.rotatecharacters"_j);
    addProp(m, GEOTEXT__KERNCHARACTERS, u"geotext.kerncharacters"_j);
    addProp(m, GEOTEXT__TIGHTORTRACK, u"geotext.tightortrack"_j);
    addProp(m, GEOTEXT__STRETCHTOFITSHAPE, u"geotext.stretchtofitshape"_j);
    addProp(m, GEOTEXT__CHARBOUNDINGBOX, u"geotext.charboundingbox"_j);
    addProp(m, GEOTEXT__SCALETEXTONPATH, u"geotext.scaletextonpath"_j);
    addProp(m, GEOTEXT__STRETCHCHARHEIGHT, u"geotext.stretchcharheight"_j);
    addProp(m, GEOTEXT__NOMEASUREALONGPATH, u"geotext.nomeasurealongpath"_j);
    addProp(m, GEOTEXT__BOLDFONT, u"geotext.boldfont"_j);
    addProp(m, GEOTEXT__ITALICFONT, u"geotext.italicfont"_j);
    addProp(m, GEOTEXT__UNDERLINEFONT, u"geotext.underlinefont"_j);
    addProp(m, GEOTEXT__SHADOWFONT, u"geotext.shadowfont"_j);
    addProp(m, GEOTEXT__SMALLCAPSFONT, u"geotext.smallcapsfont"_j);
    addProp(m, GEOTEXT__STRIKETHROUGHFONT, u"geotext.strikethroughfont"_j);
    addProp(m, BLIP__CROPFROMTOP, u"blip.cropfromtop"_j);
    addProp(m, BLIP__CROPFROMBOTTOM, u"blip.cropfrombottom"_j);
    addProp(m, BLIP__CROPFROMLEFT, u"blip.cropfromleft"_j);
    addProp(m, BLIP__CROPFROMRIGHT, u"blip.cropfromright"_j);
    addProp(m, BLIP__BLIPTODISPLAY, u"blip.bliptodisplay"_j);
    addProp(m, BLIP__BLIPFILENAME, u"blip.blipfilename"_j);
    addProp(m, BLIP__BLIPFLAGS, u"blip.blipflags"_j);
    addProp(m, BLIP__TRANSPARENTCOLOR, u"blip.transparentcolor"_j);
    addProp(m, BLIP__CONTRASTSETTING, u"blip.contrastsetting"_j);
    addProp(m, BLIP__BRIGHTNESSSETTING, u"blip.brightnesssetting"_j);
    addProp(m, BLIP__GAMMA, u"blip.gamma"_j);
    addProp(m, BLIP__PICTUREID, u"blip.pictureid"_j);
    addProp(m, BLIP__DOUBLEMOD, u"blip.doublemod"_j);
    addProp(m, BLIP__PICTUREFILLMOD, u"blip.picturefillmod"_j);
    addProp(m, BLIP__PICTURELINE, u"blip.pictureline"_j);
    addProp(m, BLIP__PRINTBLIP, u"blip.printblip"_j);
    addProp(m, BLIP__PRINTBLIPFILENAME, u"blip.printblipfilename"_j);
    addProp(m, BLIP__PRINTFLAGS, u"blip.printflags"_j);
    addProp(m, BLIP__NOHITTESTPICTURE, u"blip.nohittestpicture"_j);
    addProp(m, BLIP__PICTUREGRAY, u"blip.picturegray"_j);
    addProp(m, BLIP__PICTUREBILEVEL, u"blip.picturebilevel"_j);
    addProp(m, BLIP__PICTUREACTIVE, u"blip.pictureactive"_j);
    addProp(m, GEOMETRY__LEFT, u"geometry.left"_j);
    addProp(m, GEOMETRY__TOP, u"geometry.top"_j);
    addProp(m, GEOMETRY__RIGHT, u"geometry.right"_j);
    addProp(m, GEOMETRY__BOTTOM, u"geometry.bottom"_j);
    addProp(m, GEOMETRY__SHAPEPATH, u"geometry.shapepath"_j, EscherPropertyMetaData::TYPE_SHAPEPATH);
    addProp(m, GEOMETRY__VERTICES, u"geometry.vertices"_j, EscherPropertyMetaData::TYPE_ARRAY);
    addProp(m, GEOMETRY__SEGMENTINFO, u"geometry.segmentinfo"_j, EscherPropertyMetaData::TYPE_ARRAY);
    addProp(m, GEOMETRY__ADJUSTVALUE, u"geometry.adjustvalue"_j);
    addProp(m, GEOMETRY__ADJUST2VALUE, u"geometry.adjust2value"_j);
    addProp(m, GEOMETRY__ADJUST3VALUE, u"geometry.adjust3value"_j);
    addProp(m, GEOMETRY__ADJUST4VALUE, u"geometry.adjust4value"_j);
    addProp(m, GEOMETRY__ADJUST5VALUE, u"geometry.adjust5value"_j);
    addProp(m, GEOMETRY__ADJUST6VALUE, u"geometry.adjust6value"_j);
    addProp(m, GEOMETRY__ADJUST7VALUE, u"geometry.adjust7value"_j);
    addProp(m, GEOMETRY__ADJUST8VALUE, u"geometry.adjust8value"_j);
    addProp(m, GEOMETRY__ADJUST9VALUE, u"geometry.adjust9value"_j);
    addProp(m, GEOMETRY__ADJUST10VALUE, u"geometry.adjust10value"_j);
    addProp(m, GEOMETRY__SHADOWok, u"geometry.shadowOK"_j);
    addProp(m, GEOMETRY__3DOK, u"geometry.3dok"_j);
    addProp(m, GEOMETRY__LINEOK, u"geometry.lineok"_j);
    addProp(m, GEOMETRY__GEOTEXTOK, u"geometry.geotextok"_j);
    addProp(m, GEOMETRY__FILLSHADESHAPEOK, u"geometry.fillshadeshapeok"_j);
    addProp(m, GEOMETRY__FILLOK, u"geometry.fillok"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, FILL__FILLTYPE, u"fill.filltype"_j);
    addProp(m, FILL__FILLCOLOR, u"fill.fillcolor"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, FILL__FILLOPACITY, u"fill.fillopacity"_j);
    addProp(m, FILL__FILLBACKCOLOR, u"fill.fillbackcolor"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, FILL__BACKOPACITY, u"fill.backopacity"_j);
    addProp(m, FILL__CRMOD, u"fill.crmod"_j);
    addProp(m, FILL__PATTERNTEXTURE, u"fill.patterntexture"_j);
    addProp(m, FILL__BLIPFILENAME, u"fill.blipfilename"_j);
    addProp(m, FILL__BLIPFLAGS, u"fill.blipflags"_j);
    addProp(m, FILL__WIDTH, u"fill.width"_j);
    addProp(m, FILL__HEIGHT, u"fill.height"_j);
    addProp(m, FILL__ANGLE, u"fill.angle"_j);
    addProp(m, FILL__FOCUS, u"fill.focus"_j);
    addProp(m, FILL__TOLEFT, u"fill.toleft"_j);
    addProp(m, FILL__TOTOP, u"fill.totop"_j);
    addProp(m, FILL__TORIGHT, u"fill.toright"_j);
    addProp(m, FILL__TOBOTTOM, u"fill.tobottom"_j);
    addProp(m, FILL__RECTLEFT, u"fill.rectleft"_j);
    addProp(m, FILL__RECTTOP, u"fill.recttop"_j);
    addProp(m, FILL__RECTRIGHT, u"fill.rectright"_j);
    addProp(m, FILL__RECTBOTTOM, u"fill.rectbottom"_j);
    addProp(m, FILL__DZTYPE, u"fill.dztype"_j);
    addProp(m, FILL__SHADEPRESET, u"fill.shadepreset"_j);
    addProp(m, FILL__SHADECOLORS, u"fill.shadecolors"_j, EscherPropertyMetaData::TYPE_ARRAY);
    addProp(m, FILL__ORIGINX, u"fill.originx"_j);
    addProp(m, FILL__ORIGINY, u"fill.originy"_j);
    addProp(m, FILL__SHAPEORIGINX, u"fill.shapeoriginx"_j);
    addProp(m, FILL__SHAPEORIGINY, u"fill.shapeoriginy"_j);
    addProp(m, FILL__SHADETYPE, u"fill.shadetype"_j);
    addProp(m, FILL__FILLED, u"fill.filled"_j);
    addProp(m, FILL__HITTESTFILL, u"fill.hittestfill"_j);
    addProp(m, FILL__SHAPE, u"fill.shape"_j);
    addProp(m, FILL__USERECT, u"fill.userect"_j);
    addProp(m, FILL__NOFILLHITTEST, u"fill.nofillhittest"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, LINESTYLE__COLOR, u"linestyle.color"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, LINESTYLE__OPACITY, u"linestyle.opacity"_j);
    addProp(m, LINESTYLE__BACKCOLOR, u"linestyle.backcolor"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, LINESTYLE__CRMOD, u"linestyle.crmod"_j);
    addProp(m, LINESTYLE__LINETYPE, u"linestyle.linetype"_j);
    addProp(m, LINESTYLE__FILLBLIP, u"linestyle.fillblip"_j);
    addProp(m, LINESTYLE__FILLBLIPNAME, u"linestyle.fillblipname"_j);
    addProp(m, LINESTYLE__FILLBLIPFLAGS, u"linestyle.fillblipflags"_j);
    addProp(m, LINESTYLE__FILLWIDTH, u"linestyle.fillwidth"_j);
    addProp(m, LINESTYLE__FILLHEIGHT, u"linestyle.fillheight"_j);
    addProp(m, LINESTYLE__FILLDZTYPE, u"linestyle.filldztype"_j);
    addProp(m, LINESTYLE__LINEWIDTH, u"linestyle.linewidth"_j);
    addProp(m, LINESTYLE__LINEMITERLIMIT, u"linestyle.linemiterlimit"_j);
    addProp(m, LINESTYLE__LINESTYLE, u"linestyle.linestyle"_j);
    addProp(m, LINESTYLE__LINEDASHING, u"linestyle.linedashing"_j);
    addProp(m, LINESTYLE__LINEDASHSTYLE, u"linestyle.linedashstyle"_j, EscherPropertyMetaData::TYPE_ARRAY);
    addProp(m, LINESTYLE__LINESTARTARROWHEAD, u"linestyle.linestartarrowhead"_j);
    addProp(m, LINESTYLE__LINEENDARROWHEAD, u"linestyle.lineendarrowhead"_j);
    addProp(m, LINESTYLE__LINESTARTARROWWIDTH, u"linestyle.linestartarrowwidth"_j);
    addProp(m, LINESTYLE__LINESTARTARROWLENGTH, u"linestyle.linestartarrowlength"_j);
    addProp(m, LINESTYLE__LINEENDARROWWIDTH, u"linestyle.lineendarrowwidth"_j);
    addProp(m, LINESTYLE__LINEENDARROWLENGTH, u"linestyle.lineendarrowlength"_j);
    addProp(m, LINESTYLE__LINEJOINSTYLE, u"linestyle.linejoinstyle"_j);
    addProp(m, LINESTYLE__LINEENDCAPSTYLE, u"linestyle.lineendcapstyle"_j);
    addProp(m, LINESTYLE__ARROWHEADSOK, u"linestyle.arrowheadsok"_j);
    addProp(m, LINESTYLE__ANYLINE, u"linestyle.anyline"_j);
    addProp(m, LINESTYLE__HITLINETEST, u"linestyle.hitlinetest"_j);
    addProp(m, LINESTYLE__LINEFILLSHAPE, u"linestyle.linefillshape"_j);
    addProp(m, LINESTYLE__NOLINEDRAWDASH, u"linestyle.nolinedrawdash"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, LINESTYLE__NOLINEDRAWDASH_LEFT, u"linestyle.nolinedrawdash.left"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, LINESTYLE__NOLINEDRAWDASH_TOP, u"linestyle.nolinedrawdash.top"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, LINESTYLE__NOLINEDRAWDASH_BOTTOM, u"linestyle.nolinedrawdash.bottom"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, LINESTYLE__NOLINEDRAWDASH_RIGHT, u"linestyle.nolinedrawdash.right"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    addProp(m, SHADOWSTYLE__TYPE, u"shadowstyle.type"_j);
    addProp(m, SHADOWSTYLE__COLOR, u"shadowstyle.color"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, SHADOWSTYLE__HIGHLIGHT, u"shadowstyle.highlight"_j);
    addProp(m, SHADOWSTYLE__CRMOD, u"shadowstyle.crmod"_j);
    addProp(m, SHADOWSTYLE__OPACITY, u"shadowstyle.opacity"_j);
    addProp(m, SHADOWSTYLE__OFFSETX, u"shadowstyle.offsetx"_j);
    addProp(m, SHADOWSTYLE__OFFSETY, u"shadowstyle.offsety"_j);
    addProp(m, SHADOWSTYLE__SECONDOFFSETX, u"shadowstyle.secondoffsetx"_j);
    addProp(m, SHADOWSTYLE__SECONDOFFSETY, u"shadowstyle.secondoffsety"_j);
    addProp(m, SHADOWSTYLE__SCALEXTOX, u"shadowstyle.scalextox"_j);
    addProp(m, SHADOWSTYLE__SCALEYTOX, u"shadowstyle.scaleytox"_j);
    addProp(m, SHADOWSTYLE__SCALEXTOY, u"shadowstyle.scalextoy"_j);
    addProp(m, SHADOWSTYLE__SCALEYTOY, u"shadowstyle.scaleytoy"_j);
    addProp(m, SHADOWSTYLE__PERSPECTIVEX, u"shadowstyle.perspectivex"_j);
    addProp(m, SHADOWSTYLE__PERSPECTIVEY, u"shadowstyle.perspectivey"_j);
    addProp(m, SHADOWSTYLE__WEIGHT, u"shadowstyle.weight"_j);
    addProp(m, SHADOWSTYLE__ORIGINX, u"shadowstyle.originx"_j);
    addProp(m, SHADOWSTYLE__ORIGINY, u"shadowstyle.originy"_j);
    addProp(m, SHADOWSTYLE__SHADOW, u"shadowstyle.shadow"_j);
    addProp(m, SHADOWSTYLE__SHADOWOBSURED, u"shadowstyle.shadowobscured"_j);
    addProp(m, PERSPECTIVE__TYPE, u"perspective.type"_j);
    addProp(m, PERSPECTIVE__OFFSETX, u"perspective.offsetx"_j);
    addProp(m, PERSPECTIVE__OFFSETY, u"perspective.offsety"_j);
    addProp(m, PERSPECTIVE__SCALEXTOX, u"perspective.scalextox"_j);
    addProp(m, PERSPECTIVE__SCALEYTOX, u"perspective.scaleytox"_j);
    addProp(m, PERSPECTIVE__SCALEXTOY, u"perspective.scalextoy"_j);
    addProp(m, PERSPECTIVE__SCALEYTOY, u"perspective.scaleytoy"_j);
    addProp(m, PERSPECTIVE__PERSPECTIVEX, u"perspective.perspectivex"_j);
    addProp(m, PERSPECTIVE__PERSPECTIVEY, u"perspective.perspectivey"_j);
    addProp(m, PERSPECTIVE__WEIGHT, u"perspective.weight"_j);
    addProp(m, PERSPECTIVE__ORIGINX, u"perspective.originx"_j);
    addProp(m, PERSPECTIVE__ORIGINY, u"perspective.originy"_j);
    addProp(m, PERSPECTIVE__PERSPECTIVEON, u"perspective.perspectiveon"_j);
    addProp(m, THREED__SPECULARAMOUNT, u"3d.specularamount"_j);
    addProp(m, THREED__DIFFUSEAMOUNT, u"3d.diffuseamount"_j);
    addProp(m, THREED__SHININESS, u"3d.shininess"_j);
    addProp(m, THREED__EDGETHICKNESS, u"3d.edgethickness"_j);
    addProp(m, THREED__EXTRUDEFORWARD, u"3d.extrudeforward"_j);
    addProp(m, THREED__EXTRUDEBACKWARD, u"3d.extrudebackward"_j);
    addProp(m, THREED__EXTRUDEPLANE, u"3d.extrudeplane"_j);
    addProp(m, THREED__EXTRUSIONCOLOR, u"3d.extrusioncolor"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, THREED__CRMOD, u"3d.crmod"_j);
    addProp(m, THREED__3DEFFECT, u"3d.3deffect"_j);
    addProp(m, THREED__METALLIC, u"3d.metallic"_j);
    addProp(m, THREED__USEEXTRUSIONCOLOR, u"3d.useextrusioncolor"_j, EscherPropertyMetaData::TYPE_RGB);
    addProp(m, THREED__LIGHTFACE, u"3d.lightface"_j);
    addProp(m, THREEDSTYLE__YROTATIONANGLE, u"3dstyle.yrotationangle"_j);
    addProp(m, THREEDSTYLE__XROTATIONANGLE, u"3dstyle.xrotationangle"_j);
    addProp(m, THREEDSTYLE__ROTATIONAXISX, u"3dstyle.rotationaxisx"_j);
    addProp(m, THREEDSTYLE__ROTATIONAXISY, u"3dstyle.rotationaxisy"_j);
    addProp(m, THREEDSTYLE__ROTATIONAXISZ, u"3dstyle.rotationaxisz"_j);
    addProp(m, THREEDSTYLE__ROTATIONANGLE, u"3dstyle.rotationangle"_j);
    addProp(m, THREEDSTYLE__ROTATIONCENTERX, u"3dstyle.rotationcenterx"_j);
    addProp(m, THREEDSTYLE__ROTATIONCENTERY, u"3dstyle.rotationcentery"_j);
    addProp(m, THREEDSTYLE__ROTATIONCENTERZ, u"3dstyle.rotationcenterz"_j);
    addProp(m, THREEDSTYLE__RENDERMODE, u"3dstyle.rendermode"_j);
    addProp(m, THREEDSTYLE__TOLERANCE, u"3dstyle.tolerance"_j);
    addProp(m, THREEDSTYLE__XVIEWPOINT, u"3dstyle.xviewpoint"_j);
    addProp(m, THREEDSTYLE__YVIEWPOINT, u"3dstyle.yviewpoint"_j);
    addProp(m, THREEDSTYLE__ZVIEWPOINT, u"3dstyle.zviewpoint"_j);
    addProp(m, THREEDSTYLE__ORIGINX, u"3dstyle.originx"_j);
    addProp(m, THREEDSTYLE__ORIGINY, u"3dstyle.originy"_j);
    addProp(m, THREEDSTYLE__SKEWANGLE, u"3dstyle.skewangle"_j);
    addProp(m, THREEDSTYLE__SKEWAMOUNT, u"3dstyle.skewamount"_j);
    addProp(m, THREEDSTYLE__AMBIENTINTENSITY, u"3dstyle.ambientintensity"_j);
    addProp(m, THREEDSTYLE__KEYX, u"3dstyle.keyx"_j);
    addProp(m, THREEDSTYLE__KEYY, u"3dstyle.keyy"_j);
    addProp(m, THREEDSTYLE__KEYZ, u"3dstyle.keyz"_j);
    addProp(m, THREEDSTYLE__KEYINTENSITY, u"3dstyle.keyintensity"_j);
    addProp(m, THREEDSTYLE__FILLX, u"3dstyle.fillx"_j);
    addProp(m, THREEDSTYLE__FILLY, u"3dstyle.filly"_j);
    addProp(m, THREEDSTYLE__FILLZ, u"3dstyle.fillz"_j);
    addProp(m, THREEDSTYLE__FILLINTENSITY, u"3dstyle.fillintensity"_j);
    addProp(m, THREEDSTYLE__CONSTRAINROTATION, u"3dstyle.constrainrotation"_j);
    addProp(m, THREEDSTYLE__ROTATIONCENTERAUTO, u"3dstyle.rotationcenterauto"_j);
    addProp(m, THREEDSTYLE__PARALLEL, u"3dstyle.parallel"_j);
    addProp(m, THREEDSTYLE__KEYHARSH, u"3dstyle.keyharsh"_j);
    addProp(m, THREEDSTYLE__FILLHARSH, u"3dstyle.fillharsh"_j);
    addProp(m, SHAPE__MASTER, u"shape.master"_j);
    addProp(m, SHAPE__CONNECTORSTYLE, u"shape.connectorstyle"_j);
    addProp(m, SHAPE__BLACKANDWHITESETTINGS, u"shape.blackandwhitesettings"_j);
    addProp(m, SHAPE__WMODEPUREBW, u"shape.wmodepurebw"_j);
    addProp(m, SHAPE__WMODEBW, u"shape.wmodebw"_j);
    addProp(m, SHAPE__OLEICON, u"shape.oleicon"_j);
    addProp(m, SHAPE__PREFERRELATIVERESIZE, u"shape.preferrelativeresize"_j);
    addProp(m, SHAPE__LOCKSHAPETYPE, u"shape.lockshapetype"_j);
    addProp(m, SHAPE__DELETEATTACHEDOBJECT, u"shape.deleteattachedobject"_j);
    addProp(m, SHAPE__BACKGROUNDSHAPE, u"shape.backgroundshape"_j);
    addProp(m, CALLOUT__CALLOUTTYPE, u"callout.callouttype"_j);
    addProp(m, CALLOUT__XYCALLOUTGAP, u"callout.xycalloutgap"_j);
    addProp(m, CALLOUT__CALLOUTANGLE, u"callout.calloutangle"_j);
    addProp(m, CALLOUT__CALLOUTDROPTYPE, u"callout.calloutdroptype"_j);
    addProp(m, CALLOUT__CALLOUTDROPSPECIFIED, u"callout.calloutdropspecified"_j);
    addProp(m, CALLOUT__CALLOUTLENGTHSPECIFIED, u"callout.calloutlengthspecified"_j);
    addProp(m, CALLOUT__ISCALLOUT, u"callout.iscallout"_j);
    addProp(m, CALLOUT__CALLOUTACCENTBAR, u"callout.calloutaccentbar"_j);
    addProp(m, CALLOUT__CALLOUTTEXTBORDER, u"callout.callouttextborder"_j);
    addProp(m, CALLOUT__CALLOUTMINUSX, u"callout.calloutminusx"_j);
    addProp(m, CALLOUT__CALLOUTMINUSY, u"callout.calloutminusy"_j);
    addProp(m, CALLOUT__DROPAUTO, u"callout.dropauto"_j);
    addProp(m, CALLOUT__LENGTHSPECIFIED, u"callout.lengthspecified"_j);
    addProp(m, GROUPSHAPE__SHAPENAME, u"groupshape.shapename"_j);
    addProp(m, GROUPSHAPE__DESCRIPTION, u"groupshape.description"_j);
    addProp(m, GROUPSHAPE__HYPERLINK, u"groupshape.hyperlink"_j);
    addProp(m, GROUPSHAPE__WRAPPOLYGONVERTICES, u"groupshape.wrappolygonvertices"_j, EscherPropertyMetaData::TYPE_ARRAY);
    addProp(m, GROUPSHAPE__WRAPDISTLEFT, u"groupshape.wrapdistleft"_j);
    addProp(m, GROUPSHAPE__WRAPDISTTOP, u"groupshape.wrapdisttop"_j);
    addProp(m, GROUPSHAPE__WRAPDISTRIGHT, u"groupshape.wrapdistright"_j);
    addProp(m, GROUPSHAPE__WRAPDISTBOTTOM, u"groupshape.wrapdistbottom"_j);
    addProp(m, GROUPSHAPE__REGROUPID, u"groupshape.regroupid"_j);
    addProp(m, GROUPSHAPE__UNUSED906, u"unused906"_j);
    addProp(m, GROUPSHAPE__TOOLTIP, u"groupshape.wzTooltip"_j);
    addProp(m, GROUPSHAPE__SCRIPT, u"groupshape.wzScript"_j);
    addProp(m, GROUPSHAPE__POSH, u"groupshape.posh"_j);
    addProp(m, GROUPSHAPE__POSRELH, u"groupshape.posrelh"_j);
    addProp(m, GROUPSHAPE__POSV, u"groupshape.posv"_j);
    addProp(m, GROUPSHAPE__POSRELV, u"groupshape.posrelv"_j);
    addProp(m, GROUPSHAPE__HR_PCT, u"groupshape.pctHR"_j);
    addProp(m, GROUPSHAPE__HR_ALIGN, u"groupshape.alignHR"_j);
    addProp(m, GROUPSHAPE__HR_HEIGHT, u"groupshape.dxHeightHR"_j);
    addProp(m, GROUPSHAPE__HR_WIDTH, u"groupshape.dxWidthHR"_j);
    addProp(m, GROUPSHAPE__SCRIPTEXT, u"groupshape.wzScriptExtAttr"_j);
    addProp(m, GROUPSHAPE__SCRIPTLANG, u"groupshape.scriptLang"_j);
    addProp(m, GROUPSHAPE__BORDERTOPCOLOR, u"groupshape.borderTopColor"_j);
    addProp(m, GROUPSHAPE__BORDERLEFTCOLOR, u"groupshape.borderLeftColor"_j);
    addProp(m, GROUPSHAPE__BORDERBOTTOMCOLOR, u"groupshape.borderBottomColor"_j);
    addProp(m, GROUPSHAPE__BORDERRIGHTCOLOR, u"groupshape.borderRightColor"_j);
    addProp(m, GROUPSHAPE__TABLEPROPERTIES, u"groupshape.tableProperties"_j);
    addProp(m, GROUPSHAPE__TABLEROWPROPERTIES, u"groupshape.tableRowProperties"_j, EscherPropertyMetaData::TYPE_ARRAY);
    addProp(m, GROUPSHAPE__WEBBOT, u"groupshape.wzWebBot"_j);
    addProp(m, GROUPSHAPE__METROBLOB, u"groupshape.metroBlob"_j);
    addProp(m, GROUPSHAPE__ZORDER, u"groupshape.dhgt"_j);
    addProp(m, GROUPSHAPE__FLAGS, u"groupshape.GroupShapeBooleanProperties"_j);
    addProp(m, GROUPSHAPE__EDITEDWRAP, u"groupshape.editedwrap"_j);
    addProp(m, GROUPSHAPE__BEHINDDOCUMENT, u"groupshape.behinddocument"_j);
    addProp(m, GROUPSHAPE__ONDBLCLICKNOTIFY, u"groupshape.ondblclicknotify"_j);
    addProp(m, GROUPSHAPE__ISBUTTON, u"groupshape.isbutton"_j);
    addProp(m, GROUPSHAPE__1DADJUSTMENT, u"groupshape.1dadjustment"_j);
    addProp(m, GROUPSHAPE__HIDDEN, u"groupshape.hidden"_j);
    addProp(m, GROUPSHAPE__PRINT, u"groupshape.print"_j, EscherPropertyMetaData::TYPE_BOOLEAN);
    return m;
}

void org::apache::poi::ddf::EscherProperties::addProp(::java::util::Map* m, int32_t s, ::java::lang::String* propName)
{
    clinit();
    npc(m)->put(::java::lang::Short::valueOf(static_cast< int16_t >(s)), new EscherPropertyMetaData(propName));
}

void org::apache::poi::ddf::EscherProperties::addProp(::java::util::Map* m, int32_t s, ::java::lang::String* propName, int8_t type)
{
    clinit();
    npc(m)->put(::java::lang::Short::valueOf(static_cast< int16_t >(s)), new EscherPropertyMetaData(propName, type));
}

java::lang::String* org::apache::poi::ddf::EscherProperties::getPropertyName(int16_t propertyId)
{
    clinit();
    auto o = java_cast< EscherPropertyMetaData* >(npc(properties_)->get(::java::lang::Short::valueOf(propertyId)));
    return o == nullptr ? u"unknown"_j : npc(o)->getDescription();
}

int8_t org::apache::poi::ddf::EscherProperties::getPropertyType(int16_t propertyId)
{
    clinit();
    auto escherPropertyMetaData = java_cast< EscherPropertyMetaData* >(npc(properties_)->get(::java::lang::Short::valueOf(propertyId)));
    return escherPropertyMetaData == nullptr ? static_cast< int8_t >(int32_t(0)) : npc(escherPropertyMetaData)->getType();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherProperties::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherProperties", 35);
    return c;
}

void org::apache::poi::ddf::EscherProperties::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        properties_ = initProps();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ddf::EscherProperties::getClass0()
{
    return class_();
}

