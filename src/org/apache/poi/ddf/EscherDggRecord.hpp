// Generated from /POI/java/org/apache/poi/ddf/EscherDggRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>

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

namespace poi
{
    namespace ddf
    {
typedef ::SubArray< ::poi::ddf::EscherDggRecord_FileIdCluster, ::java::lang::ObjectArray > EscherDggRecord_FileIdClusterArray;
    } // ddf
} // poi

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

struct default_init_tag;

class poi::ddf::EscherDggRecord final
    : public EscherRecord
{

public:
    typedef EscherRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-4090) };

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;
    int32_t field_1_shapeIdMax {  };
    int32_t field_3_numShapesSaved {  };
    int32_t field_4_drawingsSaved {  };
    ::java::util::List* field_5_fileIdClusters {  };
    int32_t maxDgId {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;
    int32_t getRecordSize() override;
    int16_t getRecordId() override;
    ::java::lang::String* getRecordName() override;
    int32_t getShapeIdMax();
    void setShapeIdMax(int32_t shapeIdMax);
    int32_t getNumIdClusters();
    int32_t getNumShapesSaved();
    void setNumShapesSaved(int32_t numShapesSaved);
    int32_t getDrawingsSaved();
    void setDrawingsSaved(int32_t drawingsSaved);
    int32_t getMaxDrawingGroupId();
    EscherDggRecord_FileIdClusterArray* getFileIdClusters();
    void setFileIdClusters(EscherDggRecord_FileIdClusterArray* fileIdClusters);
    EscherDggRecord_FileIdCluster* addCluster(int32_t dgId, int32_t numShapedUsed);
    EscherDggRecord_FileIdCluster* addCluster(int32_t dgId, int32_t numShapedUsed, bool sort);

private:
    void sortCluster();

public:
    int16_t findNewDrawingGroupId();
    int32_t allocateShapeId(EscherDgRecord* dg, bool sort);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherDggRecord();
protected:
    void ctor();
    EscherDggRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public: /* protected */
    virtual int32_t fillFields(::int8_tArray* data, EscherRecordFactory* f);

public:
    virtual ::int8_tArray* serialize();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);
    static ::java::lang::String*& RECORD_DESCRIPTION();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherDggRecord_FileIdCluster;
    friend class EscherDggRecord_sortCluster_1;
};
