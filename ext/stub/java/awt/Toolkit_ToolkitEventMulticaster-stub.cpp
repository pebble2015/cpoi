// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Toolkit_ToolkitEventMulticaster.hpp>

#include <java/awt/event/ActionListener.hpp>
#include <java/awt/event/AdjustmentListener.hpp>
#include <java/awt/event/ComponentListener.hpp>
#include <java/awt/event/ContainerListener.hpp>
#include <java/awt/event/FocusListener.hpp>
#include <java/awt/event/HierarchyBoundsListener.hpp>
#include <java/awt/event/HierarchyListener.hpp>
#include <java/awt/event/InputMethodListener.hpp>
#include <java/awt/event/ItemListener.hpp>
#include <java/awt/event/KeyListener.hpp>
#include <java/awt/event/MouseListener.hpp>
#include <java/awt/event/MouseMotionListener.hpp>
#include <java/awt/event/MouseWheelListener.hpp>
#include <java/awt/event/TextListener.hpp>
#include <java/awt/event/WindowFocusListener.hpp>
#include <java/awt/event/WindowListener.hpp>
#include <java/awt/event/WindowStateListener.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Toolkit_ToolkitEventMulticaster::Toolkit_ToolkitEventMulticaster(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Toolkit_ToolkitEventMulticaster::Toolkit_ToolkitEventMulticaster(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b)
    : Toolkit_ToolkitEventMulticaster(*static_cast< ::default_init_tag* >(0))
{
    ctor(a, b);
}


void ::java::awt::Toolkit_ToolkitEventMulticaster::ctor(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Toolkit_ToolkitEventMulticaster::ctor(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b)");
}

java::awt::event::AWTEventListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::event::AWTEventListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b)");
    return 0;
}

void java::awt::Toolkit_ToolkitEventMulticaster::eventDispatched(AWTEvent* event)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_ToolkitEventMulticaster::eventDispatched(AWTEvent* event)");
}

java::util::EventListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::util::EventListener* oldl)
{ /* stub */
    unimplemented_(u"java::util::EventListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::util::EventListener* oldl)");
    return 0;
}

java::awt::event::AWTEventListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::AWTEventListener* l, ::java::awt::event::AWTEventListener* oldl)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::event::AWTEventListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::AWTEventListener* l, ::java::awt::event::AWTEventListener* oldl)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Toolkit_ToolkitEventMulticaster::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Toolkit.ToolkitEventMulticaster", 40);
    return c;
}

java::awt::event::ComponentListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::ComponentListener* a, ::java::awt::event::ComponentListener* b)
{
    return super::add(a, b);
}

java::awt::event::ContainerListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::ContainerListener* a, ::java::awt::event::ContainerListener* b)
{
    return super::add(a, b);
}

java::awt::event::FocusListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::FocusListener* a, ::java::awt::event::FocusListener* b)
{
    return super::add(a, b);
}

java::awt::event::KeyListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::KeyListener* a, ::java::awt::event::KeyListener* b)
{
    return super::add(a, b);
}

java::awt::event::MouseListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::MouseListener* a, ::java::awt::event::MouseListener* b)
{
    return super::add(a, b);
}

java::awt::event::MouseMotionListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::MouseMotionListener* a, ::java::awt::event::MouseMotionListener* b)
{
    return super::add(a, b);
}

java::awt::event::WindowListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::WindowListener* a, ::java::awt::event::WindowListener* b)
{
    return super::add(a, b);
}

java::awt::event::WindowStateListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::WindowStateListener* a, ::java::awt::event::WindowStateListener* b)
{
    return super::add(a, b);
}

java::awt::event::WindowFocusListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::WindowFocusListener* a, ::java::awt::event::WindowFocusListener* b)
{
    return super::add(a, b);
}

java::awt::event::ActionListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::ActionListener* a, ::java::awt::event::ActionListener* b)
{
    return super::add(a, b);
}

java::awt::event::ItemListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::ItemListener* a, ::java::awt::event::ItemListener* b)
{
    return super::add(a, b);
}

java::awt::event::AdjustmentListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::AdjustmentListener* a, ::java::awt::event::AdjustmentListener* b)
{
    return super::add(a, b);
}

java::awt::event::TextListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::TextListener* a, ::java::awt::event::TextListener* b)
{
    return super::add(a, b);
}

java::awt::event::InputMethodListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::InputMethodListener* a, ::java::awt::event::InputMethodListener* b)
{
    return super::add(a, b);
}

java::awt::event::HierarchyListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::HierarchyListener* a, ::java::awt::event::HierarchyListener* b)
{
    return super::add(a, b);
}

java::awt::event::HierarchyBoundsListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::HierarchyBoundsListener* a, ::java::awt::event::HierarchyBoundsListener* b)
{
    return super::add(a, b);
}

java::awt::event::MouseWheelListener* java::awt::Toolkit_ToolkitEventMulticaster::add(::java::awt::event::MouseWheelListener* a, ::java::awt::event::MouseWheelListener* b)
{
    return super::add(a, b);
}

java::awt::event::ComponentListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::ComponentListener* l, ::java::awt::event::ComponentListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::ContainerListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::ContainerListener* l, ::java::awt::event::ContainerListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::FocusListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::FocusListener* l, ::java::awt::event::FocusListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::KeyListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::KeyListener* l, ::java::awt::event::KeyListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::MouseListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::MouseListener* l, ::java::awt::event::MouseListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::MouseMotionListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::MouseMotionListener* l, ::java::awt::event::MouseMotionListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::WindowListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::WindowListener* l, ::java::awt::event::WindowListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::WindowStateListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::WindowStateListener* l, ::java::awt::event::WindowStateListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::WindowFocusListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::WindowFocusListener* l, ::java::awt::event::WindowFocusListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::ActionListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::ActionListener* l, ::java::awt::event::ActionListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::ItemListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::ItemListener* l, ::java::awt::event::ItemListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::AdjustmentListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::AdjustmentListener* l, ::java::awt::event::AdjustmentListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::TextListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::TextListener* l, ::java::awt::event::TextListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::InputMethodListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::InputMethodListener* l, ::java::awt::event::InputMethodListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::HierarchyListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::HierarchyListener* l, ::java::awt::event::HierarchyListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::HierarchyBoundsListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::HierarchyBoundsListener* l, ::java::awt::event::HierarchyBoundsListener* oldl)
{
    return super::remove(l, oldl);
}

java::awt::event::MouseWheelListener* java::awt::Toolkit_ToolkitEventMulticaster::remove(::java::awt::event::MouseWheelListener* l, ::java::awt::event::MouseWheelListener* oldl)
{
    return super::remove(l, oldl);
}

java::lang::Class* java::awt::Toolkit_ToolkitEventMulticaster::getClass0()
{
    return class_();
}

