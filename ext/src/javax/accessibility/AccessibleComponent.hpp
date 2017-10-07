// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::accessibility::AccessibleComponent
    : public virtual ::java::lang::Object
{

    virtual void addFocusListener(::java::awt::event::FocusListener* l) = 0;
    virtual bool contains(::java::awt::Point* p) = 0;
    virtual Accessible* getAccessibleAt(::java::awt::Point* p) = 0;
    virtual ::java::awt::Color* getBackground() = 0;
    virtual ::java::awt::Rectangle* getBounds() = 0;
    virtual ::java::awt::Cursor* getCursor() = 0;
    virtual ::java::awt::Font* getFont() = 0;
    virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) = 0;
    virtual ::java::awt::Color* getForeground() = 0;
    virtual ::java::awt::Point* getLocation() = 0;
    virtual ::java::awt::Point* getLocationOnScreen() = 0;
    virtual ::java::awt::Dimension* getSize() = 0;
    virtual bool isEnabled() = 0;
    virtual bool isFocusTraversable() = 0;
    virtual bool isShowing() = 0;
    virtual bool isVisible() = 0;
    virtual void removeFocusListener(::java::awt::event::FocusListener* l) = 0;
    virtual void requestFocus() = 0;
    virtual void setBackground(::java::awt::Color* c) = 0;
    virtual void setBounds(::java::awt::Rectangle* r) = 0;
    virtual void setCursor(::java::awt::Cursor* cursor) = 0;
    virtual void setEnabled(bool b) = 0;
    virtual void setFont(::java::awt::Font* f) = 0;
    virtual void setForeground(::java::awt::Color* c) = 0;
    virtual void setLocation(::java::awt::Point* p) = 0;
    virtual void setSize(::java::awt::Dimension* d) = 0;
    virtual void setVisible(bool b) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
