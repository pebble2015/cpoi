// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/event/ComponentListener.hpp>
#include <java/awt/event/ContainerListener.hpp>
#include <java/awt/event/FocusListener.hpp>
#include <java/awt/event/KeyListener.hpp>
#include <java/awt/event/MouseListener.hpp>
#include <java/awt/event/MouseMotionListener.hpp>
#include <java/awt/event/WindowListener.hpp>
#include <java/awt/event/WindowFocusListener.hpp>
#include <java/awt/event/WindowStateListener.hpp>
#include <java/awt/event/ActionListener.hpp>
#include <java/awt/event/ItemListener.hpp>
#include <java/awt/event/AdjustmentListener.hpp>
#include <java/awt/event/TextListener.hpp>
#include <java/awt/event/InputMethodListener.hpp>
#include <java/awt/event/HierarchyListener.hpp>
#include <java/awt/event/HierarchyBoundsListener.hpp>
#include <java/awt/event/MouseWheelListener.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util
} // java

struct default_init_tag;

class java::awt::AWTEventMulticaster
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::event::ComponentListener
    , public virtual ::java::awt::event::ContainerListener
    , public virtual ::java::awt::event::FocusListener
    , public virtual ::java::awt::event::KeyListener
    , public virtual ::java::awt::event::MouseListener
    , public virtual ::java::awt::event::MouseMotionListener
    , public virtual ::java::awt::event::WindowListener
    , public virtual ::java::awt::event::WindowFocusListener
    , public virtual ::java::awt::event::WindowStateListener
    , public virtual ::java::awt::event::ActionListener
    , public virtual ::java::awt::event::ItemListener
    , public virtual ::java::awt::event::AdjustmentListener
    , public virtual ::java::awt::event::TextListener
    , public virtual ::java::awt::event::InputMethodListener
    , public virtual ::java::awt::event::HierarchyListener
    , public virtual ::java::awt::event::HierarchyBoundsListener
    , public virtual ::java::awt::event::MouseWheelListener
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::EventListener* a {  };
    ::java::util::EventListener* b {  };

protected:
    void ctor(::java::util::EventListener* a, ::java::util::EventListener* b);

public:
    void actionPerformed(::java::awt::event::ActionEvent* e) override;
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

public: /* protected */
    static ::java::util::EventListener* addInternal(::java::util::EventListener* a, ::java::util::EventListener* b);

public:
    void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) override;
    void ancestorMoved(::java::awt::event::HierarchyEvent* e) override;
    void ancestorResized(::java::awt::event::HierarchyEvent* e) override;
    void caretPositionChanged(::java::awt::event::InputMethodEvent* e) override;
    void componentAdded(::java::awt::event::ContainerEvent* e) override;
    void componentHidden(::java::awt::event::ComponentEvent* e) override;
    void componentMoved(::java::awt::event::ComponentEvent* e) override;
    void componentRemoved(::java::awt::event::ContainerEvent* e) override;
    void componentResized(::java::awt::event::ComponentEvent* e) override;
    void componentShown(::java::awt::event::ComponentEvent* e) override;
    void focusGained(::java::awt::event::FocusEvent* e) override;
    void focusLost(::java::awt::event::FocusEvent* e) override;
    /*static int32_t getListenerCount(::java::util::EventListener* l, ::java::lang::Class* listenerType); (private) */
    static ::java::util::EventListenerArray* getListeners(::java::util::EventListener* l, ::java::lang::Class* listenerType);
    void hierarchyChanged(::java::awt::event::HierarchyEvent* e) override;
    void inputMethodTextChanged(::java::awt::event::InputMethodEvent* e) override;
    void itemStateChanged(::java::awt::event::ItemEvent* e) override;
    void keyPressed(::java::awt::event::KeyEvent* e) override;
    void keyReleased(::java::awt::event::KeyEvent* e) override;
    void keyTyped(::java::awt::event::KeyEvent* e) override;
    void mouseClicked(::java::awt::event::MouseEvent* e) override;
    void mouseDragged(::java::awt::event::MouseEvent* e) override;
    void mouseEntered(::java::awt::event::MouseEvent* e) override;
    void mouseExited(::java::awt::event::MouseEvent* e) override;
    void mouseMoved(::java::awt::event::MouseEvent* e) override;
    void mousePressed(::java::awt::event::MouseEvent* e) override;
    void mouseReleased(::java::awt::event::MouseEvent* e) override;
    void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
    /*static int32_t populateListenerArray_(::java::util::EventListenerArray* a, ::java::util::EventListener* l, int32_t index); (private) */

public: /* protected */
    virtual ::java::util::EventListener* remove(::java::util::EventListener* oldl);

public:
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

public: /* protected */
    static ::java::util::EventListener* removeInternal(::java::util::EventListener* l, ::java::util::EventListener* oldl);
    static void save(::java::io::ObjectOutputStream* s, ::java::lang::String* k, ::java::util::EventListener* l);
    virtual void saveInternal(::java::io::ObjectOutputStream* s, ::java::lang::String* k);

public:
    void textValueChanged(::java::awt::event::TextEvent* e) override;
    void windowActivated(::java::awt::event::WindowEvent* e) override;
    void windowClosed(::java::awt::event::WindowEvent* e) override;
    void windowClosing(::java::awt::event::WindowEvent* e) override;
    void windowDeactivated(::java::awt::event::WindowEvent* e) override;
    void windowDeiconified(::java::awt::event::WindowEvent* e) override;
    void windowGainedFocus(::java::awt::event::WindowEvent* e) override;
    void windowIconified(::java::awt::event::WindowEvent* e) override;
    void windowLostFocus(::java::awt::event::WindowEvent* e) override;
    void windowOpened(::java::awt::event::WindowEvent* e) override;
    void windowStateChanged(::java::awt::event::WindowEvent* e) override;

    // Generated

public: /* protected */
    AWTEventMulticaster(::java::util::EventListener* a, ::java::util::EventListener* b);
protected:
    AWTEventMulticaster(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
