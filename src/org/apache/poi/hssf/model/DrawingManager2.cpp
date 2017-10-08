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

poi::hssf::model::DrawingManager2::DrawingManager2(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::DrawingManager2::DrawingManager2(::poi::ddf::EscherDggRecord* dgg) 
    : DrawingManager2(*static_cast< ::default_init_tag* >(0))
{
    ctor(dgg);
}

void poi::hssf::model::DrawingManager2::init()
{
    drawingGroups = new ::java::util::ArrayList();
}

void poi::hssf::model::DrawingManager2::ctor(::poi::ddf::EscherDggRecord* dgg)
{
    super::ctor();
    init();
    this->dgg = dgg;
}

void poi::hssf::model::DrawingManager2::clearDrawingGroups()
{
    npc(drawingGroups)->clear();
}

poi::ddf::EscherDgRecord* poi::hssf::model::DrawingManager2::createDgRecord()
{
    auto dg = new ::poi::ddf::EscherDgRecord();
    npc(dg)->setRecordId(::poi::ddf::EscherDgRecord::RECORD_ID);
    auto dgId = findNewDrawingGroupId();
    npc(dg)->setOptions(static_cast< int16_t >((dgId << int32_t(4))));
    npc(dg)->setNumShapes(0);
    npc(dg)->setLastMSOSPID(-int32_t(1));
    npc(drawingGroups)->add(static_cast< ::java::lang::Object* >(dg));
    npc(dgg)->addCluster(dgId, 0);
    npc(dgg)->setDrawingsSaved(npc(dgg)->getDrawingsSaved() + int32_t(1));
    return dg;
}

int32_t poi::hssf::model::DrawingManager2::allocateShapeId(int16_t drawingGroupId)
{
    for (auto _i = npc(drawingGroups)->iterator(); _i->hasNext(); ) {
        ::poi::ddf::EscherDgRecord* dg = java_cast< ::poi::ddf::EscherDgRecord* >(_i->next());
        {
            if(npc(dg)->getDrawingGroupId() == drawingGroupId) {
                return allocateShapeId(dg);
            }
        }
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Drawing group id "_j)->append(drawingGroupId)
        ->append(u" doesn't exist."_j)->toString());
}

int32_t poi::hssf::model::DrawingManager2::allocateShapeId(int16_t drawingGroupId, ::poi::ddf::EscherDgRecord* dg)
{
    return allocateShapeId(dg);
}

int32_t poi::hssf::model::DrawingManager2::allocateShapeId(::poi::ddf::EscherDgRecord* dg)
{
    return npc(dgg)->allocateShapeId(dg, true);
}

int16_t poi::hssf::model::DrawingManager2::findNewDrawingGroupId()
{
    return npc(dgg)->findNewDrawingGroupId();
}

poi::ddf::EscherDggRecord* poi::hssf::model::DrawingManager2::getDgg()
{
    return dgg;
}

void poi::hssf::model::DrawingManager2::incrementDrawingsSaved()
{
    npc(dgg)->setDrawingsSaved(npc(dgg)->getDrawingsSaved() + int32_t(1));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::DrawingManager2::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.DrawingManager2", 41);
    return c;
}

java::lang::Class* poi::hssf::model::DrawingManager2::getClass0()
{
    return class_();
}

