// Generated from /POI/java/org/apache/poi/ddf/EscherDggRecord.java
#include <org/apache/poi/ddf/EscherDggRecord_sortCluster_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ddf/EscherDggRecord_FileIdCluster.hpp>
#include <org/apache/poi/ddf/EscherDggRecord.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherDggRecord_sortCluster_1::EscherDggRecord_sortCluster_1(EscherDggRecord *EscherDggRecord_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , EscherDggRecord_this(EscherDggRecord_this)
{
    clinit();
    ctor();
}

int32_t org::apache::poi::ddf::EscherDggRecord_sortCluster_1::compare(EscherDggRecord_FileIdCluster* f1, EscherDggRecord_FileIdCluster* f2)
{
    auto dgDif = npc(f1)->getDrawingGroupId() - npc(f2)->getDrawingGroupId();
    auto cntDif = npc(f2)->getNumShapeIdsUsed() - npc(f1)->getNumShapeIdsUsed();
    return (dgDif != 0) ? dgDif : cntDif;
}

int32_t org::apache::poi::ddf::EscherDggRecord_sortCluster_1::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< EscherDggRecord_FileIdCluster* >(o1), dynamic_cast< EscherDggRecord_FileIdCluster* >(o2));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherDggRecord_sortCluster_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool org::apache::poi::ddf::EscherDggRecord_sortCluster_1::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* org::apache::poi::ddf::EscherDggRecord_sortCluster_1::getClass0()
{
    return class_();
}

