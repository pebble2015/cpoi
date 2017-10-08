// Generated from /POI/java/org/apache/poi/ddf/EscherDggRecord.java
#include <org/apache/poi/ddf/EscherDggRecord_FileIdCluster.hpp>

poi::ddf::EscherDggRecord_FileIdCluster::EscherDggRecord_FileIdCluster(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherDggRecord_FileIdCluster::EscherDggRecord_FileIdCluster(int32_t drawingGroupId, int32_t numShapeIdsUsed) 
    : EscherDggRecord_FileIdCluster(*static_cast< ::default_init_tag* >(0))
{
    ctor(drawingGroupId,numShapeIdsUsed);
}

void poi::ddf::EscherDggRecord_FileIdCluster::ctor(int32_t drawingGroupId, int32_t numShapeIdsUsed)
{
    super::ctor();
    this->field_1_drawingGroupId = drawingGroupId;
    this->field_2_numShapeIdsUsed = numShapeIdsUsed;
}

int32_t poi::ddf::EscherDggRecord_FileIdCluster::getDrawingGroupId()
{
    return field_1_drawingGroupId;
}

int32_t poi::ddf::EscherDggRecord_FileIdCluster::getNumShapeIdsUsed()
{
    return field_2_numShapeIdsUsed;
}

void poi::ddf::EscherDggRecord_FileIdCluster::incrementUsedShapeId()
{
    field_2_numShapeIdsUsed++;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherDggRecord_FileIdCluster::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherDggRecord.FileIdCluster", 48);
    return c;
}

java::lang::Class* poi::ddf::EscherDggRecord_FileIdCluster::getClass0()
{
    return class_();
}

