// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Container_DropTargetEventTargetFilter.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Container_DropTargetEventTargetFilter::Container_DropTargetEventTargetFilter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Container_EventTargetFilter*& java::awt::Container_DropTargetEventTargetFilter::FILTER()
{
    clinit();
    return FILTER_;
}
java::awt::Container_EventTargetFilter* java::awt::Container_DropTargetEventTargetFilter::FILTER_;

/* private: void ::java::awt::Container_DropTargetEventTargetFilter::ctor() */
bool java::awt::Container_DropTargetEventTargetFilter::accept(Component* comp)
{ /* stub */
    unimplemented_(u"bool java::awt::Container_DropTargetEventTargetFilter::accept(Component* comp)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Container_DropTargetEventTargetFilter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Container.DropTargetEventTargetFilter", 46);
    return c;
}

java::lang::Class* java::awt::Container_DropTargetEventTargetFilter::getClass0()
{
    return class_();
}

