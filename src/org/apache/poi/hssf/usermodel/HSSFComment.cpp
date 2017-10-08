// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFComment.java
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/NoteStructureSubRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellAddress.hpp>
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

poi::hssf::usermodel::HSSFComment::HSSFComment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFComment::HSSFComment(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord, ::poi::hssf::record::NoteRecord* note) 
    : HSSFComment(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord,textObjectRecord,note);
}

poi::hssf::usermodel::HSSFComment::HSSFComment(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFComment(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

poi::hssf::usermodel::HSSFComment::HSSFComment(HSSFShape* parent, HSSFAnchor* anchor, ::poi::hssf::record::NoteRecord* note) 
    : HSSFComment(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor,note);
}

poi::hssf::usermodel::HSSFComment::HSSFComment(::poi::hssf::record::NoteRecord* note, ::poi::hssf::record::TextObjectRecord* txo) 
    : HSSFComment(*static_cast< ::default_init_tag* >(0))
{
    ctor(note,txo);
}

constexpr int32_t poi::hssf::usermodel::HSSFComment::FILL_TYPE_SOLID;

constexpr int32_t poi::hssf::usermodel::HSSFComment::FILL_TYPE_PICTURE;

constexpr int32_t poi::hssf::usermodel::HSSFComment::GROUP_SHAPE_PROPERTY_DEFAULT_VALUE;

constexpr int32_t poi::hssf::usermodel::HSSFComment::GROUP_SHAPE_HIDDEN_MASK;

constexpr int32_t poi::hssf::usermodel::HSSFComment::GROUP_SHAPE_NOT_HIDDEN_MASK;

void poi::hssf::usermodel::HSSFComment::ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord, ::poi::hssf::record::NoteRecord* note)
{
    super::ctor(spContainer, objRecord, textObjectRecord);
    _note = note;
}

void poi::hssf::usermodel::HSSFComment::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    ctor(parent, anchor, createNoteRecord());
}

void poi::hssf::usermodel::HSSFComment::ctor(HSSFShape* parent, HSSFAnchor* anchor, ::poi::hssf::record::NoteRecord* note)
{
    super::ctor(parent, anchor);
    _note = note;
    setFillColor(134217808);
    setVisible(false);
    setAuthor(u""_j);
    auto cod = java_cast< ::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectType(::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMMENT);
}

void poi::hssf::usermodel::HSSFComment::ctor(::poi::hssf::record::NoteRecord* note, ::poi::hssf::record::TextObjectRecord* txo)
{
    ctor(nullptr, new HSSFClientAnchor(), note);
}

void poi::hssf::usermodel::HSSFComment::afterInsert(HSSFPatriarch* patriarch)
{
    super::afterInsert(patriarch);
    npc(npc(patriarch)->getBoundAggregate())->addTailRecord(getNoteRecord());
}

poi::ddf::EscherContainerRecord* poi::hssf::usermodel::HSSFComment::createSpContainer()
{
    auto spContainer = super::createSpContainer();
    auto opt = java_cast< ::poi::ddf::EscherOptRecord* >(npc(spContainer)->getChildById(::poi::ddf::EscherOptRecord::RECORD_ID));
    npc(opt)->removeEscherProperty(::poi::ddf::EscherProperties::TEXT__TEXTLEFT);
    npc(opt)->removeEscherProperty(::poi::ddf::EscherProperties::TEXT__TEXTRIGHT);
    npc(opt)->removeEscherProperty(::poi::ddf::EscherProperties::TEXT__TEXTTOP);
    npc(opt)->removeEscherProperty(::poi::ddf::EscherProperties::TEXT__TEXTBOTTOM);
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, false, false, GROUP_SHAPE_PROPERTY_DEFAULT_VALUE));
    return spContainer;
}

poi::hssf::record::ObjRecord* poi::hssf::usermodel::HSSFComment::createObjRecord()
{
    auto obj = new ::poi::hssf::record::ObjRecord();
    auto c = new ::poi::hssf::record::CommonObjectDataSubRecord();
    npc(c)->setObjectType(OBJECT_TYPE_COMMENT);
    npc(c)->setLocked(true);
    npc(c)->setPrintable(true);
    npc(c)->setAutofill(false);
    npc(c)->setAutoline(true);
    auto u = new ::poi::hssf::record::NoteStructureSubRecord();
    auto e = new ::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(c);
    npc(obj)->addSubRecord(u);
    npc(obj)->addSubRecord(e);
    return obj;
}

poi::hssf::record::NoteRecord* poi::hssf::usermodel::HSSFComment::createNoteRecord()
{
    clinit();
    auto note = new ::poi::hssf::record::NoteRecord();
    npc(note)->setFlags(::poi::hssf::record::NoteRecord::NOTE_HIDDEN);
    npc(note)->setAuthor(u""_j);
    return note;
}

void poi::hssf::usermodel::HSSFComment::setShapeId(int32_t shapeId)
{
    if(shapeId > 65535) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Cannot add more than "_j)->append(int32_t(65535))
            ->append(u" shapes"_j)->toString());
    }
    super::setShapeId(shapeId);
    auto cod = java_cast< ::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectId(shapeId);
    npc(_note)->setShapeId(shapeId);
}

void poi::hssf::usermodel::HSSFComment::setVisible(bool visible)
{
    npc(_note)->setFlags(visible ? ::poi::hssf::record::NoteRecord::NOTE_VISIBLE : ::poi::hssf::record::NoteRecord::NOTE_HIDDEN);
    setHidden(!visible);
}

bool poi::hssf::usermodel::HSSFComment::isVisible()
{
    return npc(_note)->getFlags() == ::poi::hssf::record::NoteRecord::NOTE_VISIBLE;
}

poi::ss::util::CellAddress* poi::hssf::usermodel::HSSFComment::getAddress()
{
    return new ::poi::ss::util::CellAddress(getRow(), getColumn());
}

void poi::hssf::usermodel::HSSFComment::setAddress(::poi::ss::util::CellAddress* address)
{
    setRow(npc(address)->getRow());
    setColumn(npc(address)->getColumn());
}

void poi::hssf::usermodel::HSSFComment::setAddress(int32_t row, int32_t col)
{
    setRow(row);
    setColumn(col);
}

int32_t poi::hssf::usermodel::HSSFComment::getRow()
{
    return npc(_note)->getRow();
}

void poi::hssf::usermodel::HSSFComment::setRow(int32_t row)
{
    npc(_note)->setRow(row);
}

int32_t poi::hssf::usermodel::HSSFComment::getColumn()
{
    return npc(_note)->getColumn();
}

void poi::hssf::usermodel::HSSFComment::setColumn(int32_t col)
{
    npc(_note)->setColumn(col);
}

java::lang::String* poi::hssf::usermodel::HSSFComment::getAuthor()
{
    return npc(_note)->getAuthor();
}

void poi::hssf::usermodel::HSSFComment::setAuthor(::java::lang::String* author)
{
    if(_note != nullptr)
        npc(_note)->setAuthor(author);

}

poi::hssf::record::NoteRecord* poi::hssf::usermodel::HSSFComment::getNoteRecord()
{
    return _note;
}

bool poi::hssf::usermodel::HSSFComment::hasPosition()
{
    if(_note == nullptr)
        return false;

    if(getColumn() < 0 || getRow() < 0)
        return false;

    return true;
}

poi::ss::usermodel::ClientAnchor* poi::hssf::usermodel::HSSFComment::getClientAnchor()
{
    auto ha = super::getAnchor();
    if(dynamic_cast< ::poi::ss::usermodel::ClientAnchor* >(ha) != nullptr) {
        return java_cast< ::poi::ss::usermodel::ClientAnchor* >(ha);
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Anchor can not be changed in "_j)->append(npc(::poi::ss::usermodel::ClientAnchor::class_())->getSimpleName())->toString());
}

void poi::hssf::usermodel::HSSFComment::setShapeType(int32_t shapeType)
{
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Shape type can not be changed in "_j)->append(npc(this->getClass())->getSimpleName())->toString());
}

void poi::hssf::usermodel::HSSFComment::afterRemove(HSSFPatriarch* patriarch)
{
    super::afterRemove(patriarch);
    npc(npc(patriarch)->getBoundAggregate())->removeTailRecord(getNoteRecord());
}

poi::hssf::usermodel::HSSFShape* poi::hssf::usermodel::HSSFComment::cloneShape()
{
    auto txo = java_cast< ::poi::hssf::record::TextObjectRecord* >(npc(getTextObjectRecord())->cloneViaReserialise());
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto inSp = npc(getEscherContainer())->serialize();
    npc(spContainer)->fillFields(inSp, int32_t(0), static_cast< ::poi::ddf::EscherRecordFactory* >(new ::poi::ddf::DefaultEscherRecordFactory()));
    auto obj = java_cast< ::poi::hssf::record::ObjRecord* >(npc(getObjRecord())->cloneViaReserialise());
    auto note = java_cast< ::poi::hssf::record::NoteRecord* >(npc(getNoteRecord())->cloneViaReserialise());
    return new HSSFComment(spContainer, obj, txo, note);
}

void poi::hssf::usermodel::HSSFComment::setBackgroundImage(int32_t pictureIndex)
{
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::FILL__PATTERNTEXTURE, false, true, pictureIndex));
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::FILL__FILLTYPE, false, false, FILL_TYPE_PICTURE));
    auto bse = npc(npc(java_cast< HSSFWorkbook* >(npc(npc(getPatriarch())->getSheet())->getWorkbook()))->getWorkbook())->getBSERecord(pictureIndex);
    npc(bse)->setRef(npc(bse)->getRef() + int32_t(1));
}

void poi::hssf::usermodel::HSSFComment::resetBackgroundImage()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::FILL__PATTERNTEXTURE));
    if(nullptr != property) {
        auto bse = npc(npc(java_cast< HSSFWorkbook* >(npc(npc(getPatriarch())->getSheet())->getWorkbook()))->getWorkbook())->getBSERecord(npc(property)->getPropertyValue());
        npc(bse)->setRef(npc(bse)->getRef() - int32_t(1));
        npc(getOptRecord())->removeEscherProperty(::poi::ddf::EscherProperties::FILL__PATTERNTEXTURE);
    }
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::FILL__FILLTYPE, false, false, FILL_TYPE_SOLID));
}

int32_t poi::hssf::usermodel::HSSFComment::getBackgroundImageId()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::FILL__PATTERNTEXTURE));
    return property == nullptr ? int32_t(0) : npc(property)->getPropertyValue();
}

void poi::hssf::usermodel::HSSFComment::setHidden(bool value)
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT));
    if(value) {
        setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, false, false, npc(property)->getPropertyValue() | GROUP_SHAPE_HIDDEN_MASK));
    } else {
        setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, false, false, npc(property)->getPropertyValue() & GROUP_SHAPE_NOT_HIDDEN_MASK));
    }
}

bool poi::hssf::usermodel::HSSFComment::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< HSSFComment* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< HSSFComment* >(obj);
    return npc(getNoteRecord())->equals(npc(other)->getNoteRecord());
}

int32_t poi::hssf::usermodel::HSSFComment::hashCode()
{
    return ((getRow() * int32_t(17)) + getColumn()) * int32_t(31);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFComment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFComment", 41);
    return c;
}

poi::hssf::usermodel::HSSFRichTextString* poi::hssf::usermodel::HSSFComment::getString()
{
    return HSSFSimpleShape::getString();
}

void poi::hssf::usermodel::HSSFComment::setString(::poi::ss::usermodel::RichTextString* string)
{
    HSSFSimpleShape::setString(string);
}

java::lang::Class* poi::hssf::usermodel::HSSFComment::getClass0()
{
    return class_();
}

