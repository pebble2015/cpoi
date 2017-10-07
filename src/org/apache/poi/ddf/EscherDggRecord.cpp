// Generated from /POI/java/org/apache/poi/ddf/EscherDggRecord.java
#include <org/apache/poi/ddf/EscherDggRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/BitSet.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherDgRecord.hpp>
#include <org/apache/poi/ddf/EscherDggRecord_sortCluster_1.hpp>
#include <org/apache/poi/ddf/EscherDggRecord_FileIdCluster.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ddf
            {
typedef ::SubArray< ::org::apache::poi::ddf::EscherDggRecord_FileIdCluster, ::java::lang::ObjectArray > EscherDggRecord_FileIdClusterArray;
            } // ddf
        } // poi
    } // apache
} // org

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

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

org::apache::poi::ddf::EscherDggRecord::EscherDggRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherDggRecord::EscherDggRecord()
    : EscherDggRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherDggRecord::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ddf::EscherDggRecord::init()
{
    field_5_fileIdClusters = new ::java::util::ArrayList();
}

constexpr int16_t org::apache::poi::ddf::EscherDggRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherDggRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherDggRecord::RECORD_DESCRIPTION_;

int32_t org::apache::poi::ddf::EscherDggRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    field_1_shapeIdMax = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    size += 4;
    field_3_numShapesSaved = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_4_drawingsSaved = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    npc(field_5_fileIdClusters)->clear();
    auto numIdClusters = (bytesRemaining - size) / int32_t(8);
    for (auto i = int32_t(0); i < numIdClusters; i++) {
        auto drawingGroupId = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
        auto numShapeIdsUsed = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size + int32_t(4));
        auto fic = new EscherDggRecord_FileIdCluster(drawingGroupId, numShapeIdsUsed);
        npc(field_5_fileIdClusters)->add(static_cast< ::java::lang::Object* >(fic));
        maxDgId = ::java::lang::Math::max(maxDgId, drawingGroupId);
        size += 8;
    }
    bytesRemaining -= size;
    if(bytesRemaining != 0) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expecting no remaining data but got "_j)->append(bytesRemaining)
            ->append(u" byte(s)."_j)->toString());
    }
    return int32_t(8) + size;
}

int32_t org::apache::poi::ddf::EscherDggRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    auto pos = offset;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getOptions());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getRecordId());
    pos += 2;
    auto remainingBytes = getRecordSize() - int32_t(8);
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, remainingBytes);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_1_shapeIdMax);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, getNumIdClusters());
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_numShapesSaved);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_4_drawingsSaved);
    pos += 4;
    for (auto _i = npc(field_5_fileIdClusters)->iterator(); _i->hasNext(); ) {
        EscherDggRecord_FileIdCluster* fic = java_cast< EscherDggRecord_FileIdCluster* >(_i->next());
        {
            ::org::apache::poi::util::LittleEndian::putInt(data, pos, npc(fic)->getDrawingGroupId());
            pos += 4;
            ::org::apache::poi::util::LittleEndian::putInt(data, pos, npc(fic)->getNumShapeIdsUsed());
            pos += 4;
        }
    }
    npc(listener)->afterRecordSerialize(pos, getRecordId(), getRecordSize(), this);
    return getRecordSize();
}

int32_t org::apache::poi::ddf::EscherDggRecord::getRecordSize()
{
    return int32_t(8) + int32_t(16) + (int32_t(8) * npc(field_5_fileIdClusters)->size());
}

int16_t org::apache::poi::ddf::EscherDggRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherDggRecord::getRecordName()
{
    return u"Dgg"_j;
}

int32_t org::apache::poi::ddf::EscherDggRecord::getShapeIdMax()
{
    return field_1_shapeIdMax;
}

void org::apache::poi::ddf::EscherDggRecord::setShapeIdMax(int32_t shapeIdMax)
{
    this->field_1_shapeIdMax = shapeIdMax;
}

int32_t org::apache::poi::ddf::EscherDggRecord::getNumIdClusters()
{
    return (npc(field_5_fileIdClusters)->isEmpty() ? int32_t(0) : npc(field_5_fileIdClusters)->size() + int32_t(1));
}

int32_t org::apache::poi::ddf::EscherDggRecord::getNumShapesSaved()
{
    return field_3_numShapesSaved;
}

void org::apache::poi::ddf::EscherDggRecord::setNumShapesSaved(int32_t numShapesSaved)
{
    this->field_3_numShapesSaved = numShapesSaved;
}

int32_t org::apache::poi::ddf::EscherDggRecord::getDrawingsSaved()
{
    return field_4_drawingsSaved;
}

void org::apache::poi::ddf::EscherDggRecord::setDrawingsSaved(int32_t drawingsSaved)
{
    this->field_4_drawingsSaved = drawingsSaved;
}

int32_t org::apache::poi::ddf::EscherDggRecord::getMaxDrawingGroupId()
{
    return maxDgId;
}

org::apache::poi::ddf::EscherDggRecord_FileIdClusterArray* org::apache::poi::ddf::EscherDggRecord::getFileIdClusters()
{
    return java_cast< EscherDggRecord_FileIdClusterArray* >(npc(field_5_fileIdClusters)->toArray_(static_cast< ::java::lang::ObjectArray* >(new EscherDggRecord_FileIdClusterArray(npc(field_5_fileIdClusters)->size()))));
}

void org::apache::poi::ddf::EscherDggRecord::setFileIdClusters(EscherDggRecord_FileIdClusterArray* fileIdClusters)
{
    npc(field_5_fileIdClusters)->clear();
    if(fileIdClusters != nullptr) {
        npc(field_5_fileIdClusters)->addAll(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(fileIdClusters)));
    }
}

org::apache::poi::ddf::EscherDggRecord_FileIdCluster* org::apache::poi::ddf::EscherDggRecord::addCluster(int32_t dgId, int32_t numShapedUsed)
{
    return addCluster(dgId, numShapedUsed, true);
}

org::apache::poi::ddf::EscherDggRecord_FileIdCluster* org::apache::poi::ddf::EscherDggRecord::addCluster(int32_t dgId, int32_t numShapedUsed, bool sort)
{
    auto ficNew = new EscherDggRecord_FileIdCluster(dgId, numShapedUsed);
    npc(field_5_fileIdClusters)->add(static_cast< ::java::lang::Object* >(ficNew));
    maxDgId = ::java::lang::Math::min(maxDgId, dgId);
    if(sort) {
        sortCluster();
    }
    return ficNew;
}

void org::apache::poi::ddf::EscherDggRecord::sortCluster()
{
    ::java::util::Collections::sort(field_5_fileIdClusters, new EscherDggRecord_sortCluster_1(this));
}

int16_t org::apache::poi::ddf::EscherDggRecord::findNewDrawingGroupId()
{
    auto bs = new ::java::util::BitSet();
    npc(bs)->set(0);
    for (auto _i = npc(field_5_fileIdClusters)->iterator(); _i->hasNext(); ) {
        EscherDggRecord_FileIdCluster* fic = java_cast< EscherDggRecord_FileIdCluster* >(_i->next());
        {
            npc(bs)->set(npc(fic)->getDrawingGroupId());
        }
    }
    return static_cast< int16_t >(npc(bs)->nextClearBit(0));
}

int32_t org::apache::poi::ddf::EscherDggRecord::allocateShapeId(EscherDgRecord* dg, bool sort)
{
    auto const drawingGroupId = npc(dg)->getDrawingGroupId();
    field_3_numShapesSaved++;
    EscherDggRecord_FileIdCluster* ficAdd = nullptr;
    auto index = int32_t(1);
    for (auto _i = npc(field_5_fileIdClusters)->iterator(); _i->hasNext(); ) {
        EscherDggRecord_FileIdCluster* fic = java_cast< EscherDggRecord_FileIdCluster* >(_i->next());
        {
            if(npc(fic)->getDrawingGroupId() == drawingGroupId && npc(fic)->getNumShapeIdsUsed() < 1024) {
                ficAdd = fic;
                break;
            }
            index++;
        }
    }
    if(ficAdd == nullptr) {
        ficAdd = addCluster(drawingGroupId, 0, sort);
        maxDgId = ::java::lang::Math::max(maxDgId, static_cast< int32_t >(drawingGroupId));
    }
    auto shapeId = index * int32_t(1024) + npc(ficAdd)->getNumShapeIdsUsed();
    npc(ficAdd)->incrementUsedShapeId();
    npc(dg)->setNumShapes(npc(dg)->getNumShapes() + int32_t(1));
    npc(dg)->setLastMSOSPID(shapeId);
    field_1_shapeIdMax = ::java::lang::Math::max(field_1_shapeIdMax, shapeId + int32_t(1));
    return shapeId;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherDggRecord::getAttributeMap()
{
    ::java::util::List* fldIds = new ::java::util::ArrayList();
    npc(fldIds)->add(static_cast< ::java::lang::Object* >(u"FileId Clusters"_j));
    npc(fldIds)->add(::java::lang::Integer::valueOf(npc(field_5_fileIdClusters)->size()));
    for (auto _i = npc(field_5_fileIdClusters)->iterator(); _i->hasNext(); ) {
        EscherDggRecord_FileIdCluster* fic = java_cast< EscherDggRecord_FileIdCluster* >(_i->next());
        {
            npc(fldIds)->add(static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Group"_j)->append(npc(fic)->field_1_drawingGroupId)->toString()));
            npc(fldIds)->add(::java::lang::Integer::valueOf(npc(fic)->field_2_numShapeIdsUsed));
        }
    }
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"ShapeIdMax"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_1_shapeIdMax))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"NumIdClusters"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(getNumIdClusters()))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"NumShapesSaved"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_3_numShapesSaved))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"DrawingsSaved"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_4_drawingsSaved))
    }))
        , npc(fldIds)->toArray_()
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherDggRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherDggRecord", 34);
    return c;
}

void org::apache::poi::ddf::EscherDggRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtDgg"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherDggRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherDggRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherDggRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherDggRecord::getClass0()
{
    return class_();
}

