// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPatriarch.java
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>

#include <java/io/FileNotFoundException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ddf/EscherComplexProperty.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherDgRecord.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherSpgrRecord.hpp>
#include <org/apache/poi/hssf/model/DrawingManager2.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.hpp>
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>
#include <org/apache/poi/hssf/record/FtCfSubRecord.hpp>
#include <org/apache/poi/hssf/record/FtPioGrbitSubRecord.hpp>
#include <org/apache/poi/hssf/record/NoteRecord.hpp>
#include <org/apache/poi/hssf/record/ObjRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCombobox.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFObjectData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPicture.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPolygon.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeFactory.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeGroup.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFTextbox.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/util/CellReference.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/HexDump.hpp>
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

poi::hssf::usermodel::HSSFPatriarch::HSSFPatriarch(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFPatriarch::HSSFPatriarch(HSSFSheet* sheet, ::poi::hssf::record::EscherAggregate* boundAggregate) 
    : HSSFPatriarch(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet,boundAggregate);
}

void poi::hssf::usermodel::HSSFPatriarch::init()
{
    _shapes = new ::java::util::ArrayList();
}

void poi::hssf::usermodel::HSSFPatriarch::ctor(HSSFSheet* sheet, ::poi::hssf::record::EscherAggregate* boundAggregate)
{
    super::ctor();
    init();
    _sheet = sheet;
    _boundAggregate = boundAggregate;
    _mainSpgrContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(npc(_boundAggregate)->getEscherContainer())->getChildContainers())->get(0));
    auto spContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(npc(_boundAggregate)->getEscherContainer())->getChildContainers())->get(0)))->getChild(int32_t(0)));
    _spgrRecord = java_cast< ::poi::ddf::EscherSpgrRecord* >(npc(spContainer)->getChildById(::poi::ddf::EscherSpgrRecord::RECORD_ID));
    buildShapeTree();
}

poi::hssf::usermodel::HSSFPatriarch* poi::hssf::usermodel::HSSFPatriarch::createPatriarch(HSSFPatriarch* patriarch, HSSFSheet* sheet)
{
    clinit();
    auto newPatriarch = new HSSFPatriarch(sheet, new ::poi::hssf::record::EscherAggregate(true));
    npc(newPatriarch)->afterCreate();
    for (auto _i = npc(npc(patriarch)->getChildren())->iterator(); _i->hasNext(); ) {
        HSSFShape* shape = java_cast< HSSFShape* >(_i->next());
        {
            HSSFShape* newShape;
            if(dynamic_cast< HSSFShapeGroup* >(shape) != nullptr) {
                newShape = npc((java_cast< HSSFShapeGroup* >(shape)))->cloneShape(newPatriarch);
            } else {
                newShape = npc(shape)->cloneShape();
            }
            npc(newPatriarch)->onCreate(newShape);
            npc(newPatriarch)->addShape(newShape);
        }
    }
    return newPatriarch;
}

void poi::hssf::usermodel::HSSFPatriarch::preSerialize()
{
    auto tailRecords = npc(_boundAggregate)->getTailRecords();
    ::java::util::Set* coordinates = new ::java::util::HashSet(npc(tailRecords)->size());
    for (auto _i = npc(npc(tailRecords)->values())->iterator(); _i->hasNext(); ) {
        ::poi::hssf::record::NoteRecord* rec = java_cast< ::poi::hssf::record::NoteRecord* >(_i->next());
        {
            auto noteRef = (new ::poi::hssf::util::CellReference(npc(rec)->getRow(), npc(rec)->getColumn()))->formatAsString();
            if(npc(coordinates)->contains(static_cast< ::java::lang::Object* >(noteRef))) {
                throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"found multiple cell comments for cell "_j)->append(noteRef)->toString());
            } else {
                npc(coordinates)->add(static_cast< ::java::lang::Object* >(noteRef));
            }
        }
    }
}

bool poi::hssf::usermodel::HSSFPatriarch::removeShape(HSSFShape* shape)
{
    auto isRemoved = npc(_mainSpgrContainer)->removeChildRecord(npc(shape)->getEscherContainer());
    if(isRemoved) {
        npc(shape)->afterRemove(this);
        npc(_shapes)->remove(static_cast< ::java::lang::Object* >(shape));
    }
    return isRemoved;
}

void poi::hssf::usermodel::HSSFPatriarch::afterCreate()
{
    auto drawingManager = npc(npc(java_cast< HSSFWorkbook* >(npc(_sheet)->getWorkbook()))->getWorkbook())->getDrawingManager();
    auto dgId = npc(drawingManager)->findNewDrawingGroupId();
    npc(_boundAggregate)->setDgId(dgId);
    npc(_boundAggregate)->setMainSpRecordId(newShapeId());
    npc(drawingManager)->incrementDrawingsSaved();
}

poi::hssf::usermodel::HSSFShapeGroup* poi::hssf::usermodel::HSSFPatriarch::createGroup(HSSFClientAnchor* anchor)
{
    auto group = new HSSFShapeGroup(static_cast< HSSFShape* >(nullptr), static_cast< HSSFAnchor* >(anchor));
    addShape(static_cast< HSSFShape* >(group));
    onCreate(group);
    return group;
}

poi::hssf::usermodel::HSSFSimpleShape* poi::hssf::usermodel::HSSFPatriarch::createSimpleShape(HSSFClientAnchor* anchor)
{
    auto shape = new HSSFSimpleShape(static_cast< HSSFShape* >(nullptr), static_cast< HSSFAnchor* >(anchor));
    addShape(static_cast< HSSFShape* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFPicture* poi::hssf::usermodel::HSSFPatriarch::createPicture(HSSFClientAnchor* anchor, int32_t pictureIndex)
{
    auto shape = new HSSFPicture(static_cast< HSSFShape* >(nullptr), static_cast< HSSFAnchor* >(anchor));
    npc(shape)->setPictureIndex(pictureIndex);
    addShape(static_cast< HSSFShape* >(shape));
    onCreate(shape);
    return shape;
}

poi::ss::usermodel::Picture* poi::hssf::usermodel::HSSFPatriarch::createPicture(::poi::ss::usermodel::ClientAnchor* anchor, int32_t pictureIndex)
{
    return createPicture(java_cast< HSSFClientAnchor* >(anchor), pictureIndex);
}

poi::ss::usermodel::ObjectData* poi::hssf::usermodel::HSSFPatriarch::createObjectData(::poi::ss::usermodel::ClientAnchor* anchor, int32_t storageId, int32_t pictureIndex)
{
    auto obj = new ::poi::hssf::record::ObjRecord();
    auto ftCmo = new ::poi::hssf::record::CommonObjectDataSubRecord();
    npc(ftCmo)->setObjectType(::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_PICTURE);
    npc(ftCmo)->setLocked(true);
    npc(ftCmo)->setPrintable(true);
    npc(ftCmo)->setAutofill(true);
    npc(ftCmo)->setAutoline(true);
    npc(ftCmo)->setReserved1(0);
    npc(ftCmo)->setReserved2(0);
    npc(ftCmo)->setReserved3(0);
    npc(obj)->addSubRecord(ftCmo);
    auto ftCf = new ::poi::hssf::record::FtCfSubRecord();
    auto pictData = java_cast< HSSFPictureData* >(npc(npc(java_cast< HSSFWorkbook* >(npc(getSheet())->getWorkbook()))->getAllPictures())->get(pictureIndex - int32_t(1)));
    switch (npc(pictData)->getFormat()) {
    case ::poi::ss::usermodel::Workbook::PICTURE_TYPE_WMF:
    case ::poi::ss::usermodel::Workbook::PICTURE_TYPE_EMF:
        npc(ftCf)->setFlags(::poi::hssf::record::FtCfSubRecord::METAFILE_BIT);
        break;
    case ::poi::ss::usermodel::Workbook::PICTURE_TYPE_DIB:
    case ::poi::ss::usermodel::Workbook::PICTURE_TYPE_PNG:
    case ::poi::ss::usermodel::Workbook::PICTURE_TYPE_JPEG:
    case ::poi::ss::usermodel::Workbook::PICTURE_TYPE_PICT:
        npc(ftCf)->setFlags(::poi::hssf::record::FtCfSubRecord::BITMAP_BIT);
        break;
    default:
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Invalid picture type: "_j)->append(npc(pictData)->getFormat())->toString());
    }

    npc(obj)->addSubRecord(ftCf);
    auto ftPioGrbit = new ::poi::hssf::record::FtPioGrbitSubRecord();
    npc(ftPioGrbit)->setFlagByBit(::poi::hssf::record::FtPioGrbitSubRecord::AUTO_PICT_BIT, true);
    npc(obj)->addSubRecord(ftPioGrbit);
    auto ftPictFmla = new ::poi::hssf::record::EmbeddedObjectRefSubRecord();
    npc(ftPictFmla)->setUnknownFormulaData(new ::int8_tArray({
        static_cast< int8_t >(int32_t(2))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
    }));
    npc(ftPictFmla)->setOleClassname(u"Paket"_j);
    npc(ftPictFmla)->setStorageId(storageId);
    npc(obj)->addSubRecord(ftPictFmla);
    npc(obj)->addSubRecord(new ::poi::hssf::record::EndSubRecord());
    auto entryName = ::java::lang::StringBuilder().append(u"MBD"_j)->append(::poi::util::HexDump::toHex(storageId))->toString();
    ::poi::poifs::filesystem::DirectoryEntry* oleRoot;
    try {
        auto dn = npc(java_cast< HSSFWorkbook* >(npc(_sheet)->getWorkbook()))->getDirectory();
        if(dn == nullptr) {
            throw new ::java::io::FileNotFoundException();
        }
        oleRoot = java_cast< ::poi::poifs::filesystem::DirectoryEntry* >(npc(dn)->getEntry(entryName));
    } catch (::java::io::FileNotFoundException* e) {
        throw new ::java::lang::IllegalStateException(u"trying to add ole shape without actually adding data first - use HSSFWorkbook.addOlePackage first"_j, e);
    }
    auto shape = new HSSFPicture(static_cast< HSSFShape* >(nullptr), static_cast< HSSFAnchor* >(java_cast< HSSFClientAnchor* >(anchor)));
    npc(shape)->setPictureIndex(pictureIndex);
    auto spContainer = npc(shape)->getEscherContainer();
    auto spRecord = java_cast< ::poi::ddf::EscherSpRecord* >(npc(spContainer)->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
    npc(spRecord)->setFlags(npc(spRecord)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_OLESHAPE);
    auto oleShape = new HSSFObjectData(spContainer, obj, oleRoot);
    addShape(static_cast< HSSFShape* >(oleShape));
    onCreate(oleShape);
    return oleShape;
}

poi::hssf::usermodel::HSSFPolygon* poi::hssf::usermodel::HSSFPatriarch::createPolygon(HSSFClientAnchor* anchor)
{
    auto shape = new HSSFPolygon(static_cast< HSSFShape* >(nullptr), static_cast< HSSFAnchor* >(anchor));
    addShape(static_cast< HSSFShape* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFTextbox* poi::hssf::usermodel::HSSFPatriarch::createTextbox(HSSFClientAnchor* anchor)
{
    auto shape = new HSSFTextbox(nullptr, anchor);
    addShape(static_cast< HSSFShape* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFComment* poi::hssf::usermodel::HSSFPatriarch::createComment(HSSFAnchor* anchor)
{
    auto shape = new HSSFComment(static_cast< HSSFShape* >(nullptr), anchor);
    addShape(static_cast< HSSFShape* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFSimpleShape* poi::hssf::usermodel::HSSFPatriarch::createComboBox(HSSFAnchor* anchor)
{
    auto shape = new HSSFCombobox(static_cast< HSSFShape* >(nullptr), anchor);
    addShape(static_cast< HSSFShape* >(shape));
    onCreate(shape);
    return shape;
}

poi::hssf::usermodel::HSSFComment* poi::hssf::usermodel::HSSFPatriarch::createCellComment(::poi::ss::usermodel::ClientAnchor* anchor)
{
    return createComment(java_cast< HSSFAnchor* >(anchor));
}

java::util::List* poi::hssf::usermodel::HSSFPatriarch::getChildren()
{
    return ::java::util::Collections::unmodifiableList(_shapes);
}

void poi::hssf::usermodel::HSSFPatriarch::addShape(HSSFShape* shape)
{
    npc(shape)->setPatriarch(this);
    npc(_shapes)->add(static_cast< ::java::lang::Object* >(shape));
}

void poi::hssf::usermodel::HSSFPatriarch::onCreate(HSSFShape* shape)
{
    auto spgrContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(npc(_boundAggregate)->getEscherContainer())->getChildContainers())->get(0));
    auto spContainer = npc(shape)->getEscherContainer();
    auto shapeId = newShapeId();
    npc(shape)->setShapeId(shapeId);
    npc(spgrContainer)->addChildRecord(spContainer);
    npc(shape)->afterInsert(this);
    setFlipFlags(shape);
}

int32_t poi::hssf::usermodel::HSSFPatriarch::countOfAllChildren()
{
    auto count = npc(_shapes)->size();
    for (auto *iterator = npc(_shapes)->iterator(); npc(iterator)->hasNext(); ) {
        auto shape = java_cast< HSSFShape* >(npc(iterator)->next());
        count += npc(shape)->countOfAllChildren();
    }
    return count;
}

void poi::hssf::usermodel::HSSFPatriarch::setCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    npc(_spgrRecord)->setRectY1(y1);
    npc(_spgrRecord)->setRectY2(y2);
    npc(_spgrRecord)->setRectX1(x1);
    npc(_spgrRecord)->setRectX2(x2);
}

void poi::hssf::usermodel::HSSFPatriarch::clear()
{
    auto copy = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(_shapes));
    for (auto _i = npc(copy)->iterator(); _i->hasNext(); ) {
        HSSFShape* shape = java_cast< HSSFShape* >(_i->next());
        {
            removeShape(shape);
        }
    }
}

int32_t poi::hssf::usermodel::HSSFPatriarch::newShapeId()
{
    auto dm = npc(npc(java_cast< HSSFWorkbook* >(npc(_sheet)->getWorkbook()))->getWorkbook())->getDrawingManager();
    auto dg = java_cast< ::poi::ddf::EscherDgRecord* >(npc(npc(_boundAggregate)->getEscherContainer())->getChildById(::poi::ddf::EscherDgRecord::RECORD_ID));
    return npc(dm)->allocateShapeId(dg);
}

bool poi::hssf::usermodel::HSSFPatriarch::containsChart()
{
    auto optRecord = java_cast< ::poi::ddf::EscherOptRecord* >(npc(_boundAggregate)->findFirstWithId(::poi::ddf::EscherOptRecord::RECORD_ID));
    if(optRecord == nullptr) {
        return false;
    }
    for (auto *it = npc(npc(optRecord)->getEscherProperties())->iterator(); npc(it)->hasNext(); ) {
        auto prop = java_cast< ::poi::ddf::EscherProperty* >(npc(it)->next());
        if(npc(prop)->getPropertyNumber() == 896 && npc(prop)->isComplex()) {
            auto cp = java_cast< ::poi::ddf::EscherComplexProperty* >(prop);
            auto str = ::poi::util::StringUtil::getFromUnicodeLE(npc(cp)->getComplexData());
            if(npc(str)->equals(static_cast< ::java::lang::Object* >(u"Chart 1\0"_j))) {
                return true;
            }
        }
    }
    return false;
}

int32_t poi::hssf::usermodel::HSSFPatriarch::getX1()
{
    return npc(_spgrRecord)->getRectX1();
}

int32_t poi::hssf::usermodel::HSSFPatriarch::getY1()
{
    return npc(_spgrRecord)->getRectY1();
}

int32_t poi::hssf::usermodel::HSSFPatriarch::getX2()
{
    return npc(_spgrRecord)->getRectX2();
}

int32_t poi::hssf::usermodel::HSSFPatriarch::getY2()
{
    return npc(_spgrRecord)->getRectY2();
}

poi::hssf::record::EscherAggregate* poi::hssf::usermodel::HSSFPatriarch::getBoundAggregate()
{
    return _boundAggregate;
}

poi::hssf::usermodel::HSSFClientAnchor* poi::hssf::usermodel::HSSFPatriarch::createAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t col1, int32_t row1, int32_t col2, int32_t row2)
{
    return new HSSFClientAnchor(dx1, dy1, dx2, dy2, static_cast< int16_t >(col1), row1, static_cast< int16_t >(col2), row2);
}

poi::ss::usermodel::Chart* poi::hssf::usermodel::HSSFPatriarch::createChart(::poi::ss::usermodel::ClientAnchor* anchor)
{
    throw new ::java::lang::RuntimeException(u"NotImplemented"_j);
}

void poi::hssf::usermodel::HSSFPatriarch::buildShapeTree()
{
    auto dgContainer = npc(_boundAggregate)->getEscherContainer();
    if(dgContainer == nullptr) {
        return;
    }
    auto spgrConrainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(npc(dgContainer)->getChildContainers())->get(0));
    auto spgrChildren = npc(spgrConrainer)->getChildContainers();
    for (auto i = int32_t(0); i < npc(spgrChildren)->size(); i++) {
        auto spContainer = java_cast< ::poi::ddf::EscherContainerRecord* >(npc(spgrChildren)->get(i));
        if(i != 0) {
            HSSFShapeFactory::createShapeTree(spContainer, _boundAggregate, this, npc(java_cast< HSSFWorkbook* >(npc(_sheet)->getWorkbook()))->getDirectory());
        }
    }
}

void poi::hssf::usermodel::HSSFPatriarch::setFlipFlags(HSSFShape* shape)
{
    auto sp = java_cast< ::poi::ddf::EscherSpRecord* >(npc(npc(shape)->getEscherContainer())->getChildById(::poi::ddf::EscherSpRecord::RECORD_ID));
    if(npc(npc(shape)->getAnchor())->isHorizontallyFlipped()) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_FLIPHORIZ);
    }
    if(npc(npc(shape)->getAnchor())->isVerticallyFlipped()) {
        npc(sp)->setFlags(npc(sp)->getFlags() | ::poi::ddf::EscherSpRecord::FLAG_FLIPVERT);
    }
}

java::util::Iterator* poi::hssf::usermodel::HSSFPatriarch::iterator()
{
    return npc(_shapes)->iterator();
}

poi::hssf::usermodel::HSSFSheet* poi::hssf::usermodel::HSSFPatriarch::getSheet()
{
    return _sheet;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFPatriarch::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPatriarch", 43);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFPatriarch::getClass0()
{
    return class_();
}

