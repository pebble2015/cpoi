// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShapeGroup.java
#include <org/apache/poi/hssf/usermodel/HSSFShapeGroup.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherSpgrRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/GroupMarkerSubRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFChildAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPicture.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPolygon.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFTextbox.hpp>
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

poi::hssf::usermodel::HSSFShapeGroup::HSSFShapeGroup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFShapeGroup::HSSFShapeGroup(::poi::ddf::EscherContainerRecord* spgrContainer, ::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFShapeGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(spgrContainer,objRecord);
}

poi::hssf::usermodel::HSSFShapeGroup::HSSFShapeGroup(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFShapeGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

void poi::hssf::usermodel::HSSFShapeGroup::init()
{
    shapes = new ::java::util::ArrayList();
}

void poi::hssf::usermodel::HSSFShapeGroup::ctor(::poi::ddf::EscherContainerRecord* spgrContainer, ::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor(spgrContainer, objRecord);
    init();
    auto spContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(spgrContainer)->getChildContainers())->get(0));
    _spgrRecord = java_cast< ::poi::ddf::EscherSpgrRecord* >(npc(spContainer)->getChild(int32_t(0)));
    for (auto _i = npc(npc(spContainer)->getChildRecords())->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherRecord* ch = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
        {
            switch (npc(ch)->getRecordId()) {
            case ::poi::ddf::EscherSpgrRecord::RECORD_ID:
                break;
            case ::poi::ddf::EscherClientAnchorRecord::RECORD_ID:
                anchor = new HSSFClientAnchor(java_cast< ::poi::ddf::EscherClientAnchorRecord* >(ch));
                break;
            case ::poi::ddf::EscherChildAnchorRecord::RECORD_ID:
                anchor = new HSSFChildAnchor(java_cast< ::poi::ddf::EscherChildAnchorRecord* >(ch));
                break;
            default:
                break;
            }

        }
    }
}

void poi::hssf::usermodel::HSSFShapeGroup::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
    init();
    _spgrRecord = java_cast< ::poi::ddf::EscherSpgrRecord* >(npc((java_cast< ::poi::ddf::EscherContainerRecord* >(npc(getEscherContainer())->getChild(int32_t(0)))))->getChildById(::poi::ddf::EscherSpgrRecord::RECORD_ID));
}

poi::ddf::EscherContainerRecord* poi::hssf::usermodel::HSSFShapeGroup::createSpContainer()
{
    auto spgrContainer = new ::poi::ddf::EscherContainerRecord();
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto spgr = new ::poi::ddf::EscherSpgrRecord();
    auto sp = new ::poi::ddf::EscherSpRecord();
    auto opt = new ::poi::ddf::EscherOptRecord();
    ::poi::ddf::EscherRecord* anchor;
    auto clientData = new ::poi::ddf::EscherClientDataRecord();
    npc(spgrContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SPGR_CONTAINER);
    npc(spgrContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(spContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(spgr)->setRecordId(::poi::ddf::EscherSpgrRecord::RECORD_ID);
    npc(spgr)->setOptions(static_cast< int16_t >(int32_t(1)));
    npc(spgr)->setRectX1(0);
    npc(spgr)->setRectY1(0);
    npc(spgr)->setRectX2(1023);
    npc(spgr)->setRectY2(255);
    npc(sp)->setRecordId(::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp)->setOptions(static_cast< int16_t >(int32_t(2)));
    if(dynamic_cast< HSSFClientAnchor* >(getAnchor()) != nullptr) {
        npc(sp)->setFlags(::poi::ddf::EscherSpRecord::FLAG_GROUP | ::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR);
    } else {
        npc(sp)->setFlags(::poi::ddf::EscherSpRecord::FLAG_GROUP | ::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::poi::ddf::EscherSpRecord::FLAG_CHILD);
    }
    npc(opt)->setRecordId(::poi::ddf::EscherOptRecord::RECORD_ID);
    npc(opt)->setOptions(static_cast< int16_t >(int32_t(35)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::PROTECTION__LOCKAGAINSTGROUPING, int32_t(262148)));
    npc(opt)->addEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(524288)));
    anchor = npc(getAnchor())->getEscherAnchor();
    npc(clientData)->setRecordId(::poi::ddf::EscherClientDataRecord::RECORD_ID);
    npc(clientData)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(spgrContainer)->addChildRecord(spContainer);
    npc(spContainer)->addChildRecord(spgr);
    npc(spContainer)->addChildRecord(sp);
    npc(spContainer)->addChildRecord(opt);
    npc(spContainer)->addChildRecord(anchor);
    npc(spContainer)->addChildRecord(clientData);
    return spgrContainer;
}

poi::hssf::record::ObjRecord* poi::hssf::usermodel::HSSFShapeGroup::createObjRecord()
{
    auto obj = new ::poi::hssf::record::ObjRecord();
    auto cmo = new ::poi::hssf::record::CommonObjectDataSubRecord();
    npc(cmo)->setObjectType(::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_GROUP);
    npc(cmo)->setLocked(true);
    npc(cmo)->setPrintable(true);
    npc(cmo)->setAutofill(true);
    npc(cmo)->setAutoline(true);
    auto gmo = new ::poi::hssf::record::GroupMarkerSubRecord();
    auto end = new ::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(cmo);
    npc(obj)->addSubRecord(gmo);
    npc(obj)->addSubRecord(end);
    return obj;
}

void poi::hssf::usermodel::HSSFShapeGroup::afterRemove(HSSFPatriarch* patriarch)
{
    npc(npc(patriarch)->getBoundAggregate())->removeShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(getEscherContainer())->getChildContainers())->get(0)))->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID)));
    for (auto i = int32_t(0); i < npc(shapes)->size(); i++) {
        auto shape = java_cast< HSSFShape* >(npc(shapes)->get(i));
        removeShape(shape);
        npc(shape)->afterRemove(getPatriarch());
    }
    npc(shapes)->clear();
}

void poi::hssf::usermodel::HSSFShapeGroup::onCreate(HSSFShape* shape)
{
    if(getPatriarch() != nullptr) {
        auto spContainer = npc(shape)->getEscherContainer();
        auto shapeId = npc(getPatriarch())->newShapeId();
        npc(shape)->setShapeId(shapeId);
        npc(getEscherContainer())->addChildRecord(spContainer);
        npc(shape)->afterInsert(getPatriarch());
        ::poi::ddf::EscherSpRecord* sp;
        if(dynamic_cast< HSSFShapeGroup* >(shape) != nullptr) {
            sp = java_cast< ::poi::ddf::EscherSpRecord* >(npc(java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(npc(shape)->getEscherContainer())->getChildContainers())->get(0)))->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
        } else {
            sp = java_cast< ::poi::ddf::EscherSpRecord* >(npc(npc(shape)->getEscherContainer())->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
        }
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_CHILD);
    }
}

poi::hssf::usermodel::HSSFShapeGroup* poi::hssf::usermodel::HSSFShapeGroup::createGroup(HSSFChildAnchor* anchor)
{
    auto group = new HSSFShapeGroup(static_cast< HSSFShape* >(this), static_cast< HSSFAnchor* >(anchor));
    npc(group)->setParent(this);
    npc(group)->setAnchor(anchor);
    npc(shapes)->add(static_cast< ::java::lang::Object* >(group));
    onCreate(group);
    return group;
}

void poi::hssf::usermodel::HSSFShapeGroup::addShape(HSSFShape* shape)
{
    npc(shape)->setPatriarch(this->getPatriarch());
    npc(shape)->setParent(this);
    npc(shapes)->add(static_cast< ::java::lang::Object* >(shape));
}

poi::hssf::usermodel::HSSFSimpleShape* poi::hssf::usermodel::HSSFShapeGroup::createShape(HSSFChildAnchor* anchor)
{
    auto shape = new HSSFSimpleShape(static_cast< HSSFShape* >(this), static_cast< HSSFAnchor* >(anchor));
    npc(shape)->setParent(this);
    npc(shape)->setAnchor(anchor);
    npc(shapes)->add(static_cast< ::java::lang::Object* >(shape));
    onCreate(shape);
    auto sp = java_cast< ::poi::ddf::EscherSpRecord* >(npc(npc(shape)->getEscherContainer())->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
    if(npc(npc(shape)->getAnchor())->isHorizontallyFlipped()) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ);
    }
    if(npc(npc(shape)->getAnchor())->isVerticallyFlipped()) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_FLIPVERT);
    }
    return shape;
}

poi::hssf::usermodel::HSSFTextbox* poi::hssf::usermodel::HSSFShapeGroup::createTextbox(HSSFChildAnchor* anchor)
{
    auto shape = new HSSFTextbox(this, anchor);
    npc(shape)->setParent(this);
    npc(shape)->setAnchor(anchor);
    npc(shapes)->add(static_cast< ::java::lang::Object* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFPolygon* poi::hssf::usermodel::HSSFShapeGroup::createPolygon(HSSFChildAnchor* anchor)
{
    auto shape = new HSSFPolygon(static_cast< HSSFShape* >(this), static_cast< HSSFAnchor* >(anchor));
    npc(shape)->setParent(this);
    npc(shape)->setAnchor(anchor);
    npc(shapes)->add(static_cast< ::java::lang::Object* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFPicture* poi::hssf::usermodel::HSSFShapeGroup::createPicture(HSSFChildAnchor* anchor, int32_t pictureIndex)
{
    auto shape = new HSSFPicture(static_cast< HSSFShape* >(this), static_cast< HSSFAnchor* >(anchor));
    npc(shape)->setParent(this);
    npc(shape)->setAnchor(anchor);
    npc(shape)->setPictureIndex(pictureIndex);
    npc(shapes)->add(static_cast< ::java::lang::Object* >(shape));
    onCreate(shape);
    auto sp = java_cast< ::poi::ddf::EscherSpRecord* >(npc(npc(shape)->getEscherContainer())->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
    if(npc(npc(shape)->getAnchor())->isHorizontallyFlipped()) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ);
    }
    if(npc(npc(shape)->getAnchor())->isVerticallyFlipped()) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_FLIPVERT);
    }
    return shape;
}

java::util::List* poi::hssf::usermodel::HSSFShapeGroup::getChildren()
{
    return ::java::util::Collections::unmodifiableList(shapes);
}

void poi::hssf::usermodel::HSSFShapeGroup::setCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    npc(_spgrRecord)->setRectX1(x1);
    npc(_spgrRecord)->setRectX2(x2);
    npc(_spgrRecord)->setRectY1(y1);
    npc(_spgrRecord)->setRectY2(y2);
}

void poi::hssf::usermodel::HSSFShapeGroup::clear()
{
    auto copy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(shapes));
    for (auto _i = npc(copy)->iterator(); _i->hasNext(); ) {
        HSSFShape* shape = java_cast< HSSFShape* >(_i->next());
        {
            removeShape(shape);
        }
    }
}

int32_t poi::hssf::usermodel::HSSFShapeGroup::getX1()
{
    return npc(_spgrRecord)->getRectX1();
}

int32_t poi::hssf::usermodel::HSSFShapeGroup::getY1()
{
    return npc(_spgrRecord)->getRectY1();
}

int32_t poi::hssf::usermodel::HSSFShapeGroup::getX2()
{
    return npc(_spgrRecord)->getRectX2();
}

int32_t poi::hssf::usermodel::HSSFShapeGroup::getY2()
{
    return npc(_spgrRecord)->getRectY2();
}

int32_t poi::hssf::usermodel::HSSFShapeGroup::countOfAllChildren()
{
    auto count = npc(shapes)->size();
    for (auto *iterator = npc(shapes)->iterator(); npc(iterator)->hasNext(); ) {
        auto shape = java_cast< HSSFShape* >(npc(iterator)->next());
        count += npc(shape)->countOfAllChildren();
    }
    return count;
}

void poi::hssf::usermodel::HSSFShapeGroup::afterInsert(HSSFPatriarch* patriarch)
{
    auto agg = npc(patriarch)->getBoundAggregate();
    auto containerRecord = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherContainerRecord::SP_CONTAINER));
    npc(agg)->associateShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(containerRecord)->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID)), getObjRecord());
}

void poi::hssf::usermodel::HSSFShapeGroup::setShapeId(int32_t shapeId)
{
    auto containerRecord = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherContainerRecord::SP_CONTAINER));
    auto spRecord = java_cast< ::poi::ddf::EscherSpRecord* >(npc(containerRecord)->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
    npc(spRecord)->setShapeId(shapeId);
    auto cod = java_cast< ::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectId(static_cast< int16_t >((shapeId % int32_t(1024))));
}

int32_t poi::hssf::usermodel::HSSFShapeGroup::getShapeId()
{
    auto containerRecord = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherContainerRecord::SP_CONTAINER));
    return npc((java_cast< ::poi::ddf::EscherSpRecord* >(java_cast< ::poi::ddf::EscherRecord* >(npc(containerRecord)->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID)))))->getShapeId();
}

poi::hssf::usermodel::HSSFShape* poi::hssf::usermodel::HSSFShapeGroup::cloneShape()
{
    throw new ::java::lang::IllegalStateException(u"Use method cloneShape(HSSFPatriarch patriarch)"_j);
}

poi::hssf::usermodel::HSSFShape* poi::hssf::usermodel::HSSFShapeGroup::cloneShape(HSSFPatriarch* patriarch)
{
    auto spgrContainer = new ::poi::ddf::EscherContainerRecord();
    npc(spgrContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SPGR_CONTAINER);
    npc(spgrContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto cont = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherContainerRecord::SP_CONTAINER));
    auto inSp = npc(cont)->serialize();
    npc(spContainer)->fillFields(inSp, int32_t(0), static_cast< ::poi::ddf::EscherRecordFactory* >(new ::poi::ddf::DefaultEscherRecordFactory()));
    npc(spgrContainer)->addChildRecord(spContainer);
    ::poi::hssf::record::ObjRecord* obj = nullptr;
    if(nullptr != getObjRecord()) {
        obj = java_cast< ::poi::hssf::record::ObjRecord* >(npc(getObjRecord())->cloneViaReserialise());
    }
    auto group = new HSSFShapeGroup(spgrContainer, obj);
    npc(group)->setPatriarch(patriarch);
    for (auto _i = npc(getChildren())->iterator(); _i->hasNext(); ) {
        HSSFShape* shape = java_cast< HSSFShape* >(_i->next());
        {
            HSSFShape* newShape;
            if(dynamic_cast< HSSFShapeGroup* >(shape) != nullptr) {
                newShape = npc((java_cast< HSSFShapeGroup* >(shape)))->cloneShape(patriarch);
            } else {
                newShape = npc(shape)->cloneShape();
            }
            npc(group)->addShape(newShape);
            npc(group)->onCreate(newShape);
        }
    }
    return group;
}

bool poi::hssf::usermodel::HSSFShapeGroup::removeShape(HSSFShape* shape)
{
    auto isRemoved = npc(getEscherContainer())->removeChildRecord(npc(shape)->getEscherContainer());
    if(isRemoved) {
        npc(shape)->afterRemove(this->getPatriarch());
        npc(shapes)->remove(static_cast< ::java::lang::Object* >(shape));
    }
    return isRemoved;
}

java::util::Iterator* poi::hssf::usermodel::HSSFShapeGroup::iterator()
{
    return npc(shapes)->iterator();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFShapeGroup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFShapeGroup", 44);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFShapeGroup::getClass0()
{
    return class_();
}

