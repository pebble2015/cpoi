// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCombobox.java
#include <org/apache/poi/hssf/usermodel/HSSFCombobox.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/FtCblsSubRecord.hpp>
#include <org/apache/poi/hssf/record/LbsDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor_AnchorType.hpp>

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

poi::hssf::usermodel::HSSFCombobox::HSSFCombobox(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFCombobox::HSSFCombobox(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFCombobox(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord);
}

poi::hssf::usermodel::HSSFCombobox::HSSFCombobox(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFCombobox(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

void poi::hssf::usermodel::HSSFCombobox::ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor(spContainer, objRecord);
}

void poi::hssf::usermodel::HSSFCombobox::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
    super::setShapeType(OBJECT_TYPE_COMBO_BOX);
    auto cod = java_cast< ::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectType(::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMBO_BOX);
}

poi::hssf::record::TextObjectRecord* poi::hssf::usermodel::HSSFCombobox::createTextObjRecord()
{
    return nullptr;
}

poi::ddf::EscherContainerRecord* poi::hssf::usermodel::HSSFCombobox::createSpContainer()
{
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto sp = new ::poi::ddf::EscherSpRecord();
    auto opt = new ::poi::ddf::EscherOptRecord();
    auto clientData = new ::poi::ddf::EscherClientDataRecord();
    npc(spContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(sp)->setRecordId(::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp)->setOptions(static_cast< int16_t >(((::poi::hssf::record::EscherAggregate::ST_HOSTCONTROL << int32_t(4)) | int32_t(2))));
    npc(sp)->setFlags(::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE);
    npc(opt)->setRecordId(::poi::ddf::EscherOptRecord::RECORD_ID);
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::PROTECTION__LOCKAGAINSTGROUPING, int32_t(17039620)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::TEXT__SIZE_TEXT_TO_FIT_SHAPE, int32_t(524296)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524288)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(131072)));
    auto userAnchor = java_cast< HSSFClientAnchor* >(getAnchor());
    npc(userAnchor)->setAnchorType(::poi::ss::usermodel::ClientAnchor_AnchorType::DONT_MOVE_DO_RESIZE);
    auto anchor = npc(userAnchor)->getEscherAnchor();
    npc(clientData)->setRecordId(::poi::ddf::EscherClientDataRecord::RECORD_ID);
    npc(clientData)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(spContainer)->addChildRecord(sp);
    npc(spContainer)->addChildRecord(opt);
    npc(spContainer)->addChildRecord(anchor);
    npc(spContainer)->addChildRecord(clientData);
    return spContainer;
}

poi::hssf::record::ObjRecord* poi::hssf::usermodel::HSSFCombobox::createObjRecord()
{
    auto obj = new ::poi::hssf::record::ObjRecord();
    auto c = new ::poi::hssf::record::CommonObjectDataSubRecord();
    npc(c)->setObjectType(HSSFSimpleShape::OBJECT_TYPE_COMBO_BOX);
    npc(c)->setLocked(true);
    npc(c)->setPrintable(false);
    npc(c)->setAutofill(true);
    npc(c)->setAutoline(false);
    auto f = new ::poi::hssf::record::FtCblsSubRecord();
    auto l = ::poi::hssf::record::LbsDataSubRecord::newAutoFilterInstance();
    auto e = new ::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(c);
    npc(obj)->addSubRecord(f);
    npc(obj)->addSubRecord(l);
    npc(obj)->addSubRecord(e);
    return obj;
}

void poi::hssf::usermodel::HSSFCombobox::setShapeType(int32_t shapeType)
{
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Shape type can not be changed in "_j)->append(npc(this->getClass())->getSimpleName())->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFCombobox::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFCombobox", 42);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFCombobox::getClass0()
{
    return class_();
}

