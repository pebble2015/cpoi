// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/accessibility/AccessibleKeyBinding.hpp>

struct default_init_tag;

class javax::swing::JLabel_AccessibleJLabel_LabelKeyBinding
    : public virtual ::java::lang::Object
    , public virtual ::javax::accessibility::AccessibleKeyBinding
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t mnemonic {  };
    JLabel_AccessibleJLabel* this$1 {  };

protected:
    void ctor(int32_t mnemonic);

public:
    ::java::lang::Object* getAccessibleKeyBinding(int32_t i) override;
    int32_t getAccessibleKeyBindingCount() override;

    // Generated

public: /* package */
    JLabel_AccessibleJLabel_LabelKeyBinding(JLabel_AccessibleJLabel *JLabel_AccessibleJLabel_this, int32_t mnemonic);
protected:
    JLabel_AccessibleJLabel_LabelKeyBinding(JLabel_AccessibleJLabel *JLabel_AccessibleJLabel_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    JLabel_AccessibleJLabel *JLabel_AccessibleJLabel_this;

private:
    virtual ::java::lang::Class* getClass0();
};
