// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/AbstractEscherHolderRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::EscherAggregate final
    : public AbstractEscherHolderRecord
{

public:
    typedef AbstractEscherHolderRecord super;
    static constexpr int16_t sid_ { int16_t(9876) };

private:
    static ::org::apache::poi::util::POILogger* log_;

public:
    static constexpr int16_t ST_MIN { int16_t(0) };
    static constexpr int16_t ST_NOT_PRIMATIVE { int16_t(0) };
    static constexpr int16_t ST_RECTANGLE { int16_t(1) };
    static constexpr int16_t ST_ROUNDRECTANGLE { int16_t(2) };
    static constexpr int16_t ST_ELLIPSE { int16_t(3) };
    static constexpr int16_t ST_DIAMOND { int16_t(4) };
    static constexpr int16_t ST_ISOCELESTRIANGLE { int16_t(5) };
    static constexpr int16_t ST_RIGHTTRIANGLE { int16_t(6) };
    static constexpr int16_t ST_PARALLELOGRAM { int16_t(7) };
    static constexpr int16_t ST_TRAPEZOID { int16_t(8) };
    static constexpr int16_t ST_HEXAGON { int16_t(9) };
    static constexpr int16_t ST_OCTAGON { int16_t(10) };
    static constexpr int16_t ST_PLUS { int16_t(11) };
    static constexpr int16_t ST_STAR { int16_t(12) };
    static constexpr int16_t ST_ARROW { int16_t(13) };
    static constexpr int16_t ST_THICKARROW { int16_t(14) };
    static constexpr int16_t ST_HOMEPLATE { int16_t(15) };
    static constexpr int16_t ST_CUBE { int16_t(16) };
    static constexpr int16_t ST_BALLOON { int16_t(17) };
    static constexpr int16_t ST_SEAL { int16_t(18) };
    static constexpr int16_t ST_ARC { int16_t(19) };
    static constexpr int16_t ST_LINE { int16_t(20) };
    static constexpr int16_t ST_PLAQUE { int16_t(21) };
    static constexpr int16_t ST_CAN { int16_t(22) };
    static constexpr int16_t ST_DONUT { int16_t(23) };
    static constexpr int16_t ST_TEXTSIMPLE { int16_t(24) };
    static constexpr int16_t ST_TEXTOCTAGON { int16_t(25) };
    static constexpr int16_t ST_TEXTHEXAGON { int16_t(26) };
    static constexpr int16_t ST_TEXTCURVE { int16_t(27) };
    static constexpr int16_t ST_TEXTWAVE { int16_t(28) };
    static constexpr int16_t ST_TEXTRING { int16_t(29) };
    static constexpr int16_t ST_TEXTONCURVE { int16_t(30) };
    static constexpr int16_t ST_TEXTONRING { int16_t(31) };
    static constexpr int16_t ST_STRAIGHTCONNECTOR1 { int16_t(32) };
    static constexpr int16_t ST_BENTCONNECTOR2 { int16_t(33) };
    static constexpr int16_t ST_BENTCONNECTOR3 { int16_t(34) };
    static constexpr int16_t ST_BENTCONNECTOR4 { int16_t(35) };
    static constexpr int16_t ST_BENTCONNECTOR5 { int16_t(36) };
    static constexpr int16_t ST_CURVEDCONNECTOR2 { int16_t(37) };
    static constexpr int16_t ST_CURVEDCONNECTOR3 { int16_t(38) };
    static constexpr int16_t ST_CURVEDCONNECTOR4 { int16_t(39) };
    static constexpr int16_t ST_CURVEDCONNECTOR5 { int16_t(40) };
    static constexpr int16_t ST_CALLOUT1 { int16_t(41) };
    static constexpr int16_t ST_CALLOUT2 { int16_t(42) };
    static constexpr int16_t ST_CALLOUT3 { int16_t(43) };
    static constexpr int16_t ST_ACCENTCALLOUT1 { int16_t(44) };
    static constexpr int16_t ST_ACCENTCALLOUT2 { int16_t(45) };
    static constexpr int16_t ST_ACCENTCALLOUT3 { int16_t(46) };
    static constexpr int16_t ST_BORDERCALLOUT1 { int16_t(47) };
    static constexpr int16_t ST_BORDERCALLOUT2 { int16_t(48) };
    static constexpr int16_t ST_BORDERCALLOUT3 { int16_t(49) };
    static constexpr int16_t ST_ACCENTBORDERCALLOUT1 { int16_t(50) };
    static constexpr int16_t ST_ACCENTBORDERCALLOUT2 { int16_t(51) };
    static constexpr int16_t ST_ACCENTBORDERCALLOUT3 { int16_t(52) };
    static constexpr int16_t ST_RIBBON { int16_t(53) };
    static constexpr int16_t ST_RIBBON2 { int16_t(54) };
    static constexpr int16_t ST_CHEVRON { int16_t(55) };
    static constexpr int16_t ST_PENTAGON { int16_t(56) };
    static constexpr int16_t ST_NOSMOKING { int16_t(57) };
    static constexpr int16_t ST_SEAL8 { int16_t(58) };
    static constexpr int16_t ST_SEAL16 { int16_t(59) };
    static constexpr int16_t ST_SEAL32 { int16_t(60) };
    static constexpr int16_t ST_WEDGERECTCALLOUT { int16_t(61) };
    static constexpr int16_t ST_WEDGERRECTCALLOUT { int16_t(62) };
    static constexpr int16_t ST_WEDGEELLIPSECALLOUT { int16_t(63) };
    static constexpr int16_t ST_WAVE { int16_t(64) };
    static constexpr int16_t ST_FOLDEDCORNER { int16_t(65) };
    static constexpr int16_t ST_LEFTARROW { int16_t(66) };
    static constexpr int16_t ST_DOWNARROW { int16_t(67) };
    static constexpr int16_t ST_UPARROW { int16_t(68) };
    static constexpr int16_t ST_LEFTRIGHTARROW { int16_t(69) };
    static constexpr int16_t ST_UPDOWNARROW { int16_t(70) };
    static constexpr int16_t ST_IRREGULARSEAL1 { int16_t(71) };
    static constexpr int16_t ST_IRREGULARSEAL2 { int16_t(72) };
    static constexpr int16_t ST_LIGHTNINGBOLT { int16_t(73) };
    static constexpr int16_t ST_HEART { int16_t(74) };
    static constexpr int16_t ST_PICTUREFRAME { int16_t(75) };
    static constexpr int16_t ST_QUADARROW { int16_t(76) };
    static constexpr int16_t ST_LEFTARROWCALLOUT { int16_t(77) };
    static constexpr int16_t ST_RIGHTARROWCALLOUT { int16_t(78) };
    static constexpr int16_t ST_UPARROWCALLOUT { int16_t(79) };
    static constexpr int16_t ST_DOWNARROWCALLOUT { int16_t(80) };
    static constexpr int16_t ST_LEFTRIGHTARROWCALLOUT { int16_t(81) };
    static constexpr int16_t ST_UPDOWNARROWCALLOUT { int16_t(82) };
    static constexpr int16_t ST_QUADARROWCALLOUT { int16_t(83) };
    static constexpr int16_t ST_BEVEL { int16_t(84) };
    static constexpr int16_t ST_LEFTBRACKET { int16_t(85) };
    static constexpr int16_t ST_RIGHTBRACKET { int16_t(86) };
    static constexpr int16_t ST_LEFTBRACE { int16_t(87) };
    static constexpr int16_t ST_RIGHTBRACE { int16_t(88) };
    static constexpr int16_t ST_LEFTUPARROW { int16_t(89) };
    static constexpr int16_t ST_BENTUPARROW { int16_t(90) };
    static constexpr int16_t ST_BENTARROW { int16_t(91) };
    static constexpr int16_t ST_SEAL24 { int16_t(92) };
    static constexpr int16_t ST_STRIPEDRIGHTARROW { int16_t(93) };
    static constexpr int16_t ST_NOTCHEDRIGHTARROW { int16_t(94) };
    static constexpr int16_t ST_BLOCKARC { int16_t(95) };
    static constexpr int16_t ST_SMILEYFACE { int16_t(96) };
    static constexpr int16_t ST_VERTICALSCROLL { int16_t(97) };
    static constexpr int16_t ST_HORIZONTALSCROLL { int16_t(98) };
    static constexpr int16_t ST_CIRCULARARROW { int16_t(99) };
    static constexpr int16_t ST_NOTCHEDCIRCULARARROW { int16_t(100) };
    static constexpr int16_t ST_UTURNARROW { int16_t(101) };
    static constexpr int16_t ST_CURVEDRIGHTARROW { int16_t(102) };
    static constexpr int16_t ST_CURVEDLEFTARROW { int16_t(103) };
    static constexpr int16_t ST_CURVEDUPARROW { int16_t(104) };
    static constexpr int16_t ST_CURVEDDOWNARROW { int16_t(105) };
    static constexpr int16_t ST_CLOUDCALLOUT { int16_t(106) };
    static constexpr int16_t ST_ELLIPSERIBBON { int16_t(107) };
    static constexpr int16_t ST_ELLIPSERIBBON2 { int16_t(108) };
    static constexpr int16_t ST_FLOWCHARTPROCESS { int16_t(109) };
    static constexpr int16_t ST_FLOWCHARTDECISION { int16_t(110) };
    static constexpr int16_t ST_FLOWCHARTINPUTOUTPUT { int16_t(111) };
    static constexpr int16_t ST_FLOWCHARTPREDEFINEDPROCESS { int16_t(112) };
    static constexpr int16_t ST_FLOWCHARTINTERNALSTORAGE { int16_t(113) };
    static constexpr int16_t ST_FLOWCHARTDOCUMENT { int16_t(114) };
    static constexpr int16_t ST_FLOWCHARTMULTIDOCUMENT { int16_t(115) };
    static constexpr int16_t ST_FLOWCHARTTERMINATOR { int16_t(116) };
    static constexpr int16_t ST_FLOWCHARTPREPARATION { int16_t(117) };
    static constexpr int16_t ST_FLOWCHARTMANUALINPUT { int16_t(118) };
    static constexpr int16_t ST_FLOWCHARTMANUALOPERATION { int16_t(119) };
    static constexpr int16_t ST_FLOWCHARTCONNECTOR { int16_t(120) };
    static constexpr int16_t ST_FLOWCHARTPUNCHEDCARD { int16_t(121) };
    static constexpr int16_t ST_FLOWCHARTPUNCHEDTAPE { int16_t(122) };
    static constexpr int16_t ST_FLOWCHARTSUMMINGJUNCTION { int16_t(123) };
    static constexpr int16_t ST_FLOWCHARTOR { int16_t(124) };
    static constexpr int16_t ST_FLOWCHARTCOLLATE { int16_t(125) };
    static constexpr int16_t ST_FLOWCHARTSORT { int16_t(126) };
    static constexpr int16_t ST_FLOWCHARTEXTRACT { int16_t(127) };
    static constexpr int16_t ST_FLOWCHARTMERGE { int16_t(128) };
    static constexpr int16_t ST_FLOWCHARTOFFLINESTORAGE { int16_t(129) };
    static constexpr int16_t ST_FLOWCHARTONLINESTORAGE { int16_t(130) };
    static constexpr int16_t ST_FLOWCHARTMAGNETICTAPE { int16_t(131) };
    static constexpr int16_t ST_FLOWCHARTMAGNETICDISK { int16_t(132) };
    static constexpr int16_t ST_FLOWCHARTMAGNETICDRUM { int16_t(133) };
    static constexpr int16_t ST_FLOWCHARTDISPLAY { int16_t(134) };
    static constexpr int16_t ST_FLOWCHARTDELAY { int16_t(135) };
    static constexpr int16_t ST_TEXTPLAINTEXT { int16_t(136) };
    static constexpr int16_t ST_TEXTSTOP { int16_t(137) };
    static constexpr int16_t ST_TEXTTRIANGLE { int16_t(138) };
    static constexpr int16_t ST_TEXTTRIANGLEINVERTED { int16_t(139) };
    static constexpr int16_t ST_TEXTCHEVRON { int16_t(140) };
    static constexpr int16_t ST_TEXTCHEVRONINVERTED { int16_t(141) };
    static constexpr int16_t ST_TEXTRINGINSIDE { int16_t(142) };
    static constexpr int16_t ST_TEXTRINGOUTSIDE { int16_t(143) };
    static constexpr int16_t ST_TEXTARCHUPCURVE { int16_t(144) };
    static constexpr int16_t ST_TEXTARCHDOWNCURVE { int16_t(145) };
    static constexpr int16_t ST_TEXTCIRCLECURVE { int16_t(146) };
    static constexpr int16_t ST_TEXTBUTTONCURVE { int16_t(147) };
    static constexpr int16_t ST_TEXTARCHUPPOUR { int16_t(148) };
    static constexpr int16_t ST_TEXTARCHDOWNPOUR { int16_t(149) };
    static constexpr int16_t ST_TEXTCIRCLEPOUR { int16_t(150) };
    static constexpr int16_t ST_TEXTBUTTONPOUR { int16_t(151) };
    static constexpr int16_t ST_TEXTCURVEUP { int16_t(152) };
    static constexpr int16_t ST_TEXTCURVEDOWN { int16_t(153) };
    static constexpr int16_t ST_TEXTCASCADEUP { int16_t(154) };
    static constexpr int16_t ST_TEXTCASCADEDOWN { int16_t(155) };
    static constexpr int16_t ST_TEXTWAVE1 { int16_t(156) };
    static constexpr int16_t ST_TEXTWAVE2 { int16_t(157) };
    static constexpr int16_t ST_TEXTWAVE3 { int16_t(158) };
    static constexpr int16_t ST_TEXTWAVE4 { int16_t(159) };
    static constexpr int16_t ST_TEXTINFLATE { int16_t(160) };
    static constexpr int16_t ST_TEXTDEFLATE { int16_t(161) };
    static constexpr int16_t ST_TEXTINFLATEBOTTOM { int16_t(162) };
    static constexpr int16_t ST_TEXTDEFLATEBOTTOM { int16_t(163) };
    static constexpr int16_t ST_TEXTINFLATETOP { int16_t(164) };
    static constexpr int16_t ST_TEXTDEFLATETOP { int16_t(165) };
    static constexpr int16_t ST_TEXTDEFLATEINFLATE { int16_t(166) };
    static constexpr int16_t ST_TEXTDEFLATEINFLATEDEFLATE { int16_t(167) };
    static constexpr int16_t ST_TEXTFADERIGHT { int16_t(168) };
    static constexpr int16_t ST_TEXTFADELEFT { int16_t(169) };
    static constexpr int16_t ST_TEXTFADEUP { int16_t(170) };
    static constexpr int16_t ST_TEXTFADEDOWN { int16_t(171) };
    static constexpr int16_t ST_TEXTSLANTUP { int16_t(172) };
    static constexpr int16_t ST_TEXTSLANTDOWN { int16_t(173) };
    static constexpr int16_t ST_TEXTCANUP { int16_t(174) };
    static constexpr int16_t ST_TEXTCANDOWN { int16_t(175) };
    static constexpr int16_t ST_FLOWCHARTALTERNATEPROCESS { int16_t(176) };
    static constexpr int16_t ST_FLOWCHARTOFFPAGECONNECTOR { int16_t(177) };
    static constexpr int16_t ST_CALLOUT90 { int16_t(178) };
    static constexpr int16_t ST_ACCENTCALLOUT90 { int16_t(179) };
    static constexpr int16_t ST_BORDERCALLOUT90 { int16_t(180) };
    static constexpr int16_t ST_ACCENTBORDERCALLOUT90 { int16_t(181) };
    static constexpr int16_t ST_LEFTRIGHTUPARROW { int16_t(182) };
    static constexpr int16_t ST_SUN { int16_t(183) };
    static constexpr int16_t ST_MOON { int16_t(184) };
    static constexpr int16_t ST_BRACKETPAIR { int16_t(185) };
    static constexpr int16_t ST_BRACEPAIR { int16_t(186) };
    static constexpr int16_t ST_SEAL4 { int16_t(187) };
    static constexpr int16_t ST_DOUBLEWAVE { int16_t(188) };
    static constexpr int16_t ST_ACTIONBUTTONBLANK { int16_t(189) };
    static constexpr int16_t ST_ACTIONBUTTONHOME { int16_t(190) };
    static constexpr int16_t ST_ACTIONBUTTONHELP { int16_t(191) };
    static constexpr int16_t ST_ACTIONBUTTONINFORMATION { int16_t(192) };
    static constexpr int16_t ST_ACTIONBUTTONFORWARDNEXT { int16_t(193) };
    static constexpr int16_t ST_ACTIONBUTTONBACKPREVIOUS { int16_t(194) };
    static constexpr int16_t ST_ACTIONBUTTONEND { int16_t(195) };
    static constexpr int16_t ST_ACTIONBUTTONBEGINNING { int16_t(196) };
    static constexpr int16_t ST_ACTIONBUTTONRETURN { int16_t(197) };
    static constexpr int16_t ST_ACTIONBUTTONDOCUMENT { int16_t(198) };
    static constexpr int16_t ST_ACTIONBUTTONSOUND { int16_t(199) };
    static constexpr int16_t ST_ACTIONBUTTONMOVIE { int16_t(200) };
    static constexpr int16_t ST_HOSTCONTROL { int16_t(201) };
    static constexpr int16_t ST_TEXTBOX { int16_t(202) };
    static constexpr int16_t ST_NIL { int16_t(4095) };

private:
    ::java::util::Map* shapeToObj {  };
    ::java::util::Map* tailRec {  };
protected:
    void ctor(bool createDefaultTree);

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    ::java::lang::String* toXml(::java::lang::String* tab);

private:
    static bool isDrawingLayerRecord(int16_t sid);

public:
    static EscherAggregate* createAggregate(::java::util::List* records, int32_t locFirstDrawingRecord);
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;

private:
    int32_t writeDataIntoDrawingRecord(::int8_tArray* drawingData, int32_t writtenEscherBytes, int32_t pos, ::int8_tArray* data, int32_t i);
    int32_t getEscherRecordSize(::java::util::List* records);

public:
    int32_t getRecordSize() override;
    void associateShapeToObjRecord(::org::apache::poi::ddf::EscherRecord* r, Record* objRecord);
    void removeShapeToObjRecord(::org::apache::poi::ddf::EscherRecord* rec);

public: /* protected */
    ::java::lang::String* getRecordName() override;

private:
    static bool isObjectRecord(::java::util::List* records, int32_t loc);
    void buildBaseTree();

public:
    void setDgId(int16_t dgId);
    void setMainSpRecordId(int32_t shapeId);

private:
    static int16_t sid(::java::util::List* records, int32_t loc);

public:
    ::java::util::Map* getShapeToObjMapping();
    ::java::util::Map* getTailRecords();
    NoteRecord* getNoteRecordByObj(ObjRecord* obj);
    void addTailRecord(NoteRecord* note);
    void removeTailRecord(NoteRecord* note);

    // Generated
    EscherAggregate(bool createDefaultTree);
protected:
    EscherAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
    friend class EscherAggregate_createAggregate_1;
    friend class EscherAggregate_serialize_2;
    friend class EscherAggregate_getRecordSize_3;
};
