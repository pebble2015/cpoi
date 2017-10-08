// Generated from /POI/java/org/apache/poi/ddf/EscherDggRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ddf::EscherDggRecord_FileIdCluster
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t field_1_drawingGroupId {  };
    int32_t field_2_numShapeIdsUsed {  };
protected:
    void ctor(int32_t drawingGroupId, int32_t numShapeIdsUsed);

public:
    virtual int32_t getDrawingGroupId();
    virtual int32_t getNumShapeIdsUsed();

private:
    void incrementUsedShapeId();

    // Generated

public:
    EscherDggRecord_FileIdCluster(int32_t drawingGroupId, int32_t numShapeIdsUsed);
protected:
    EscherDggRecord_FileIdCluster(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherDggRecord;
    friend class EscherDggRecord_sortCluster_1;
};
