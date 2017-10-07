// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <javax/accessibility/AccessibleContext.hpp>
#include <java/io/Serializable.hpp>
#include <javax/accessibility/AccessibleComponent.hpp>

struct default_init_tag;

class java::awt::Component_AccessibleAWTComponent
    : public ::javax::accessibility::AccessibleContext
    , public virtual ::java::io::Serializable
    , public virtual ::javax::accessibility::AccessibleComponent
{

public:
    typedef ::javax::accessibility::AccessibleContext super;

public: /* protected */
    ::java::awt::event::ComponentListener* accessibleAWTComponentHandler {  };
    ::java::awt::event::FocusListener* accessibleAWTFocusHandler {  };

private:
    std::atomic< int32_t > propertyListenersCount {  };
    static constexpr int64_t serialVersionUID { int64_t(642321655757800191LL) };

public: /* package */
    Component* this$0 {  };

protected:
    void ctor();

public:
    void addFocusListener(::java::awt::event::FocusListener* l) override;
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    bool contains(Point* p) override;
    ::javax::accessibility::Accessible* getAccessibleAt(Point* p) override;
    ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
    int32_t getAccessibleChildrenCount() override;
    ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
    ::java::lang::String* getAccessibleDescription() override;
    int32_t getAccessibleIndexInParent() override;
    ::java::lang::String* getAccessibleName() override;
    ::javax::accessibility::Accessible* getAccessibleParent() override;
    ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
    ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
    Color* getBackground() override;
    Rectangle* getBounds() override;
    Cursor* getCursor() override;
    Font* getFont() override;
    FontMetrics* getFontMetrics(Font* f) override;
    Color* getForeground() override;
    ::java::util::Locale* getLocale() override;
    Point* getLocation() override;
    Point* getLocationOnScreen() override;
    Dimension* getSize() override;
    bool isEnabled() override;
    bool isFocusTraversable() override;
    bool isShowing() override;
    bool isVisible() override;
    void removeFocusListener(::java::awt::event::FocusListener* l) override;
    void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    void requestFocus() override;
    void setBackground(Color* c) override;
    void setBounds(Rectangle* r) override;
    void setCursor(Cursor* cursor) override;
    void setEnabled(bool b) override;
    void setFont(Font* f) override;
    void setForeground(Color* c) override;
    void setLocation(Point* p) override;
    void setSize(Dimension* d) override;
    void setVisible(bool b) override;

    // Generated

public: /* protected */
    Component_AccessibleAWTComponent(Component *Component_this);
protected:
    Component_AccessibleAWTComponent(Component *Component_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component *Component_this;

private:
    virtual ::java::lang::Class* getClass0();
};
