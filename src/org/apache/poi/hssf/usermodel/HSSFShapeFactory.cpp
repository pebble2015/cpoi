// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShapeFactory.java
#include <org/apache/poi/hssf/usermodel/HSSFShapeFactory.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/hssf/record/TextObjectRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCombobox.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFObjectData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPicture.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPolygon.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeContainer.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeGroup.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFTextbox.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>

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

poi::hssf::usermodel::HSSFShapeFactory::HSSFShapeFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFShapeFactory::HSSFShapeFactory()
    : HSSFShapeFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::usermodel::HSSFShapeFactory::createShapeTree(::poi::ddf::EscherContainerRecord* container, ::poi::hssf::record::EscherAggregate* agg, HSSFShapeContainer* out, ::poi::poifs::filesystem::DirectoryNode* root)
{
    clinit();
    if(npc(container)->getRecordId() == ::poi::ddf::EscherContainerRecord::SPGR_CONTAINER) {
        ::poi::hssf::record::ObjRecord* obj = nullptr;
        auto clientData = java_cast< ::poi::ddf::EscherClientDataRecord* >(npc((java_cast< ::poi::ddf::EscherContainerRecord* >(npc(container)->getChild(int32_t(0)))))->getChildById(::poi::ddf::EscherClientDataRecord::RECORD_ID));
        if(nullptr != clientData) {
            obj = java_cast< ::poi::hssf::record::ObjRecord* >(java_cast< ::poi::hssf::record::Record* >(npc(npc(agg)->getShapeToObjMapping())->get(clientData)));
        }
        auto group = new HSSFShapeGroup(container, obj);
        auto children = npc(container)->getChildContainers();
        for (auto i = int32_t(0); i < npc(children)->size(); i++) {
            auto spContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(children)->get(i));
            if(i != 0) {
                createShapeTree(spContainer, agg, group, root);
            }
        }
        npc(out)->addShape(group);
    } else if(npc(container)->getRecordId() == ::poi::ddf::EscherContainerRecord::SP_CONTAINER) {
        auto shapeToObj = npc(agg)->getShapeToObjMapping();
        ::poi::hssf::record::ObjRecord* objRecord = nullptr;
        ::poi::hssf::record::TextObjectRecord* txtRecord = nullptr;
        for (auto _i = npc(container)->iterator(); _i->hasNext(); ) {
            ::poi::ddf::EscherRecord* record = java_cast< ::poi::ddf::EscherRecord* >(_i->next());
            {
                switch (npc(record)->getRecordId()) {
                case ::poi::ddf::EscherClientDataRecord::RECORD_ID:
                    objRecord = java_cast< ::poi::hssf::record::ObjRecord* >(java_cast< ::poi::hssf::record::Record* >(npc(shapeToObj)->get(record)));
                    break;
                case ::poi::ddf::EscherTextboxRecord::RECORD_ID:
                    txtRecord = java_cast< ::poi::hssf::record::TextObjectRecord* >(java_cast< ::poi::hssf::record::Record* >(npc(shapeToObj)->get(record)));
                    break;
                default:
                    break;
                }

            }
        }
        if(objRecord == nullptr) {
            throw new ::poi::util::RecordFormatException(u"EscherClientDataRecord can't be found."_j);
        }
        if(isEmbeddedObject(objRecord)) {
            auto objectData = new HSSFObjectData(container, objRecord, root);
            npc(out)->addShape(objectData);
            return;
        }
        auto cmo = java_cast< ::poi::hssf::record::CommonObjectDataSubRecord* >(java_cast< ::poi::hssf::record::SubRecord* >(npc(npc(objRecord)->getSubRecords())->get(0)));
        HSSFShape* shape;
        {
            ::poi::ddf::EscherOptRecord* optRecord;
            switch (npc(cmo)->getObjectType()) {
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_PICTURE:
                shape = new HSSFPicture(container, objRecord);
                break;
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RECTANGLE:
                shape = new HSSFSimpleShape(container, objRecord, txtRecord);
                break;
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_LINE:
                shape = new HSSFSimpleShape(container, objRecord);
                break;
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMBO_BOX:
                shape = new HSSFCombobox(container, objRecord);
                break;
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING:
                optRecord = java_cast< ::poi::ddf::EscherOptRecord* >(npc(container)->getChildById(::poi::ddf::EscherOptRecord::RECORD_ID));
                if(optRecord == nullptr) {
                    shape = new HSSFSimpleShape(container, objRecord, txtRecord);
                } else {
                    auto property = java_cast< ::poi::ddf::EscherProperty* >(npc(optRecord)->lookup(::poi::ddf::EscherProperties::GEOMETRY__VERTICES));
                    if(nullptr != property) {
                        shape = new HSSFPolygon(container, objRecord, txtRecord);
                    } else {
                        shape = new HSSFSimpleShape(container, objRecord, txtRecord);
                    }
                }
                break;
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_TEXT:
                shape = new HSSFTextbox(container, objRecord, txtRecord);
                break;
            case ::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMMENT:
                shape = new HSSFComment(container, objRecord, txtRecord, npc(agg)->getNoteRecordByObj(objRecord));
                break;
            default:
                shape = new HSSFSimpleShape(container, objRecord, txtRecord);
            }
        }

        npc(out)->addShape(shape);
    }
}

bool poi::hssf::usermodel::HSSFShapeFactory::isEmbeddedObject(::poi::hssf::record::ObjRecord* obj)
{
    clinit();
    for (auto _i = npc(npc(obj)->getSubRecords())->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::SubRecord* sub = java_cast< ::poi::hssf::record::SubRecord* >(_i->next());
        {
            if(dynamic_cast< ::poi::hssf::record::EmbeddedObjectRefSubRecord* >(sub) != nullptr) {
                return true;
            }
        }
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFShapeFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFShapeFactory", 46);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFShapeFactory::getClass0()
{
    return class_();
}

