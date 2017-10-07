// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <javax/swing/border/fwd-POI.hpp>
#include <java/awt/Container_AccessibleAWTContainer.hpp>
#include <javax/accessibility/AccessibleExtendedComponent.hpp>

struct default_init_tag;

class javax::swing::JComponent_AccessibleJComponent
    : public ::java::awt::Container_AccessibleAWTContainer
    , public virtual ::javax::accessibility::AccessibleExtendedComponent
{

public:
    typedef ::java::awt::Container_AccessibleAWTContainer super;

public: /* protected */
    ::java::awt::event::FocusListener* accessibleFocusHandler {  };

private:
    std::atomic< int32_t > propertyListenersCount {  };

public: /* package */
    JComponent* this$0 {  };

protected:
    void ctor();

public:
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
    int32_t getAccessibleChildrenCount() override;
    ::java::lang::String* getAccessibleDescription() override;

public: /* package */
    virtual ::javax::accessibility::AccessibleExtendedComponent* getAccessibleExtendedComponent();

public:
    ::javax::accessibility::AccessibleKeyBinding* getAccessibleKeyBinding() override;
    ::java::lang::String* getAccessibleName() override;
    ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
    ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;

public: /* protected */
    virtual ::java::lang::String* getBorderTitle(::javax::swing::border::Border* b);

public:
    ::java::lang::String* getTitledBorderText() override;
    ::java::lang::String* getToolTipText() override;
    void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;

    // Generated

public: /* protected */
    JComponent_AccessibleJComponent(JComponent *JComponent_this);
protected:
    JComponent_AccessibleJComponent(JComponent *JComponent_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void addFocusListener(::java::awt::event::FocusListener* l);
    virtual bool contains(::java::awt::Point* p);
    virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p);
    virtual ::java::awt::Color* getBackground();
    virtual ::java::awt::Rectangle* getBounds();
    virtual ::java::awt::Cursor* getCursor();
    virtual ::java::awt::Font* getFont();
    virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f);
    virtual ::java::awt::Color* getForeground();
    virtual ::java::awt::Point* getLocation();
    virtual ::java::awt::Point* getLocationOnScreen();
    virtual ::java::awt::Dimension* getSize();
    virtual bool isEnabled();
    virtual bool isFocusTraversable();
    virtual bool isShowing();
    virtual bool isVisible();
    virtual void removeFocusListener(::java::awt::event::FocusListener* l);
    virtual void requestFocus();
    virtual void setBackground(::java::awt::Color* c);
    virtual void setBounds(::java::awt::Rectangle* r);
    virtual void setCursor(::java::awt::Cursor* cursor);
    virtual void setEnabled(bool b);
    virtual void setFont(::java::awt::Font* f);
    virtual void setForeground(::java::awt::Color* c);
    virtual void setLocation(::java::awt::Point* p);
    virtual void setSize(::java::awt::Dimension* d);
    virtual void setVisible(bool b);
    JComponent *JComponent_this;

private:
    virtual ::java::lang::Class* getClass0();
};
