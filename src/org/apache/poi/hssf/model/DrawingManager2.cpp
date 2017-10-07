// Generated from /POI/java/org/apache/poi/hssf/model/DrawingManager2.java
#include <org/apache/poi/hssf/model/DrawingManager2.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherDgRecord.hpp>
#include <org/apache/poi/ddf/EscherDggRecord.hpp>

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

org::apache::poi::hssf::model::DrawingManager2::DrawingManager2(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::model::DrawingManager2::DrawingManager2(::org::apache::poi::ddf::EscherDggRecord* dgg) 
    : DrawingManager2(*static_cast< ::default_init_tag* >(0))
{
    ctor(dgg);
}

void org::apache::poi::hssf::model::DrawingManager2::init()
{
    drawingGroups = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::model::DrawingManager2::ctor(::org::apache::poi::ddf::EscherDggRecord* dgg)
{
    super::ctor();
    init();
    this->dgg = dgg;
}

void org::apache::poi::hssf::model::DrawingManager2::clearDrawingGroups()
{
    npc(drawingGroups)->clear();
}

org::apache::poi::ddf::EscherDgRecord* org::apache::poi::hssf::model::DrawingManager2::createDgRecord()
{
    auto dg = new ::org::apache::poi::ddf::EscherDgRecord();
    npc(dg)->setRecordId(::org::apache::poi::ddf::EscherDgRecord::RECORD_ID);
    auto dgId = findNewDrawingGroupId();
    npc(dg)->setOptions(static_cast< int16_t >((dgId << int32_t(4))));
    npc(dg)->setNumShapes(0);
    npc(dg)->setLastMSOSPID(-int32_t(1));
    npc(drawingGroups)->add(static_cast< ::java::lang::Object* >(dg));
    npc(dgg)->addCluster(dgId, 0);
    npc(dgg)->setDrawingsSaved(npc(dgg)->getDrawingsSaved() + int32_t(1));
    return dg;
}

int32_t org::apache::poi::hssf::model::DrawingManager2::allocateShapeId(int16_t drawingGroupId)
{
    for (auto _i = npc(drawingGroups)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::ddf::EscherDgRecord* dg = java_cast< ::org::apache::poi::ddf::EscherDgRecord* >(_i->next());
        {
            if(npc(dg)->getDrawingGroupId() == drawingGroupId) {
                return allocateShapeId(dg);
            }
        }
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Drawing group id "_j)->append(drawingGroupId)
        ->append(u" doesn't exist."_j)->toString());
}

int32_t org::apache::poi::hssf::model::DrawingManager2::allocateShapeId(int16_t drawingGroupId, ::org::apache::poi::ddf::EscherDgRecord* dg)
{
    return allocateShapeId(dg);
}

int32_t org::apache::poi::hssf::model::DrawingManager2::allocateShapeId(::org::apache::poi::ddf::EscherDgRecord* dg)
{
    return npc(dgg)->allocateShapeId(dg, true);
}

int16_t org::apache::poi::hssf::model::DrawingManager2::findNewDrawingGroupId()
{
    return npc(dgg)->findNewDrawingGroupId();
}

org::apache::poi::ddf::EscherDggRecord* org::apache::poi::hssf::model::DrawingManager2::getDgg()
{
    return dgg;
}

void org::apache::poi::hssf::model::DrawingManager2::incrementDrawingsSaved()
{
    npc(dgg)->setDrawingsSaved(npc(dgg)->getDrawingsSaved() + int32_t(1));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::model::DrawingManager2::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.DrawingManager2", 41);
    return c;
}

java::lang::Class* org::apache::poi::hssf::model::DrawingManager2::getClass0()
{
    return class_();
}

