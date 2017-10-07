// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/swing/Action.hpp>

struct default_init_tag;

class javax::swing::JComponent_ActionStandin final
    : public virtual ::java::lang::Object
    , public Action
{

public:
    typedef ::java::lang::Object super;

private:
    Action* action {  };
    ::java::awt::event::ActionListener* actionListener {  };
    ::java::lang::String* command {  };

public: /* package */
    JComponent* this$0 {  };

protected:
    void ctor(::java::awt::event::ActionListener* actionListener, ::java::lang::String* command);

public:
    void actionPerformed(::java::awt::event::ActionEvent* ae) override;
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    ::java::lang::Object* getValue(::java::lang::String* key) override;
    bool isEnabled() override;
    void putValue(::java::lang::String* key, ::java::lang::Object* value) override;
    void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    void setEnabled(bool b) override;

    // Generated

public: /* package */
    JComponent_ActionStandin(JComponent *JComponent_this, ::java::awt::event::ActionListener* actionListener, ::java::lang::String* command);
protected:
    JComponent_ActionStandin(JComponent *JComponent_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    JComponent *JComponent_this;

private:
    virtual ::java::lang::Class* getClass0();
};
