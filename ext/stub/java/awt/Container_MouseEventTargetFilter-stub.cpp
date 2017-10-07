// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Container_MouseEventTargetFilter.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Container_MouseEventTargetFilter::Container_MouseEventTargetFilter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Container_EventTargetFilter*& java::awt::Container_MouseEventTargetFilter::FILTER()
{
    clinit();
    return FILTER_;
}
java::awt::Container_EventTargetFilter* java::awt::Container_MouseEventTargetFilter::FILTER_;

/* private: void ::java::awt::Container_MouseEventTargetFilter::ctor() */
bool java::awt::Container_MouseEventTargetFilter::accept(Component* comp)
{ /* stub */
    unimplemented_(u"bool java::awt::Container_MouseEventTargetFilter::accept(Component* comp)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Container_MouseEventTargetFilter::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Container.MouseEventTargetFilter", 41);
    return c;
}

java::lang::Class* java::awt::Container_MouseEventTargetFilter::getClass0()
{
    return class_();
}

