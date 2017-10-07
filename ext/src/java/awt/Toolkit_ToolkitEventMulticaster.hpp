// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/awt/AWTEventMulticaster.hpp>
#include <java/awt/event/AWTEventListener.hpp>

struct default_init_tag;

class java::awt::Toolkit_ToolkitEventMulticaster
    : public AWTEventMulticaster
    , public virtual ::java::awt::event::AWTEventListener
{

public:
    typedef AWTEventMulticaster super;

protected:
    void ctor(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b);

public: /* package */
    static ::java::awt::event::AWTEventListener* add(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b);

public:
    void eventDispatched(AWTEvent* event) override;

public: /* protected */
    ::java::util::EventListener* remove(::java::util::EventListener* oldl) override;

public: /* package */
    static ::java::awt::event::AWTEventListener* remove(::java::awt::event::AWTEventListener* l, ::java::awt::event::AWTEventListener* oldl);

    // Generated
    Toolkit_ToolkitEventMulticaster(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b);
protected:
    Toolkit_ToolkitEventMulticaster(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::awt::event::ComponentListener* add(::java::awt::event::ComponentListener* a, ::java::awt::event::ComponentListener* b);
    static ::java::awt::event::ContainerListener* add(::java::awt::event::ContainerListener* a, ::java::awt::event::ContainerListener* b);
    static ::java::awt::event::FocusListener* add(::java::awt::event::FocusListener* a, ::java::awt::event::FocusListener* b);
    static ::java::awt::event::KeyListener* add(::java::awt::event::KeyListener* a, ::java::awt::event::KeyListener* b);
    static ::java::awt::event::MouseListener* add(::java::awt::event::MouseListener* a, ::java::awt::event::MouseListener* b);
    static ::java::awt::event::MouseMotionListener* add(::java::awt::event::MouseMotionListener* a, ::java::awt::event::MouseMotionListener* b);
    static ::java::awt::event::WindowListener* add(::java::awt::event::WindowListener* a, ::java::awt::event::WindowListener* b);
    static ::java::awt::event::WindowStateListener* add(::java::awt::event::WindowStateListener* a, ::java::awt::event::WindowStateListener* b);
    static ::java::awt::event::WindowFocusListener* add(::java::awt::event::WindowFocusListener* a, ::java::awt::event::WindowFocusListener* b);
    static ::java::awt::event::ActionListener* add(::java::awt::event::ActionListener* a, ::java::awt::event::ActionListener* b);
    static ::java::awt::event::ItemListener* add(::java::awt::event::ItemListener* a, ::java::awt::event::ItemListener* b);
    static ::java::awt::event::AdjustmentListener* add(::java::awt::event::AdjustmentListener* a, ::java::awt::event::AdjustmentListener* b);
    static ::java::awt::event::TextListener* add(::java::awt::event::TextListener* a, ::java::awt::event::TextListener* b);
    static ::java::awt::event::InputMethodListener* add(::java::awt::event::InputMethodListener* a, ::java::awt::event::InputMethodListener* b);
    static ::java::awt::event::HierarchyListener* add(::java::awt::event::HierarchyListener* a, ::java::awt::event::HierarchyListener* b);
    static ::java::awt::event::HierarchyBoundsListener* add(::java::awt::event::HierarchyBoundsListener* a, ::java::awt::event::HierarchyBoundsListener* b);
    static ::java::awt::event::MouseWheelListener* add(::java::awt::event::MouseWheelListener* a, ::java::awt::event::MouseWheelListener* b);
    static ::java::awt::event::ComponentListener* remove(::java::awt::event::ComponentListener* l, ::java::awt::event::ComponentListener* oldl);
    static ::java::awt::event::ContainerListener* remove(::java::awt::event::ContainerListener* l, ::java::awt::event::ContainerListener* oldl);
    static ::java::awt::event::FocusListener* remove(::java::awt::event::FocusListener* l, ::java::awt::event::FocusListener* oldl);
    static ::java::awt::event::KeyListener* remove(::java::awt::event::KeyListener* l, ::java::awt::event::KeyListener* oldl);
    static ::java::awt::event::MouseListener* remove(::java::awt::event::MouseListener* l, ::java::awt::event::MouseListener* oldl);
    static ::java::awt::event::MouseMotionListener* remove(::java::awt::event::MouseMotionListener* l, ::java::awt::event::MouseMotionListener* oldl);
    static ::java::awt::event::WindowListener* remove(::java::awt::event::WindowListener* l, ::java::awt::event::WindowListener* oldl);
    static ::java::awt::event::WindowStateListener* remove(::java::awt::event::WindowStateListener* l, ::java::awt::event::WindowStateListener* oldl);
    static ::java::awt::event::WindowFocusListener* remove(::java::awt::event::WindowFocusListener* l, ::java::awt::event::WindowFocusListener* oldl);
    static ::java::awt::event::ActionListener* remove(::java::awt::event::ActionListener* l, ::java::awt::event::ActionListener* oldl);
    static ::java::awt::event::ItemListener* remove(::java::awt::event::ItemListener* l, ::java::awt::event::ItemListener* oldl);
    static ::java::awt::event::AdjustmentListener* remove(::java::awt::event::AdjustmentListener* l, ::java::awt::event::AdjustmentListener* oldl);
    static ::java::awt::event::TextListener* remove(::java::awt::event::TextListener* l, ::java::awt::event::TextListener* oldl);
    static ::java::awt::event::InputMethodListener* remove(::java::awt::event::InputMethodListener* l, ::java::awt::event::InputMethodListener* oldl);
    static ::java::awt::event::HierarchyListener* remove(::java::awt::event::HierarchyListener* l, ::java::awt::event::HierarchyListener* oldl);
    static ::java::awt::event::HierarchyBoundsListener* remove(::java::awt::event::HierarchyBoundsListener* l, ::java::awt::event::HierarchyBoundsListener* oldl);
    static ::java::awt::event::MouseWheelListener* remove(::java::awt::event::MouseWheelListener* l, ::java::awt::event::MouseWheelListener* oldl);

private:
    virtual ::java::lang::Class* getClass0();
};
