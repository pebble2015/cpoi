// Generated from /POI/java/org/apache/poi/hssf/dev/EFBiffViewer.java
#include <org/apache/poi/hssf/dev/EFBiffViewer_run_1.hpp>

#include <java/io/PrintStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/dev/EFBiffViewer.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::dev::EFBiffViewer_run_1::EFBiffViewer_run_1(EFBiffViewer *EFBiffViewer_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , EFBiffViewer_this(EFBiffViewer_this)
{
    clinit();
    ctor();
}

void org::apache::poi::hssf::dev::EFBiffViewer_run_1::processRecord(::org::apache::poi::hssf::record::Record* rec)
{
    npc(::java::lang::System::out())->println(static_cast< ::java::lang::Object* >(rec));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::dev::EFBiffViewer_run_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::hssf::dev::EFBiffViewer_run_1::getClass0()
{
    return class_();
}

