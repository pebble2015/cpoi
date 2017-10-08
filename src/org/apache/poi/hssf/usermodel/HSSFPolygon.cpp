// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPolygon.java
#include <org/apache/poi/hssf/usermodel/HSSFPolygon.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ddf/EscherArrayProperty.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRGBProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherShapePathProperty.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

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

poi::hssf::usermodel::HSSFPolygon::HSSFPolygon(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFPolygon::HSSFPolygon(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* _textObjectRecord) 
    : HSSFPolygon(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord,_textObjectRecord);
}

poi::hssf::usermodel::HSSFPolygon::HSSFPolygon(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFPolygon(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord);
}

poi::hssf::usermodel::HSSFPolygon::HSSFPolygon(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFPolygon(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

poi::util::POILogger*& poi::hssf::usermodel::HSSFPolygon::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::hssf::usermodel::HSSFPolygon::logger_;

constexpr int16_t poi::hssf::usermodel::HSSFPolygon::OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING;

void poi::hssf::usermodel::HSSFPolygon::ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* _textObjectRecord)
{
    super::ctor(spContainer, objRecord, _textObjectRecord);
}

void poi::hssf::usermodel::HSSFPolygon::ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor(spContainer, objRecord);
}

void poi::hssf::usermodel::HSSFPolygon::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
}

poi::hssf::record::TextObjectRecord* poi::hssf::usermodel::HSSFPolygon::createTextObjRecord()
{
    return nullptr;
}

poi::ddf::EscherContainerRecord* poi::hssf::usermodel::HSSFPolygon::createSpContainer()
{
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto sp = new ::poi::ddf::EscherSpRecord();
    auto opt = new ::poi::ddf::EscherOptRecord();
    auto clientData = new ::poi::ddf::EscherClientDataRecord();
    npc(spContainer)->setRecordId(::poi::ddf::EscherContainerRecord::SP_CONTAINER);
    npc(spContainer)->setOptions(static_cast< int16_t >(int32_t(15)));
    npc(sp)->setRecordId(::poi::ddf::EscherSpRecord::RECORD_ID);
    npc(sp)->setOptions(static_cast< int16_t >(((::poi::hssf::record::EscherAggregate::ST_NOT_PRIMATIVE << int32_t(4)) | int32_t(2))));
    if(getParent() == nullptr) {
        npc(sp)->setFlags(::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE);
    } else {
        npc(sp)->setFlags(::poi::ddf::EscherSpRecord::FLAG_CHILD | ::poi::ddf::EscherSpRecord::FLAG_HAVEANCHOR | ::poi::ddf::EscherSpRecord::FLAG_HASSHAPETYPE);
    }
    npc(opt)->setRecordId(::poi::ddf::EscherOptRecord::RECORD_ID);
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::TRANSFORM__ROTATION, false, false, int32_t(0)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GEOMETRY__RIGHT, false, false, int32_t(100)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GEOMETRY__BOTTOM, false, false, int32_t(100)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherShapePathProperty(::poi::ddf::EscherProperties::GEOMETRY__SHAPEPATH, ::poi::ddf::EscherShapePathProperty::COMPLEX));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GEOMETRY__FILLOK, false, false, int32_t(65537)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINESTARTARROWHEAD, false, false, int32_t(0)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINEENDARROWHEAD, false, false, int32_t(0)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINEENDCAPSTYLE, false, false, int32_t(0)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING, LINESTYLE_SOLID));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524296)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::LINESTYLE__LINEWIDTH, LINEWIDTH_DEFAULT));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherRGBProperty(::poi::ddf::EscherProperties::FILL__FILLCOLOR, FILL__FILLCOLOR_DEFAULT));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherRGBProperty(::poi::ddf::EscherProperties::LINESTYLE__COLOR, LINESTYLE__COLOR_DEFAULT));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::FILL__NOFILLHITTEST, int32_t(1)));
    npc(opt)->setEscherProperty(new ::poi::ddf::EscherBoolProperty(::poi::ddf::EscherProperties::GROUPSHAPE__PRINT, int32_t(524288)));
    auto anchor = npc(getAnchor())->getEscherAnchor();
    npc(clientData)->setRecordId(::poi::ddf::EscherClientDataRecord::RECORD_ID);
    npc(clientData)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(spContainer)->addChildRecord(sp);
    npc(spContainer)->addChildRecord(opt);
    npc(spContainer)->addChildRecord(anchor);
    npc(spContainer)->addChildRecord(clientData);
    return spContainer;
}

poi::hssf::record::ObjRecord* poi::hssf::usermodel::HSSFPolygon::createObjRecord()
{
    auto obj = new ::poi::hssf::record::ObjRecord();
    auto c = new ::poi::hssf::record::CommonObjectDataSubRecord();
    npc(c)->setObjectType(OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING);
    npc(c)->setLocked(true);
    npc(c)->setPrintable(true);
    npc(c)->setAutofill(true);
    npc(c)->setAutoline(true);
    auto e = new ::poi::hssf::record::EndSubRecord();
    npc(obj)->addSubRecord(c);
    npc(obj)->addSubRecord(e);
    return obj;
}

void poi::hssf::usermodel::HSSFPolygon::afterRemove(HSSFPatriarch* patriarch)
{
    npc(npc(patriarch)->getBoundAggregate())->removeShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID)));
}

int32_tArray* poi::hssf::usermodel::HSSFPolygon::getXPoints()
{
    auto verticesProp = java_cast< ::poi::ddf::EscherArrayProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::GEOMETRY__VERTICES));
    if(nullptr == verticesProp) {
        return new ::int32_tArray({});
    }
    auto array = new ::int32_tArray(npc(verticesProp)->getNumberOfElementsInArray_() - int32_t(1));
    for (auto i = int32_t(0); i < npc(verticesProp)->getNumberOfElementsInArray_() - int32_t(1); i++) {
        auto property = npc(verticesProp)->getElement(i);
        auto x = ::poi::util::LittleEndian::getShort(property, 0);
        (*array)[i] = x;
    }
    return array;
}

int32_tArray* poi::hssf::usermodel::HSSFPolygon::getYPoints()
{
    auto verticesProp = java_cast< ::poi::ddf::EscherArrayProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::GEOMETRY__VERTICES));
    if(nullptr == verticesProp) {
        return new ::int32_tArray({});
    }
    auto array = new ::int32_tArray(npc(verticesProp)->getNumberOfElementsInArray_() - int32_t(1));
    for (auto i = int32_t(0); i < npc(verticesProp)->getNumberOfElementsInArray_() - int32_t(1); i++) {
        auto property = npc(verticesProp)->getElement(i);
        auto x = ::poi::util::LittleEndian::getShort(property, 2);
        (*array)[i] = x;
    }
    return array;
}

void poi::hssf::usermodel::HSSFPolygon::setPoints(::int32_tArray* xPoints, ::int32_tArray* yPoints)
{
    if(npc(xPoints)->length != npc(yPoints)->length) {
        npc(logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"xPoint.length must be equal to yPoints.length"_j)}));
        return;
    }
    if(npc(xPoints)->length == 0) {
        npc(logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"HSSFPolygon must have at least one point"_j)}));
    }
    auto verticesProp = new ::poi::ddf::EscherArrayProperty(::poi::ddf::EscherProperties::GEOMETRY__VERTICES, false, new ::int8_tArray(int32_t(0)));
    npc(verticesProp)->setNumberOfElementsInArray_(npc(xPoints)->length + int32_t(1));
    npc(verticesProp)->setNumberOfElementsInMemory(npc(xPoints)->length + int32_t(1));
    npc(verticesProp)->setSizeOfElements(65520);
    for (auto i = int32_t(0); i < npc(xPoints)->length; i++) {
        auto data = new ::int8_tArray(int32_t(4));
        ::poi::util::LittleEndian::putShort(data, 0, static_cast< int16_t >((*xPoints)[i]));
        ::poi::util::LittleEndian::putShort(data, 2, static_cast< int16_t >((*yPoints)[i]));
        npc(verticesProp)->setElement(i, data);
    }
    auto point = npc(xPoints)->length;
    auto data = new ::int8_tArray(int32_t(4));
    ::poi::util::LittleEndian::putShort(data, 0, static_cast< int16_t >((*xPoints)[int32_t(0)]));
    ::poi::util::LittleEndian::putShort(data, 2, static_cast< int16_t >((*yPoints)[int32_t(0)]));
    npc(verticesProp)->setElement(point, data);
    setPropertyValue(verticesProp);
    auto segmentsProp = new ::poi::ddf::EscherArrayProperty(::poi::ddf::EscherProperties::GEOMETRY__SEGMENTINFO, false, nullptr);
    npc(segmentsProp)->setSizeOfElements(2);
    npc(segmentsProp)->setNumberOfElementsInArray_(npc(xPoints)->length * int32_t(2) + int32_t(4));
    npc(segmentsProp)->setNumberOfElementsInMemory(npc(xPoints)->length * int32_t(2) + int32_t(4));
    npc(segmentsProp)->setElement(0, new ::int8_tArray({
        static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(64))
    }));
    npc(segmentsProp)->setElement(1, new ::int8_tArray({
        static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(172))
    }));
    for (auto i = int32_t(0); i < npc(xPoints)->length; i++) {
        npc(segmentsProp)->setElement(int32_t(2) + i * int32_t(2), new ::int8_tArray({
            static_cast< int8_t >(int32_t(1))
            , static_cast< int8_t >(int32_t(0))
        }));
        npc(segmentsProp)->setElement(int32_t(3) + i * int32_t(2), new ::int8_tArray({
            static_cast< int8_t >(int32_t(0))
            , static_cast< int8_t >(int32_t(172))
        }));
    }
    npc(segmentsProp)->setElement(npc(segmentsProp)->getNumberOfElementsInArray_() - int32_t(2), new ::int8_tArray({
        static_cast< int8_t >(int32_t(1))
        , static_cast< int8_t >(int32_t(96))
    }));
    npc(segmentsProp)->setElement(npc(segmentsProp)->getNumberOfElementsInArray_() - int32_t(1), new ::int8_tArray({
        static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(128))
    }));
    setPropertyValue(segmentsProp);
}

void poi::hssf::usermodel::HSSFPolygon::setPolygonDrawArea(int32_t width, int32_t height)
{
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GEOMETRY__RIGHT, width));
    setPropertyValue(new ::poi::ddf::EscherSimpleProperty(::poi::ddf::EscherProperties::GEOMETRY__BOTTOM, height));
}

int32_t poi::hssf::usermodel::HSSFPolygon::getDrawAreaWidth()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::GEOMETRY__RIGHT));
    return property == nullptr ? int32_t(100) : npc(property)->getPropertyValue();
}

int32_t poi::hssf::usermodel::HSSFPolygon::getDrawAreaHeight()
{
    auto property = java_cast< ::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::poi::ddf::EscherProperties::GEOMETRY__BOTTOM));
    return property == nullptr ? int32_t(100) : npc(property)->getPropertyValue();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFPolygon::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPolygon", 41);
    return c;
}

void poi::hssf::usermodel::HSSFPolygon::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HSSFPolygon::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::usermodel::HSSFPolygon::getClass0()
{
    return class_();
}

