// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShape.java
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherComplexProperty.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRGBProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFChildAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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

org::apache::poi::hssf::usermodel::HSSFShape::HSSFShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFShape::HSSFShape(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord);
}

org::apache::poi::hssf::usermodel::HSSFShape::HSSFShape(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::usermodel::HSSFShape::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::usermodel::HSSFShape::LOG_;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINEWIDTH_ONE_PT;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINEWIDTH_DEFAULT;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE__COLOR_DEFAULT;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::FILL__FILLCOLOR_DEFAULT;

constexpr bool org::apache::poi::hssf::usermodel::HSSFShape::NO_FILL_DEFAULT;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_SOLID;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DASHSYS;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DOTSYS;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DASHDOTSYS;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DASHDOTDOTSYS;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DOTGEL;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DASHGEL;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_LONGDASHGEL;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DASHDOTGEL;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_LONGDASHDOTGEL;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_LONGDASHDOTDOTGEL;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_NONE;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::LINESTYLE_DEFAULT;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::NO_FILLHITTEST_TRUE;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFShape::NO_FILLHITTEST_FALSE;

void org::apache::poi::hssf::usermodel::HSSFShape::ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor();
    this->_escherContainer = spContainer;
    this->_objRecord = objRecord;
    this->_optRecord = java_cast< ::org::apache::poi::ddf::EscherOptRecord* >(npc(spContainer)->getChildById(::org::apache::poi::ddf::EscherOptRecord::RECORD_ID));
    this->anchor = HSSFAnchor::createAnchorFromEscher(spContainer);
}

void org::apache::poi::hssf::usermodel::HSSFShape::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor();
    this->parent = parent;
    this->anchor = anchor;
    this->_escherContainer = createSpContainer();
    _optRecord = java_cast< ::org::apache::poi::ddf::EscherOptRecord* >(npc(_escherContainer)->getChildById(::org::apache::poi::ddf::EscherOptRecord::RECORD_ID));
    _objRecord = createObjRecord();
}

void org::apache::poi::hssf::usermodel::HSSFShape::setShapeId(int32_t shapeId)
{
    auto spRecord = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(_escherContainer)->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    npc(spRecord)->setShapeId(shapeId);
    auto cod = java_cast< ::org::apache::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::org::apache::poi::hssf::record::SubRecord* >(npc(npc(_objRecord)->getSubRecords())->get(0)));
    npc(cod)->setObjectId(static_cast< int16_t >((shapeId % int32_t(1024))));
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::getShapeId()
{
    return npc((java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(_escherContainer)->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID)))))->getShapeId();
}

org::apache::poi::ddf::EscherContainerRecord* org::apache::poi::hssf::usermodel::HSSFShape::getEscherContainer()
{
    return _escherContainer;
}

org::apache::poi::hssf::record::ObjRecord* org::apache::poi::hssf::usermodel::HSSFShape::getObjRecord()
{
    return _objRecord;
}

org::apache::poi::ddf::EscherOptRecord* org::apache::poi::hssf::usermodel::HSSFShape::getOptRecord()
{
    return _optRecord;
}

org::apache::poi::hssf::usermodel::HSSFShape* org::apache::poi::hssf::usermodel::HSSFShape::getParent()
{
    return parent;
}

org::apache::poi::hssf::usermodel::HSSFAnchor* org::apache::poi::hssf::usermodel::HSSFShape::getAnchor()
{
    return anchor;
}

void org::apache::poi::hssf::usermodel::HSSFShape::setAnchor(HSSFAnchor* anchor)
{
    auto i = int32_t(0);
    auto recordId = -int32_t(1);
    if(parent == nullptr) {
        if(dynamic_cast< HSSFChildAnchor* >(anchor) != nullptr)
            throw new ::java::lang::IllegalArgumentException(u"Must use client anchors for shapes directly attached to sheet."_j);

        auto anch = java_cast< ::org::apache::poi::ddf::EscherClientAnchorRecord* >(npc(_escherContainer)->getChildById(::org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_ID));
        if(nullptr != anch) {
            for (i = 0; i < npc(npc(_escherContainer)->getChildRecords())->size(); i++) {
                if(npc(npc(_escherContainer)->getChild(i))->getRecordId() == ::org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_ID) {
                    if(i != npc(npc(_escherContainer)->getChildRecords())->size() - int32_t(1)) {
                        recordId = npc(npc(_escherContainer)->getChild(i + int32_t(1)))->getRecordId();
                    }
                }
            }
            npc(_escherContainer)->removeChildRecord(anch);
        }
    } else {
        if(dynamic_cast< HSSFClientAnchor* >(anchor) != nullptr)
            throw new ::java::lang::IllegalArgumentException(u"Must use child anchors for shapes attached to groups."_j);

        auto anch = java_cast< ::org::apache::poi::ddf::EscherChildAnchorRecord* >(npc(_escherContainer)->getChildById(::org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_ID));
        if(nullptr != anch) {
            for (i = 0; i < npc(npc(_escherContainer)->getChildRecords())->size(); i++) {
                if(npc(npc(_escherContainer)->getChild(i))->getRecordId() == ::org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_ID) {
                    if(i != npc(npc(_escherContainer)->getChildRecords())->size() - int32_t(1)) {
                        recordId = npc(npc(_escherContainer)->getChild(i + int32_t(1)))->getRecordId();
                    }
                }
            }
            npc(_escherContainer)->removeChildRecord(anch);
        }
    }
    if(-int32_t(1) == recordId) {
        npc(_escherContainer)->addChildRecord(npc(anchor)->getEscherAnchor());
    } else {
        npc(_escherContainer)->addChildBefore(npc(anchor)->getEscherAnchor(), recordId);
    }
    this->anchor = anchor;
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::getLineStyleColor()
{
    auto rgbProperty = java_cast< ::org::apache::poi::ddf::EscherRGBProperty* >(npc(_optRecord)->lookup(::org::apache::poi::ddf::EscherProperties::LINESTYLE__COLOR));
    return rgbProperty == nullptr ? LINESTYLE__COLOR_DEFAULT : npc(rgbProperty)->getRgbColor();
}

void org::apache::poi::hssf::usermodel::HSSFShape::setLineStyleColor(int32_t lineStyleColor)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__COLOR, lineStyleColor));
}

void org::apache::poi::hssf::usermodel::HSSFShape::setLineStyleColor(int32_t red, int32_t green, int32_t blue)
{
    auto lineStyleColor = ((blue) << int32_t(16)) | ((green) << int32_t(8)) | red;
    setPropertyValue(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__COLOR, lineStyleColor));
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::getFillColor()
{
    auto rgbProperty = java_cast< ::org::apache::poi::ddf::EscherRGBProperty* >(npc(_optRecord)->lookup(::org::apache::poi::ddf::EscherProperties::FILL__FILLCOLOR));
    return rgbProperty == nullptr ? FILL__FILLCOLOR_DEFAULT : npc(rgbProperty)->getRgbColor();
}

void org::apache::poi::hssf::usermodel::HSSFShape::setFillColor(int32_t fillColor)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::FILL__FILLCOLOR, fillColor));
}

void org::apache::poi::hssf::usermodel::HSSFShape::setFillColor(int32_t red, int32_t green, int32_t blue)
{
    auto fillColor = ((blue) << int32_t(16)) | ((green) << int32_t(8)) | red;
    setPropertyValue(new ::org::apache::poi::ddf::EscherRGBProperty(::org::apache::poi::ddf::EscherProperties::FILL__FILLCOLOR, fillColor));
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::getLineWidth()
{
    auto property = java_cast< ::org::apache::poi::ddf::EscherSimpleProperty* >(npc(_optRecord)->lookup(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEWIDTH));
    return property == nullptr ? LINEWIDTH_DEFAULT : npc(property)->getPropertyValue();
}

void org::apache::poi::hssf::usermodel::HSSFShape::setLineWidth(int32_t lineWidth)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEWIDTH, lineWidth));
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::getLineStyle()
{
    auto property = java_cast< ::org::apache::poi::ddf::EscherSimpleProperty* >(npc(_optRecord)->lookup(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING));
    if(nullptr == property) {
        return LINESTYLE_DEFAULT;
    }
    return npc(property)->getPropertyValue();
}

void org::apache::poi::hssf::usermodel::HSSFShape::setLineStyle(int32_t lineStyle)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING, lineStyle));
    if(getLineStyle() != HSSFShape::LINESTYLE_SOLID) {
        setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEENDCAPSTYLE, int32_t(0)));
        if(getLineStyle() == HSSFShape::LINESTYLE_NONE) {
            setPropertyValue(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524288)));
        } else {
            setPropertyValue(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH, int32_t(524296)));
        }
    }
}

bool org::apache::poi::hssf::usermodel::HSSFShape::isNoFill()
{
    auto property = java_cast< ::org::apache::poi::ddf::EscherBoolProperty* >(npc(_optRecord)->lookup(::org::apache::poi::ddf::EscherProperties::FILL__NOFILLHITTEST));
    return property == nullptr ? NO_FILL_DEFAULT : npc(property)->getPropertyValue() == NO_FILLHITTEST_TRUE;
}

void org::apache::poi::hssf::usermodel::HSSFShape::setNoFill(bool noFill)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherBoolProperty(::org::apache::poi::ddf::EscherProperties::FILL__NOFILLHITTEST, noFill ? NO_FILLHITTEST_TRUE : NO_FILLHITTEST_FALSE));
}

void org::apache::poi::hssf::usermodel::HSSFShape::setPropertyValue(::org::apache::poi::ddf::EscherProperty* property)
{
    npc(_optRecord)->setEscherProperty(property);
}

void org::apache::poi::hssf::usermodel::HSSFShape::setFlipVertical(bool value)
{
    auto sp = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    if(value) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPVERT);
    } else {
        npc(sp)->setFlags(npc(sp)->getFlags() & (::java::lang::Integer::MAX_VALUE - ::org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPVERT));
    }
}

void org::apache::poi::hssf::usermodel::HSSFShape::setFlipHorizontal(bool value)
{
    auto sp = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    if(value) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ);
    } else {
        npc(sp)->setFlags(npc(sp)->getFlags() & (::java::lang::Integer::MAX_VALUE - ::org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ));
    }
}

bool org::apache::poi::hssf::usermodel::HSSFShape::isFlipVertical()
{
    auto sp = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    return (npc(sp)->getFlags() & ::org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPVERT) != 0;
}

bool org::apache::poi::hssf::usermodel::HSSFShape::isFlipHorizontal()
{
    auto sp = java_cast< ::org::apache::poi::ddf::EscherSpRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherSpRecord::RECORD_ID));
    return (npc(sp)->getFlags() & ::org::apache::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ) != 0;
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::getRotationDegree()
{
    auto bos = new ::java::io::ByteArrayOutputStream();
    auto property = java_cast< ::org::apache::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::org::apache::poi::ddf::EscherProperties::TRANSFORM__ROTATION));
    if(nullptr == property) {
        return 0;
    }
    try {
        ::org::apache::poi::util::LittleEndian::putInt(npc(property)->getPropertyValue(), bos);
        return ::org::apache::poi::util::LittleEndian::getShort(npc(bos)->toByteArray_(), 2);
    } catch (::java::io::IOException* e) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"can't determine rotation degree"_j), static_cast< ::java::lang::Object* >(e)}));
        return 0;
    }
}

void org::apache::poi::hssf::usermodel::HSSFShape::setRotationDegree(int16_t value)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::TRANSFORM__ROTATION, (value << int32_t(16))));
}

int32_t org::apache::poi::hssf::usermodel::HSSFShape::countOfAllChildren()
{
    return 1;
}

void org::apache::poi::hssf::usermodel::HSSFShape::setPatriarch(HSSFPatriarch* _patriarch)
{
    this->_patriarch = _patriarch;
}

org::apache::poi::hssf::usermodel::HSSFPatriarch* org::apache::poi::hssf::usermodel::HSSFShape::getPatriarch()
{
    return _patriarch;
}

void org::apache::poi::hssf::usermodel::HSSFShape::setParent(HSSFShape* parent)
{
    this->parent = parent;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFShape::getShapeName()
{
    auto eor = getOptRecord();
    if(eor == nullptr) {
        return nullptr;
    }
    auto ep = java_cast< ::org::apache::poi::ddf::EscherProperty* >(npc(eor)->lookup(::org::apache::poi::ddf::EscherProperties::GROUPSHAPE__SHAPENAME));
    if(dynamic_cast< ::org::apache::poi::ddf::EscherComplexProperty* >(ep) != nullptr) {
        return ::org::apache::poi::util::StringUtil::getFromUnicodeLE(npc((java_cast< ::org::apache::poi::ddf::EscherComplexProperty* >(ep)))->getComplexData());
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFShape", 39);
    return c;
}

void org::apache::poi::hssf::usermodel::HSSFShape::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HSSFShape::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFShape::getClass0()
{
    return class_();
}

