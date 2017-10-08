// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFObjectData.java
#include <org/apache/poi/hssf/usermodel/HSSFObjectData.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/HexDump.hpp>
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

poi::hssf::usermodel::HSSFObjectData::HSSFObjectData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFObjectData::HSSFObjectData(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::poifs::filesystem::DirectoryEntry* _root) 
    : HSSFObjectData(*static_cast< ::default_init_tag* >(0))
{
    ctor(spContainer,objRecord,_root);
}

void poi::hssf::usermodel::HSSFObjectData::ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::poifs::filesystem::DirectoryEntry* _root)
{
    super::ctor(spContainer, objRecord);
    this->_root = _root;
}

java::lang::String* poi::hssf::usermodel::HSSFObjectData::getOLE2ClassName()
{
    return npc(findObjectRecord())->getOLEClassName();
}

poi::poifs::filesystem::DirectoryEntry* poi::hssf::usermodel::HSSFObjectData::getDirectory() /* throws(IOException) */
{
    auto subRecord = findObjectRecord();
    auto streamId = npc(npc(subRecord)->getStreamId())->intValue();
    auto streamName = ::java::lang::StringBuilder().append(u"MBD"_j)->append(::poi::util::HexDump::toHex(streamId))->toString();
    auto entry = npc(_root)->getEntry(streamName);
    if(dynamic_cast< ::poi::poifs::filesystem::DirectoryEntry* >(entry) != nullptr) {
        return java_cast< ::poi::poifs::filesystem::DirectoryEntry* >(entry);
    }
    throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Stream "_j)->append(streamName)
        ->append(u" was not an OLE2 directory"_j)->toString());
}

int8_tArray* poi::hssf::usermodel::HSSFObjectData::getObjectData()
{
    return npc(findObjectRecord())->getObjectData();
}

bool poi::hssf::usermodel::HSSFObjectData::hasDirectoryEntry()
{
    auto subRecord = findObjectRecord();
    auto streamId = npc(subRecord)->getStreamId();
    return streamId != nullptr && npc(streamId)->intValue() != 0;
}

poi::hssf::record::EmbeddedObjectRefSubRecord* poi::hssf::usermodel::HSSFObjectData::findObjectRecord()
{
    auto subRecordIter = npc(npc(getObjRecord())->getSubRecords())->iterator();
    while (npc(subRecordIter)->hasNext()) {
        ::java::lang::Object* subRecord = java_cast< ::poi::hssf::record::SubRecord* >(npc(subRecordIter)->next());
        if(dynamic_cast< ::poi::hssf::record::EmbeddedObjectRefSubRecord* >(subRecord) != nullptr) {
            return java_cast< ::poi::hssf::record::EmbeddedObjectRefSubRecord* >(subRecord);
        }
    }
    throw new ::java::lang::IllegalStateException(u"Object data does not contain a reference to an embedded object OLE2 directory"_j);
}

poi::ddf::EscherContainerRecord* poi::hssf::usermodel::HSSFObjectData::createSpContainer()
{
    throw new ::java::lang::IllegalStateException(u"HSSFObjectData cannot be created from scratch"_j);
}

poi::hssf::record::ObjRecord* poi::hssf::usermodel::HSSFObjectData::createObjRecord()
{
    throw new ::java::lang::IllegalStateException(u"HSSFObjectData cannot be created from scratch"_j);
}

void poi::hssf::usermodel::HSSFObjectData::afterRemove(HSSFPatriarch* patriarch)
{
    throw new ::java::lang::IllegalStateException(u"HSSFObjectData cannot be created from scratch"_j);
}

void poi::hssf::usermodel::HSSFObjectData::afterInsert(HSSFPatriarch* patriarch)
{
    auto agg = npc(patriarch)->getBoundAggregate();
    npc(agg)->associateShapeToObjRecord(java_cast< ::poi::ddf::EscherRecord* >(npc(getEscherContainer())->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID)), getObjRecord());
    auto bse = npc(npc(java_cast< HSSFWorkbook* >(npc(npc(patriarch)->getSheet())->getWorkbook()))->getWorkbook())->getBSERecord(getPictureIndex());
    npc(bse)->setRef(npc(bse)->getRef() + int32_t(1));
}

poi::hssf::usermodel::HSSFShape* poi::hssf::usermodel::HSSFObjectData::cloneShape()
{
    auto spContainer = new ::poi::ddf::EscherContainerRecord();
    auto inSp = npc(getEscherContainer())->serialize();
    npc(spContainer)->fillFields(inSp, int32_t(0), static_cast< ::poi::ddf::EscherRecordFactory* >(new ::poi::ddf::DefaultEscherRecordFactory()));
    auto obj = java_cast< ::poi::hssf::record::ObjRecord* >(npc(getObjRecord())->cloneViaReserialise());
    return new HSSFObjectData(spContainer, obj, _root);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFObjectData::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFObjectData", 44);
    return c;
}

java::lang::String* poi::hssf::usermodel::HSSFObjectData::getFileName()
{
    return HSSFPicture::getFileName();
}

poi::hssf::usermodel::HSSFPictureData* poi::hssf::usermodel::HSSFObjectData::getPictureData()
{
    return HSSFPicture::getPictureData();
}

poi::hssf::usermodel::HSSFAnchor* poi::hssf::usermodel::HSSFObjectData::getAnchor()
{
    return HSSFShape::getAnchor();
}

poi::hssf::usermodel::HSSFShape* poi::hssf::usermodel::HSSFObjectData::getParent()
{
    return HSSFShape::getParent();
}

java::lang::String* poi::hssf::usermodel::HSSFObjectData::getShapeName()
{
    return HSSFShape::getShapeName();
}

bool poi::hssf::usermodel::HSSFObjectData::isNoFill()
{
    return HSSFShape::isNoFill();
}

void poi::hssf::usermodel::HSSFObjectData::setFillColor(int32_t red, int32_t green, int32_t blue)
{
    HSSFShape::setFillColor(red, green, blue);
}

void poi::hssf::usermodel::HSSFObjectData::setLineStyleColor(int32_t red, int32_t green, int32_t blue)
{
    HSSFShape::setLineStyleColor(red, green, blue);
}

void poi::hssf::usermodel::HSSFObjectData::setNoFill(bool noFill)
{
    HSSFShape::setNoFill(noFill);
}

int32_t poi::hssf::usermodel::HSSFObjectData::getShapeId()
{
    return HSSFSimpleShape::getShapeId();
}

void poi::hssf::usermodel::HSSFObjectData::setFillColor(int32_t fillColor)
{
    super::setFillColor(fillColor);
}

void poi::hssf::usermodel::HSSFObjectData::setLineStyleColor(int32_t lineStyleColor)
{
    super::setLineStyleColor(lineStyleColor);
}

java::lang::Class* poi::hssf::usermodel::HSSFObjectData::getClass0()
{
    return class_();
}

