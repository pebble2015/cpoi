// Generated from /POI/java/org/apache/poi/util/JvmBugs.java
#include <org/apache/poi/util/JvmBugs.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::JvmBugs::JvmBugs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::JvmBugs::JvmBugs()
    : JvmBugs(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::util::JvmBugs::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::util::JvmBugs::LOG_;

bool poi::util::JvmBugs::hasLineBreakMeasurerBug()
{
    clinit();
    auto version = ::java::lang::System::getProperty(u"java.version"_j);
    auto os = npc(::java::lang::System::getProperty(u"os.name"_j))->toLowerCase(::java::util::Locale::ROOT());
    auto ignore = ::java::lang::Boolean::getBoolean(u"org.apache.poi.JvmBugs.LineBreakMeasurer.ignore"_j);
    auto hasBug = (!ignore && (npc(os)->contains(u"win"_j) && (npc(u"1.6.0_45"_j)->equals(static_cast< ::java::lang::Object* >(version)) || npc(u"1.7.0_21"_j)->equals(static_cast< ::java::lang::Object* >(version)))));
    if(hasBug) {
        npc(LOG_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"JVM has LineBreakMeasurer bug - see POI bug #54904 - caller code might default to Lucida Sans"_j)}));
    }
    return hasBug;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::JvmBugs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.JvmBugs", 27);
    return c;
}

void poi::util::JvmBugs::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(JvmBugs::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::JvmBugs::getClass0()
{
    return class_();
}

