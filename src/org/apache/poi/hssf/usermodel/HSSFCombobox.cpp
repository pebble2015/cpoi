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

org::apache::poi::hssf::usermodel::HSSFCombobox::HSSFCombobox(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFCombobox::HSSFCombobox(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFCombobox(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord);
}

org::apache::poi::hssf::usermodel::HSSFCombobox::HSSFCombobox(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFCombobox(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

void org::apache::poi::hssf::usermodel::HSSFCombobox::ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor(spContainer, objRecord);
}

void org::apache::poi::hssf::usermodel::HSSFCombobox::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
    super::setShapeType(OBJECT_TYPE_COMBO_BOX);
    auto cod = java_cast< ::org::apache::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::org::apache::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectType(::org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMBO_BOX);
}

org::apache::poi::hssf::record::TextObjectRecord* org::apache::poi::hssf::usermodel::HSSFCombobox::createTextObjRecord()
{
    return nullptr;
}

org::apache::poi::ddf::EscherContainerRecord* org::apache::poi::hssf::usermodel::HSSFCombobox::createSpContainer()
{
    auto spContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
    auto sp = new ::org::apache::poi::ddf::EscherSpRecord();
    auto opt = new ::org::apache::poi::ddf::EscherOptRecord();
    auto clientData = new ::org::apache::poi::ddf::EscherClientDataRecord();
    npc(spContainer)->setRecordId(::org::apache::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(sp)->setRecordId(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp)->setOptions(static_cast< int16_t >(((::org::apache::poi::hssf::record::EscherAggregate::ST_HOSTCONTROL << int32_t(4)) | int32_t(2))));
    npc(sp)->setFlags(::org::apache::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::org::apache::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE);
    npc(opt)->setRecordId(::org::apache::poi::ddf::EscherOptRecord::RECORD_ID);
    npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::PROTECTION__LOCKAGAINSTGROUPING, int32_t(17039620)));
    npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::TEXT__SIZE_TEXT_TO_FIT_SHAPE, int32_t(524296)));
    npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524288)));
    npc(opt)->addEscherProperty(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(131072)));
    auto userAnchor = java_cast< HSSFClientAnchor* >(getAnchor());
    npc(userAnchor)->setAnchorType(::org::apache::poi::ss::usermodel::ClientAnchor_AnchorType::DONT_MOVE_DO_RESIZE);
    auto anchor = npc(userAnchor)->getEscherAnchor();
    npc(clientData)->setRecordId(::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID);
    npc(clientData)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(spContainer)->addChildRecord(sp);
    npc(spContainer)->addChildRecord(opt);
    npc(spContainer)->addChildRecord(anchor);
    npc(spContainer)->addChildRecord(clientData);
    return spContainer;
}

org::apache::poi::hssf::record::ObjRecord* org::apache::poi::hssf::usermodel::HSSFCombobox::createObjRecord()
{
    auto obj = new ::org::apache::poi::hssf::record::ObjRecord();
    auto c = new ::org::apache::poi::hssf::record::CommonObjectDataSubRecord();
    npc(c)->setObjectType(HSSFSimpleShape::OBJECT_TYPE_COMBO_BOX);
    npc(c)->setLocked(true);
    npc(c)->setPrintable(false);
    npc(c)->setAutofill(true);
    npc(c)->setAutoline(false);
    auto f = new ::org::apache::poi::hssf::record::FtCblsSubRecord();
    auto l = ::org::apache::poi::hssf::record::LbsDataSubRecord::newAutoFilterInstance();
    auto e = new ::org::apache::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(c);
    npc(obj)->addSubRecord(f);
    npc(obj)->addSubRecord(l);
    npc(obj)->addSubRecord(e);
    return obj;
}

void org::apache::poi::hssf::usermodel::HSSFCombobox::setShapeType(int32_t shapeType)
{
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Shape type can not be changed in "_j)->append(npc(this->getClass())->getSimpleName())->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFCombobox::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFCombobox", 42);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFCombobox::getClass0()
{
    return class_();
}

