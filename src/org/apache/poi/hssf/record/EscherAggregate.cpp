// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedHashMap.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherDgRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherSpgrRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate_createAggregate_1.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate_serialize_2.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate_getRecordSize_3.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

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

poi::hssf::record::EscherAggregate::EscherAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::EscherAggregate::EscherAggregate(bool createDefaultTree) 
    : EscherAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor(createDefaultTree);
}

void poi::hssf::record::EscherAggregate::init()
{
    shapeToObj = new ::java::util::HashMap();
    tailRec = new ::java::util::LinkedHashMap();
}

constexpr int16_t poi::hssf::record::EscherAggregate::sid_;

poi::util::POILogger*& poi::hssf::record::EscherAggregate::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::hssf::record::EscherAggregate::log_;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_MIN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_NOT_PRIMATIVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RECTANGLE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ROUNDRECTANGLE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ELLIPSE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_DIAMOND;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ISOCELESTRIANGLE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RIGHTTRIANGLE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_PARALLELOGRAM;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TRAPEZOID;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_HEXAGON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_OCTAGON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_PLUS;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_STAR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_THICKARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_HOMEPLATE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CUBE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BALLOON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SEAL;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ARC;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LINE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_PLAQUE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CAN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_DONUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTSIMPLE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTOCTAGON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTHEXAGON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCURVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTWAVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTRING;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTONCURVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTONRING;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_STRAIGHTCONNECTOR1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BENTCONNECTOR2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BENTCONNECTOR3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BENTCONNECTOR4;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BENTCONNECTOR5;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDCONNECTOR2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDCONNECTOR3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDCONNECTOR4;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDCONNECTOR5;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CALLOUT1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CALLOUT2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CALLOUT3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTCALLOUT1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTCALLOUT2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTCALLOUT3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BORDERCALLOUT1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BORDERCALLOUT2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BORDERCALLOUT3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTBORDERCALLOUT1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTBORDERCALLOUT2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTBORDERCALLOUT3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RIBBON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RIBBON2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CHEVRON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_PENTAGON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_NOSMOKING;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SEAL8;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SEAL16;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SEAL32;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_WEDGERECTCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_WEDGERRECTCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_WEDGEELLIPSECALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_WAVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FOLDEDCORNER;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_DOWNARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_UPARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTRIGHTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_UPDOWNARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_IRREGULARSEAL1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_IRREGULARSEAL2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LIGHTNINGBOLT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_HEART;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_PICTUREFRAME;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_QUADARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RIGHTARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_UPARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_DOWNARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTRIGHTARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_UPDOWNARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_QUADARROWCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BEVEL;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTBRACKET;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RIGHTBRACKET;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTBRACE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_RIGHTBRACE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTUPARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BENTUPARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BENTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SEAL24;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_STRIPEDRIGHTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_NOTCHEDRIGHTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BLOCKARC;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SMILEYFACE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_VERTICALSCROLL;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_HORIZONTALSCROLL;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CIRCULARARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_NOTCHEDCIRCULARARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_UTURNARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDRIGHTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDLEFTARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDUPARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CURVEDDOWNARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CLOUDCALLOUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ELLIPSERIBBON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ELLIPSERIBBON2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTPROCESS;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTDECISION;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTINPUTOUTPUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTPREDEFINEDPROCESS;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTINTERNALSTORAGE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTDOCUMENT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMULTIDOCUMENT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTTERMINATOR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTPREPARATION;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMANUALINPUT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMANUALOPERATION;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTCONNECTOR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTPUNCHEDCARD;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTPUNCHEDTAPE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTSUMMINGJUNCTION;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTOR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTCOLLATE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTSORT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTEXTRACT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMERGE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTOFFLINESTORAGE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTONLINESTORAGE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMAGNETICTAPE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMAGNETICDISK;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTMAGNETICDRUM;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTDISPLAY;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTDELAY;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTPLAINTEXT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTSTOP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTTRIANGLE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTTRIANGLEINVERTED;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCHEVRON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCHEVRONINVERTED;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTRINGINSIDE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTRINGOUTSIDE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTARCHUPCURVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTARCHDOWNCURVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCIRCLECURVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTBUTTONCURVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTARCHUPPOUR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTARCHDOWNPOUR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCIRCLEPOUR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTBUTTONPOUR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCURVEUP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCURVEDOWN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCASCADEUP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCASCADEDOWN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTWAVE1;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTWAVE2;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTWAVE3;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTWAVE4;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTINFLATE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTDEFLATE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTINFLATEBOTTOM;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTDEFLATEBOTTOM;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTINFLATETOP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTDEFLATETOP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTDEFLATEINFLATE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTDEFLATEINFLATEDEFLATE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTFADERIGHT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTFADELEFT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTFADEUP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTFADEDOWN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTSLANTUP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTSLANTDOWN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCANUP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTCANDOWN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTALTERNATEPROCESS;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_FLOWCHARTOFFPAGECONNECTOR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_CALLOUT90;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTCALLOUT90;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BORDERCALLOUT90;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACCENTBORDERCALLOUT90;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_LEFTRIGHTUPARROW;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SUN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_MOON;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BRACKETPAIR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_BRACEPAIR;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_SEAL4;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_DOUBLEWAVE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONBLANK;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONHOME;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONHELP;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONINFORMATION;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONFORWARDNEXT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONBACKPREVIOUS;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONEND;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONBEGINNING;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONRETURN;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONDOCUMENT;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONSOUND;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_ACTIONBUTTONMOVIE;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_HOSTCONTROL;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_TEXTBOX;

constexpr int16_t poi::hssf::record::EscherAggregate::ST_NIL;

void poi::hssf::record::EscherAggregate::ctor(bool createDefaultTree)
{
    super::ctor();
    init();
    if(createDefaultTree) {
        buildBaseTree();
    }
}

int16_t poi::hssf::record::EscherAggregate::getSid()
{
    return sid_;
}

java::lang::String* poi::hssf::record::EscherAggregate::toString()
{
    auto nl = ::java::lang::System::getProperty(u"line.separtor"_j);
    auto result = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(result)->append(u'['))->append(getRecordName()))->append(u']'))->append(nl);
    for (auto _i = npc(getEscherRecords())->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* escherRecord = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            npc(result)->append(static_cast< ::java::lang::Object* >(escherRecord));
        }
    }
    npc(npc(npc(npc(result)->append(u"[/"_j))->append(getRecordName()))->append(u']'))->append(nl);
    return npc(result)->toString();
}

java::lang::String* poi::hssf::record::EscherAggregate::toXml(::java::lang::String* tab)
{
    auto builder = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(builder)->append(tab))->append(u"<"_j))->append(getRecordName()))->append(u">\n"_j);
    for (auto _i = npc(getEscherRecords())->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* escherRecord = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            npc(builder)->append(npc(escherRecord)->toXml(::java::lang::StringBuilder().append(tab)->append(u"\t"_j)->toString()));
        }
    }
    npc(npc(npc(npc(builder)->append(tab))->append(u"</"_j))->append(getRecordName()))->append(u">\n"_j);
    return npc(builder)->toString();
}

bool poi::hssf::record::EscherAggregate::isDrawingLayerRecord(int16_t sid)
{
    clinit();
    return sid == DrawingRecord::sid || sid == ContinueRecord::sid || sid == ObjRecord::sid || sid == TextObjectRecord::sid;
}

poi::hssf::record::EscherAggregate* poi::hssf::record::EscherAggregate::createAggregate(::java::util::List* records, int32_t locFirstDrawingRecord)
{
    clinit();
    ::java::util::List* const shapeRecords = new ::java::util::ArrayList();
    ::poi::ddf::EscherRecordFactory* recordFactory = new EscherAggregate_createAggregate_1(shapeRecords);
    auto buffer = new ::java::io::ByteArrayOutputStream();
    auto agg = new EscherAggregate(false);
    auto loc = locFirstDrawingRecord;
    while (loc + int32_t(1) < npc(records)->size() && (isDrawingLayerRecord(sid(records, loc)))) {
        try {
            if(!(sid(records, loc) == DrawingRecord::sid || sid(records, loc) == ContinueRecord::sid)) {
                loc++;
                continue;
            }
            if(sid(records, loc) == DrawingRecord::sid) {
                npc(buffer)->write(npc((java_cast< DrawingRecord* >(java_cast< RecordBase* >(npc(records)->get(loc)))))->getRecordData());
            } else {
                npc(buffer)->write(npc((java_cast< ContinueRecord* >(java_cast< RecordBase* >(npc(records)->get(loc)))))->getData());
            }
        } catch (::java::io::IOException* e) {
            throw new ::java::lang::RuntimeException(u"Couldn't get data from drawing/continue records"_j, e);
        }
        loc++;
    }
    auto pos = int32_t(0);
    while (pos < npc(buffer)->size()) {
        auto r = npc(recordFactory)->createRecord(npc(buffer)->toByteArray_(), pos);
        auto bytesRead = npc(r)->fillFields(npc(buffer)->toByteArray_(), pos, recordFactory);
        npc(agg)->addEscherRecord(r);
        pos += bytesRead;
    }
    loc = locFirstDrawingRecord + int32_t(1);
    auto shapeIndex = int32_t(0);
    while (loc < npc(records)->size() && (isDrawingLayerRecord(sid(records, loc)))) {
        if(!isObjectRecord(records, loc)) {
            loc++;
            continue;
        }
        auto objRecord = java_cast< Record* >(java_cast< RecordBase* >(npc(records)->get(loc)));
        npc(npc(agg)->shapeToObj)->put(java_cast< ::poi::ddf::EscherRecord* >(npc(shapeRecords)->get(shapeIndex++)), objRecord);
        loc++;
    }
    while (loc < npc(records)->size()) {
        if(sid(records, loc) == NoteRecord::sid) {
            auto r = java_cast< NoteRecord* >(java_cast< RecordBase* >(npc(records)->get(loc)));
            npc(npc(agg)->tailRec)->put(::java::lang::Integer::valueOf(npc(r)->getShapeId()), r);
        } else {
            break;
        }
        loc++;
    }
    auto locLastDrawingRecord = loc;
    npc(npc(records)->subList(locFirstDrawingRecord, locLastDrawingRecord))->clear();
    npc(records)->add(locFirstDrawingRecord, agg);
    return agg;
}

int32_t poi::hssf::record::EscherAggregate::serialize(int32_t offset, ::int8_tArray* data)
{
    auto records = getEscherRecords();
    auto size = getEscherRecordSize(records);
    auto buffer = new ::int8_tArray(size);
    ::java::util::List* const spEndingOffsets = new ::java::util::ArrayList();
    ::java::util::List* const shapes = new ::java::util::ArrayList();
    auto pos = int32_t(0);
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::java::lang::Object* record = java_cast< ::java::lang::Object* >(_i->next());
        {
            auto e = java_cast< ::poi::ddf::EscherRecord* >(record);
            pos += npc(e)->serialize(pos, buffer, new EscherAggregate_serialize_2(this, spEndingOffsets, shapes));
        }
    }
    npc(shapes)->add(0, nullptr);
    npc(spEndingOffsets)->add(0, ::java::lang::Integer::valueOf(int32_t(0)));
    pos = offset;
    auto writtenEscherBytes = int32_t(0);
    int32_t i;
    for (i = 1; i < npc(shapes)->size(); i++) {
        auto endOffset = (npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i))))->intValue() - int32_t(1);
        int32_t startOffset;
        if(i == 1)
            startOffset = 0;
        else
            startOffset = (npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i - int32_t(1)))))->intValue();
        auto drawingData = new ::int8_tArray(endOffset - startOffset + int32_t(1));
        ::java::lang::System::arraycopy(buffer, startOffset, drawingData, 0, npc(drawingData)->length);
        pos += writeDataIntoDrawingRecord(drawingData, writtenEscherBytes, pos, data, i);
        writtenEscherBytes += npc(drawingData)->length;
        auto obj = java_cast< Record* >(npc(shapeToObj)->get(java_cast< ::poi::ddf::EscherRecord* >(npc(shapes)->get(i))));
        pos += npc(obj)->serialize(pos, data);
        if(i == npc(shapes)->size() - int32_t(1) && endOffset < npc(buffer)->length - int32_t(1)) {
            drawingData = new ::int8_tArray(npc(buffer)->length - endOffset - int32_t(1));
            ::java::lang::System::arraycopy(buffer, endOffset + int32_t(1), drawingData, 0, npc(drawingData)->length);
            pos += writeDataIntoDrawingRecord(drawingData, writtenEscherBytes, pos, data, i);
        }
    }
    if((pos - offset) < npc(buffer)->length - int32_t(1)) {
        auto drawingData = new ::int8_tArray(npc(buffer)->length - (pos - offset));
        ::java::lang::System::arraycopy(buffer, (pos - offset), drawingData, 0, npc(drawingData)->length);
        pos += writeDataIntoDrawingRecord(drawingData, writtenEscherBytes, pos, data, i);
    }
    for (auto _i = npc(npc(tailRec)->values())->iterator(); _i->hasNext(); ) {
        NoteRecord* noteRecord = java_cast< NoteRecord* >(_i->next());
        {
            auto rec = java_cast< Record* >(noteRecord);
            pos += npc(rec)->serialize(pos, data);
        }
    }
    auto bytesWritten = pos - offset;
    if(bytesWritten != getRecordSize())
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(bytesWritten)->append(u" bytes written but getRecordSize() reports "_j)
            ->append(getRecordSize())->toString());

    return bytesWritten;
}

int32_t poi::hssf::record::EscherAggregate::writeDataIntoDrawingRecord(::int8_tArray* drawingData, int32_t writtenEscherBytes, int32_t pos, ::int8_tArray* data, int32_t i)
{
    auto temp = int32_t(0);
    if(writtenEscherBytes + npc(drawingData)->length > RecordInputStream::MAX_RECORD_DATA_SIZE && i != 1) {
        for (auto j = int32_t(0); j < npc(drawingData)->length; j += RecordInputStream::MAX_RECORD_DATA_SIZE) {
            auto buf = new ::int8_tArray(::java::lang::Math::min(static_cast< int32_t >(RecordInputStream::MAX_RECORD_DATA_SIZE), npc(drawingData)->length - j));
            ::java::lang::System::arraycopy(drawingData, j, buf, 0, ::java::lang::Math::min(static_cast< int32_t >(RecordInputStream::MAX_RECORD_DATA_SIZE), npc(drawingData)->length - j));
            auto drawing = new ContinueRecord(buf);
            temp += npc(drawing)->serialize(pos + temp, data);
        }
    } else {
        for (auto j = int32_t(0); j < npc(drawingData)->length; j += RecordInputStream::MAX_RECORD_DATA_SIZE) {
            if(j == 0) {
                auto drawing = new DrawingRecord();
                auto buf = new ::int8_tArray(::java::lang::Math::min(static_cast< int32_t >(RecordInputStream::MAX_RECORD_DATA_SIZE), npc(drawingData)->length - j));
                ::java::lang::System::arraycopy(drawingData, j, buf, 0, ::java::lang::Math::min(static_cast< int32_t >(RecordInputStream::MAX_RECORD_DATA_SIZE), npc(drawingData)->length - j));
                npc(drawing)->setData(buf);
                temp += npc(drawing)->serialize(pos + temp, data);
            } else {
                auto buf = new ::int8_tArray(::java::lang::Math::min(static_cast< int32_t >(RecordInputStream::MAX_RECORD_DATA_SIZE), npc(drawingData)->length - j));
                ::java::lang::System::arraycopy(drawingData, j, buf, 0, ::java::lang::Math::min(static_cast< int32_t >(RecordInputStream::MAX_RECORD_DATA_SIZE), npc(drawingData)->length - j));
                auto drawing = new ContinueRecord(buf);
                temp += npc(drawing)->serialize(pos + temp, data);
            }
        }
    }
    return temp;
}

int32_t poi::hssf::record::EscherAggregate::getEscherRecordSize(::java::util::List* records)
{
    auto size = int32_t(0);
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* record = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            size += npc(record)->getRecordSize();
        }
    }
    return size;
}

int32_t poi::hssf::record::EscherAggregate::getRecordSize()
{
    auto continueRecordsHeadersSize = int32_t(0);
    auto records = getEscherRecords();
    auto rawEscherSize = getEscherRecordSize(records);
    auto buffer = new ::int8_tArray(rawEscherSize);
    ::java::util::List* const spEndingOffsets = new ::java::util::ArrayList();
    auto pos = int32_t(0);
    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* e = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            pos += npc(e)->serialize(pos, buffer, new EscherAggregate_getRecordSize_3(this, spEndingOffsets));
        }
    }
    npc(spEndingOffsets)->add(0, ::java::lang::Integer::valueOf(int32_t(0)));
    for (auto i = int32_t(1); i < npc(spEndingOffsets)->size(); i++) {
        if(i == npc(spEndingOffsets)->size() - int32_t(1) && (npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i))))->intValue() < pos) {
            continueRecordsHeadersSize += 4;
        }
        if((npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i))))->intValue() - (npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i - int32_t(1)))))->intValue() <= RecordInputStream::MAX_RECORD_DATA_SIZE) {
            continue;
        }
        continueRecordsHeadersSize += (((npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i))))->intValue() - (npc(java_cast< ::java::lang::Integer* >(npc(spEndingOffsets)->get(i - int32_t(1)))))->intValue()) / RecordInputStream::MAX_RECORD_DATA_SIZE) * int32_t(4);
    }
    auto drawingRecordSize = rawEscherSize + (npc(shapeToObj)->size()) * int32_t(4);
    if(rawEscherSize != 0 && npc(spEndingOffsets)->size() == 1) {
        continueRecordsHeadersSize += 4;
    }
    auto objRecordSize = int32_t(0);
    for (auto _i = npc(npc(shapeToObj)->values())->iterator(); _i->hasNext(); ) {
        Record* r = java_cast< Record* >(_i->next());
        {
            objRecordSize += npc(r)->getRecordSize();
        }
    }
    auto tailRecordSize = int32_t(0);
    for (auto _i = npc(npc(tailRec)->values())->iterator(); _i->hasNext(); ) {
        NoteRecord* noteRecord = java_cast< NoteRecord* >(_i->next());
        {
            tailRecordSize += npc(noteRecord)->getRecordSize();
        }
    }
    return drawingRecordSize + objRecordSize + tailRecordSize+ continueRecordsHeadersSize;
}

void poi::hssf::record::EscherAggregate::associateShapeToObjRecord(::poi::ddf::EscherRecord* r, Record* objRecord)
{
    npc(shapeToObj)->put(r, objRecord);
}

void poi::hssf::record::EscherAggregate::removeShapeToObjRecord(::poi::ddf::EscherRecord* rec)
{
    npc(shapeToObj)->remove(rec);
}

java::lang::String* poi::hssf::record::EscherAggregate::getRecordName()
{
    return u"ESCHERAGGREGATE"_j;
}

bool poi::hssf::record::EscherAggregate::isObjectRecord(::java::util::List* records, int32_t loc)
{
    clinit();
    return sid(records, loc) == ObjRecord::sid || sid(records, loc) == TextObjectRecord::sid;
}

void poi::hssf::record::EscherAggregate::buildBaseTree()
{
    auto dgContainer = new ::poi::ddf::EscherContainerRecord();
    auto spgrContainer = new ::poi::ddf::EscherContainerRecord();
    auto spContainer1 = new ::poi::ddf::EscherContainerRecord();
    auto spgr = new ::poi::ddf::EscherSpgrRecord();
    auto sp1 = new ::poi::ddf::EscherSpRecord();
    npc(dgContainer)->setRecordId(::poi::ddf::EscherContainerRecord::DG_CONTAINER);
    npc(dgContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    auto dg = new ::poi::ddf::EscherDgRecord();
    npc(dg)->setRecordId(::poi::ddf::EscherDgRecord::RECORD_ID);
    int16_t dgId = int32_t(1);
    npc(dg)->setOptions(static_cast< int16_t >((dgId << int32_t(4))));
    npc(dg)->setNumShapes(0);
    npc(dg)->setLastMSOSPID(1024);
    npc(spgrContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SPGR_CONTAINER);
    npc(spgrContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(spContainer1)->setRecordId(::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer1)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(spgr)->setRecordId(::poi::ddf::EscherSpgrRecord::RECORD_ID);
    npc(spgr)->setOptions(static_cast< int16_t >(int32_t(1)));
    npc(spgr)->setRectX1(0);
    npc(spgr)->setRectY1(0);
    npc(spgr)->setRectX2(1023);
    npc(spgr)->setRectY2(255);
    npc(sp1)->setRecordId(::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp1)->setOptions(static_cast< int16_t >(int32_t(2)));
    npc(sp1)->setVersion(static_cast< int16_t >(int32_t(2)));
    npc(sp1)->setShapeId(-int32_t(1));
    npc(sp1)->setFlags(::poi::ddf::EscherSpRecord::FLAG_GROUP | ::poi::ddf::EscherSpRecord::FLAG_PATRIARCH);
    npc(dgContainer)->addChildRecord(dg);
    npc(dgContainer)->addChildRecord(spgrContainer);
    npc(spgrContainer)->addChildRecord(spContainer1);
    npc(spContainer1)->addChildRecord(spgr);
    npc(spContainer1)->addChildRecord(sp1);
    addEscherRecord(dgContainer);
}

void poi::hssf::record::EscherAggregate::setDgId(int16_t dgId)
{
    auto dgContainer = getEscherContainer();
    auto dg = java_cast< ::poi::ddf::EscherDgRecord* >(npc(dgContainer)->getChildById(::poi::ddf::EscherDgRecord::RECORD_ID));
    npc(dg)->setOptions(static_cast< int16_t >((dgId << int32_t(4))));
}

void poi::hssf::record::EscherAggregate::setMainSpRecordId(int32_t shapeId)
{
    auto dgContainer = getEscherContainer();
    auto spgrConatiner = java_cast< ::poi::ddf::EscherContainerRecord* >(java_cast< ::poi::ddf::EscherRecord* >(npc(dgContainer)->getChildById(::poi::ddf::EscherContainerRecord::SPGR_CONTAINER)));
    auto spContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(spgrConatiner)->getChild(int32_t(0)));
    auto sp = java_cast< ::poi::ddf::EscherSpRecord* >(java_cast< ::poi::ddf::EscherRecord* >(npc(spContainer)->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID)));
    npc(sp)->setShapeId(shapeId);
}

int16_t poi::hssf::record::EscherAggregate::sid(::java::util::List* records, int32_t loc)
{
    clinit();
    auto record = java_cast< RecordBase* >(npc(records)->get(loc));
    if(dynamic_cast< Record* >(record) != nullptr) {
        return npc((java_cast< Record* >(record)))->getSid();
    } else {
        return -int32_t(1);
    }
}

java::util::Map* poi::hssf::record::EscherAggregate::getShapeToObjMapping()
{
    return ::java::util::Collections::unmodifiableMap(shapeToObj);
}

java::util::Map* poi::hssf::record::EscherAggregate::getTailRecords()
{
    return ::java::util::Collections::unmodifiableMap(tailRec);
}

poi::hssf::record::NoteRecord* poi::hssf::record::EscherAggregate::getNoteRecordByObj(ObjRecord* obj)
{
    auto cod = java_cast< CommonObjectDataSubRecord* >(java_cast< SubRecord* >(npc(npc(obj)->getSubRecords())->get(0)));
    return java_cast< NoteRecord* >(npc(tailRec)->get(::java::lang::Integer::valueOf(npc(cod)->getObjectId())));
}

void poi::hssf::record::EscherAggregate::addTailRecord(NoteRecord* note)
{
    npc(tailRec)->put(::java::lang::Integer::valueOf(npc(note)->getShapeId()), note);
}

void poi::hssf::record::EscherAggregate::removeTailRecord(NoteRecord* note)
{
    npc(tailRec)->remove(::java::lang::Integer::valueOf(npc(note)->getShapeId()));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::EscherAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.EscherAggregate", 42);
    return c;
}

void poi::hssf::record::EscherAggregate::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(EscherAggregate::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* poi::hssf::record::EscherAggregate::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::EscherAggregate::getClass0()
{
    return class_();
}

