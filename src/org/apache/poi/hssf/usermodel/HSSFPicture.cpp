// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPicture.java
#include <org/apache/poi/hssf/usermodel/HSSFPicture.hpp>

#include <java/awt/Dimension.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherComplexProperty.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor_AnchorType.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/ImageUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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

org::apache::poi::hssf::usermodel::HSSFPicture::HSSFPicture(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFPicture::HSSFPicture(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord) 
    : HSSFPicture(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord);
}

org::apache::poi::hssf::usermodel::HSSFPicture::HSSFPicture(HSSFShape* parent, HSSFAnchor* anchor) 
    : HSSFPicture(*static_cast< ::default_init_tag* >(0))
{
    ctor(parent,anchor);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::usermodel::HSSFPicture::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::usermodel::HSSFPicture::logger_;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFPicture::PICTURE_TYPE_EMF;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFPicture::PICTURE_TYPE_WMF;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFPicture::PICTURE_TYPE_PICT;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFPicture::PICTURE_TYPE_JPEG;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFPicture::PICTURE_TYPE_PNG;

constexpr int32_t org::apache::poi::hssf::usermodel::HSSFPicture::PICTURE_TYPE_DIB;

void org::apache::poi::hssf::usermodel::HSSFPicture::ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord)
{
    super::ctor(spContainer, objRecord);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::ctor(HSSFShape* parent, HSSFAnchor* anchor)
{
    super::ctor(parent, anchor);
    super::setShapeType(OBJECT_TYPE_PICTURE);
    auto cod = java_cast< ::org::apache::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::org::apache::poi::hssf::record::SubRecord* >(npc(npc(getObjRecord())->getSubRecords())->get(0)));
    npc(cod)->setObjectType(::org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_PICTURE);
}

int32_t org::apache::poi::hssf::usermodel::HSSFPicture::getPictureIndex()
{
    auto property = java_cast< ::org::apache::poi::ddf::EscherSimpleProperty* >(npc(getOptRecord())->lookup(::org::apache::poi::ddf::EscherProperties::BLIP__BLIPTODISPLAY));
    if(nullptr == property) {
        return -int32_t(1);
    }
    return npc(property)->getPropertyValue();
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setPictureIndex(int32_t pictureIndex)
{
    setPropertyValue(new ::org::apache::poi::ddf::EscherSimpleProperty(::org::apache::poi::ddf::EscherProperties::BLIP__BLIPTODISPLAY, false, true, pictureIndex));
}

org::apache::poi::ddf::EscherContainerRecord* org::apache::poi::hssf::usermodel::HSSFPicture::createSpContainer()
{
    auto spContainer = super::createSpContainer();
    auto opt = java_cast< ::org::apache::poi::ddf::EscherOptRecord* >(npc(spContainer)->getChildById(::org::apache::poi::ddf::EscherOptRecord::RECORD_ID));
    npc(opt)->removeEscherProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__LINEDASHING);
    npc(opt)->removeEscherProperty(::org::apache::poi::ddf::EscherProperties::LINESTYLE__NOLINEDRAWDASH);
    npc(spContainer)->removeChildRecord(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(spContainer)->getChildById(::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID)));
    return spContainer;
}

void org::apache::poi::hssf::usermodel::HSSFPicture::resize()
{
    resize(::java::lang::Double::MAX_VALUE);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::resize(double scale)
{
    resize(scale, scale);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::resize(double scaleX, double scaleY)
{
    auto anchor = getClientAnchor();
    npc(anchor)->setAnchorType(::org::apache::poi::ss::usermodel::ClientAnchor_AnchorType::MOVE_DONT_RESIZE);
    auto pref = getPreferredSize(scaleX, scaleY);
    auto row2 = npc(anchor)->getRow1() + (npc(pref)->getRow2() - npc(pref)->getRow1());
    auto col2 = npc(anchor)->getCol1() + (npc(pref)->getCol2() - npc(pref)->getCol1());
    npc(anchor)->setCol2(static_cast< int16_t >(col2));
    npc(anchor)->setDx2(npc(pref)->getDx2());
    npc(anchor)->setRow2(row2);
    npc(anchor)->setDy2(npc(pref)->getDy2());
}

org::apache::poi::hssf::usermodel::HSSFClientAnchor* org::apache::poi::hssf::usermodel::HSSFPicture::getPreferredSize()
{
    return getPreferredSize(1.0);
}

org::apache::poi::hssf::usermodel::HSSFClientAnchor* org::apache::poi::hssf::usermodel::HSSFPicture::getPreferredSize(double scale)
{
    return getPreferredSize(scale, scale);
}

org::apache::poi::hssf::usermodel::HSSFClientAnchor* org::apache::poi::hssf::usermodel::HSSFPicture::getPreferredSize(double scaleX, double scaleY)
{
    ::org::apache::poi::ss::util::ImageUtils::setPreferredSize(this, scaleX, scaleY);
    return getClientAnchor();
}

java::awt::Dimension* org::apache::poi::hssf::usermodel::HSSFPicture::getImageDimension()
{
    auto iwb = npc(java_cast< HSSFWorkbook* >(npc(npc(getPatriarch())->getSheet())->getWorkbook()))->getWorkbook();
    auto bse = npc(iwb)->getBSERecord(getPictureIndex());
    auto data = npc(npc(bse)->getBlipRecord())->getPicturedata();
    int32_t type = npc(bse)->getBlipTypeWin32();
    return ::org::apache::poi::ss::util::ImageUtils::getImageDimension(new ::java::io::ByteArrayInputStream(data), type);
}

org::apache::poi::hssf::usermodel::HSSFPictureData* org::apache::poi::hssf::usermodel::HSSFPicture::getPictureData()
{
    auto picIdx = getPictureIndex();
    if(picIdx == -int32_t(1)) {
        return nullptr;
    }
    auto patriarch = getPatriarch();
    auto parent = getParent();
    while (patriarch == nullptr && parent != nullptr) {
        patriarch = npc(parent)->getPatriarch();
        parent = npc(parent)->getParent();
    }
    if(patriarch == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Could not find a patriarch for a HSSPicture"_j);
    }
    auto iwb = npc(java_cast< HSSFWorkbook* >(npc(npc(patriarch)->getSheet())->getWorkbook()))->getWorkbook();
    auto bse = npc(iwb)->getBSERecord(picIdx);
    auto blipRecord = npc(bse)->getBlipRecord();
    return new HSSFPictureData(blipRecord);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::afterInsert(HSSFPatriarch* patriarch)
{
    auto agg = npc(patriarch)->getBoundAggregate();
    npc(agg)->associateShapeToObjRecord(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID)), getObjRecord());
    if(getPictureIndex() != -int32_t(1)) {
        auto bse = npc(npc(java_cast< HSSFWorkbook* >(npc(npc(patriarch)->getSheet())->getWorkbook()))->getWorkbook())->getBSERecord(getPictureIndex());
        npc(bse)->setRef(npc(bse)->getRef() + int32_t(1));
    }
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFPicture::getFileName()
{
    auto propFile = java_cast< ::org::apache::poi::ddf::EscherComplexProperty* >(java_cast< ::org::apache::poi::ddf::EscherProperty* >(npc(getOptRecord())->lookup(::org::apache::poi::ddf::EscherProperties::BLIP__BLIPFILENAME)));
    return (nullptr == propFile) ? u""_j : npc(::org::apache::poi::util::StringUtil::getFromUnicodeLE(npc(propFile)->getComplexData()))->trim();
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setFileName(::java::lang::String* data)
{
    auto bytes = ::org::apache::poi::util::StringUtil::getToUnicodeLE(data);
    auto prop = new ::org::apache::poi::ddf::EscherComplexProperty(::org::apache::poi::ddf::EscherProperties::BLIP__BLIPFILENAME, true, bytes);
    setPropertyValue(prop);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setShapeType(int32_t shapeType)
{
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Shape type can not be changed in "_j)->append(npc(this->getClass())->getSimpleName())->toString());
}

org::apache::poi::hssf::usermodel::HSSFShape* org::apache::poi::hssf::usermodel::HSSFPicture::cloneShape()
{
    auto spContainer = new ::org::apache::poi::ddf::EscherContainerRecord();
    auto inSp = npc(getEscherContainer())->serialize();
    npc(spContainer)->fillFields(inSp, int32_t(0), static_cast< ::org::apache::poi::ddf::EscherRecordFactory* >(new ::org::apache::poi::ddf::DefaultEscherRecordFactory()));
    auto obj = java_cast< ::org::apache::poi::hssf::record::ObjRecord* >(npc(getObjRecord())->cloneViaReserialise());
    return new HSSFPicture(spContainer, obj);
}

org::apache::poi::hssf::usermodel::HSSFClientAnchor* org::apache::poi::hssf::usermodel::HSSFPicture::getClientAnchor()
{
    auto a = getAnchor();
    return (dynamic_cast< HSSFClientAnchor* >(a) != nullptr) ? java_cast< HSSFClientAnchor* >(a) : static_cast< HSSFClientAnchor* >(nullptr);
}

org::apache::poi::ss::usermodel::Sheet* org::apache::poi::hssf::usermodel::HSSFPicture::getSheet()
{
    return npc(getPatriarch())->getSheet();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPicture::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPicture", 41);
    return c;
}

void org::apache::poi::hssf::usermodel::HSSFPicture::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HSSFPicture::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::hssf::usermodel::HSSFAnchor* org::apache::poi::hssf::usermodel::HSSFPicture::getAnchor()
{
    return HSSFShape::getAnchor();
}

org::apache::poi::hssf::usermodel::HSSFShape* org::apache::poi::hssf::usermodel::HSSFPicture::getParent()
{
    return HSSFShape::getParent();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFPicture::getShapeName()
{
    return HSSFShape::getShapeName();
}

bool org::apache::poi::hssf::usermodel::HSSFPicture::isNoFill()
{
    return HSSFShape::isNoFill();
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setFillColor(int32_t red, int32_t green, int32_t blue)
{
    HSSFShape::setFillColor(red, green, blue);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setLineStyleColor(int32_t red, int32_t green, int32_t blue)
{
    HSSFShape::setLineStyleColor(red, green, blue);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setNoFill(bool noFill)
{
    HSSFShape::setNoFill(noFill);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setFillColor(int32_t fillColor)
{
    super::setFillColor(fillColor);
}

void org::apache::poi::hssf::usermodel::HSSFPicture::setLineStyleColor(int32_t lineStyleColor)
{
    super::setLineStyleColor(lineStyleColor);
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPicture::getClass0()
{
    return class_();
}

