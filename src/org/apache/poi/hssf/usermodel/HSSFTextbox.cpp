// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFTextbox.java
#include <org/apache/poi/hssf/usermodel/HSSFTextbox.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRGBProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
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

poi::hssf::usermodel::HSSFTextbox::HSSFTextbox(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFTextbox::HSSFTextbox(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord) 
    : HSSFTextbox(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord,textObjectRecord);
}

poi::hssf::usermodel::HSSFTextbox::HSSFTextbox(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFTextbox(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::OBJECT_TYPE_TEXT;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::HORIZONTAL_ALIGNMENT_LEFT;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::HORIZONTAL_ALIGNMENT_CENTERED;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::HORIZONTAL_ALIGNMENT_RIGHT;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::HORIZONTAL_ALIGNMENT_JUSTIFIED;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::HORIZONTAL_ALIGNMENT_DISTRIBUTED;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::VERTICAL_ALIGNMENT_TOP;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::VERTICAL_ALIGNMENT_CENTER;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::VERTICAL_ALIGNMENT_BOTTOM;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::VERTICAL_ALIGNMENT_JUSTIFY;

constexpr int16_t poi::hssf::usermodel::HSSFTextbox::VERTICAL_ALIGNMENT_DISTRIBUTED;

void poi::hssf::usermodel::HSSFTextbox::ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord)
{
    super::ctor(spContainer, objRecord, textObjectRecord);
}

void poi::hssf::usermodel::HSSFTextbox::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
    setHorizontalAlignment(HORIZONTAL_ALIGNMENT_LEFT);
    setVerticalAlignment(VERTICAL_ALIGNMENT_TOP);
    setString(new HSSFRichTextString(u""_j));
}

poi::hssf::record::ObjRecord* poi::hssf::usermodel::HSSFTextbox::createObjRecord()
{
    auto obj = new ::poi::hssf::record::ObjRecord();
    auto c = new ::poi::hssf::record::CommonObjectDataSubRecord();
    npc(c)->setObjectType(HSSFTextbox::OBJECT_TYPE_TEXT);
    npc(c)->setLocked(true);
    npc(c)->setPrintable(true);
    npc(c)->setAutofill(true);
    npc(c)->setAutoline(true);
    auto e = new ::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(c);
    npc(obj)->addSubRecord(e);
    return obj;
}

poi::ddf::EscherContainerRecord* poi::hssf::usermodel::HSSFTextbox::createSpContainer()
{
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto sp = new ::poi::ddf::EscherSpRecord();
    auto opt = new ::poi::ddf::EscherOptRecord();
    auto clientData = new ::poi::ddf::EscherClientDataRecord();
    auto escherTextbox = new ::poi::ddf::EscherTextboxRecord();
    npc(spContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(sp)->setRecordId(::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp)->setOptions(static_cast< int16_t >(((::poi::hssf::record::EscherAggregate::ST_TEXTBOX << int32_t(4)) | int32_t(2))));
    npc(sp)->setFlags(::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE);
    npc(opt)->setRecordId(::poi::ddf::EscherOptRecord::RECORD_ID);
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTID, int32_t(0)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__WRAPTEXT, int32_t(0)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__ANCHORTEXT, int32_t(0)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(524288)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTLEFT, int32_t(0)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTRIGHT, int32_t(0)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTTOP, int32_t(0)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTBOTTOM, int32_t(0)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING, LINESTYLE_SOLID));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524296)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINEWIDTH, LINEWIDTH_DEFAULT));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherRGBProperty(::poi::ddf::EscherProperties::FILL__FILLCOLOR, FILL__FILLCOLOR_DEFAULT));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherRGBProperty(::poi::ddf::EscherProperties::LINESTYLE__COLOR, LINESTYLE__COLOR_DEFAULT));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::FILL__NOFILLHITTEST, NO_FILLHITTEST_FALSE));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(524288)));
    auto anchor = npc(getAnchor())->getEscherAnchor();
    npc(clientData)->setRecordId(::poi::ddf::EscherClientDataRecord::RECORD_ID);
    npc(clientData)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(escherTextbox)->setRecordId(::poi::ddf::EscherTextboxRecord::RECORD_ID);
    npc(escherTextbox)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(spContainer)->addChildRecord(sp);
    npc(spContainer)->addChildRecord(opt);
    npc(spContainer)->addChildRecord(anchor);
    npc(spContainer)->addChildRecord(clientData);
    npc(spContainer)->addChildRecord(escherTextbox);
    return spContainer;
}

void poi::hssf::usermodel::HSSFTextbox::afterInsert(HSSFPatriarch* patriarch)
{
    auto agg = npc(patriarch)->getBoundAggregate();
    npc(agg)->associateShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID)), getObjRecord());
    if(getTextObjectRecord() != nullptr) {
        npc(agg)->associateShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherTextboxRecord::RECORD_ID)), getTextObjectRecord());
    }
}

int32_t poi::hssf::usermodel::HSSFTextbox::getMarginLeft()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::TEXT__TEXTLEFT));
    return property == nullptr ? int32_t(0) : npc(property)->getPropertyValue();
}

void poi::hssf::usermodel::HSSFTextbox::setMarginLeft(int32_t marginLeft)
{
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTLEFT, marginLeft));
}

int32_t poi::hssf::usermodel::HSSFTextbox::getMarginRight()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::TEXT__TEXTRIGHT));
    return property == nullptr ? int32_t(0) : npc(property)->getPropertyValue();
}

void poi::hssf::usermodel::HSSFTextbox::setMarginRight(int32_t marginRight)
{
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTRIGHT, marginRight));
}

int32_t poi::hssf::usermodel::HSSFTextbox::getMarginTop()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::TEXT__TEXTTOP));
    return property == nullptr ? int32_t(0) : npc(property)->getPropertyValue();
}

void poi::hssf::usermodel::HSSFTextbox::setMarginTop(int32_t marginTop)
{
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTTOP, marginTop));
}

int32_t poi::hssf::usermodel::HSSFTextbox::getMarginBottom()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::TEXT__TEXTBOTTOM));
    return property == nullptr ? int32_t(0) : npc(property)->getPropertyValue();
}

void poi::hssf::usermodel::HSSFTextbox::setMarginBottom(int32_t marginBottom)
{
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TEXT__TEXTBOTTOM, marginBottom));
}

int16_t poi::hssf::usermodel::HSSFTextbox::getHorizontalAlignment()
{
    return static_cast< int16_t >(npc(getTextObjectRecord())->getHorizontalTextAlignment());
}

void poi::hssf::usermodel::HSSFTextbox::setHorizontalAlignment(int16_t align)
{
    npc(getTextObjectRecord())->setHorizontalTextAlignment(align);
}

int16_t poi::hssf::usermodel::HSSFTextbox::getVerticalAlignment()
{
    return static_cast< int16_t >(npc(getTextObjectRecord())->getVerticalTextAlignment());
}

void poi::hssf::usermodel::HSSFTextbox::setVerticalAlignment(int16_t align)
{
    npc(getTextObjectRecord())->setVerticalTextAlignment(align);
}

void poi::hssf::usermodel::HSSFTextbox::setShapeType(int32_t shapeType)
{
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Shape type can not be changed in "_j)->append(npc(this->getClass())->getSimpleName())->toString());
}

poi::hssf::usermodel::HSSFShape* poi::hssf::usermodel::HSSFTextbox::cloneShape()
{
    auto txo = getTextObjectRecord() == nullptr ? static_cast< ::poi::hssf::record::TextObjectRecord* >(nullptr) : java_cast< ::poi::hssf::record::TextObjectRecord* >(npc(getTextObjectRecord())->cloneViaReserialise());
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto inSp = npc(getEscherContainer())->serialize();
    npc(spContainer)->fillFields(inSp, int32_t(0), static_cast< ::poi::ddf::EscherRecordFactory* >(new ::poi::ddf::DefaultEscherRecordFactory()));
    auto obj = java_cast< ::poi::hssf::record::ObjRecord* >(npc(getObjRecord())->cloneViaReserialise());
    return new HSSFTextbox(spContainer, obj, txo);
}

void poi::hssf::usermodel::HSSFTextbox::afterRemove(HSSFPatriarch* patriarch)
{
    npc(npc(patriarch)->getBoundAggregate())->removeShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID)));
    npc(npc(patriarch)->getBoundAggregate())->removeShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherTextboxRecord::RECORD_ID)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFTextbox::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFTextbox", 41);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFTextbox::getClass0()
{
    return class_();
}

