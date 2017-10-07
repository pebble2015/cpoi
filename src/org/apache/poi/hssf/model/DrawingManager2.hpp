// Generated from /POI/java/org/apache/poi/hssf/model/DrawingManager2.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::DrawingManager2
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ddf::EscherDggRecord* dgg {  };
    ::java::util::List* drawingGroups {  };
protected:
    void ctor(::org::apache::poi::ddf::EscherDggRecord* dgg);

public:
    virtual void clearDrawingGroups();
    virtual ::org::apache::poi::ddf::EscherDgRecord* createDgRecord();
    virtual int32_t allocateShapeId(int16_t drawingGroupId);
    virtual int32_t allocateShapeId(int16_t drawingGroupId, ::org::apache::poi::ddf::EscherDgRecord* dg);
    virtual int32_t allocateShapeId(::org::apache::poi::ddf::EscherDgRecord* dg);
    virtual int16_t findNewDrawingGroupId();
    virtual ::org::apache::poi::ddf::EscherDggRecord* getDgg();
    virtual void incrementDrawingsSaved();

    // Generated
    DrawingManager2(::org::apache::poi::ddf::EscherDggRecord* dgg);
protected:
    DrawingManager2(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
