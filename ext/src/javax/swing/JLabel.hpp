// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <javax/swing/plaf/fwd-POI.hpp>
#include <javax/swing/JComponent.hpp>
#include <javax/swing/SwingConstants.hpp>
#include <javax/accessibility/Accessible.hpp>

struct default_init_tag;

class javax::swing::JLabel
    : public JComponent
    , public virtual SwingConstants
    , public virtual ::javax::accessibility::Accessible
{

public:
    typedef JComponent super;

private:
    static ::java::lang::String* LABELED_BY_PROPERTY_;
    Icon* defaultIcon {  };
    Icon* disabledIcon {  };
    bool disabledIconSet {  };
    int32_t horizontalAlignment {  };
    int32_t horizontalTextPosition {  };
    int32_t iconTextGap {  };

public: /* protected */
    ::java::awt::Component* labelFor {  };

private:
    int32_t mnemonic {  };
    int32_t mnemonicIndex {  };
    ::java::lang::String* text {  };
    static ::java::lang::String* uiClassID_;
    int32_t verticalAlignment {  };
    int32_t verticalTextPosition {  };

protected:
    void ctor();
    void ctor(::java::lang::String* text);
    void ctor(Icon* image);
    void ctor(::java::lang::String* text, int32_t horizontalAlignment);
    void ctor(Icon* image, int32_t horizontalAlignment);
    void ctor(::java::lang::String* text, Icon* icon, int32_t horizontalAlignment);

public: /* protected */
    virtual int32_t checkHorizontalKey(int32_t key, ::java::lang::String* message);
    virtual int32_t checkVerticalKey(int32_t key, ::java::lang::String* message);

public:
    ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
    virtual Icon* getDisabledIcon();
    virtual int32_t getDisplayedMnemonic();
    virtual int32_t getDisplayedMnemonicIndex();
    virtual int32_t getHorizontalAlignment();
    virtual int32_t getHorizontalTextPosition();
    virtual Icon* getIcon();
    virtual int32_t getIconTextGap();
    virtual ::java::awt::Component* getLabelFor();
    virtual ::java::lang::String* getText();
    virtual ::javax::swing::plaf::LabelUI* getUI();
    ::java::lang::String* getUIClassID() override;
    virtual int32_t getVerticalAlignment();
    virtual int32_t getVerticalTextPosition();
    bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;

public: /* protected */
    ::java::lang::String* paramString() override;

public:
    virtual void setDisabledIcon(Icon* disabledIcon);
    virtual void setDisplayedMnemonic(int32_t key);
    virtual void setDisplayedMnemonic(char16_t aChar);
    virtual void setDisplayedMnemonicIndex(int32_t index);
    virtual void setHorizontalAlignment(int32_t alignment);
    virtual void setHorizontalTextPosition(int32_t textPosition);
    virtual void setIcon(Icon* icon);
    virtual void setIconTextGap(int32_t iconTextGap);
    virtual void setLabelFor(::java::awt::Component* c);
    virtual void setText(::java::lang::String* text);
    virtual void setUI(::javax::swing::plaf::LabelUI* ui);
    virtual void setVerticalAlignment(int32_t alignment);
    virtual void setVerticalTextPosition(int32_t textPosition);
    void updateUI() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    JLabel();
    JLabel(::java::lang::String* text);
    JLabel(Icon* image);
    JLabel(::java::lang::String* text, int32_t horizontalAlignment);
    JLabel(Icon* image, int32_t horizontalAlignment);
    JLabel(::java::lang::String* text, Icon* icon, int32_t horizontalAlignment);
protected:
    JLabel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* protected */
    virtual void setUI(::javax::swing::plaf::ComponentUI* newUI);

public: /* package */
    static ::java::lang::String*& LABELED_BY_PROPERTY();

private:
    static ::java::lang::String*& uiClassID();
    virtual ::java::lang::Class* getClass0();
};
