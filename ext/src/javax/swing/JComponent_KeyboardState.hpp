// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class javax::swing::JComponent_KeyboardState
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::Object* keyCodesKey_;

protected:
    void ctor();

public: /* package */
    static JComponent_IntVector* getKeyCodeArray_();
    static bool keyIsPressed(int32_t keyCode);
    static void registerKeyPressed(int32_t keyCode);
    static void registerKeyReleased(int32_t keyCode);
    static bool shouldProcess(::java::awt::event::KeyEvent* e);

    // Generated
    JComponent_KeyboardState();
protected:
    JComponent_KeyboardState(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::lang::Object*& keyCodesKey();
    virtual ::java::lang::Class* getClass0();
};
