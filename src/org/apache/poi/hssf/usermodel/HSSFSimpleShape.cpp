// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSimpleShape.java
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/List.hpp>
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
#include <org/apache/poi/ddf/EscherShapePathProperty.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
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

org::apache::poi::hssf::usermodel::HSSFSimpleShape::HSSFSimpleShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFSimpleShape::HSSFSimpleShape(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord, ::org::apache::poi::hssf::record::TextObjectRecord* textObjectRecord) 
    : HSSFSimpleShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord,textObjectRecord);
}

org::apache::poi::hssf::usermodel::HSSFSimpleShape::HSSFSimpleShape(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFSimpleShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord);
}

org::apache::poi::hssf::usermodel::HSSFSimpleShape::HSSFSimpleShape(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFSimpleShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_LINE;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_RECTANGLE;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_OVAL;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_ARC;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_PICTURE;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_COMBO_BOX;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_COMMENT;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::WRAP_SQUARE;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::WRAP_BY_POINTS;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::WRAP_NONE;

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord, ::org::apache::poi::hssf::record::TextObjectRecord* textObjectRecord)
{
    super::ctor(spContainer, objRecord);
    this->_textObjectRecord = textObjectRecord;
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor(spContainer, objRecord);
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
    _textObjectRecord = createTextObjRecord();
}

org::apache::poi::hssf::record::TextObjectRecord* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getTextObjectRecord()
{
    return _textObjectRecord;
}

org::apache::poi::hssf::record::TextObjectRecord* org::apache::poi::hssf::usermodel::HSSFSimpleShape::createTextObjRecord()
{
    auto obj = new ::org::apache::poi::hssf::record::TextObjectRecord();
    npc(obj)->setHorizontalTextAlignment(2);
    npc(obj)->setVerticalTextAlignment(2);
    npc(obj)->setTextLocked(true);
    npc(obj)->setTextOrientation(::org::apache::poi::hssf::record::TextObjectRecord::TEXT_ORIENTATION_NONE);
    npc(obj)->setStr(new HSSFRichTextString(u""_j));
    return obj;
}

org::apache::poi::ddf::EscherContainerRecord* org::apache::poi::hssf::usermodel::HSSFSimpleShape::createSpContainer()
{
    auto spContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
    npc(spContainer)->setRecordId(::org::apache::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    auto sp = new ::org::apache::poi::ddf::EscherSpRecord();
    npc(sp)->setRecordId(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp)->setFlags(::org::apache::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::org::apache::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE);
    npc(sp)->setVersion(static_cast< int16_t >(int32_t(2)));
    auto clientData = new ::org::apache::poi::ddf::EscherClientDataRecord();
    npc(clientData)->setRecordId(::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID);
    npc(clientData)->setOptions(static_cast< int16_t >((int32_t(0))));
    auto optRecord = new ::org::apache::poi::ddf::EscherOptRecord();
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING, LINESTYLE_SOLID));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524296)));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::FILL__FILLCOLOR, FILL__FILLCOLOR_DEFAULT));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__COLOR, LINESTYLE__COLOR_DEFAULT));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::FILL__NOFILLHITTEST, NO_FILLHITTEST_FALSE));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524296)));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherShapePathProperty(::org::apache::poi::ddf::EscherProperties::GEOMETRY__SHAPEPATH, ::org::apache::poi::ddf::EscherShapePathProperty::COMPLEX));
    npc(optRecord)->setEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(524288)));
    npc(optRecord)->setRecordId(::org::apache::poi::ddf::EscherOptRecord::RECORD_ID);
    auto escherTextbox = new ::org::apache::poi::ddf::EscherTextboxRecord();
    npc(escherTextbox)->setRecordId(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID);
    npc(escherTextbox)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(spContainer)->addChildRecord(sp);
    npc(spContainer)->addChildRecord(optRecord);
    npc(spContainer)->addChildRecord(npc(getAnchor())->getEscherAnchor());
    npc(spContainer)->addChildRecord(clientData);
    npc(spContainer)->addChildRecord(escherTextbox);
    return spContainer;
}

org::apache::poi::hssf::record::ObjRecord* org::apache::poi::hssf::usermodel::HSSFSimpleShape::createObjRecord()
{
    auto obj = new ::org::apache::poi::hssf::record::ObjRecord();
    auto c = new ::org::apache::poi::hssf::record::CommonObjectDataSubRecord();
    npc(c)->setLocked(true);
    npc(c)->setPrintable(true);
    npc(c)->setAutofill(true);
    npc(c)->setAutoline(true);
    auto e = new ::org::apache::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(c);
    npc(obj)->addSubRecord(e);
    return obj;
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::afterRemove(HSSFPatriarch* patriarch)
{
    npc(npc(patriarch)->getBoundAggregate())->removeShapeToObjRecord(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID)));
    if(nullptr != java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID))) {
        npc(npc(patriarch)->getBoundAggregate())->removeShapeToObjRecord(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID)));
    }
}

org::apache::poi::hssf::usermodel::HSSFRichTextString* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getString()
{
    return npc(_textObjectRecord)->getStr();
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setString(::org::apache::poi::ss::usermodel::RichTextString* string)
{
    if(getShapeType() == 0 || getShapeType() == OBJECT_TYPE_LINE) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Cannot set text for shape type: "_j)->append(getShapeType())->toString());
    }
    auto rtr = java_cast< HSSFRichTextString* >(string);
    if(npc(rtr)->numFormattingRuns() == 0)
        npc(rtr)->applyFont(static_cast< int16_t >(int32_t(0)));

    auto txo = getOrCreateTextObjRecord();
    npc(txo)->setStr(rtr);
    if(npc(string)->getString() != nullptr) {
        setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::TEXT__TEXTID, npc(npc(string)->getString())->hashCode()));
    }
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::afterInsert(HSSFPatriarch* patriarch)
{
    auto agg = npc(patriarch)->getBoundAggregate();
    npc(agg)->associateShapeToObjRecord(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID)), getObjRecord());
    if(nullptr != getTextObjectRecord()) {
        npc(agg)->associateShapeToObjRecord(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID)), getTextObjectRecord());
    }
}

org::apache::poi::hssf::usermodel::HSSFShape* org::apache::poi::hssf::usermodel::HSSFSimpleShape::cloneShape()
{
    ::org::apache::poi::hssf::record::TextObjectRecord* txo = nullptr;
    auto spContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
    auto inSp = npc(getEscherContainer())->serialize();
    npc(spContainer)->fillFields(inSp, int32_t(0), static_cast< ::org::apache::poi::ddf::EscherRecordFactory* >(new ::org::apache::poi::ddf::DefaultEscherRecordFactory()));
    auto obj = java_cast< ::org::apache::poi::hssf::record::ObjRecord* >(npc(getObjRecord())->cloneViaReserialise());
    if(getTextObjectRecord() != nullptr && getString() != nullptr && nullptr != npc(getString())->getString()) {
        txo = java_cast< ::org::apache::poi::hssf::record::TextObjectRecord* >(npc(getTextObjectRecord())->cloneViaReserialise());
    }
    return new HSSFSimpleShape(spContainer, obj, txo);
}

int32_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::getShapeType()
{
    auto spRecord = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    return npc(spRecord)->getShapeType();
}

int32_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::getWrapText()
{
    auto property = java_cast< ::org::apache::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::org::apache::poi::ddf::EscherProperties::TEXT__WRAPTEXT));
    return nullptr == property ? WRAP_SQUARE : npc(property)->getPropertyValue();
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setWrapText(int32_t value)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::TEXT__WRAPTEXT, false, false, value));
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setShapeType(int32_t value)
{
    auto cod = java_cast< ::org::apache::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::org::apache::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectType(OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING);
    auto spRecord = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    npc(spRecord)->setShapeType(static_cast< int16_t >(value));
}

org::apache::poi::hssf::record::TextObjectRecord* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getOrCreateTextObjRecord()
{
    if(getTextObjectRecord() == nullptr) {
        _textObjectRecord = createTextObjRecord();
    }
    auto escherTextbox = java_cast< ::org::apache::poi::ddf::EscherTextboxRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID));
    if(nullptr == escherTextbox) {
        escherTextbox = new ::org::apache::poi::ddf::EscherTextboxRecord();
        npc(escherTextbox)->setRecordId(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID);
        npc(escherTextbox)->setOptions(static_cast< int16_t >(int32_t(0)));
        npc(getEscherContainer())->addChildRecord(escherTextbox);
        npc(npc(getPatriarch())->getBoundAggregate())->associateShapeToObjRecord(escherTextbox, _textObjectRecord);
    }
    return _textObjectRecord;
}

int32_t org::apache::poi::hssf::usermodel::HSSFSimpleShape::getShapeId()
{
    return super::getShapeId();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFSimpleShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFSimpleShape", 45);
    return c;
}

org::apache::poi::hssf::usermodel::HSSFAnchor* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getAnchor()
{
    return HSSFShape::getAnchor();
}

org::apache::poi::hssf::usermodel::HSSFShape* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getParent()
{
    return HSSFShape::getParent();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getShapeName()
{
    return HSSFShape::getShapeName();
}

bool org::apache::poi::hssf::usermodel::HSSFSimpleShape::isNoFill()
{
    return HSSFShape::isNoFill();
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setFillColor(int32_t red, int32_t green, int32_t blue)
{
    HSSFShape::setFillColor(red, green, blue);
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setLineStyleColor(int32_t red, int32_t green, int32_t blue)
{
    HSSFShape::setLineStyleColor(red, green, blue);
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setNoFill(bool noFill)
{
    HSSFShape::setNoFill(noFill);
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setFillColor(int32_t fillColor)
{
    super::setFillColor(fillColor);
}

void org::apache::poi::hssf::usermodel::HSSFSimpleShape::setLineStyleColor(int32_t lineStyleColor)
{
    super::setLineStyleColor(lineStyleColor);
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFSimpleShape::getClass0()
{
    return class_();
}

