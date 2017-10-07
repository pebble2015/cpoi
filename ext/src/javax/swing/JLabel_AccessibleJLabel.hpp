// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <javax/swing/text/fwd-POI.hpp>
#include <javax/swing/JComponent_AccessibleJComponent.hpp>
#include <javax/accessibility/AccessibleText.hpp>
#include <javax/accessibility/AccessibleExtendedComponent.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace javax
{
    namespace accessibility
    {
typedef ::SubArray< ::javax::accessibility::AccessibleIcon, ::java::lang::ObjectArray > AccessibleIconArray;
    } // accessibility
} // javax

struct default_init_tag;

class javax::swing::JLabel_AccessibleJLabel
    : public JComponent_AccessibleJComponent
    , public virtual ::javax::accessibility::AccessibleText
    , public virtual ::javax::accessibility::AccessibleExtendedComponent
{

public:
    typedef JComponent_AccessibleJComponent super;

public: /* package */
    JLabel* this$0 {  };

protected:
    void ctor();

public: /* package */
    ::javax::accessibility::AccessibleExtendedComponent* getAccessibleExtendedComponent() override;

public:
    ::javax::accessibility::AccessibleIconArray* getAccessibleIcon() override;
    ::javax::accessibility::AccessibleKeyBinding* getAccessibleKeyBinding() override;
    ::java::lang::String* getAccessibleName() override;
    ::javax::accessibility::AccessibleRelationSet* getAccessibleRelationSet() override;
    ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
    ::javax::accessibility::AccessibleText* getAccessibleText() override;
    ::java::lang::String* getAfterIndex(int32_t part, int32_t index) override;
    ::java::lang::String* getAtIndex(int32_t part, int32_t index) override;
    ::java::lang::String* getBeforeIndex(int32_t part, int32_t index) override;
    int32_t getCaretPosition() override;
    int32_t getCharCount() override;
    ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
    ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
    int32_t getIndexAtPoint(::java::awt::Point* p) override;
    ::java::lang::String* getSelectedText() override;
    int32_t getSelectionEnd() override;
    int32_t getSelectionStart() override;
    /*::java::lang::String* getText(int32_t offset, int32_t length); (private) */
    /*::java::awt::Rectangle* getTextRectangle(); (private) */
    ::java::lang::String* getTitledBorderText() override;
    ::java::lang::String* getToolTipText() override;

    // Generated

public: /* protected */
    JLabel_AccessibleJLabel(JLabel *JLabel_this);
protected:
    JLabel_AccessibleJLabel(JLabel *JLabel_this, const ::default_init_tag&);


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
    JLabel *JLabel_this;

private:
    virtual ::java::lang::Class* getClass0();
};
